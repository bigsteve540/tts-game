using RiptideNetworking;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class GeneviveAspect : IAspectBehaviour
{
    public int ClientID { get; }

    public string AspectName => "Genevive";
    public int AspectID { get; }

    public bool Active { get; set; }

    public uint BaseInitiative => 85; //dictates where on the timeline aspects will begin the game
    public int InitiativeOffset => 15; //dictates the amount of skew added or subtracted from the turn initiative on turn end, signed int

    public uint TotalActionPoints => 100; //100 to begin with, aspects can be buffed or nerfed via this
    public uint CurrentActionPoints { get; private set; }

    public Vector2 MapPosition { get; set; }
    public uint FacingDirection { get; set; }

    public ITimelineEvent Turn { get; set; }

    public uint MaxHP => 15000;
    public uint CurrentHP { get; private set; }

    public int BaseArmor => 240;
    public int CurrentArmor { get; set; }

    public IAbilityBehaviour[] Abilities { get; }
    public List<Func<InterruptData, bool>> ActiveInterrupters { get; set; } = new List<Func<InterruptData, bool>>();

    public GeneviveAspect(int _clientID, Vector2 _mapPos)
    {
        ClientID = _clientID;
        Active = false;
        AspectID = GameManager.RegisterEntity(this);

        CurrentHP = MaxHP;
        CurrentArmor = BaseArmor;
        CurrentActionPoints = TotalActionPoints;

        MapPosition = _mapPos;

        Tilemap.ChangeTileType((int)MapPosition.x, (int)MapPosition.y, TileType.Impassable);

        Abilities = new IAbilityBehaviour[]
        {
            new BasicAbility(this, 20, 1, -500),
            new IonicShatter(this),
            new TaintedEdge(this),
            new DeathMark(this),
            new Kneecapper(this)
        };
    }

    public void MoveToTile(int _x, int _y) { Utilities.GenericAspectMovement(this, _x, _y); }

    public void EndTurn()
    {
        Active = false;
        Turn = new AspectTurn(this, CurrentActionPoints < 50 ? (uint)(100 - InitiativeOffset) : (uint)(50 - InitiativeOffset), false);
    }

    public void ModifyHealth(HealthModifiedEventInfo _data, bool _ignoreEffectors = false)
    {
        CurrentHP = Utilities.GenericAspectModifyHealth(this, _data, _ignoreEffectors);
        //send updated hp and entity id to client
    }

    #region Abilities
    class IonicShatter : IAbilityBehaviour, IInterruptable
    {
        public IAspectBehaviour Caster { get; }

        public string AbilityName => "Ionic Shatter";
        public int ActionPointCost => 35;
        public int CastRange => 5;

        public InterruptData InterruptData { get; }
        public InterruptEventType[] AffectedTypes => new InterruptEventType[2] { InterruptEventType.Movement_Start, InterruptEventType.Damage };

        public IonicShatter(IAspectBehaviour _caster)
        {
            Caster = _caster;
            InterruptData = new InterruptData(Caster.AspectID, AffectedTypes);
        }

        public void Activate(Message _message)
        {
            if (GameManager.ActiveAspect != Caster || GameEventSystem.CheckEventInterrupted(InterruptData))
                return;

            Debug.Log("Ionic Shatter");
            int targetAspectID = _message.GetInt();
            IAspectBehaviour target = GameManager.Entities[targetAspectID];

            if (!Utilities.TargetWithinRange(Caster.MapPosition, target.MapPosition, CastRange, out List<Node> path))
                return;

            int x = (int)path[path.Count].Position.x;
            int y = (int)path[path.Count].Position.y;
;
            Caster.FacingDirection = Utilities.ConvertDegToCardinal(Vector2.Angle(Vector2.up, path[path.Count - 2].Position - path[path.Count - 1].Position));
            Caster.MoveToTile(x, y);

            target.ModifyHealth(new HealthModifiedEventInfo(Caster.AspectID, target.AspectID, this, StatModifierType.Flat, -1200));
        }
    }

    class TaintedEdge : IAbilityBehaviour
    {
        public IAspectBehaviour Caster { get; }

        public string AbilityName => "Tainted Edge";

        public int ActionPointCost => 50;
        public int CastRange => 1;

        private InterruptEventType[] types = new InterruptEventType[1] { InterruptEventType.Damage };

        public TaintedEdge(IAspectBehaviour _caster) { Caster = _caster; }

        class PoisonTick : ITimelineEvent
        {
            private int CasterID { get; }
            private int TargetID { get; }

            public uint Initiative { get; set; }
            public bool PlaceInfront => false;

            public PoisonTick(int _casterID, int _targetID, uint _initiative)
            {
                CasterID = _casterID;
                TargetID = _targetID;
                Initiative = _initiative;
            }

            public void Activate()
            {
                Debug.Log("Poison Tick");
                GameManager.Entities[TargetID].ModifyHealth(new HealthModifiedEventInfo(CasterID, TargetID, this, StatModifierType.Flat, -200));
            }
        }
        class TaintedEdgeDebuff : ITimelineEvent
        {
            private int CasterID { get; }
            private int TargetID { get; }

            public uint Initiative { get; set; }
            public bool PlaceInfront { get; }

            public TaintedEdgeDebuff(int _casterID, int _targetID, uint _initiative)
            {
                TargetID = _targetID;
                Initiative = _initiative;

                GameEventSystem.SubListener<HealthModifiedEventInfo>(Trigger);
            }

            public void Activate()
            {
                GameEventSystem.UnsubListener<HealthModifiedEventInfo>(Trigger);
            }

            private void Trigger(HealthModifiedEventInfo _info)
            {
                Debug.Log("Tainted Edge Debuff");
                if (_info.TargetID != TargetID && _info.TargetID != CasterID || !_info.IsDamage() || _info.Source.GetType() == typeof(PoisonTick))
                    return;

                _info.Value *= 1.1f;

                GameEventSystem.UnsubListener<HealthModifiedEventInfo>(Trigger);
            }
        }

        public void Activate(Message _message)
        {
            Debug.Log("Tainted Edge");
            int targetAspectID = _message.GetInt();

            IAspectBehaviour target = GameManager.Entities[targetAspectID];

            if (!Utilities.TargetWithinRange(Caster.MapPosition, target.MapPosition, CastRange))
                return;

            uint counter = 15;
            for (int i = 0; i < 3; i++)
            {
                Timeline.AddTimelineEvent(new PoisonTick(Caster.AspectID, targetAspectID, counter));
                counter += 35;
            }

            Timeline.AddTimelineEvent(new TaintedEdgeDebuff(Caster.AspectID, targetAspectID, counter));
        }
    }

    class DeathMark : IAbilityBehaviour, IInterruptable
    {
        public IAspectBehaviour Caster { get; }
        public int ActionPointCost => 75;
        public int CastRange => 5;

        public InterruptData InterruptData { get; }
        public InterruptEventType[] AffectedTypes => new InterruptEventType[1] { InterruptEventType.Enemy_targeted };

        private Dictionary<int, DeathMarkDebuff> markIDs = new Dictionary<int, DeathMarkDebuff>();

        private delegate void DeathMarkFadeHandler(int _targetID);
        private DeathMarkFadeHandler OnMarkFade;

        public DeathMark(IAspectBehaviour _caster)
        {
            Caster = _caster;
            InterruptData = new InterruptData(Caster.AspectID, AffectedTypes);
            OnMarkFade += (_targetID) => { markIDs.Remove(_targetID); };
        }

        public void Activate(Message _message)
        {
            if (GameManager.ActiveAspect != Caster)
                return;

            Debug.Log("Death Mark");
            int targetAspectID = _message.GetInt();
            IAspectBehaviour target = GameManager.Entities[targetAspectID];

            if (!Utilities.TargetWithinRange(Caster.MapPosition, target.MapPosition, CastRange))
                return;

            if (markIDs.Count == 0 || !markIDs.ContainsKey(targetAspectID))
            {
                if (GameEventSystem.CheckEventInterrupted(InterruptData))
                    return;

                Debug.Log("Marking");

                DeathMarkDebuff debuff = new DeathMarkDebuff(Caster.AspectID, targetAspectID, 200, OnMarkFade);

                markIDs.Add(targetAspectID, debuff);
                Timeline.AddTimelineEvent(debuff);
                return;
            }

            if (target.CurrentHP <= target.MaxHP * 0.15f)
            {
                Debug.Log("Executing");
                GameManager.Entities[targetAspectID].ModifyHealth(new HealthModifiedEventInfo(Caster.AspectID, targetAspectID, this, StatModifierType.Max, -1));
                markIDs[targetAspectID].Activate();
            }
        }

        class DeathMarkDebuff : ITimelineEvent
        {
            public int CasterID { get; }
            public int TargetID { get; }

            public uint Initiative { get; set; }
            public bool PlaceInfront => false;

            DeathMarkFadeHandler handler;
            
            public DeathMarkDebuff(int _casterID, int _targetID, uint _initiative, DeathMarkFadeHandler _fadeHandler)
            {
                CasterID = _casterID;
                TargetID = _targetID;
                Initiative = _initiative;

                handler = _fadeHandler;
            }

            public void Activate()
            {
                handler?.Invoke(TargetID);
            }
        }
    }

    class Kneecapper : IAbilityBehaviour
    {
        public IAspectBehaviour Caster { get; }
        public int ActionPointCost => 0;
        public int CastRange => 7;

        public Kneecapper(IAspectBehaviour _caster) { Caster = _caster; }

        public void Activate(Message _message)
        {
            if (GameManager.ActiveAspect != Caster)
                return;

            Debug.Log("Kneecapper");

            Caster.ModifyHealth(new HealthModifiedEventInfo(Caster.AspectID, Caster.AspectID, this, StatModifierType.Max, -0.1f), true);

            bool interrupt(InterruptData _data)
            {

                if (!_data.SearchTypesFor(InterruptEventType.Movement_Start, InterruptEventType.Movement_Passby))
                    return false;

                if(!Utilities.TargetWithinRange(Caster.MapPosition, GameManager.Entities[_data.TriggererID].MapPosition, CastRange))
                {
                    Tuple<List<Node>, int> pathdata = (Tuple<List<Node>, int>)_data.ExtraInterruptData[0];
                    for (int i = 0; i < pathdata.Item1.Count; i++)
                        if (Utilities.TargetWithinRange(Caster.MapPosition, pathdata.Item1[i].Position, CastRange))
                        {
                            Debug.Log("Interrupted using Kneecapper");
                            GameManager.Entities[_data.TriggererID].MapPosition = pathdata.Item1[i].Position;

                            Caster.ModifyHealth(new HealthModifiedEventInfo(Caster.AspectID, Caster.AspectID, this, StatModifierType.Max, 0.12f));
                            GameManager.Entities[_data.TriggererID].ModifyHealth(
                                new HealthModifiedEventInfo(Caster.AspectID, _data.TriggererID, this, StatModifierType.Flat, -400));

                            return true;
                        }
                    return false;
                }
                Debug.Log("Interrupted using Kneecapper");
                Caster.ModifyHealth(new HealthModifiedEventInfo(Caster.AspectID, Caster.AspectID, this, StatModifierType.Max, 0.12f));
                GameManager.Entities[_data.TriggererID].ModifyHealth(
                    new HealthModifiedEventInfo(Caster.AspectID, _data.TriggererID, this, StatModifierType.Flat, -400));

                return true;

            }
            Caster.ActiveInterrupters.Add(interrupt);
            GameEventSystem.SubInterrupt(interrupt);
        }
    }
    #endregion  
}

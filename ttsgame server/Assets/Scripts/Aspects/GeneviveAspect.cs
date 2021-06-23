using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class GeneviveAspect : IAspectBehaviour
{
    public int PlayerID { get; }

    public string AspectName => "Genevive";
    public int AspectID { get; }

    public bool Active { get; set; }

    public int BaseInitiative => 85; //dictates where on the timeline aspects will begin the game
    public int InitiativeOffset => 15; //dictates the amount of skew added or subtracted from the turn initiative on turn end, signed int

    public int TotalActionPoints => 100; //100 to begin with, aspects can be buffed or nerfed via this
    public int CurrentActionPoints { get; private set; }

    public Vector2 MapPosition { get; private set; }
    public List<Node> Path { get; set; }

    public ITimelineEvent Turn { get; set; }

    public int MaxHP => 15000;
    public int CurrentHP { get; private set; }

    public int BaseArmor => 240;
    public int CurrentArmor { get; set; }

    public IAbilityBehaviour[] Abilities { get; }
    public List<Func<int, TimelineEventType[], bool>> ActiveInterrupters { get; set; } = new List<Func<int, TimelineEventType[], bool>>();

    public GeneviveAspect(int _playerID, Vector2 _mapPosition)
    {
        PlayerID = _playerID;
        Active = false;
        AspectID = GameManager.RegisterEntity(this);

        CurrentHP = MaxHP;
        CurrentArmor = BaseArmor;
        CurrentActionPoints = TotalActionPoints;

        MapPosition = _mapPosition;

        Tilemap.ChangeTileType((int)MapPosition.x, (int)MapPosition.y, TileType.Impassable);

        Path = new List<Node>();

        Abilities = new IAbilityBehaviour[]
        {
            new BasicAbility(this, 20, 1, -500),
            new IonicShatter(this),
            new TaintedEdge(this),
            new DeathMark(this),
            new Kneecapper(this)
        };
    }

    public void MoveToTile(int _x, int _y)
    {
        if (GameEventSystem.CheckEventInterrupted(AspectID, new TimelineEventType[1] { TimelineEventType.Movement }))
            return;

        Tilemap.ChangeTileType((int)MapPosition.x, (int)MapPosition.y, Tilemap.GetDefaultTile((int)MapPosition.x, (int)MapPosition.y));

        MapPosition = new Vector2(_x, _y);

        Tilemap.ChangeTileType((int)MapPosition.x, (int)MapPosition.y, TileType.Impassable);
    }

    public void EndTurn()
    {
        Active = false;
        Turn = new AspectTurn(this, CurrentActionPoints < 50 ? 100 - InitiativeOffset : 50 - InitiativeOffset, false);
    }

    public void ModifyHealth(HealthModifiedEventInfo _data, bool _ignoreEffectors = false)
    {
        if (GameEventSystem.CheckEventInterrupted(AspectID, new TimelineEventType[1] { Mathf.Sign(_data.Value) == -1 ? TimelineEventType.Damage : TimelineEventType.Heal }))
            return;

        if(!_ignoreEffectors)
            GameEventSystem.CallEvent(_data);

        float prevHP = CurrentHP;
        float val = 0f;

        switch (_data.Type)
        {
            case StatModifierType.Flat:
                val = (int)_data.Value;
                break;
            case StatModifierType.Max:
                val = (int)(MaxHP * _data.Value);
                break;
            case StatModifierType.Missing:
                val = (int)((MaxHP - CurrentHP) * _data.Value);
                break;
            case StatModifierType.Current:
                val = (int)(CurrentHP * _data.Value);
                break;
        }

        if (_data.IsDamage())
            val = Mathf.Clamp((val * -1) - CurrentArmor, 0f, val * -1) * -1;

        CurrentHP = (int)Mathf.Clamp(CurrentHP + val, 0f, MaxHP);
        Debug.Log($"Previous {prevHP} Current {CurrentHP}");
        //send updated hp and entity id to client
    }

    #region Abilities
    class IonicShatter : IAbilityBehaviour
    {
        public IAspectBehaviour Caster { get; }

        public string AbilityName => "Ionic Shatter";
        public int ActionPointCost => 35;
        public int CastRange => 5;

        public IonicShatter(IAspectBehaviour _caster)
        {
            Caster = _caster;
        }

        public void Activate(ref NetworkPacket _packet)
        {
            if (!Caster.Active || GameEventSystem.CheckEventInterrupted(Caster.AspectID, new TimelineEventType[2] { TimelineEventType.Movement, TimelineEventType.Damage }))
                return;

            Debug.Log("Ionic Shatter");
            int targetAspectID = _packet.ReadInt();
            IAspectBehaviour target = GameManager.Entities[targetAspectID];

            List<Node> path = Tilemap.GeneratePathToTile(Caster.MapPosition, target.MapPosition);

            if (path == null || path.Count > CastRange)
                return;

            int x = (int)path[path.Count - 1].Position.x;
            int y = (int)path[path.Count - 1].Position.y;
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

        private TimelineEventType[] types = new TimelineEventType[1] { TimelineEventType.Damage };


        public TaintedEdge(IAspectBehaviour _caster)
        {
            Caster = _caster;
        }

        class PoisonTick : ITimelineEvent
        {
            private int CasterID { get; }
            private int TargetID { get; }

            public int Initiative { get; set; }
            public bool PlaceInfront => false;

            public PoisonTick(int _casterID, int _targetID, int _initiative)
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

            public int Initiative { get; set; }
            public bool PlaceInfront { get; }

            public TaintedEdgeDebuff(int _casterID, int _targetID, int _initiative)
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

        public void Activate(ref NetworkPacket _packet)
        {
            if (!Caster.Active || GameEventSystem.CheckEventInterrupted(Caster.AspectID, types))
                return;

            Debug.Log("Tainted Edge");
            int targetAspectID = _packet.ReadInt();

            IAspectBehaviour target = GameManager.Entities[targetAspectID];

            List<Node> path = Tilemap.GeneratePathToTile(Caster.MapPosition, target.MapPosition);

            if (path == null || path.Count > CastRange) //TODO: test if this is blocking progression in current test situation
                return;

            Debug.Log("Target in Range");

            int counter = 15;
            for (int i = 0; i < 3; i++)
            {
                Timeline.AddTimelineEvent(new PoisonTick(Caster.AspectID, targetAspectID, counter));
                counter += 35;
            }

            Timeline.AddTimelineEvent(new TaintedEdgeDebuff(Caster.AspectID, targetAspectID, counter));
        }
    }

    class DeathMark : IAbilityBehaviour
    {
        public IAspectBehaviour Caster { get; }
        public int ActionPointCost => 75;
        public int CastRange => 5;

        private Dictionary<int, DeathMarkDebuff> markIDs = new Dictionary<int, DeathMarkDebuff>();

        private delegate void DeathMarkFadeHandler(int _targetID);
        private DeathMarkFadeHandler OnMarkFade;

        public DeathMark(IAspectBehaviour _caster)
        {
            Caster = _caster;
            OnMarkFade += (_targetID) => { markIDs.Remove(_targetID); };
        }

        public void Activate(ref NetworkPacket _packet)
        {
            if (!Caster.Active)
                return;

            Debug.Log("Death Mark");
            int targetAspectID = _packet.ReadInt();
            IAspectBehaviour target = GameManager.Entities[targetAspectID];

            List<Node> path = Tilemap.GeneratePathToTile(Caster.MapPosition, target.MapPosition);
            if (path == null || path.Count > CastRange)
                return;

            if (markIDs.Count == 0 || !markIDs.ContainsKey(targetAspectID))
            {
                if (GameEventSystem.CheckEventInterrupted(Caster.AspectID, new TimelineEventType[1] { TimelineEventType.Any }))
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

            public int Initiative { get; set; }
            public bool PlaceInfront => false;

            DeathMarkFadeHandler handler;
            
            public DeathMarkDebuff(int _casterID, int _targetID, int _initiative, DeathMarkFadeHandler _fadeHandler)
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

        public Kneecapper(IAspectBehaviour _caster)
        {
            Caster = _caster;
        }

        public void Activate(ref NetworkPacket _packet)
        {
            if (!Caster.Active)
                return;

            Debug.Log("Kneecapper");

            Caster.ModifyHealth(new HealthModifiedEventInfo(Caster.AspectID, Caster.AspectID, this, StatModifierType.Max, -0.1f), true);

            bool interrupt(int _targetID, TimelineEventType[] _types)
            {
                if (!_types.Contains(TimelineEventType.Movement))
                    return false;

                List<Node> path = Tilemap.GeneratePathToTile(Caster.MapPosition, GameManager.Entities[_targetID].MapPosition);
                if (path == null || path.Count > CastRange)
                    return false;

                Debug.Log("Interrupted using Kneecapper");

                Caster.ModifyHealth(new HealthModifiedEventInfo(Caster.AspectID, Caster.AspectID, this, StatModifierType.Max, 0.12f));
                GameManager.Entities[_targetID].ModifyHealth(new HealthModifiedEventInfo(Caster.AspectID, _targetID, this, StatModifierType.Flat, -400));

                return true;
            }

            Caster.ActiveInterrupters.Add(interrupt);
            GameEventSystem.SubInterrupt(interrupt);
        }
    }
    #endregion  
}

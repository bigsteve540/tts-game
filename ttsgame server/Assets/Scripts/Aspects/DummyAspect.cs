using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DummyAspect : IAspectBehaviour
{
    public int ClientID { get; }

    public string AspectName => "Dummy";
    public int AspectID { get; }

    public bool Active { get; set; }

    public int BaseInitiative { get; } //dictates where on the timeline aspects will begin the game
    public int InitiativeOffset { get; } //dictates the amount of skew added or subtracted from the turn initiative on turn end, signed int

    public int TotalActionPoints { get; } //100 to begin with, aspects can be buffed or nerfed via this
    public int CurrentActionPoints => TotalActionPoints;

    public Vector2 MapPosition { get; private set; }
    public List<Node> Path { get; set; }

    public ITimelineEvent Turn { get; set; }

    public int MaxHP { get; }
    public int CurrentHP { get; private set; }

    public int BaseArmor => 0;
    public int CurrentArmor { get; set; }

    public IAbilityBehaviour[] Abilities { get; }
    public List<Func<int, TimelineEventType[], bool>> ActiveInterrupters { get; set; } = new List<Func<int, TimelineEventType[], bool>>();

    private TileType currentTileType;

    public DummyAspect(int _playerID, Vector2 _mapPos) : this(_playerID, 0, 0, 100, 5000, _mapPos) { }
    public DummyAspect(int _playerID, int _baseInitiative, int _initiativeOffset, int _totalActionPoints, int _maxHP, Vector2 _mapPosition)
    {
        ClientID = _playerID;

        AspectID = GameManager.RegisterEntity(this);

        Active = false;

        MaxHP = _maxHP;
        CurrentHP = MaxHP;
        CurrentArmor = BaseArmor;

        BaseInitiative = _baseInitiative;
        InitiativeOffset = _initiativeOffset;
        TotalActionPoints = _totalActionPoints;

        MapPosition = _mapPosition;

        currentTileType = Tilemap.GetTile((int)MapPosition.x, (int)MapPosition.y);
        Tilemap.ChangeTileType((int)MapPosition.x, (int)MapPosition.y, TileType.Impassable);

        Path = new List<Node>();
    }

    public void MoveToTile(int _x, int _y)
    {
        if (GameEventSystem.CheckEventInterrupted(AspectID, new TimelineEventType[1] { TimelineEventType.Movement }))
            return;

        Tilemap.ChangeTileType((int)MapPosition.x, (int)MapPosition.y, currentTileType);

        MapPosition = new Vector2(_x, _y);
        currentTileType = Tilemap.GetTile((int)MapPosition.x, (int)MapPosition.y);

        Tilemap.ChangeTileType((int)MapPosition.x, (int)MapPosition.y, TileType.Impassable);
    }

    public void EndTurn()
    {
        //do some extra stuff
        Active = false;
        Turn = new AspectTurn(this, CurrentActionPoints < 50 ? 100 - InitiativeOffset : 50 - InitiativeOffset, false);
    }

    public void ModifyHealth(HealthModifiedEventInfo _data, bool _ignoreEffectors = false)
    {
        if (GameEventSystem.CheckEventInterrupted(AspectID, new TimelineEventType[1] { Mathf.Sign(_data.Value) == -1 ? TimelineEventType.Damage : TimelineEventType.Heal }))
            return;

        if (!_ignoreEffectors)
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
}

public class AspectTurn : ITimelineEvent
{
    public int Initiative { get; set; }
    public bool PlaceInfront { get; }

    private IAspectBehaviour caster;
    public AspectTurn(IAspectBehaviour _caster, int _initiative, bool _placeInfront)
    {
        caster = _caster;
        Initiative = _initiative;
        PlaceInfront = _placeInfront;
        Timeline.AddTimelineEvent(this);
    }

    public void Activate()
    {
        foreach (Func<int, TimelineEventType[], bool> interrupter in caster.ActiveInterrupters)
        {
            GameEventSystem.UnsubInterrupt(interrupter);
        }
        //how would you wait for user input using this method tho?

        GameManager.ActiveAspect = caster;
        //set entity to active, tell client its their turn, if a client inputs something it can be ignored if it's not for active entity
        Debug.Log($"this is {caster.AspectName}'s turn");

        #region ability trigger example
        //if (caster.AspectID == 0)
        //    caster.Abilities[0].Activate();
        #endregion  

        #region pathfinder system example
        //Tilemap.GeneratePathToTile(caster, caster.AspectID == 1 ? GameManager.Entities[0].MapPosition : GameManager.Entities[1].MapPosition);

        //int currentNode = 0;
        //while (currentNode < caster.Path.Count - 1)
        //{
        //    Vector3 start = new Vector3(caster.Path[currentNode].Position.x, 0.5f, caster.Path[currentNode].Position.y);
        //    Vector3 end = new Vector3(caster.Path[currentNode + 1].Position.x, 0.5f, caster.Path[currentNode + 1].Position.y);
        //    Debug.DrawLine(start, end, caster.AspectID == 1 ? Color.black : Color.cyan, Mathf.Infinity); //acts stupid with 3 units because of ternary ops

        //    currentNode++;
        //}
        #endregion

        caster.EndTurn(); //TODO: remove: won't actually do this from here in the networked version
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Aspect : IAspectBehaviour
{
    public int ClientID { get; }

    public string AspectName { get; }
    public int AspectID { get; }
    public string AspectCode { get; }

    public uint BaseInitiative { get; } 
    public int InitiativeOffset { get; }

    public uint TotalActionPoints { get; }
    public uint CurrentActionPoints { get; }

    public Vector2 MapPosition { get; set; }
    public uint FacingDirection { get; set; }

    public ITimelineEvent Turn { get; set; }

    public uint MaxHP { get; }
    public uint CurrentHP { get; private set; }

    public int BaseArmor { get; }
    public int CurrentArmor { get; set; }

    public IAbilityBehaviour[] Abilities { get; }
    public List<Func<InterruptData, bool>> ActiveInterrupters { get; set; } = new List<Func<InterruptData, bool>>();

    public Aspect(int _playerID, string _code, Vector2 _mapPos)
    {
        ClientID = _playerID;
        AspectID = GameManager.RegisterEntity(this);

        AspectData d = Resources.Load<AspectData>($"Aspects/{_code}");

        AspectName = d.Name;
        AspectCode = _code;

        MaxHP = d.MaxHealth;
        CurrentHP = MaxHP;

        BaseArmor = d.BaseArmor;
        CurrentArmor = BaseArmor;

        BaseInitiative = d.BaseInitiative;
        InitiativeOffset = d.InitiativeOffset;

        TotalActionPoints = d.MaxActionPoints;
        CurrentActionPoints = TotalActionPoints;

        MapPosition = _mapPos;

        Tilemap.ChangeTileType((int)MapPosition.x, (int)MapPosition.y, TileType.Impassable);
    }

    public void MoveToTile(int _x, int _y) { Utilities.GenericAspectMovement(this, _x, _y); }

    public void EndTurn()
    {
        //do some extra stuff
        Turn = new AspectTurn(this, CurrentActionPoints < 50 ? (uint)(100 - InitiativeOffset) : (uint)(50 - InitiativeOffset), false);
    }

    public void ModifyHealth(HealthModifiedEventInfo _data, bool _ignoreEffectors = false)
    {
        CurrentHP = Utilities.GenericAspectModifyHealth(this, _data, _ignoreEffectors);
    }
}

public class AspectTurn : ITimelineEvent
{
    public uint Initiative { get; set; }
    public bool PlaceInfront { get; }

    private IAspectBehaviour caster;
    public AspectTurn(IAspectBehaviour _caster, uint _initiative, bool _placeInfront)
    {
        caster = _caster;
        Initiative = _initiative;
        PlaceInfront = _placeInfront;
        Timeline.AddTimelineEvent(this);
    }

    public void Activate()
    {
        foreach (Func<InterruptData, bool> interrupter in caster.ActiveInterrupters)
        {
            GameEventSystem.UnsubInterrupt(interrupter);
        }
        //how would you wait for user input using this method tho?

        GameManager.ActiveAspect = caster;
        //set entity to active, tell client its their turn, if a client inputs something it can be ignored if it's not for active entity & from the appropriate owner of said entity
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
    }
}

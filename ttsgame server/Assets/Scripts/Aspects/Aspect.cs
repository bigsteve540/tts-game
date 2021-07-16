using RiptideNetworking;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Aspect : IEntityBehaviour, IAbilityCasterBehaviour
{
    public int GroupingID { get; } //use to "group" entities together: 0 reserved for neutral, negative for server-owned entities, positive for player controlled

    public string Name { get; }
    public int EntityID { get; }
    public string Code { get; }

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

    public AspectAbilityData[] Abilities { get; }
    public List<Func<InterruptData, bool>> ActiveInterrupters { get; set; } = new List<Func<InterruptData, bool>>();

    public Aspect(int _groupID, string _code, Vector2 _mapPos)
    {
        GroupingID = _groupID;
        EntityID = GameManager.RegisterEntity(this);

        AspectData d = Resources.Load<AspectData>($"Aspects/{_code}");

        Name = d.Name;
        Code = _code;

        MaxHP = d.MaxHealth;
        CurrentHP = MaxHP;

        BaseArmor = d.BaseArmor;
        CurrentArmor = BaseArmor;

        BaseInitiative = d.BaseInitiative;
        InitiativeOffset = d.InitiativeOffset;

        TotalActionPoints = d.MaxActionPoints;
        CurrentActionPoints = TotalActionPoints;

        MapPosition = _mapPos;

        Abilities = d.Abilities;

        Tilemap.ChangeTileType((int)MapPosition.x, (int)MapPosition.y, TileType.Impassable);
        Debug.Log($"Generated {Name} for group {GroupingID}");
    }

    public void MoveToTile(int _x, int _y) { Utilities.GenericMovement(this, _x, _y); }

    public void CastAbility(Message _message) //TODO: pull ability index from packet
    {
        if (GameManager.ActiveEntity != this)
            return;

        Abilities[0].TriggerAbility(this, _message);
    }

    public void EndTurn()
    {
        //do some extra stuff
        Turn = new AspectTurn(this, CurrentActionPoints < 50 ? (uint)(100 - InitiativeOffset) : (uint)(50 - InitiativeOffset), false);
    }

    public void ModifyHealth(HealthModifiedEventInfo _data, bool _ignoreEffectors = false)
    {
        CurrentHP = Utilities.GenericModifyHealth(this, _data, _ignoreEffectors);
    }
}

public class AspectTurn : ITimelineEvent
{
    public uint Initiative { get; set; }
    public bool PlaceInfront { get; }

    private IEntityBehaviour caster;
    public AspectTurn(IEntityBehaviour _caster, uint _initiative, bool _placeInfront)
    {
        caster = _caster;
        Initiative = _initiative;
        PlaceInfront = _placeInfront;
        Timeline.AddTimelineEvent(this);
    }

    public void Activate()
    {
        GameManager.ActiveEntity = caster;

        foreach (Func<InterruptData, bool> interrupter in (caster as IAbilityCasterBehaviour).ActiveInterrupters)
            GameEventSystem.UnsubInterrupt(interrupter);
        (caster as IAbilityCasterBehaviour).ActiveInterrupters.Clear();
        //how would you wait for user input using this method tho?

        //set entity to active, tell client its their turn, if a client inputs something it can be ignored if it's not for active entity & from the appropriate owner of said entity
        Debug.Log($"this is {caster.Name}'s turn");

        #region ability trigger example
        //if (caster.AspectID == 0)
        //    caster.Abilities[0].Activate();
        #endregion  

        #region pathfinder system example
        List<Node> path = Tilemap.GeneratePathToTile(caster.MapPosition, new Vector2(GameMaps.TestMap.Width - 1, GameMaps.TestMap.Height - 1));

        int currentNode = 0;
        while (currentNode < path.Count - 1)
        {
            Vector3 start = new Vector3(path[currentNode].Position.x, 0.5f, path[currentNode].Position.y);
            Vector3 end = new Vector3(path[currentNode + 1].Position.x, 0.5f, path[currentNode + 1].Position.y);
            Debug.DrawLine(start, end, Color.black, Mathf.Infinity);

            currentNode++;
        }
        #endregion
    }
}

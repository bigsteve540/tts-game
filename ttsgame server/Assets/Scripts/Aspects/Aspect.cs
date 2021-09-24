using RiptideNetworking;
using System;
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
    public uint CurrentActionPoints { get; private set; }

    public Vector2 MapPosition { get; set; }
    public uint FacingDirection { get; set; }

    public ITimelineEvent Turn { get; set; }

    public uint MaxHP { get; }
    public uint CurrentHP { get; private set; }

    public int BaseArmor { get; }
    public int CurrentArmor { get; set; }

    public AbilityCaster AbilityCaster { get; }

    public Aspect(int _groupID, string _code, Vector2 _mapPos)
    {
        GroupingID = _groupID;
        EntityID = GameManager.RegisterEntity(this);

        Turn = new AspectTurn(EntityID, BaseInitiative);

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

        AbilityCaster = new AbilityCaster(d.Abilities);
    }

    public void SetCurrentHP(uint _val) { CurrentHP = _val; }

    public void EndTurn()
    {
        Turn = new AspectTurn(EntityID, CurrentActionPoints < 50 ? (uint)(100 - InitiativeOffset) : (uint)(50 - InitiativeOffset));
        Timeline.Progress();
    }

    public void Die() { throw new NotImplementedException(); }
}

public class AspectTurn : ITimelineEvent
{
    public bool PlaceInfront => false;

    private int casterID;
    public AspectTurn(int _casterID, uint _initiative)
    {
        casterID = _casterID;
        Timeline.AddTimelineEvent(_initiative, this);
    }

    public void Activate()
    {
        //set entity to active, tell client its their turn, if a client inputs something it can be ignored if it's not for active entity & from the appropriate owner of said entity
        Debug.Log($"this is {GameManager.GetEntity<IEntityLabels>(casterID).Name}'s turn");
        GameManager.ActiveEntity = GameManager.Entities[casterID];

        Message msg = Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.AssignActiveAspect);
        msg.Add(casterID);
        NetworkManager.Instance.Server.SendToAll(msg);

        GameManager.GetEntity<IAbilityCasterBehaviour>(casterID).AbilityCaster.ClearInterrupters();
    }
}

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

        Tilemap.GetTile(MapPosition).PlaceEntity(this);
        Debug.Log($"Generated {Name} for group {GroupingID}");
    }

    public void CastAbility(Message _message)
    {
        if (GameManager.ActiveEntity != this)
            return;

        int abIndex = _message.GetInt();
        Abilities[abIndex].TriggerAbility(this, _message);
        CurrentActionPoints -= (uint)Abilities[abIndex].ActionPointCost;
    }

    public void SetCurrentHP(uint _val) { CurrentHP = _val; }

    public void EndTurn()
    {
        Turn = new AspectTurn(this, CurrentActionPoints < 50 ? (uint)(100 - InitiativeOffset) : (uint)(50 - InitiativeOffset));
        Timeline.Progress();
    }
}

public class AspectTurn : ITimelineEvent
{
    public uint Initiative { get; set; }
    public bool PlaceInfront => false;

    private IEntityBehaviour caster;
    public AspectTurn(IEntityBehaviour _caster, uint _initiative)
    {
        caster = _caster;
        Initiative = _initiative;
        Timeline.AddTimelineEvent(this);
    }

    public void Activate()
    {
        //set entity to active, tell client its their turn, if a client inputs something it can be ignored if it's not for active entity & from the appropriate owner of said entity
        GameManager.ActiveEntity = caster;
        Message msg = Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.AssignActiveAspect);
        msg.Add(caster.EntityID);
        NetworkManager.Instance.Server.SendToAll(msg);

        foreach (Func<InterruptData, bool> interrupter in (caster as IAbilityCasterBehaviour).ActiveInterrupters)
            GameEventSystem.UnsubInterrupt(interrupter);
        (caster as IAbilityCasterBehaviour).ActiveInterrupters.Clear();

        Debug.Log($"this is {caster.Name}'s turn");
    }
}

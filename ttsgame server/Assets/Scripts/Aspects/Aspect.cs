using RiptideNetworking;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Aspect : IEntityBehaviour, IAbilityCasterBehaviour
{
    public int GroupingID { get; } //use to "group" entities together: 0 reserved for neutral, negative for server-owned entities, positive for player controlled
    public string Code { get; }

    public string Name { get; private set; }
    public int EntityID { get; private set; }

    public uint BaseInitiative { get; private set; } 
    public int InitiativeOffset { get; private set; }

    public EntityValue ActionPoints { get; private set; }

    public Vector2 MapPosition { get; set; }
    public uint FacingDirection { get; set; }

    public ITimelineEvent Turn { get; set; }

    public EntityValue Health { get; private set; }
    public EntityStatistic Armor { get; private set; }

    public AbilityCaster AbilityCaster { get; }

    public void AssignTurn(ITimelineEvent _turn) { Turn = _turn; }

    public void EndTurn()
    {
        if (GameManager.ActiveEntity.EntityID != EntityID)
            return;

        Turn = new AspectTurn(EntityID, ActionPoints.MeterValue < 50 ? (uint)(100 - InitiativeOffset) : (uint)(50 - InitiativeOffset));
        Timeline.Progress();
    }

    public void Die(OnMeterEmpty _info)
    {
        if (_info.MeterType == EntityValueType.Health && _info.EntityID == EntityID)
        {
            //TODO: death stuff
            if (GameManager.ActiveEntity == this)
                EndTurn();
        }
    }

    public Aspect(int _groupID, string _code, Vector2 _mapPos)
    {
        GroupingID = _groupID;
        EntityID = GameManager.RegisterEntity(this);

        Code = _code;
        InitialiseStatistics(Code);

        MapPosition = _mapPos;

        if (AbilityContainer.AbilitiesMap.ContainsKey(Code))
            AbilityCaster = new AbilityCaster(AbilityContainer.AbilitiesMap[Code]);

        AssignTurn(new AspectTurn(EntityID, BaseInitiative));
    }
    public Aspect(int _groupID, string _code, Vector2 _mapPos, ITimelineEvent _turn)
    {
        GroupingID = _groupID;
        EntityID = GameManager.RegisterEntity(this);

        Code = _code;
        InitialiseStatistics(Code);

        MapPosition = _mapPos;

        if (!AbilityContainer.AbilitiesMap.ContainsKey(Code))
            new AbilityContainer(Code);

        AbilityCaster = new AbilityCaster(AbilityContainer.AbilitiesMap[Code]);

        AssignTurn(_turn);
        GameEventSystem.SubListener<OnMeterEmpty>(Die);
    }

    private void InitialiseStatistics(string _code)
    {
        AspectData data = Resources.LoadAll<AspectData>($"Aspects").Where(aspect => aspect.Code == _code).First();

        Name = data.Name;

        Armor = new EntityStatistic(data.BaseArmor);
        Health = new EntityValue(EntityID, EntityValueType.Health, (int)data.MaxHealth, (_val) => 
        {
            if (Mathf.Sign(_val) == -1)
                _val += Armor.Current;
            return _val;
        });

        BaseInitiative = data.BaseInitiative;
        InitiativeOffset = data.InitiativeOffset;

        ActionPoints = new EntityValue(EntityID, EntityValueType.Action_Points, (int)data.MaxActionPoints);
    }
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

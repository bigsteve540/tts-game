using RiptideNetworking;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IEntityBehaviour : ITimelineApplicatorBehaviour, IMoveBehaviour, ICombatBehaviour {}

public interface ITimelineApplicatorBehaviour : IEntityLabels
{
    uint BaseInitiative { get; }
    int InitiativeOffset { get; }

    EntityValue ActionPoints { get; }

    ITimelineEvent Turn { get; set; }

    void EndTurn();
}

public interface IEntityLabels
{
    string Name { get; }
    string Code { get; }
    int EntityID { get; }
    int GroupingID { get; }
}

public interface IMoveBehaviour : IEntityLabels
{
    Vector2 MapPosition { get; set; }
    uint FacingDirection { get; set; }
}

public interface ICombatBehaviour : IEntityLabels
{
    EntityValue Health { get; }
    EntityStatistic Armor { get; }

    void Die(OnMeterEmpty _info);
}

public interface IAbilityCasterBehaviour : IEntityLabels
{
    AbilityCaster AbilityCaster { get; }
}
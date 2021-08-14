using RiptideNetworking;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IEntityBehaviour : ITimelineBehaviour, IMoveBehaviour, ICombatBehaviour {}

public interface ITimelineBehaviour : IEntityLabels
{
    uint BaseInitiative { get; }
    int InitiativeOffset { get; }

    uint TotalActionPoints { get; }
    uint CurrentActionPoints { get; }

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

public interface IMoveBehaviour
{
    Vector2 MapPosition { get; set; }
    uint FacingDirection { get; set; }
}

public interface ICombatBehaviour
{
    uint MaxHP { get; }
    uint CurrentHP { get; }

    int BaseArmor { get; }
    int CurrentArmor { get; set; }

    void SetCurrentHP(uint _val);
}

public interface IAbilityCasterBehaviour
{
    AspectAbilityData[] Abilities { get; }
    List<Func<InterruptData, bool>> ActiveInterrupters { get; set; }

    void CastAbility(Message _message);
}
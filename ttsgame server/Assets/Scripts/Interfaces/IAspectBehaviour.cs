using RiptideNetworking;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IAspectBehaviour : IAspectLabels, IMoveBehaviour, ICombatBehaviour
{
    int ClientID { get; }

    int BaseInitiative { get; }
    int InitiativeOffset { get; }

    int TotalActionPoints { get; }
    int CurrentActionPoints { get; } //private set

    ITimelineEvent Turn { get; set; }

    IAbilityBehaviour[] Abilities { get; }
    List<Func<int, TimelineEventType[], bool>> ActiveInterrupters { get; set; }

    void EndTurn();
}

public interface IAspectLabels
{
    string AspectName { get; }
    int AspectID { get; }
}

public interface IMoveBehaviour
{
    Vector2 MapPosition { get; set; }
    int FacingDirection { get; set; }
    void MoveToTile(int _x, int _y);
}

public interface ICombatBehaviour
{
    int MaxHP { get; }
    int CurrentHP { get; }

    int BaseArmor { get; }
    int CurrentArmor { get; set; }

    void ModifyHealth(HealthModifiedEventInfo _data, bool _ignoreEffectors = false);
}

public interface IAbilityBehaviour
{
    IAspectBehaviour Caster { get; }

    int ActionPointCost { get; }
    int CastRange { get; }

    void Activate(Message _message);
}
//public interface IPassiveBehaviour
//{
//    
//}

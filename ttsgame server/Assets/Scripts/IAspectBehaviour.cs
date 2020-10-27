using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IAspectBehaviour : IAspectLabels, IMoveBehaviour, ICombatBehaviour
{
    int PlayerID { get; }


    bool Active { get; set; }

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
    Vector2 MapPosition { get; }
    List<Node> Path { get; set; }
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

    void Activate(ref NetworkPacket _packet);
}
//public interface IPassiveBehaviour
//{
//    
//}



//how to do client input entity grouping?
// > have client object contain list/array of entities (datatype maybe based on gamemode, likely better to use list incase of Aspect summoning adds)
// > ping client when their entity triggers

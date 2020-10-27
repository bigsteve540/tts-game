using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KrakAspect : IAspectBehaviour
{
    public int PlayerID { get; }

    public bool Active { get; set; }

    public string AspectName => "Krak";
    public int AspectID { get; }

    public int BaseInitiative { get; }
    public int InitiativeOffset { get; }

    public int TotalActionPoints { get; }
    public int CurrentActionPoints { get; }

    public ITimelineEvent Turn { get; set; }

    public IAbilityBehaviour[] Abilities { get; }

    public List<Func<int, TimelineEventType[], bool>> ActiveInterrupters { get; set; }

    public Vector2 MapPosition { get; }
    public List<Node> Path { get; set; }

    public int MaxHP { get; }
    public int CurrentHP { get; }

    public int BaseArmor { get; }
    public int CurrentArmor { get; set; }

    public void EndTurn()
    {
        throw new NotImplementedException();
    }

    public void ModifyHealth(HealthModifiedEventInfo _data, bool _ignoreEffectors = false)
    {
        throw new NotImplementedException();
    }

    public void MoveToTile(int _x, int _y)
    {
        throw new NotImplementedException();
    }
}

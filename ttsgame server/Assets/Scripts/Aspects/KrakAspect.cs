using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KrakAspect : IAspectBehaviour
{
    public int ClientID { get; }

    public bool Active { get; set; }

    public string AspectName => "Krak";
    public int AspectID { get; }
    public string AspectCode => "A002";

    public uint BaseInitiative { get; }
    public int InitiativeOffset { get; }

    public uint TotalActionPoints { get; }
    public uint CurrentActionPoints { get; }

    public ITimelineEvent Turn { get; set; }

    public IAbilityBehaviour[] Abilities { get; }

    public List<Func<InterruptData, bool>> ActiveInterrupters { get; set; }

    public Vector2 MapPosition { get; set; }
    public uint FacingDirection { get; set; }

    public uint MaxHP { get; }
    public uint CurrentHP { get; }

    public int BaseArmor { get; }
    public int CurrentArmor { get; set; }

    public KrakAspect(int _clientID, Vector2 _mapPos)
    {

    }

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

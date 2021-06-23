using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BasicAbility : IAbilityBehaviour
{
    public IAspectBehaviour Caster { get; }

    public int ActionPointCost { get; }
    public int CastRange { get; }
    public float Damage { get; }

    private TimelineEventType[] types = new TimelineEventType[1] { TimelineEventType.Damage };

    public BasicAbility(IAspectBehaviour _caster, int _actionPointCost, int _castRange, float _damage)
    {
        Caster = _caster;

        ActionPointCost = _actionPointCost;
        CastRange = _castRange;

        Damage = _damage;
    }

    public void Activate(/*FIXME: NEW PACKET SHIT HERE*/)
    {
        if (!Caster.Active || GameEventSystem.CheckEventInterrupted(Caster.AspectID, types))
            return;

        Debug.Log("Melee Slash");
        int targetAspectID = 1; //would retrieve this from packet
        IAspectBehaviour target = GameManager.Entities[targetAspectID];

        List<Node> path = Tilemap.GeneratePathToTile(Caster.MapPosition, target.MapPosition);

        if (path == null || path.Count > CastRange)
            return;

        target.ModifyHealth(new HealthModifiedEventInfo(Caster.AspectID, target.AspectID, this, StatModifierType.Flat, Damage));
    }
}

using RiptideNetworking;
using System.Collections.Generic;
using UnityEngine;

public class BasicAttack : IAbilityBehaviour, IInterruptable
{
    public IAspectBehaviour Caster { get; }

    public int ActionPointCost { get; }
    public int CastRange { get; }
    public float Damage { get; }

    public InterruptData InterruptData { get; }
    public InterruptEventType[] AffectedTypes => new InterruptEventType[1] { InterruptEventType.Damage };

    public BasicAttack(IAspectBehaviour _caster, int _range)
    {
        AspectAbilityData d = Resources.Load<AspectAbilityData>("Basic Attack");

        Caster = _caster;

        ActionPointCost = d.ActionPointCost;
        CastRange = _range;

        Damage = d.Value;

        InterruptData = new InterruptData(Caster.AspectID, AffectedTypes);
    }

    public void Activate(Message _message)
    {
        if (GameManager.ActiveAspect != Caster || GameEventSystem.CheckEventInterrupted(InterruptData))
            return;

        Debug.Log("Melee Slash");
        int targetAspectID = _message.GetInt(); //TODO: inline this with the line below
        IAspectBehaviour target = GameManager.Entities[targetAspectID];

        List<Node> path = Tilemap.GeneratePathToTile(Caster.MapPosition, target.MapPosition);

        if (path == null || path.Count > CastRange)
            return;

        target.ModifyHealth(new HealthModifiedEventInfo(Caster.AspectID, target.AspectID, this, StatModifierType.Flat, Damage));
    }
}

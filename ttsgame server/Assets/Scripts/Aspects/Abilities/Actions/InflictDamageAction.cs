using RiptideNetworking;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName ="Aspects/Definitions/Ability Actions/Inflict Damage Action")]
public class InflictDamageAction : AbilityAction
{
    [Space]
    public uint Damage = default;
    public StatModifierType Type = default;

    public override void InvokeAction(IEntityBehaviour _caster, dynamic _targets)
    {
        if (Interruptable)
        {
            InterruptData d = new InterruptData(_caster.EntityID, Flags);
            if (GameEventSystem.CheckEventInterrupted(d))
                return;
        }

        for (int i = 0; i < _targets.Count; i++)
        {
            Debug.Log($"damijing {_targets[i].Name}");
            _targets[i].ModifyHealth(new HealthModifiedEventInfo(_caster.EntityID, _targets[i].EntityID, this, Type, Damage * -1));
        }
    }
}

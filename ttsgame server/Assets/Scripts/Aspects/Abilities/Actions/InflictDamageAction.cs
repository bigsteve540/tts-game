using RiptideNetworking;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName ="Aspects/Definitions/Ability Actions/Inflict Damage Action")]
public class InflictDamageAction : AbilityAction
{
    [Space]
    public uint Damage = default;
    public StatModifierType Type = default;
    public bool IgnoreArmor = default;

    public override void InvokeAction(IEntityBehaviour _caster, object _targets)
    {
        if (Interruptable)
        {
            InterruptData d = new InterruptData(_caster.EntityID, Flags);
            if (GameEventSystem.CheckEventInterrupted(d))
                return;
        }

        IList<IEntityBehaviour> targetsBoxed = (IList<IEntityBehaviour>)_targets;

        for (int i = 0; i < targetsBoxed.Count; i++)
        {
            Debug.Log($"damijing {targetsBoxed[i].Name}");
            Health.Damage(targetsBoxed[i], new HealthDataPacket(_caster.EntityID, this, Type, (int)Damage * -1, IgnoreArmor));
        }
    }
}

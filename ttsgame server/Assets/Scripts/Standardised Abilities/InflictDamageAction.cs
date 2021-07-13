using RiptideNetworking;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName ="Aspects/Definitions/Inflict Damage Action")]
public class InflictDamageAction : AbilityAction
{
    public uint Damage = default;
    public StatModifierType Type = default;

    public override void InvokeAction(IEntityBehaviour _caster, int _targetID/*Message _message*/, AspectAbilityData _data)
    {
        //int targetAspectID = _message.GetInt(); //TODO: inline this with the line below

        InterruptData d = new InterruptData(_caster.EntityID, InterruptEventType.Damage);
        if (GameEventSystem.CheckEventInterrupted(d))
            return;

        IAspectBehaviour target = GameManager.Entities[_targetID/*targetAspectID*/] as IAspectBehaviour;
        Debug.Log($"damijing {target.Name}");

        target.ModifyHealth(new HealthModifiedEventInfo(_caster.EntityID, target.EntityID, this, Type, Damage * -1));
    }
}

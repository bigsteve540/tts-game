using System.Collections;
using System.Collections.Generic;
using RiptideNetworking;
using UnityEngine;

[CreateAssetMenu(fileName = "New Interrupt", menuName = "Aspects/Abilities/Interrupt")]
public class InterruptAbilityData : AspectAbilityData
{
    [Space]
    public InterruptEventType Flags;
    public bool IncludeEntities;

    private IEntityBehaviour caster = default;

    public override void TriggerAbility(IEntityBehaviour _caster, Message _message)
    {
        if (caster == null)
            caster = _caster;

        Debug.Log($"{ Name } prepared");
        GameEventSystem.SubInterrupt(Interrupt);
    }
    private bool Interrupt(InterruptData _data)
    {
        List<IEntityBehaviour> targetAsList = FilterEntities(GameManager.Entities[_data.TriggererID], null);

        if (!_data.InterruptFlags.HasFlag(Flags) && targetAsList != null)
            return false;

        Debug.Log("Interrupted");

        for (int i = 0; i < Actions.Length; i++)
            Actions[i].InvokeAction(caster, targetAsList);
        return true;
    }

    protected override List<IEntityBehaviour> FilterEntities(IEntityBehaviour _caster, Message _message) //not actually the _caster, using it as a proxy for the target entity in this case
    {
        if(IncludeEntities)
            return base.FilterEntities(caster, _message);
        else
            if (Utilities.GetChebyshevDistance(caster.MapPosition, _caster.MapPosition, Targeting.Filter.SelectionFilters[0].Range))
                return new List<IEntityBehaviour> { _caster };
        return null;
    }
}

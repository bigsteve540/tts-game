using UnityEngine;
using RiptideNetworking;
using System.Collections.Generic;


//TODO: likely gonna strip abilities back to classes with individual implementations
[CreateAssetMenu(fileName = "New Ability", menuName = "Aspects/Abilities/Standard")]
public class AspectAbilityData : ScriptableObject
{
    public string Name = default;
    [TextArea]
    public string Description = default;
    [Space]
    public int ActionPointCost = default;
    [Space]
    public AbilityTargeting Targeting = default;
    public AbilityAction[] Actions = default;

    public virtual void TriggerAbility(IEntityBehaviour _caster, Message _message)
    {
        for (int i = 0; i < Actions.Length; i++)
            Actions[i].InvokeAction(_caster, Targeting.GetTargets(_caster, _message));
    }
}

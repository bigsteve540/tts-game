using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RiptideNetworking;

public abstract class AbilityAction : ScriptableObject
{
    public virtual void InvokeAction(IEntityBehaviour _caster, int _targetID/*Message _message*/, AspectAbilityData _data) { }
}

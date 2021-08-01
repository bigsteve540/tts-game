using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RiptideNetworking;

public abstract class AbilityAction : ScriptableObject
{
    public bool Interruptable = default;
    public InterruptEventType Flags = default;

    public abstract void InvokeAction(IEntityBehaviour _caster, dynamic _targets);
}

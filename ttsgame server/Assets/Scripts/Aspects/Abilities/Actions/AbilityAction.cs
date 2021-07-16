using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RiptideNetworking;

public abstract class AbilityAction : ScriptableObject
{
    public bool Interruptable = default;
    public InterruptEventType Flags = default;
    
    public virtual void InvokeAction(IEntityBehaviour _caster, List<IEntityBehaviour> _targets)
    {
        if (Interruptable)
        {
            InterruptData d = new InterruptData(_caster.EntityID, Flags);
            if (GameEventSystem.CheckEventInterrupted(d))
                return;
        }
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RiptideNetworking;

public class AbilityCaster
{
    public IAbilityLabels[] Abilities { get; }

    public void Cast(Message _message)
    {

    }

    public void ClearInterrupters()
    {
        foreach (IInterrupter interrupter in Abilities)
            GameEventSystem.UnsubInterrupt(interrupter.InterruptionTest);
    }

    public AbilityCaster(IAbilityLabels[] _abilities)
    {
        Abilities = _abilities;
    }
}

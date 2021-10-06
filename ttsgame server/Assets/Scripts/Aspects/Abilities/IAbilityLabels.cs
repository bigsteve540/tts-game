using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using InterruptParameters;
using RiptideNetworking;

public interface IAbilityLabels
{
    string Name { get; }
    string Description { get; }

    void Trigger(int _casterID, Message _message);
}

public interface IAbilityStandard : IAbilityLabels
{
    uint ActionPostCost { get; }
}

public interface IAbilityInterrupter : IAbilityLabels
{
    bool InterruptionTest(InterruptData _data);
    int HealthCost { get; }
}

public interface IAbilityMeterEffect : IAbilityLabels
{
    int Value { get; }
    ValueEffectorType ModType { get; }
}
public interface IAbilityDamage : IAbilityMeterEffect
{
    bool IgnoreArmor { get; }
}

public interface IAbilityInterruptable
{
    InterruptData InterruptData { get; }
    InterruptEventType InterruptFlags { get; }
    IInterruptParameters Parameters { get; }
}



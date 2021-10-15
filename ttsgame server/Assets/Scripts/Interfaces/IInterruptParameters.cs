using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace InterruptParameters
{
    public interface IInterruptParameters
    {

    }
    public interface IMovementParameters : IInterruptParameters
    {
        List<Tile> Tiles { get; }
        uint PathCost { get; }
        InterruptEventType MovementFlags { get; }
    }
    public interface IMeterEffectParameters : IInterruptParameters
    {
        int CasterID { get; }
        object Source { get; }
    }
    public interface IHealParameters : IInterruptParameters
    {
        ValueEffectorType Type { get; }
        float Value { get; }

        void ChangeValue(int _val);
    }
    public interface IDamageParameters : IHealParameters
    {
        bool IgnoresArmor { get; }
    }
}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IAbilityLabels
{
    string Name { get; }
    string Description { get; }
    uint ActionPointCost { get; }

    void Trigger(int _casterID, params object[] _targets);
}

public interface IInterrupter
{
    bool InterruptionTest(InterruptData _data);
}



using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public abstract class AbilityData : IAbilityLabels
{
    public abstract string Name { get; }
    public abstract string Description { get; }
    public abstract uint ActionPointCost { get; }
    public abstract void Trigger(int _casterID, params object[] _targets);
}

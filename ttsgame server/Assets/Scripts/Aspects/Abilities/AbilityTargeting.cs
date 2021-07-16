using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum TargetingType
{
    None, Self, Filtered
}

[System.Serializable]
public class AbilityTargeting
{
    public TargetingType Type;
    public TargetFilter Filter;
}

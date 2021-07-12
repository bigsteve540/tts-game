using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum TargetingType
{
    Self, Filtered
}

[System.Serializable]
public class AbilityTargeting
{
    public TargetingType Type;
    public TargetFilter Filter;
}

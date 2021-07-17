using UnityEngine;

[System.Serializable]
public class TargetFilter
{
    [System.Flags]
    public enum TargetingRelation
    {
        Enemy = 1 << 0,
        Neutral = 1 << 1,
        Ally = 1 << 2
    }

    public enum SelfInclusion
    {
        ByFilter,
        Always,
        Never
    }

    public TargetingRelation TargetType;
    public SelfInclusion IncludeSelf;

    public SelectionFilter[] SelectionFilters;
}

[System.Serializable]
public class SelectionFilter
{
    public enum FilterType
    {
        Radius,
        Random,
        Closest,
        ClientDesignated
    }

    public FilterType Type;
    public uint Range;
    public Vector2 LocalOffset;
    public uint MaxValidTargets = 1;
}

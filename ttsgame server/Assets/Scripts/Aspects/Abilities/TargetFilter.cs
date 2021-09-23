using UnityEngine;

[CreateAssetMenu(menuName = "Aspects/Definitions/Target Filter")]
public class TargetFilter : ScriptableObject
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
    [Space]
    public bool InitialSamplesFromClient;
    [Space]
    public SelectionFilter[] SelectionFilters;
}

[System.Serializable]
public class SelectionFilter
{
    public enum FilterType
    {
        Radius,
        Random,
        Closest
    }

    public FilterType Type;
    public uint Range;
    public Vector2 LocalOffset;
    public uint MaxValidTargets = 1;
}

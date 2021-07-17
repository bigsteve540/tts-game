[System.Serializable]
public struct AspectDataWrapper
{
    public string AspectName;

    public uint BaseInitiative;
    public int InitiativeOffset;

    public uint MaxActionPoints;

    public uint MaxHealth;
    public int BaseArmor;

    public AspectAbilityWrapper[] Abilities;
}
[System.Serializable]
public struct AspectAbilityWrapper
{
    public string AbilityName;
    public string Description;

    public int ActionPointCost;

    public TargetingWrapper TargetingMetrics;
}
[System.Serializable]
public struct TargetingWrapper
{
    public TargetingType Type;

    public TargetFilter.TargetingRelation TargetType;
    public TargetFilter.SelfInclusion IncludeSelf;

    public SelectionFilter[] SelectionFilters;
}

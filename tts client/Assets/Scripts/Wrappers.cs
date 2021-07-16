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
}

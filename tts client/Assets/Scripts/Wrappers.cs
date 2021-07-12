[System.Serializable]
public struct AspectDataWrapper
{
    public string AspectName;

    public uint BaseInitiative;
    public int InitiativeOffset;

    public uint MaxActionPoints;

    public uint MaxHealth;
    public int BaseArmor;

    public AspectAbilityWrapper[] Abilities { get; }

    public AspectDataWrapper(int i = 0)
    {
        AspectName = default;

        BaseInitiative = default;
        InitiativeOffset = default;

        MaxActionPoints = default;

        MaxHealth = default;
        BaseArmor = default;

        Abilities = default;
    }
}

[System.Serializable]
public struct AspectAbilityWrapper
{
    public string AbilityName;
    public string Description;

    public int ActionPointCost;

    public int Value;
    public int ValueType;

    public int[] TypesToTrigger;
}

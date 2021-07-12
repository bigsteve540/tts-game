using UnityEngine;

[CreateAssetMenu(fileName = "New Ability", menuName = "Aspects/New Ability")]
public class AspectAbilityData : ScriptableObject
{
    public string Name = default;
    [TextArea]
    public string Description = default;
    [Space]
    public int ActionPointCost = default;
    [Space]
    public int Value = default;
    public StatModifierType ValueType = default;
    [Space]
    public InterruptEventType[] TypesToTrigger = default;
}

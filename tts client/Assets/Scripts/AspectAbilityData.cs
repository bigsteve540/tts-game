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
    public TargetingType TargetingType = default;
    [SerializeField] public TargetFilter TargetFilter = default;

    public void Deserialize(AspectAbilityWrapper _wrapper)
    {
        Name = _wrapper.AbilityName;
        Description = _wrapper.Description;
        ActionPointCost = _wrapper.ActionPointCost;
        TargetingType = _wrapper.TargetingMetrics.Type;

        TargetFilter = new TargetFilter
        {
            TargetType = _wrapper.TargetingMetrics.TargetType,
            IncludeSelf = _wrapper.TargetingMetrics.IncludeSelf,
            SelectionFilters = _wrapper.TargetingMetrics.SelectionFilters
        };

    }
}

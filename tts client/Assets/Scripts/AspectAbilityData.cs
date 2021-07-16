using UnityEngine;

[CreateAssetMenu(fileName = "New Ability", menuName = "Aspects/New Ability")]
public class AspectAbilityData : ScriptableObject
{
    public string Name = default;
    [TextArea]
    public string Description = default;
    [Space]
    public int ActionPointCost = default;

    public void Deserialize(AspectAbilityWrapper _wrapper)
    {
        Name = _wrapper.AbilityName;
        Description = _wrapper.Description;
        ActionPointCost = _wrapper.ActionPointCost;
    }
}

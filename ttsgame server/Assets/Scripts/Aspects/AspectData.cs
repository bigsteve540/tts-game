using UnityEngine;

[CreateAssetMenu(fileName = "New Aspect", menuName ="Aspects/New Aspect")]
public class AspectData : ScriptableObject
{
    public string Name = default;
    [Space]
    public uint BaseInitiative = default; //dictates where on the timeline aspects will begin the game
    public int InitiativeOffset = default; //dictates the amount of skew added or subtracted from the turn initiative on turn end, signed int
    [Space]
    public uint MaxActionPoints = 100; //100 to begin with, aspects can be buffed or nerfed via this
    [Space]
    public uint MaxHealth = default;
    public int BaseArmor = default;
    [Space]
    public AspectAbilityData[] Abilities = default;
}

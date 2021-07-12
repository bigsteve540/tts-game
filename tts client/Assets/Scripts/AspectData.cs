using UnityEngine;

[CreateAssetMenu(fileName = "New Aspect Data")]
public class AspectData : ScriptableObject
{
    public string AspectCode = "A###";
    public string AspectName = "New Aspect";
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
    [Space]
    public Sprite AspectSprite;
    public GameObject AspectModel;

    public void Deserialize(AspectDataWrapper _wrapper)
    {
        AspectName = _wrapper.AspectName;

        BaseInitiative = _wrapper.BaseInitiative;
        InitiativeOffset = _wrapper.InitiativeOffset;

        MaxActionPoints = _wrapper.MaxActionPoints;

        MaxHealth = _wrapper.MaxHealth;
        BaseArmor = _wrapper.BaseArmor;

        for (int i = 0; i < Abilities.Length; i++)
            Abilities[i].Deserialize(_wrapper.Abilities[i]);
    }
}

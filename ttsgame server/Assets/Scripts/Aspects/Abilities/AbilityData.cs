using RiptideNetworking;

[System.Serializable]
public abstract class AbilityData : IAbilityLabels
{
    public abstract string Name { get; }
    public abstract string Description { get; }
    public abstract void Trigger(int _casterID, Message _message);
}

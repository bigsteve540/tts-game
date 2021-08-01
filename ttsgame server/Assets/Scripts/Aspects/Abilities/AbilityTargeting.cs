using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RiptideNetworking;

public enum TargetingType
{
    None, Self, Entity_Filtered, Tile_Filtered
}

[System.Serializable]
public class AbilityTargeting
{
    public TargetingType Type;
    public TargetFilter Filter;

    public dynamic GetTargets(IEntityBehaviour _caster, Message _extraNetParams)
    {
        return null;
    }
}

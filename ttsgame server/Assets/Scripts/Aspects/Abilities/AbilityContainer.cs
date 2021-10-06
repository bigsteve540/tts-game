using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AbilityContainer
{
    public string TargetAspectCode { get; }
    public IAbilityLabels[] Abilities { get; }

    public static Dictionary<string, AbilityContainer> AbilitiesMap = new Dictionary<string, AbilityContainer>();

    public AbilityContainer(string _aspectCode)
    {
        TargetAspectCode = _aspectCode;

        switch (_aspectCode)
        {
            case "A000":
                Abilities = new IAbilityLabels[]
                {
                    new Abilities.Genevive.ShatterEdge()
                };
                break;
            default:
                throw new KeyNotFoundException();
        }

        AbilitiesMap.Add(TargetAspectCode, this);
    }
}

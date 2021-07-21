using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class AbilityTab : MonoBehaviour
{
    [SerializeField]private TextMeshProUGUI ActionCost;
    [SerializeField]private TextMeshProUGUI AbilityName;
    [SerializeField]private TextMeshProUGUI AbilityDescription;

    private AspectAbilityData data;
    private int abilityIndex;

    public void Init(int _abilityIndex, AspectAbilityData _data)
    {
        data = _data;

        ActionCost.text = _data.ActionPointCost.ToString();
        AbilityName.text = _data.Name;
        AbilityDescription.text = _data.Description;
    }

    public void TriggerAbility()
    {
        TargetFetcher.StartFetching(abilityIndex, data.TargetingType, data.TargetFilter);
    }

}

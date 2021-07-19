using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class AbilityTab : MonoBehaviour
{
    [SerializeField]private TextMeshProUGUI ActionCost;
    [SerializeField]private TextMeshProUGUI AbilityName;
    [SerializeField]private TextMeshProUGUI AblityDescription;

    private AspectAbilityData data;
    private int abilityIndex;

    private void OnEnable() //this is just proxy for the init method
    {
        Init(0, Resources.Load<AspectAbilityData>("Aspects/Abilities/A000/A000_0"));
    }

    public void Init(int _abilityIndex, AspectAbilityData _data)
    {
        data = _data;
    }

    public void TriggerAbility()
    {
        TargetFetcher.StartFetching(abilityIndex, data.TargetingType, data.TargetFilter);
    }

}

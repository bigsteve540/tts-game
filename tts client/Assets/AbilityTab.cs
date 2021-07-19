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
    private int entityID, abilityIndex;


    public void Init(int _entityID, int _abilityIndex, AspectAbilityData _data)
    {
        data = _data;
    }

    public void TriggerAbility()
    {
        TargetFetcher.StartFetching(abilityIndex, data.TargetingType, data.TargetFilter);
    }

}

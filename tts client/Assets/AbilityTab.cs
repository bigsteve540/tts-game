using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class AbilityTab : MonoBehaviour
{
    private TextMeshProUGUI ActionCost;
    private TextMeshProUGUI AbilityName;
    private TextMeshProUGUI AblityDescription;

    private AspectAbilityData data;

    public void TriggerAbility()
    {
        TargetFetcher.StartFetching(data.TargetingType, data.TargetFilter);
    }

}

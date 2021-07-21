using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameUI : MonoBehaviour
{
    public static GameUI Instance;
    public void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
    }
#pragma warning disable CS0649
    [SerializeField] private AbilityTab[] AbilityTabPanels;
    [SerializeField] private GameObject AspectStatsPanel;
    [SerializeField] private Transform[] StatPanelAnchors;
#pragma warning restore CS0649
    public void SpawnEntityPanel(int _groupID, int _entityID, string _aspectCode, int _hp)
    {
        if(Mathf.Sign(_groupID) == 1)
        {
            Instantiate(AspectStatsPanel, StatPanelAnchors[_groupID - 1]).GetComponent<StatPanelUI>().Init(_aspectCode, _groupID, _entityID, _hp);
        }
    }
    public void SpawnAbilityTabs()
    {
        AspectAbilityData[] d = Resources.LoadAll<AspectAbilityData>($"Aspects/Abilities/{GameManager.GetActiveEntity().GetEntityCode()}");

        for (int i = 0; i < AbilityTabPanels.Length; i++)
        {
            if(i < d.Length)
            {
                AbilityTabPanels[i].gameObject.SetActive(true);
                AbilityTabPanels[i].Init(i, d[i]);
            }
            else
            {
                AbilityTabPanels[i].gameObject.SetActive(false);
            }
        }
    }
}

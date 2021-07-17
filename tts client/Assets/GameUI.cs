﻿using System.Collections;
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
}

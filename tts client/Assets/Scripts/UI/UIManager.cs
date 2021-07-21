using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    public static UIManager Instance;
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
    [SerializeField] private GameObject[] uiPanels;

    public void SetUIPanelActive(int _id)
    {
        for (int i = 0; i < uiPanels.Length; i++)
            uiPanels[i].SetActive(i == _id);
    }
}

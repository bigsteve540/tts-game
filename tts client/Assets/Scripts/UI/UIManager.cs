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

    [SerializeField] private GameObject draftUI;

    public void OpenDraftUI(bool _open)
    {
        draftUI.SetActive(_open);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DraftUI : MonoBehaviour
{
    public static string SelectedAspect = string.Empty;

    [SerializeField] private GameObject aspectPortrait;
    [SerializeField] private Transform scrollviewContent;
    private AspectData[] data;

    public static void LockAspect(bool _isBanned, int _lockerID, string _aspectCode)
    {

    }

    private void Start()
    {
        data = Resources.LoadAll<AspectData>("Aspects/Data");
        for (int i = 0; i < data.Length; i++)
        {
            Instantiate(aspectPortrait, scrollviewContent).GetComponent<AspectPortraitUI>().Init(data[i]);
        }
    }
}

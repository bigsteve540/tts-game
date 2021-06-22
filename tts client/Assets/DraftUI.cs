using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DraftUI : MonoBehaviour
{
    #region singleton
    public static DraftUI Instance;
    public void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
    }
    #endregion

    public static string SelectedAspect;

    [SerializeField] private Image[] localBans;
    [SerializeField] private Image[] localPicks;
    private Vector2Int banIndexors = new Vector2Int(0,0);
    private Vector2Int pickIndexors = new Vector2Int(0,0);
    [SerializeField] private Image[] networkBans;
    [SerializeField] private Image[] networkPicks;
    [Space]
    [SerializeField] private GameObject scrollViewContent;
    [SerializeField] private GameObject aspectPortrait;


    private static Dictionary<string, AspectData> aspectData = new Dictionary<string, AspectData>();

    void Start()
    {
        AspectData[] d = Resources.LoadAll<AspectData>("Aspects/Data");

        for (int i = 0; i < d.Length; i++)
        {
            Instantiate(aspectPortrait, scrollViewContent.transform).GetComponent<AspectPortraitUI>().Init(d[i]);
            aspectData.Add(d[i].AspectCode, d[i]);
        }
    }

    public void ButtonInteract()
    {
        if (SelectedAspect == string.Empty)
            return;
        ClientSend.DraftInteract();
    }

    public static void LockAspect(bool _isBanned, int _lockerID, string _aspectCode)
    {
        bool isNetwork = _lockerID != Client.ID;

        if (_isBanned)
            if (isNetwork)
                Instance.networkBans[Instance.banIndexors.y++].sprite = aspectData[_aspectCode].AspectSprite;
            else
                Instance.localBans[Instance.banIndexors.x++].sprite = aspectData[_aspectCode].AspectSprite;
        else
            if (isNetwork)
                Instance.networkPicks[Instance.pickIndexors.y++].sprite = aspectData[_aspectCode].AspectSprite;
            else
                Instance.localPicks[Instance.pickIndexors.x++].sprite = aspectData[_aspectCode].AspectSprite;
    }
}

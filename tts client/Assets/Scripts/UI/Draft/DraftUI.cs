using RiptideNetworking;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;



public class DraftUI : MonoBehaviour
{
    private static DraftUI instance;
    public static DraftUI Instance
    {
        get => instance;
        private set
        {
            if (instance == null)
                instance = value;
            else if (instance != value)
            {
                Debug.Log($"{nameof(DraftUI)} instance already exists, destroying object!");
                Destroy(value);
            }
        }
    }

    private void Awake() { Instance = this; }

    private void OnEnable()
    {
        timerValue -= NetworkManager.Instance.Ping * 0.01f;

        foreach (AspectData data in GameManager.AspectData.Values)
            GeneratePortrait(data);
    }
#pragma warning disable CS0649
    [SerializeField] private TextMeshProUGUI timerText;
    private float timerValue = 30f;

    [SerializeField] private GameObject aspectPortrait;
    [SerializeField] private Transform scrollviewContent;

    [SerializeField] private Image[] localBans;
    [SerializeField] private Image[] networkBans = default;

    [SerializeField] private Image[] localPicks = default;
    [SerializeField] private Image[] networkPicks = default;
#pragma warning restore CS0649
    //local is x, network is y
    private Vector2Int banIndexors;
    private Vector2Int pickIndexors;
    public void LockAspect(bool _isBan, int _lockerID, string _aspectCode)
    {
        if (_isBan)
            if (_lockerID != NetworkManager.Instance.Client.Id)
                networkBans[banIndexors.y++].sprite = GameManager.AspectData[_aspectCode].AspectSprite;
            else
                localBans[banIndexors.x++].sprite = GameManager.AspectData[_aspectCode].AspectSprite;
        else
            if (_lockerID != NetworkManager.Instance.Client.Id)
            {
                networkPicks[pickIndexors.y++].sprite = GameManager.AspectData[_aspectCode].AspectSprite;
            }
            else
            {
                localPicks[pickIndexors.x].sprite = GameManager.AspectData[_aspectCode].AspectSprite;
                GameManager.Instance.PickedAspects[pickIndexors.x++] = _aspectCode;
            }

        timerValue = 30f - (NetworkManager.Instance.Ping * 0.01f);
    }

    public void ButtonInteract()
    {
        if (GameManager.SelectedAspect == string.Empty)
            return;

        Message msg = Message.Create(MessageSendMode.reliable, (ushort)ClientToServerRequest.DraftInteract);
        msg.Add(GameManager.SelectedAspect);
        NetworkManager.Instance.Client.Send(msg);
        GameManager.SelectedAspect = string.Empty;
    }

    public void GeneratePortrait(AspectData _data)
    {
        Instantiate(aspectPortrait, scrollviewContent).GetComponent<AspectPortraitUI>().Init(_data);
    }

    private void Start()
    {

    }
    private void Update()
    {
        timerValue -= Time.unscaledDeltaTime;
        timerText.text = Mathf.CeilToInt(timerValue).ToString();
    }

}

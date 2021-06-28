﻿using RiptideNetworking;
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
                Debug.Log($"{nameof(NetworkManager)} instance already exists, destroying object!");
                Destroy(value);
            }
        }
    }

    private void Awake() { Instance = this; }

    private void OnEnable()
    {
        timerValue -= NetworkManager.Instance.Ping * 0.01f;
    }

    public static string SelectedAspect = string.Empty;

    [SerializeField] private TextMeshProUGUI timerText;
    private float timerValue = 30f;

    [SerializeField] private GameObject aspectPortrait;
    [SerializeField] private Transform scrollviewContent;

    [SerializeField] private Image[] localBans;
    [SerializeField] private Image[] networkBans;

    //local is x, network is y
    private Vector2Int banIndexors;
    private Vector2Int pickIndexors;

    [SerializeField] private Image[] localPicks;
    [SerializeField] private Image[] networkPicks;

    private AspectData[] data;

    private Dictionary<string, Sprite> aspectSprites = new Dictionary<string, Sprite>();

    public void LockAspect(bool _isBan, int _lockerID, string _aspectCode)
    {
        if (_isBan)
            if(_lockerID != NetworkManager.Instance.Client.Id)
                networkBans[banIndexors.y++].sprite = aspectSprites[_aspectCode];
            else
                localBans[banIndexors.x++].sprite = aspectSprites[_aspectCode];
        else
            if (_lockerID != NetworkManager.Instance.Client.Id)
            {
                networkPicks[pickIndexors.y++].sprite = aspectSprites[_aspectCode];
            }
            else
            {
                localPicks[pickIndexors.x].sprite = aspectSprites[_aspectCode];
                GameManager.Instance.pickedAspects[pickIndexors.x++] = _aspectCode;
            }

        timerValue = 30f - (NetworkManager.Instance.Ping * 0.01f);
    }

    public void ButtonInteract()
    {
        if (SelectedAspect == string.Empty)
            return;

        Message msg = Message.Create(MessageSendMode.reliable, (ushort)ClientToServerRequest.DraftInteract);
        msg.Add(SelectedAspect);
        NetworkManager.Instance.Client.Send(msg);
        SelectedAspect = string.Empty;
    }

    private void Start()
    {
        data = Resources.LoadAll<AspectData>("Aspects/Data");
        for (int i = 0; i < data.Length; i++)
        {
            aspectSprites.Add(data[i].AspectCode, data[i].AspectSprite);
            Instantiate(aspectPortrait, scrollviewContent).GetComponent<AspectPortraitUI>().Init(data[i]);
        }
    }

    private void Update()
    {
        timerValue -= Time.unscaledDeltaTime;
        timerText.text = Mathf.CeilToInt(timerValue).ToString();
    }

}

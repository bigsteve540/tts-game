using RiptideNetworking;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ServerToClientRequest : ushort
{
    LoadDraft,
    AspectLocked,
    GenerateTilemap,
    GenerateDeploymentZones,
    SpawnAspect,
    AssignActiveAspect,
    ModifyAspectHealth
}
public enum ClientToServerRequest : ushort
{
    DraftInteract,
    DeploymentCompleted,
    CastAspectAbility
}

public class NetworkManager : MonoBehaviour
{
    private static NetworkManager instance;
    public static NetworkManager Instance
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

    private string ip = "94.8.185.225";
    private ushort port = 9009;

    public Client Client { get; private set; }
    private ActionQueue actionQueue;

    public int Ping { get; private set; }
    private DateTime requestTime;

    /// <summary>Encapsulates a method that handles a message from the server.</summary>
    /// <param name="message">The message that was received.</param>
    public delegate void MessageHandler(Message message);
    private Dictionary<ushort, MessageHandler> messageHandlers;

    private void Awake() { Instance = this; }
    private void FixedUpdate() { actionQueue.ExecuteAll(); }

    private void Start()
    {
        RiptideLogger.Initialize(Debug.Log, false);

        actionQueue = new ActionQueue();

        Client = new Client();
        Client.Connected += SuccessfulConnection;
        Client.ConnectionFailed += FailedToConnect;
        Client.MessageReceived += MessageReceived;
        Client.ClientDisconnected += ClientDisconnected;
        Client.Disconnected += LocalDisconnect;
    }
    private void OnApplicationQuit()
    {
        LocalDisconnect(null, new EventArgs());
        Client.Disconnect();
    }

    public void Connect()
    {
        messageHandlers = new Dictionary<ushort, MessageHandler>()
        {
            { (ushort)ServerToClientRequest.LoadDraft, ClientHandle.LoadDraft },
            { (ushort)ServerToClientRequest.AspectLocked, ClientHandle.AspectLocked },
            { (ushort)ServerToClientRequest.GenerateTilemap, ClientHandle.GenerateTilemap },
            { (ushort)ServerToClientRequest.GenerateDeploymentZones, ClientHandle.GenerateDeploymentZones },
            { (ushort)ServerToClientRequest.SpawnAspect, ClientHandle.SpawnAspect },
            { (ushort)ServerToClientRequest.AssignActiveAspect, ClientHandle.AssignActiveAspect }
        };
        Client.Connect(ip, port, actionQueue);
    }

    private void SuccessfulConnection(object _sender, EventArgs _e)
    {
        StartCoroutine(UpdatePing());
    }

    private IEnumerator UpdatePing()
    {
        while (true)
        {
            Ping = Mathf.RoundToInt(Client.SmoothRTT * 0.5f);
            yield return new WaitForSecondsRealtime(0.25f);
        }
    }

    private void FailedToConnect(object _sender, EventArgs _e)
    {
        //UIManager.Singleton.BackToMain();
    }

    private void MessageReceived(object _sender, ClientMessageReceivedEventArgs _e)
    {
        messageHandlers[_e.Message.GetUShort()](_e.Message);
    }

    private void ClientDisconnected(object _sender, ClientDisconnectedEventArgs _e)
    {
        //Destroy(Player.list[e.Id].gameObject);
    }

    private void LocalDisconnect(object _sender, EventArgs _e)
    {
        StopCoroutine(UpdatePing());
        Client.Connected -= SuccessfulConnection;
        Client.ConnectionFailed -= FailedToConnect;
        Client.MessageReceived -= MessageReceived;
        Client.ClientDisconnected -= ClientDisconnected;
        Client.Disconnected -= LocalDisconnect;
    }
}

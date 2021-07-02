using RiptideNetworking;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ServerToClientRequest : ushort
{
    TestPingReceived = 1,
    LoadDraft,
    AspectLocked,
    GenerateTilemap,
    GenerateDeploymentZones,
    SpawnAspect,
    ModifyAspectHealth
}
public enum ClientToServerRequest : ushort
{
    TestPing = 1,
    DraftInteract,
    DeploymentCompleted
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

    private string ip = "94.15.186.228";
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
            { (ushort)ServerToClientRequest.TestPingReceived, ClientHandle.TestPingReceived },
            { (ushort)ServerToClientRequest.LoadDraft, ClientHandle.LoadDraft },
            { (ushort)ServerToClientRequest.AspectLocked, ClientHandle.AspectLocked },
            { (ushort)ServerToClientRequest.GenerateTilemap, ClientHandle.GenerateTilemap },
            { (ushort)ServerToClientRequest.GenerateDeploymentZones, ClientHandle.GenerateDeploymentZones },
            { (ushort)ServerToClientRequest.SpawnAspect, ClientHandle.SpawnAspect }
        };
        Client.Connect(ip, port, actionQueue);
    }

    public void GetPing(long _serverTicks) //TODO: replace with riptideRTT
    {
        DateTime actualTime = DateTime.Now;
        DateTime serverTime = new DateTime(_serverTicks);

        float clientToServerRTT = (float)(actualTime.Subtract(requestTime).TotalMilliseconds * 0.5f);
        float serverToClientTT = (float)actualTime.Subtract(serverTime).TotalMilliseconds;

        float syncError = clientToServerRTT - serverToClientTT;

        Ping = Mathf.RoundToInt(clientToServerRTT - syncError);

    }

    private void SuccessfulConnection(object _sender, EventArgs _e)
    {
        StartCoroutine(TestPing());
    }

    private IEnumerator TestPing()
    {
        while (true)
        {
            Client.Send(Message.Create(MessageSendMode.unreliable, (ushort)ClientToServerRequest.TestPing));
            requestTime = DateTime.Now;
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
        StopCoroutine(TestPing());
        Client.Connected -= SuccessfulConnection;
        Client.ConnectionFailed -= FailedToConnect;
        Client.MessageReceived -= MessageReceived;
        Client.ClientDisconnected -= ClientDisconnected;
        Client.Disconnected -= LocalDisconnect;
    }
}

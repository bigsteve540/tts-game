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
    SpawnAspect,
    ModifyAspectHealth
}
public enum ClientToServerRequest : ushort
{
    TestPing = 1,
    DraftInteract
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
    private DateTime timeofPingTest;

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
            { (ushort)ServerToClientRequest.SpawnAspect, ClientHandle.SpawnAspect }
        };
        Client.Connect(ip, port, actionQueue);
    }

    public void GetPing()
    {
        Ping = Mathf.RoundToInt((float)DateTime.Now.Subtract(timeofPingTest).TotalMilliseconds * 0.5f);
    }

    private void SuccessfulConnection(object sender, EventArgs e)
    {
        StartCoroutine(TestPing());
    }

    private IEnumerator TestPing()
    {
        while (true)
        {
            Client.Send(Message.Create(MessageSendMode.unreliable, (ushort)ClientToServerRequest.TestPing));
            timeofPingTest = DateTime.Now;
            yield return new WaitForSecondsRealtime(0.25f);
        }
    }

    private void FailedToConnect(object sender, EventArgs e)
    {
        //UIManager.Singleton.BackToMain();
    }

    private void MessageReceived(object sender, ClientMessageReceivedEventArgs e)
    {
        messageHandlers[e.Message.GetUShort()](e.Message);
    }

    private void ClientDisconnected(object sender, ClientDisconnectedEventArgs e)
    {
        //Destroy(Player.list[e.Id].gameObject);
    }

    private void LocalDisconnect(object sender, EventArgs e)
    {
        StopCoroutine(TestPing());
        Client.Connected -= SuccessfulConnection;
        Client.ConnectionFailed -= FailedToConnect;
        Client.MessageReceived -= MessageReceived;
        Client.ClientDisconnected -= ClientDisconnected;
        Client.Disconnected -= LocalDisconnect;
    }
}

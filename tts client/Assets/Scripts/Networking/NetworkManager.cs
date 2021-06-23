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
    private static NetworkManager singleton;
    public static NetworkManager Singleton
    {
        get => singleton;
        private set
        {
            if (singleton == null)
                singleton = value;
            else if (singleton != value)
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

    /// <summary>Encapsulates a method that handles a message from the server.</summary>
    /// <param name="message">The message that was received.</param>
    public delegate void MessageHandler(Message message);
    private Dictionary<ushort, MessageHandler> messageHandlers;

    private void Awake() { Singleton = this; }
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

    private void SuccessfulConnection(object sender, EventArgs e)
    {
        Debug.Log("IT WORKS IT FUCKING WORKS OMG HOLY SHIT");
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
        //UIManager.Singleton.BackToMain();
    }
}

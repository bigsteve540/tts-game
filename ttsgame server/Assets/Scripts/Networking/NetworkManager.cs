using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RiptideNetworking;

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

    private ushort port = 9009;
    private ushort maxClientCount = 2; //TODO: set this using gamesettings values

    public Server Server { get; private set; }
    private ActionQueue actionQueue;

    /// <summary>Encapsulates a method that handles a message from a certain client.</summary>
    /// <param name="fromClient">The client from whom the message was received.</param>
    /// <param name="message">The message that was received.</param>
    public delegate void MessageHandler(ServerClient fromClient, Message message);
    private Dictionary<ushort, MessageHandler> messageHandlers;

    private void Awake() { Singleton = this; }
    private void FixedUpdate() { actionQueue.ExecuteAll(); }

    private void Start()
    {
        QualitySettings.vSyncCount = 0;
        Application.targetFrameRate = 30;

#if UNITY_EDITOR
        RiptideLogger.Initialize(Debug.Log, false);
#else
        Console.Title = "Server";
        Console.Clear();
        Application.SetStackTraceLogType(LogType.Log, StackTraceLogType.None);
        RiptideLogger.Initialize(Debug.Log, true);
#endif

        messageHandlers = new Dictionary<ushort, MessageHandler>()
        {
            { (ushort)ClientToServerRequest.TestPing, ServerHandle.TestPing },
            { (ushort)ClientToServerRequest.DraftInteract, ServerHandle.DraftInteract },
        };

        actionQueue = new ActionQueue();

        Server = new Server();
        Server.ClientConnected += NewPlayerConnected;
        Server.MessageReceived += MessageReceived;
        Server.ClientDisconnected += PlayerLeft;

        Server.Start(port, maxClientCount, actionQueue);
    }


    private void OnApplicationQuit()
    {
        Server.Stop();

        Server.ClientConnected -= NewPlayerConnected;
        Server.MessageReceived -= MessageReceived;
        Server.ClientDisconnected -= PlayerLeft;
    }

    private void NewPlayerConnected(object sender, ServerClientConnectedEventArgs e)
    {
        Debug.Log("Wow is that a PLAYER OMG WOW");
    }

    private void MessageReceived(object sender, ServerMessageReceivedEventArgs e)
    {
        messageHandlers[e.Message.GetUShort()](e.FromClient, e.Message);
    }

    private void PlayerLeft(object sender, ClientDisconnectedEventArgs e)
    {
        //Destroy(Player.List[e.Id].gameObject);
    }
}

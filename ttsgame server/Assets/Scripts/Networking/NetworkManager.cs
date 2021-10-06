using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;
using RiptideNetworking;

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

    private ushort port = 9009;
    private ushort maxClientCount;

    public Server Server { get; private set; }
    private ActionQueue actionQueue;

    /// <summary>Encapsulates a method that handles a message from a certain client.</summary>
    /// <param name="fromClient">The client from whom the message was received.</param>
    /// <param name="message">The message that was received.</param>
    public delegate void MessageHandler(ServerClient fromClient, Message message);
    private Dictionary<ushort, MessageHandler> messageHandlers;

    public void Awake() { Instance = this; }
    private void FixedUpdate() { actionQueue.ExecuteAll(); }

    public void Start()
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
            { (ushort)ClientToServerRequest.DraftInteract, ServerHandle.DraftInteract },
            { (ushort)ClientToServerRequest.DeploymentCompleted, ServerHandle.DeploymentCompleted },
            { (ushort)ClientToServerRequest.CastAspectAbility, ServerHandle.CastAspectAbility }
        };

        actionQueue = new ActionQueue();

        GameSettings.Init(GameMode.Standard);

        maxClientCount = (ushort)GameSettings.TotalPlayers;

        Server = new Server();
        Server.ClientConnected += NewPlayerConnected;
        Server.MessageReceived += MessageReceived;
        Server.ClientDisconnected += PlayerLeft;

        Server.Start(port, maxClientCount, actionQueue);
    }

    private void OnApplicationQuit() { CloseServer(); }

    private void NewPlayerConnected(object _sender, ServerClientConnectedEventArgs _e)
    {
        new Player(_e.Client.Id);
        if (Server.ClientCount == maxClientCount)
        {
            GameManager.GameState = GameState.Ban;
            Server.SendToAll(Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.LoadDraft));
            DraftManager.Init();
            return;
        }
    }

    private void MessageReceived(object _sender, ServerMessageReceivedEventArgs _e)
    {
        messageHandlers[_e.Message.GetUShort()](_e.FromClient, _e.Message);
    }

    private void PlayerLeft(object _sender, ClientDisconnectedEventArgs _e)
    {
        Player.AllActive[_e.Id].Wipe();
        Player.AllActive.Remove(_e.Id);
    }

    public void CloseServer()
    {
        Server.Stop();

        Server.ClientConnected -= NewPlayerConnected;
        Server.MessageReceived -= MessageReceived;
        Server.ClientDisconnected -= PlayerLeft;
    }
}

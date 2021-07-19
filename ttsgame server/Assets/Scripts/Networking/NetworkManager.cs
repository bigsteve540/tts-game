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

    private void Awake() { Instance = this; }
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

        //Ability casting test sample
        //Tilemap.Init(GameMaps.TestMap);

        //Player p = new Player(1);
        //p.AddAspect("A000", new Vector2(0, 0));
        //p.AddAspect("A001", new Vector2(0, 1));

        //Aspect[] testers = new Aspect[]
        //{
        //    new Aspect(0, "A000", new Vector2(0, 0));
        //Aspect a = new Aspect(0, "A001", new Vector2(0, 3));
        //    new Aspect(0, "A001", new Vector2(1, 5))
        //};

        //Timeline.Progress();
        //(p.Aspects[0] as IAbilityCasterBehaviour).CastAbility(Message.Create(MessageSendMode.reliable, 99));
        //Timeline.Progress();
        //a.MoveToTile(0, 8);

    }

    private void OnApplicationQuit()
    {
        CloseServer();
    }

    private void NewPlayerConnected(object sender, ServerClientConnectedEventArgs e)
    {
        if (Server.ClientCount == maxClientCount)
        {
            GameManager.GameState = GameState.Ban;
            Server.SendToAll(Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.LoadDraft));
            DraftManager.Init();
        }
        new Player(e.Client.Id);
    }

    private void MessageReceived(object sender, ServerMessageReceivedEventArgs e)
    {
        messageHandlers[e.Message.GetUShort()](e.FromClient, e.Message);
    }

    private void PlayerLeft(object sender, ClientDisconnectedEventArgs e)
    {
        Player.AllActive[e.Id].Wipe();
        Player.AllActive.Remove(e.Id);
    }

    public void CloseServer()
    {
        Server.Stop();

        Server.ClientConnected -= NewPlayerConnected;
        Server.MessageReceived -= MessageReceived;
        Server.ClientDisconnected -= PlayerLeft;
    }
}

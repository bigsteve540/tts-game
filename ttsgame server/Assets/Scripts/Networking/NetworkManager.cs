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
//FIXME: update client to Riptide v0.7.0
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

    public void Awake() { Instance = this; }
    private void FixedUpdate() { Server.Tick(); }

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

        GameSettings.Init(GameMode.Standard);

        maxClientCount = (ushort)GameSettings.TotalPlayers;

        Server = new Server();
        Server.ClientConnected += NewPlayerConnected;
        Server.ClientDisconnected += PlayerLeft;

        Server.Start(port, maxClientCount);
        Tilemap.Init(GameMaps.TestMap);

        Aspect a = new Aspect(-99, "A000", new Vector2(0, 0));
        Movement.MoveEntityAlongPath(a, new Game.Pathing.Path(a.MapPosition, new Vector2(9, 9), InterruptEventType.Movement_Start | InterruptEventType.Movement_Passby));
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

    private void PlayerLeft(object _sender, ClientDisconnectedEventArgs _e)
    {
        Player.AllActive[_e.Id].Wipe();
        Player.AllActive.Remove(_e.Id);
    }

    public void CloseServer()
    {
        Server.Stop();

        Server.ClientConnected -= NewPlayerConnected;
        Server.ClientDisconnected -= PlayerLeft;
    }
}

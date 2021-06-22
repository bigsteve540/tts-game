using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    #region Singleton
    public static GameManager Instance;
    void OnEnable()
    {
        if(Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
    }
    #endregion

    public static int ActivePlayerID { get; private set; } = 0; //0 indicates not set
    public static string[] ActiveBannedAspects;

    public static Dictionary<int, IAspectBehaviour> Entities = new Dictionary<int, IAspectBehaviour>();
    public static Dictionary<string, Type> AspectCodes = new Dictionary<string, Type>
    {
        { "A000", typeof(DummyAspect) },
        { "A001", typeof(GeneviveAspect)},
        { "A002", typeof(KrakAspect) }
    };

    public GameObject[] tileVisuals;

    private static int IDCounter = 0;
    private static int pickCounter = 0;
    private static int banCounter = 0;

    // Start is called before the first frame update
    public static int RegisterEntity(IAspectBehaviour _entity)
    {
        Entities.Add(IDCounter, _entity);
        _entity.Turn = new AspectTurn(_entity, _entity.BaseInitiative, false);
        return IDCounter++;
    }

    public static void AssignNextActivePlayer()
    {
        if (ActivePlayerID == 0 || ++ActivePlayerID > GameSettings.TotalPlayers)
            ActivePlayerID = 1;
        Debug.Log($"Active player is {ActivePlayerID}");
    }

    public static void AssignAspect(string _aspectCode) //TODO: make this check that bans are not duplicated after there are enough aspects to allow for effective banning
    {
        if (Server.State != ServerState.BanPhase && Server.State != ServerState.PickPhase)
            return;

        switch (Server.State)
        {
            case ServerState.BanPhase:
                ActiveBannedAspects[banCounter] = _aspectCode;
                banCounter++;
                Debug.Log($"Successfully banned {_aspectCode}");
                ServerSend.AspectLocked(true, _aspectCode);
                if (banCounter >= GameSettings.TotalBans)
                    Server.State = ServerState.PickPhase;
                break;
            case ServerState.PickPhase:
                Server.Clients[ActivePlayerID].AddSelectedAspect(_aspectCode);
                ServerSend.AspectLocked(false, _aspectCode);
                if (pickCounter >= GameSettings.TotalAspects)
                    Server.State = ServerState.Deployment;
                break;
        }
    }

    void Start()
    {
        Tilemap.Init(GameMaps.TestMap); //TODO: move this after drafting phase is complete
        Server.Start(9009, GameMode.Standard);

        //IAspectBehaviour gen = new GeneviveAspect(new Vector2(0, 1));
        //IAspectBehaviour d = new DummyAspect();

        //GameEventSystem.SubInterrupt(TestInterrupt); // <-- interrupt sample   

        //Timeline.Progress();
        //Timeline.Progress();
        //d.MoveToTile(0, 9);
    }

    public void DrawMap(int _sizeX, int _sizeY) //TODO: remove this bit post testing
    {
        for (int x = 0; x < _sizeX; x++)
        {
            for (int y = 0; y < _sizeY; y++)
            {
                Instantiate(tileVisuals[(int)Tilemap.GetTile(x, y)], new Vector3(x, 0, y), Quaternion.identity);
            }
        }
    }

    //private bool TestInterrupt(int _IDofInteruppted, TimelineEventType[] _types)
    //{
    //    if (!_types.Contains(TimelineEventType.Damage))
    //        return false;

    //    //do whatever the interrupt does
    //    SystemLog.Print("Interrupted");
    //    return true;
    //}
}

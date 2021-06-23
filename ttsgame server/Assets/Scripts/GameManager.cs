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

    public static Dictionary<int, IAspectBehaviour> Entities = new Dictionary<int, IAspectBehaviour>();
    public static Dictionary<string, Type> AspectCodes = new Dictionary<string, Type>
    {
        { "A000", typeof(DummyAspect) },
        { "A001", typeof(GeneviveAspect)},
        { "A002", typeof(KrakAspect) }
    };

    public GameObject[] tileVisuals;

    // Start is called before the first frame update
    private static int IDCounter = 0;
    public static int RegisterEntity(IAspectBehaviour _entity)
    {
        Entities.Add(IDCounter, _entity);
        _entity.Turn = new AspectTurn(_entity, _entity.BaseInitiative, false);
        return IDCounter++;
    }

    void Start()
    {
        GameSettings.Init(GameMode.Standard);
        Tilemap.Init(10, 10/*, MapType.*/);

        Server.Start(9009); //maybe can do drafting right before the game starts on the same server instance?

        //IAspectBehaviour gen = new GeneviveAspect(new Vector2(0, 1));
        //IAspectBehaviour d = new DummyAspect();

        //GameEventSystem.SubInterrupt(TestInterrupt); // <-- interrupt sample   

        //Timeline.Progress();
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

    //private bool TestInterrupt(TimelineEventType[] _types)
    //{
    //    if (!_types.Contains(TimelineEventType.Damage))
    //        return false;

    //    //do whatever the interrupt does
    //    SystemLog.Print("Interrupted");
    //    return true;
    //}
}

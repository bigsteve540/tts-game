﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

//FOR LATER: how to generate an aspect
// Activator.CreateInstance(GameManager.AspectCodes[ASPECT_CODE], PLAYER_ID, MAP_LOCATION) as IAspectBehaviour;

public enum GameState { Prep, Ban, Pick, Deploy, Play, Post }

public class GameManager : MonoBehaviour
{
    //SINGLETON CAN BE REMOVED POST REQUIREMENT OF VISUALISATION
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

    public static GameState GameState = GameState.Prep;
    public static Dictionary<int, IAspectBehaviour> Entities = new Dictionary<int, IAspectBehaviour>();

    public GameObject[] tileVisuals;

    private static int IDCounter = 0;

    // Start is called before the first frame update
    public static int RegisterEntity(IAspectBehaviour _entity)
    {
        Entities.Add(IDCounter, _entity);
        _entity.Turn = new AspectTurn(_entity, _entity.BaseInitiative, false);
        return IDCounter++;
    }

    void Start()
    {
        //Server.Start(9009, GameMode.Standard);

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
    //    Debug.Log("Interrupted");
    //    return true;
    //}
}

using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public enum GameState { Prep, Ban, Pick, Deploy, Play, Post }

public class GameManager : MonoBehaviour
{
    //FIXME: SINGLETON CAN BE REMOVED POST REQUIREMENT OF VISUALISATION
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
    public static IAspectBehaviour ActiveAspect = null;

    public static Dictionary<int, IAspectBehaviour> Entities = new Dictionary<int, IAspectBehaviour>();

    public GameObject[] tileVisuals;
    public GameObject deployVisuals;

    private static int IDCounter = 0;

    public static int RegisterEntity(IAspectBehaviour _entity)
    {
        Entities.Add(IDCounter, _entity);
        _entity.Turn = new AspectTurn(_entity, _entity.BaseInitiative, false);
        return IDCounter++;
    }

    public void DrawMap(int _sizeX, int _sizeY) //TODO: remove this bit post testing
    {
        for (int y = 0; y < _sizeY; y++)
        {
            for (int x = 0; x < _sizeX; x++)
            {
                Instantiate(tileVisuals[(int)Tilemap.GetTile(x, y)], new Vector3(x, 0, y), Quaternion.identity);
            }
        }
    }
    public void DrawDeployTile(int _playerID, int _x, int _y)
    {
        Instantiate(deployVisuals, new Vector3(_x, 1f, _y), Quaternion.identity);
    }
}

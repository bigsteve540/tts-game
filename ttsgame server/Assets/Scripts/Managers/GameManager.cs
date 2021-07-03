using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public enum GameState { Prep, Ban, Pick, Deploy, Play, Post }

public class GameManager : MonoBehaviour
{
    public static GameState GameState = GameState.Prep;
    public static IAspectBehaviour ActiveAspect = null;

    public static Dictionary<int, IAspectBehaviour> Entities = new Dictionary<int, IAspectBehaviour>();

    private static int IDCounter = 0;

    public static int RegisterEntity(IAspectBehaviour _entity)
    {
        Entities.Add(IDCounter, _entity);
        _entity.Turn = new AspectTurn(_entity, _entity.BaseInitiative, false);
        return IDCounter++;
    }
}

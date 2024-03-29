﻿using System.Collections.Generic;
using UnityEngine;

public enum GameState { Prep, Ban, Pick, Deploy, Play, Post }

//TODO: need to send timeline snapshot to clients at some point
public class GameManager : MonoBehaviour //TODO: prolly doesnt need to be monobehaviour lol
{
    public static GameState GameState = GameState.Prep;
    public static IEntityBehaviour ActiveEntity = null;

    public static Dictionary<int, IEntityBehaviour> Entities { get; private set; } = new Dictionary<int, IEntityBehaviour>();

    private static int IDCounter = 0;

    public static int RegisterEntity(IEntityBehaviour _entity)
    {
        Entities.Add(IDCounter, _entity);
        _entity.Turn = new AspectTurn(_entity, _entity.BaseInitiative);
        return IDCounter++;
    }
}

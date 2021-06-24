using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Utilities
{
    public static Dictionary<string, Type> AspectTypeFromCode = new Dictionary<string, Type>
    {
        { "A000", typeof(DummyAspect) },
        { "A001", typeof(GeneviveAspect)},
        { "A002", typeof(KrakAspect) }
    };

    private static float GRADIENT = 8 / 360;
    private static List<Node> pathCache = new List<Node>();
    public static bool TargetWithinRange(Vector2 _origin, Vector2 _target, int _maxDist)
    {
        pathCache = Tilemap.GeneratePathToTile(_origin, _target);
        if (pathCache == null || pathCache.Count > _maxDist)
            return false;
        return true;
    }
    public static bool TargetWithinRange(Vector2 _origin, Vector2 _target, int _maxDist, out List<Node> _usedPath)
    {
        pathCache = Tilemap.GeneratePathToTile(_origin, _target);
        if (pathCache == null || pathCache.Count > _maxDist)
        {
            _usedPath = null;
            return false;
        }
        _usedPath = new List<Node>(pathCache);
        return true;
    }
    public static int ConvertDegToCard(float _input)
    {
        return Mathf.RoundToInt(GRADIENT * _input);
    }
    public static void GenericAspectMovement(IAspectBehaviour _aspect, int _newX, int _newY)//TODO: need to calculate cost to move to desired tile
    {
        if (GameEventSystem.CheckEventInterrupted(_aspect.AspectID, new TimelineEventType[1] { TimelineEventType.Movement }))
            return;

        Tilemap.SetTileToDefault((int)_aspect.MapPosition.x, (int)_aspect.MapPosition.y);

        ConvertDegToCard(Vector2.Angle(Vector2.up, _aspect.MapPosition - new Vector2(_newX, _newY)));
        _aspect.MapPosition = new Vector2(_newX, _newY);

        Tilemap.ChangeTileType((int)_aspect.MapPosition.x, (int)_aspect.MapPosition.y, TileType.Impassable);
    }
}

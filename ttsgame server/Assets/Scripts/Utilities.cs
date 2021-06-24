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
}

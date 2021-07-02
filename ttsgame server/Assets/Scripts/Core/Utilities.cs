using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct InterruptData
{
    public int TriggererID { get; }
    public InterruptEventType[] InterruptableTypes { get; }

    public object[] ExtraInterruptData { get; }

    public bool SearchTypesFor(params InterruptEventType[] _types)
    {
        for (int i = 0; i < _types.Length; i++)
            for (int j = 0; j < InterruptableTypes.Length; j++)
                if (_types[i] == InterruptableTypes[j])
                    return true;
        return false;
    }

    public InterruptData(int _triggererID, InterruptEventType[] _interruptTypes, params object[] _extraData)
    {
        TriggererID = _triggererID;
        InterruptableTypes = _interruptTypes;
        ExtraInterruptData = _extraData.Length > 0 ? _extraData : null;
    }
}

public static class Utilities
{
    public static Dictionary<string, Type> AspectTypeFromCode = new Dictionary<string, Type>
    {
        { "A000", typeof(DummyAspect) },
        { "A001", typeof(GeneviveAspect)},
        { "A002", typeof(KrakAspect) },
        { "A003", typeof(JassepiAspect) },
        { "A004", typeof(ShiyoAspect) }
    };

    private static float gradient = 8 / 360;

    private static InterruptEventType[] interruptEventCache = new InterruptEventType[2] { InterruptEventType.Movement_Start, InterruptEventType.Movement_Passby };

    public static bool TargetWithinRange(Vector2 _origin, Vector2 _target, int _maxDist)
    {
        List<Node> path = new List<Node>();
        path.Clear();
        path = Tilemap.GeneratePathToTile(_origin, _target);
        if (path == null || path.Count > _maxDist)
            return false;
        return true;
    }
    public static bool TargetWithinRange(Vector2 _origin, Vector2 _target, int _maxDist, out List<Node> _usedPath)
    {
        List<Node> path = new List<Node>();
        path.Clear();
        path = Tilemap.GeneratePathToTile(_origin, _target);
        if (path == null || path.Count > _maxDist)
        {
            _usedPath = null;
            return false;
        }
        _usedPath = new List<Node>(path);
        return true;
    }

    public static uint ConvertDegToCardinal(float _input)
    {
        return (uint)Mathf.RoundToInt(gradient * _input);
    }

    public static void GenericAspectMovement(IAspectBehaviour _aspect, int _newX, int _newY)
    {
        Vector2 newPos = new Vector2(_newX, _newY);

        List<Node> path = Tilemap.GeneratePathToTile(_aspect.MapPosition, newPos);
        int pathCost = GetInitiativeCostForPath(path);

        InterruptData data = new InterruptData(_aspect.AspectID, interruptEventCache, pathCost, path);

        if (GameEventSystem.CheckEventInterrupted(data) || pathCost > _aspect.CurrentActionPoints)
            return;

        Tilemap.SetTileToDefault((int)_aspect.MapPosition.x, (int)_aspect.MapPosition.y);

        _aspect.FacingDirection = ConvertDegToCardinal(Vector2.Angle(Vector2.up, _aspect.MapPosition - newPos));
        _aspect.MapPosition = newPos;

        Tilemap.ChangeTileType((int)_aspect.MapPosition.x, (int)_aspect.MapPosition.y, TileType.Impassable);
    }

    public static uint GenericAspectModifyHealth(IAspectBehaviour _target, HealthModifiedEventInfo _hpModData, bool _ignoreEffectors = false) 
    {
        InterruptData interruptData = new InterruptData(_target.AspectID, new InterruptEventType[1] { Mathf.Sign(_hpModData.Value) == -1 ? InterruptEventType.Damage : InterruptEventType.Heal }, _hpModData);

        if (GameEventSystem.CheckEventInterrupted(interruptData)) //TODO: should probably make it so interruption can also effect _hpmoddata 
            return _target.CurrentHP;

        if (!_ignoreEffectors)
            GameEventSystem.CallEvent(_hpModData); //instead of calling a separate method

        float prevHP = _target.CurrentHP;
        float val = 0f;

        switch (_hpModData.Type)
        {
            case StatModifierType.Flat:
                val = (int)_hpModData.Value;
                break;
            case StatModifierType.Max:
                val = (int)(_target.MaxHP * _hpModData.Value);
                break;
            case StatModifierType.Missing:
                val = (int)((_target.MaxHP - _target.CurrentHP) * _hpModData.Value);
                break;
            case StatModifierType.Current:
                val = (int)(_target.CurrentHP * _hpModData.Value);
                break;
        }

        if (_hpModData.IsDamage())
            val = Mathf.Clamp((val * -1) - _target.CurrentArmor, 0f, val * -1) * -1;

        return (uint)Mathf.Clamp(_target.CurrentHP + val, 0f, _target.MaxHP);
    }

    public static int GetInitiativeCostForPath(List<Node> _path)
    {
        int total = 0;
        for (int i = 0; i < _path.Count - 1; i++)
            for (int j = 0; j < _path[i].Edges.Length; j++)
                if (_path[i].Edges[j] == _path[i + 1])
                    total += j % 2 == 0 ? 5 : 10;
        return total;
    }
    public static int GetInitiativeCostForPath(Vector2 _origin, Vector2 _goal)
    {
        List<Node> path = Tilemap.GeneratePathToTile(_origin, _goal);
        int total = 0;
        for (int i = 0; i < path.Count - 1; i++)
            for (int j = 0; j < path[i].Edges.Length; j++)
                if (path[i].Edges[j] == path[i + 1])
                    total += j % 2 == 0 ? 5 : 10;
        return total;
    }
}

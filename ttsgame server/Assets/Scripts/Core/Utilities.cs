using RiptideNetworking;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using System.Linq;

public struct InterruptData
{
    public int TriggererID { get; }
    public InterruptEventType InterruptFlags { get; }

    public dynamic[] ExtraInterruptData { get; }

    public InterruptData(int _triggererID, InterruptEventType _interruptTypes, params object[] _extraData) //set flags with | operator
    {
        TriggererID = _triggererID;
        InterruptFlags = _interruptTypes;
        ExtraInterruptData = _extraData.Length > 0 ? _extraData : null;
    }
}

public static class Utilities
{
    private const float GRADIENT = 8f / 360f;

    public static bool GetChebyshevDistance(Vector2 _origin, Vector2 _target, uint _maxDist)
    {
        uint dist = (uint)Mathf.Max(Mathf.Abs(_target.x - _origin.x), Mathf.Abs(_target.y - _origin.x));
        if (dist > _maxDist)
            return false;
        return true;
    }
    public static bool GetChebyshevDistance(Vector2 _origin, Vector2 _target, uint _maxDist, out uint _distToTarget)
    {
        uint dist = (uint)Mathf.Max(Mathf.Abs(_target.x - _origin.x), Mathf.Abs(_target.y - _origin.y));
        if (dist > _maxDist)
        {
            _distToTarget = 0;
            return false;
        }
        _distToTarget = dist;
        return true;
    }

    public static uint ConvertToCardinal(float _degrees){ return (uint)Mathf.RoundToInt(GRADIENT * _degrees); }
}

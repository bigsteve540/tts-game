using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class GameEventInfo
{

}

public enum StatModifierType { Flat, Max, Missing, Current }
public class HealthModifiedEventInfo : GameEventInfo
{
    public int CasterID { get; }
    public object Source { get; }
    public int TargetID { get; }

    public StatModifierType Type;
    public float Value; //unsigned value; negative for damage, positive for healing

    public bool IsDamage()
    {
        return Mathf.Sign(Value) == -1;
    }

    public HealthModifiedEventInfo(int _casterID, int _targetID, object _source, StatModifierType _type, float _value)
    {
        CasterID = _casterID;
        Source = _source;
        TargetID = _targetID;
        Type = _type;
        Value = _value;
    }
}

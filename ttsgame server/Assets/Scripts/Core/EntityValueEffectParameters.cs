using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using InterruptParameters;

public class EntityValueEffectParameters : IMeterEffectParameters
{
    public int CasterID { get; private set; }
    public object Source { get; private set; }

    public EntityValueType MeterType { get; private set; }
    public float Value; 

    public EntityValueEffectParameters(int _casterID, object _source, EntityValueType _meterType, float _value)
    {
        CasterID = _casterID;
        Source = _source;
        MeterType = _meterType;
        Value = _value;
    }
}

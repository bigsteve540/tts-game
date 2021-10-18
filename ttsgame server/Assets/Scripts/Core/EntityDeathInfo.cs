using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnMeterModified : GameEventInfo
{
    public int EntityID { get; }
    public EntityValueType MeterType { get; }
    public ValueEffector Cause { get; }

    public int PreviousValue { get; }
    public int NewValue { get; }

    public OnMeterModified(int _entityID, EntityValueType _meterType, ValueEffector _cause, int _prev, int _new)
    {
        EntityID = _entityID;
        MeterType = _meterType;
        Cause = _cause;
        PreviousValue = _prev;
        NewValue = _new;
    }
}

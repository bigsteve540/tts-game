using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnMeterEmpty : GameEventInfo
{
    public int EntityID { get; }
    public EntityValueType MeterType { get; }
    public ValueEffector EmptyCause { get; }

    public OnMeterEmpty(int _entityID, EntityValueType _meterType, ValueEffector _emptyCause)
    {
        EntityID = _entityID;
        MeterType = _meterType;
        EmptyCause = _emptyCause;
    }
}

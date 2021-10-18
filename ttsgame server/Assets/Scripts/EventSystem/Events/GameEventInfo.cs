using InterruptParameters;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//TODO: try to convert gameventsystem to use gameeventinfo as an interface instead of a class. inheritance yucky @A@
public abstract class GameEventInfo { }
public abstract class ValueEffectEventInfo : GameEventInfo
{
    public EntityValue Effector;
    public int Value;

    public ValueEffectEventInfo(EntityValue _effector, int _value)
    {
        Effector = _effector;
        Value = _value;
    }
}
public class MitigationEventInfo : ValueEffectEventInfo
{
    public MitigationType Type { get; }
    public MitigationEventInfo(MitigationType _type, EntityValue _effector, int _value) : base(_effector, _value) { Type = _type; }
}

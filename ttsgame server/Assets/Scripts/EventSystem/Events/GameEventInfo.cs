using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class GameEventInfo { }
public abstract class HealthModEventInfo : GameEventInfo
{
    public int Value;
    public HealthModEventInfo(int _value) { Value = _value; }
}
public class MitigationEventInfo : HealthModEventInfo
{
    public MitigationType Type { get; }
    public MitigationEventInfo(MitigationType _type, int _value) : base(_value) { Type = _type; }
}

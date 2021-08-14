using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class GameEventInfo
{

}

public abstract class HealthModEventInfo : GameEventInfo
{
    public int Value;
    public HealthModEventInfo(int _value) { Value = _value; }
}
public class PremitEventInfo : HealthModEventInfo { public PremitEventInfo(int _value) : base(_value) { } }
public class PostmitEventInfo : HealthModEventInfo { public PostmitEventInfo(int _value) : base(_value) { } }

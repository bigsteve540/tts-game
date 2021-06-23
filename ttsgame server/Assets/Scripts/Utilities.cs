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
}

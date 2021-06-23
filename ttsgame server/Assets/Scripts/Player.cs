using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player
{
    public static Dictionary<ushort, Player> List { get; private set; } = new Dictionary<ushort, Player>();
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player
{
    public static Dictionary<ushort, Player> AllActive { get; private set; } = new Dictionary<ushort, Player>();

    public IAspectBehaviour[] Aspects;

    private int selfID = -1;
    private int aspectsIterator = 0;

    public Player(ushort _id)
    {
        AllActive.Add(_id, this);
        selfID = _id;
    }

    public void AddAspect(string _code, Vector2 _pos)
    {
        if (Aspects == null)
            Aspects = new IAspectBehaviour[GameSettings.AspectCountPerPlayer];

        if (aspectsIterator >= Aspects.Length)
            return;

        Aspects[aspectsIterator++] = new Aspect(selfID, selfID, _code, _pos);
        Debug.Log($"Generated {Aspects[aspectsIterator -1].Name} for player {selfID}");
    }

    public Player Wipe()
    {
        //TODO: need to do appropriately cleanup of aspects and stuff
        return this;
    }
}

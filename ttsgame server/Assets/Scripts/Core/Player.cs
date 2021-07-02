using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player
{
    public static Dictionary<ushort, Player> AllActive { get; private set; } = new Dictionary<ushort, Player>();

    private int selfID = -1;
    private IAspectBehaviour[] aspects;
    private int aspectsIterator = 0;

    public Player(ushort _id)
    {
        AllActive.Add(_id, this);
        selfID = _id;
    }

    public void AddAspect(string _code, Vector2 _pos)
    {
        if (aspects == null)
            aspects = new IAspectBehaviour[GameSettings.AspectCountPerPlayer];

        if (aspectsIterator >= aspects.Length)
            return;

        aspects[aspectsIterator++] = Activator.CreateInstance(Utilities.AspectTypeFromCode[_code], selfID, _pos) as IAspectBehaviour;
        Debug.Log($"Generated {aspects[aspectsIterator -1].AspectName} for player {selfID}");
    }

    public Player Wipe()
    {
        //TODO: need to do appropriately cleanup of aspects and stuff
        return this;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player
{
    public static Dictionary<ushort, Player> AllActive { get; private set; } = new Dictionary<ushort, Player>();

    private IAspectBehaviour[] aspects;
    private int aspectsIterator = 0;

    public Player(ushort _id)
    {
        AllActive.Add(_id, this);
    }

    public void AddAspect(IAspectBehaviour _aspect)
    {
        if (aspectsIterator >= aspects.Length)
            return;

        if (aspects == null)
            aspects = new IAspectBehaviour[GameSettings.AspectCountPerPlayer];

        aspects[aspectsIterator++] = _aspect;
    }

    public Player Wipe()
    {
        //TODO: need to do appropriately cleanup of aspects and stuff
        return this;
    }
}

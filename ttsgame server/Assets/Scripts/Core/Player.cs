using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player
{
    public static Dictionary<ushort, Player> AllActive { get; private set; } = new Dictionary<ushort, Player>();

    public IEntityBehaviour[] Aspects;

    public int GroupID { get; private set; } = -1;
    private int aspectsIterator = 0;

    public Player(ushort _id)
    {
        AllActive.Add(_id, this);
        GroupID = _id;
    }

    public void AddAspect(string _code, Vector2 _pos)
    {
        if (Aspects == null)
            Aspects = new IEntityBehaviour[GameSettings.AspectCountPerPlayer];

        if (aspectsIterator >= Aspects.Length)
            return;

        Aspects[aspectsIterator++] = new Aspect(GroupID, _code, _pos);
    }

    public Player Wipe()
    {
        //TODO: need to do appropriately cleanup of aspects and stuff
        return this;
    }
}

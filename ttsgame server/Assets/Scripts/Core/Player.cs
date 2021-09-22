using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player
{
    public static Dictionary<ushort, Player> AllActive { get; private set; } = new Dictionary<ushort, Player>();

    public int GroupID { get; private set; } = -1;

    public AspectPool BanPool;
    public AspectPool PickPool;

    public IEntityBehaviour[] Aspects;

    public Player(ushort _id)
    {
        GroupID = _id;
        AllActive.Add(_id, this);

        BanPool = new AspectPool(GameSettings.BanCountPerPlayer);
        PickPool = new AspectPool(GameSettings.AspectCountPerPlayer);
    }

    public void AssignAspectsFromPool(List<Vector2> _positions)
    {
        Aspects = new IEntityBehaviour[GameSettings.AspectCountPerPlayer];

        for (int i = 0; i < GameSettings.AspectCountPerPlayer; i++)
        {
            Aspects[i] = new Aspect(GroupID, PickPool.GetDraftChoice(i), _positions[i]);
            Tilemap.GetTile(_positions[i]).PlaceEntity(Aspects[i]);
        }
    }


    public Player Wipe()
    {
        //TODO: need to do appropriate cleanup of aspects and stuff
        return this;
    }

    public class AspectPool
    {
        string[] drafts;

        int iteratorMax = 0;
        int draftIterator = 0;

        public void AssignDraftChoice(string _aspectCode) //TODO: make this check that bans are not duplicated after there are enough aspects to allow for effective banning
        {
            if (draftIterator >= iteratorMax)
                return;

            drafts[draftIterator++] = _aspectCode;
        }
        public string GetDraftChoice(int _index) { return drafts[_index]; }

        public AspectPool(int _poolCount)
        {
            iteratorMax = _poolCount;
            drafts = new string[iteratorMax];
        }
    }
}

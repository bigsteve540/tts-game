using System.Collections.Generic;
using UnityEngine;
using Abilities.Genevive;

public enum GameState { Prep, Ban, Pick, Deploy, Play, Post }

//TODO: need to send timeline snapshot to clients at some point
public class GameManager : MonoBehaviour //TODO: prolly doesnt need to be monobehaviour lol
{
    public static GameState GameState = GameState.Prep;
    public static IEntityBehaviour ActiveEntity = null;

    public static Dictionary<int, IEntityBehaviour> Entities { get; private set; } = new Dictionary<int, IEntityBehaviour>();

    private static int IDCounter = 0;

    public static int RegisterEntity(IEntityBehaviour _entity)
    {
        Entities.Add(IDCounter++, _entity);
        return IDCounter;
    }

    public static T GetEntity<T>(int _id)
    {
        if (Entities.ContainsKey(_id))
            return (T)Entities[_id];
        throw new KeyNotFoundException();
    }

    public static List<T> GetMultipleEntities<T>(params int[] _ids)
    {
        List<T> final = new List<T>();
        foreach (int id in _ids)
            if (Entities.ContainsKey(id))
                final.Add((T)Entities[id]);
        return final;
    }
}

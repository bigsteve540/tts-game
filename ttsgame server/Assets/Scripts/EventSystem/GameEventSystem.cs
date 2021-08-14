using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class GameEventSystem
{
    delegate void EventListener(GameEventInfo _info);

    static bool iterating = false;
    static Dictionary<System.Type, int> hashesToRemove = new Dictionary<System.Type, int>();
    static Dictionary<System.Type, Dictionary<int, EventListener>> hashesToAdd = new Dictionary<System.Type, Dictionary<int, EventListener>>();

    static Dictionary<System.Type, Dictionary<int, EventListener>> listeners = new Dictionary<System.Type, Dictionary<int, EventListener>>();
    static Dictionary<int, System.Func<InterruptData, bool>> interrupters = new Dictionary<int, System.Func<InterruptData, bool>>();

    public static void SubListener<T>(System.Action<T> _listener) where T : GameEventInfo
    {
        System.Type eventType = typeof(T);

        if(!listeners.ContainsKey(eventType) || listeners[eventType] == null)
            listeners[eventType] = new Dictionary<int, EventListener>();

        void wrapper(GameEventInfo _info) { _listener((T)_info); }

        if (iterating)
        {
            if (!hashesToAdd.ContainsKey(eventType) || hashesToAdd[eventType] == null)
                hashesToAdd[eventType] = new Dictionary<int, EventListener>();

            hashesToAdd[eventType].Add(_listener.GetHashCode(), wrapper);
        }
        else
            listeners[eventType].Add(_listener.GetHashCode(), wrapper);
    }
    public static void UnsubListener<T>(System.Action<T> _listener) where T : GameEventInfo
    {
        System.Type eventType = typeof(T);

        if (!listeners.ContainsKey(eventType) || listeners[eventType] == null)
            return;

        if (iterating)
            hashesToRemove.Add(eventType, _listener.GetHashCode());
        else
            listeners[eventType].Remove(_listener.GetHashCode());
    }

    public static void CallEvent<T>(T _info) where T : GameEventInfo
    {
        if(listeners.Count == 0 || listeners[typeof(T)] == null || listeners[typeof(T)].Count == 0)
            return;

        iterating = true;
        foreach (KeyValuePair<int, EventListener> listener in listeners[typeof(T)])
            listener.Value(_info);
        iterating = false;

        if (hashesToAdd.Count != 0)
        {
            foreach (KeyValuePair<System.Type, Dictionary<int, EventListener>> entry in hashesToAdd)
                foreach (KeyValuePair<int, EventListener> item in hashesToAdd[entry.Key])
                    listeners[entry.Key].Add(item.Key, item.Value);
            hashesToAdd.Clear();
        }

        if(hashesToRemove.Count != 0)
        {
            foreach (KeyValuePair<System.Type, int> hash in hashesToRemove)
                listeners[hash.Key].Remove(hash.Value);
            hashesToRemove.Clear();
        }
    }

    public static void SubInterrupt(System.Func<InterruptData, bool> _interrupt) { interrupters.Add(_interrupt.GetHashCode(), _interrupt); }
    public static void UnsubInterrupt(System.Func<InterruptData, bool> _interrupt) { interrupters.Remove(_interrupt.GetHashCode()); }

    public static bool CheckEventInterrupted(InterruptData _data, bool _consumeInterrupt = true)
    {
        foreach (KeyValuePair<int, System.Func<InterruptData, bool>> interrupt in interrupters)
            if (interrupt.Value(_data))
            {
                if(_consumeInterrupt)
                    interrupters.Remove(interrupt.Key);
                return true;
            }
        //TODO: may wanna send the interrupt info to the clients for animations?
        return false;
    }
}


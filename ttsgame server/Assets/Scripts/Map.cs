using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Map<T1, T2>
{
    private Dictionary<T1, T2> forward = new Dictionary<T1, T2>();
    private Dictionary<T2, T1> reverse = new Dictionary<T2, T1>();

    public T2 this[T1 _index]
    {
        get { return forward[_index]; }
        set { forward[_index] = value; }
    }

    public T1 this[T2 _index]
    {
        get { return reverse[_index]; }
        set { reverse[_index] = value; }
    }

    public void Add(T1 t1, T2 t2)
    {
        forward.Add(t1, t2);
        reverse.Add(t2, t1);
    }

    public IEnumerable Forward
    {
        get { return ForwardOrReverse(true); }
    }

    public IEnumerable Reverse
    {
        get { return ForwardOrReverse(false); }
    }

    private IEnumerable ForwardOrReverse(bool _forward)
    {
        if (_forward)
        {
            foreach (KeyValuePair<T1, T2> item in forward)
                yield return item;
            yield break;
        }
        foreach (KeyValuePair<T2, T1> item in reverse)
            yield return item;
    }
}

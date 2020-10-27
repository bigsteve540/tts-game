using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Node
{
    public Vector2 Position;
    public Node[] Edges = new Node[8];

    public Node(int _x, int _y)
    {
        Position = new Vector2(_x, _y);
    }

    public float DistanceTo(Node _other)
    {
        return Vector2.Distance(Position, _other.Position);
    }
}

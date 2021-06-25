using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public enum TileType { Normal, Difficult, Impassable }

public static class Tilemap
{
    public static Vector2 Dimensions { get { return new Vector2(tiles.GetLength(0), tiles.GetLength(1)); } }

    private static TileType[,] tiles;
    private static TileType[,] defaultMaptiles;

    private static Node[,] graph;

    private static Dictionary<TileType, float> tileCostMultiplier = new Dictionary<TileType, float>
    {
        { TileType.Normal, 1f },
        { TileType.Difficult, 1.5f },
        { TileType.Impassable, 999f }
    };
    private static Dictionary<char, TileType> mapdataMapper = new Dictionary<char, TileType>
    {
        {'.', TileType.Normal },
        {'/', TileType.Difficult },
        {'X', TileType.Impassable }
    };

    public static void Init(GameMapLayout _layout)
    {
        Generate(_layout);
        GeneratePathingGraph(_layout.Width, _layout.Height);
        GameManager.Instance.DrawMap(_layout.Width, _layout.Height); //remove this after testing
    }

    public static TileType GetTile(int _indexX, int _indexY)
    {
        return tiles[_indexX, _indexY];
    }
    public static TileType GetDefaultTile(int _indexX, int _indexY)
    {
        return defaultMaptiles[_indexX, _indexY];
    }

    public static void ChangeTileType(int _indexX, int _indexY, TileType _newType)
    {
        tiles[_indexX, _indexY] = _newType;
    }
    public static void SetTileToDefault(int _indexX, int _indexY)
    {
        tiles[_indexX, _indexY] = GetDefaultTile(_indexX, _indexY);
    }

    public static List<Node> GeneratePathToTile(Vector2 _origin, Vector2 _goal)
    {
        Dictionary<Node, float> distances = new Dictionary<Node, float>();
        Dictionary<Node, Node> previous = new Dictionary<Node, Node>();

        List<Node> unvisited = new List<Node>();

        Node source = graph[(int)_origin.x, (int)_origin.y];
        Node goal = graph[(int)_goal.x, (int)_goal.y];

        distances.Add(source, 0f);
        previous.Add(source, null);

        foreach (Node node in graph)
        {
            if (node != source)
            {
                distances[node] = Mathf.Infinity;
                previous[node] = null;
            }
            unvisited.Add(node);
        }

        while (unvisited.Count > 0)
        {
            Node node = null;
            foreach (Node uNode in unvisited)
            {
                if (node == null || distances[uNode] < distances[node])
                    node = uNode;
            }

            if (node == goal)
                break;

            unvisited.Remove(node);

            for (int i = 0; i < node.Edges.Length; i++)
            {
                if (node.Edges[i] != null)
                {
                    float moveCost = distances[node] + (((i % 2 == 0) ? 5 : 10) * tileCostMultiplier[tiles[(int)node.Edges[i].Position.x, (int)node.Edges[i].Position.y]]);

                    if (moveCost < distances[node.Edges[i]])
                    {
                        distances[node.Edges[i]] = moveCost;
                        previous[node.Edges[i]] = node;
                    }
                }
            }
        }

        if (previous[goal] == null)
        {
            Debug.Log("no valid path, illegal movement");
            return null;
        }

        List<Node> goalPath = new List<Node>();
        Node current = goal;
        //TODO: find a way to output the initiative cost of the final path
        while (current != null)
        {
            goalPath.Add(current);
            current = previous[current];
        }

        goalPath.Reverse();

        if (GetTile((int)goal.Position.x, (int)goal.Position.y) == TileType.Impassable)
            goalPath.RemoveAt(goalPath.Count - 1);
        return goalPath;
    }

    private static void Generate(GameMapLayout _layout)
    {
        defaultMaptiles = new TileType[_layout.Width, _layout.Height];
        tiles = new TileType[_layout.Width, _layout.Height];

        for (int x = 0; x < defaultMaptiles.GetLength(0); x++)
            for (int y = 0; y < defaultMaptiles.GetLength(1); y++)
                defaultMaptiles[x, y] = mapdataMapper[_layout.MapData[_layout.Width * y + x]];

        Array.Copy(defaultMaptiles, tiles, defaultMaptiles.Length);
    }

    public static byte[] ConvertMapToBytes()
    {
        List<byte> tileTypes = new List<byte>();
        for (int x = 0; x < defaultMaptiles.GetLength(0); x++)
            for (int y = 0; y < defaultMaptiles.GetLength(1); y++)
                tileTypes.Add(Convert.ToByte((int)defaultMaptiles[x, y]));
        return tileTypes.ToArray();
    }

    private static void GeneratePathingGraph(int _sizeX, int _sizeY)
    {
        graph = new Node[_sizeX, _sizeY];
        for (int x = 0; x < graph.GetLength(0); x++)
        {
            for (int y = 0; y < graph.GetLength(1); y++)
            {
                graph[x, y] = new Node(x,y);
            }
        }

        for (int x = 0; x < graph.GetLength(0); x++)
        {
            for (int y = 0; y < graph.GetLength(1); y++)
            {
                bool legalLeft = x > 0;
                bool legalRight = x < _sizeX - 1;
                bool legalUp = y < _sizeY - 1;
                bool legalDown = y > 0;

                if (legalLeft)
                    graph[x, y].Edges[0] = graph[x - 1, y];

                if (legalLeft && legalUp)
                    graph[x, y].Edges[1] = graph[x - 1, y + 1];

                if (legalUp)
                    graph[x, y].Edges[2] = graph[x, y + 1];

                if (legalRight && legalUp)  
                    graph[x, y].Edges[3] = graph[x + 1, y + 1];

                if (legalRight)                  
                    graph[x, y].Edges[4] = graph[x + 1, y];

                if (legalDown && legalRight)         
                    graph[x, y].Edges[5] = graph[x + 1, y - 1];

                if (legalDown)       
                    graph[x, y].Edges[6] = graph[x, y - 1];

                if (legalDown && legalLeft)    
                    graph[x, y].Edges[7] = graph[x - 1, y - 1];

            }
        }
    }
}
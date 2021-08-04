﻿using RiptideNetworking;
using System;
using System.Collections.Generic;
using UnityEngine;

public enum TileType { Normal, Difficult, Impassable }

public static class Tilemap
{
    public static int Width { get; private set; }
    public static int Height { get; private set; }
    private static Tile[] tiles;

    private static Node[,] graph;

    private static Dictionary<TileType, float> tileCostMultiplier = new Dictionary<TileType, float>
    {
        { TileType.Normal, 1f },
        { TileType.Difficult, 1.5f },
        { TileType.Impassable, 999f }
    };
    private static Dictionary<char, TileType> mapdataMapper = new Dictionary<char, TileType>
    {
        {'.', TileType.Normal }, {'1', TileType.Normal }, {'2', TileType.Normal }, {'3', TileType.Normal }, {'4', TileType.Normal },
        {'5', TileType.Normal }, {'6', TileType.Normal }, {'7', TileType.Normal }, {'8', TileType.Normal }, {'9', TileType.Normal },
        {'/', TileType.Difficult },
        {'X', TileType.Impassable }
    };

    public static void Init(GameMapLayout _layout)
    {
        Width = _layout.Width;
        Height = _layout.Height;

        GeneratePathingGraph(_layout.Width, _layout.Height);

        tiles = new Tile[_layout.Width * _layout.Height];
        for (int i = 0; i < tiles.Length; i++)
        {
            tiles[i] = new Tile(
                new Vector2(i / _layout.Width, i % _layout.Width),
                mapdataMapper[_layout.MapData[i]],
                _layout.MapData[i].ToString());
        }

        Message msg = Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.GenerateTilemap);
        msg.Add(_layout.Width);
        msg.Add(_layout.Height);

        msg.Add(ConvertMapToBytes(), true, true);

        NetworkManager.Instance.Server.SendToAll(msg);

        for (int i = 1; i < GameSettings.TotalPlayers + 1; i++)
        {
            msg = Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.GenerateDeploymentZones);
            msg.Add(i);
            msg.Add(Tile.DeploymentZones[i].Count);
            for (int j = 0; j < Tile.DeploymentZones[i].Count; j++)
                msg.Add(Tile.DeploymentZones[i][j]);
            NetworkManager.Instance.Server.SendToAll(msg);
        }

        DrawDebugMap();
    }

    public static void MoveEntityBetweenTiles(Vector2 _from, Vector2 _to) 
    {
        int toIndexor = Width * (int)_to.x + (int)_to.y;
        int fromIndexor = Width * (int)_from.x + (int)_from.y;

        if (tiles[toIndexor].EntityOnTile != null || tiles[toIndexor].State == TileType.Impassable)
        {
            //TODO: make this account for landing on an impassable tile
        }
        tiles[toIndexor].PlaceEntity(tiles[fromIndexor].EntityOnTile);
        tiles[fromIndexor].RemoveEntity();
    }
    public static Tile GetTile(int _indexX, int _indexY)
    {
        return tiles[Width * _indexX + _indexY];
    }
    public static Tile GetTile(Vector2 _pos)
    {
        return tiles[Width * (int)_pos.x + (int)_pos.y];
    }

    public static byte[] ConvertMapToBytes()
    {
        byte[] tileTypes = new byte[tiles.Length];

        for (int i = 0; i < tiles.Length; i++)
                tileTypes[i] = tiles[i].ConvertStateToByte();
        return tileTypes;
    }

    private static void GenerateTilemap(GameMapLayout _layout)
    {
        /*
        defaultMaptiles = new TileType[_layout.Width, _layout.Height];
        tiles = new TileType[_layout.Width, _layout.Height];

        for (int x = 0; x < defaultMaptiles.GetLength(0); x++)
            for (int y = 0; y < defaultMaptiles.GetLength(1); y++)
                defaultMaptiles[x, y] = mapdataMapper[_layout.MapData[_layout.Width * x + y]];

        Array.Copy(defaultMaptiles, tiles, defaultMaptiles.Length);
        */
    }
    private static void GeneratePathingGraph(int _sizeX, int _sizeY)
    {
        graph = new Node[_sizeX, _sizeY];
        for (int x = 0; x < graph.GetLength(0); x++)
            for (int y = 0; y < graph.GetLength(1); y++)
                graph[x, y] = new Node(x,y);

        for (int x = 0; x < graph.GetLength(0); x++)
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

    private static void DrawDebugMap()
    {
        for (int x = 0; x < Width; x++)
        {
            for (int y = 0; y < Height; y++)
            {
                GameObject go = GameObject.CreatePrimitive(PrimitiveType.Quad);

                go.transform.rotation = Quaternion.Euler(Vector3.right * 90f);
                go.transform.position = new Vector3(x, 0.49f, y);

                Color groundColor;
                switch (GetTile(x, y).State)
                {
                    case TileType.Normal:
                        groundColor = Color.white;
                        break;
                    case TileType.Difficult:
                        groundColor = Color.blue;
                        break;
                    case TileType.Impassable:
                        groundColor = Color.red;
                        break;
                    default:
                        groundColor = Color.black;
                        break;
                }
                go.GetComponent<MeshRenderer>().material.color = groundColor;
            }
        }
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
                if (node == null || distances[uNode] < distances[node])
                    node = uNode;

            if (node == goal)
                break;

            unvisited.Remove(node);

            for (int i = 0; i < node.Edges.Length; i++)
                if (node.Edges[i] != null)
                {
                    int tileIndexor = Width * (int)node.Edges[i].Position.x + (int)node.Edges[i].Position.y;
                    float moveCost = distances[node] + (((i % 2 == 0) ? 5 : 10) * tileCostMultiplier[tiles[tileIndexor].State]);

                    if (moveCost < distances[node.Edges[i]])
                    {
                        distances[node.Edges[i]] = moveCost;
                        previous[node.Edges[i]] = node;
                    }
                }
        }

        if (previous[goal] == null)
            return null;

        List<Node> goalPath = new List<Node>();
        Node current = goal;

        while (current != null)
        {
            goalPath.Add(current);
            current = previous[current];
        }

        goalPath.Reverse();

        if (GetTile((int)goal.Position.x, (int)goal.Position.y).State == TileType.Impassable)
            goalPath.RemoveAt(goalPath.Count - 1);
        return goalPath;
    }
}
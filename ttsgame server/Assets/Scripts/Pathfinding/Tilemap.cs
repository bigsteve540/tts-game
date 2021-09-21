using RiptideNetworking;
using System;
using System.Collections.Generic;
using UnityEngine;

public enum TileType { Normal, Difficult, Impassable }

public static class Tilemap
{
    public static int Width { get; private set; }
    public static int Height { get; private set; }
    private static Tile[] tiles;

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

        tiles = new Tile[_layout.Width * _layout.Height];
        for (int i = 0; i < tiles.Length; i++)
        {
            tiles[i] = new Tile(
                new Vector2(i / _layout.Width, i % _layout.Width),
                mapdataMapper[_layout.MapData[i]],
                _layout.MapData[i].ToString());
        }

        GeneratePathingGraph();

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
    private static void GeneratePathingGraph()
    {
        for (int x = 0; x < Width; x++)
            for (int y = 0; y < Height; y++)
            {
                bool legalLeft = x > 0;
                bool legalRight = x < Width - 1;
                bool legalUp = y < Height - 1;
                bool legalDown = y > 0;

                tiles[Width * x + y].SetNeighbours(new bool[] { legalLeft, legalUp, legalRight, legalDown });
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

    public static List<Tile> GeneratePathToTile(Vector2 _origin, Vector2 _goal)
    {
        //TODO: Convert to using Tile class
        Dictionary<Tile, float> distances = new Dictionary<Tile, float>();
        Dictionary<Tile, Tile> previous = new Dictionary<Tile, Tile>();

        List<Tile> unvisited = new List<Tile>();

        Tile source = GetTile((int)_origin.x, (int)_origin.y);
        Tile goal = GetTile((int)_goal.x, (int)_goal.y);

        distances.Add(source, 0f);
        previous.Add(source, null);

        foreach (Tile tile in tiles)
        {
            if (tile != source)
            {
                distances[tile] = Mathf.Infinity;
                previous[tile] = null;
            }
            unvisited.Add(tile);
        }

        while (unvisited.Count > 0)
        {
            Tile tile = null;
            foreach (Tile uTile in unvisited)
                if (tile == null || distances[uTile] < distances[tile])
                    tile = uTile;

            if (tile == goal)
                break;

            unvisited.Remove(tile);

            for (int i = 0; i < Tile.NEIGHBOUR_COUNT; i++)
            {
                Tile targetNeighbour = tile.GetNeighbour((TileNeighbour)i);
                if (targetNeighbour != null)
                {
                    int tileIndexor = Width * (int)targetNeighbour.Coords.x + (int)targetNeighbour.Coords.y;
                    float moveCost = distances[tile] + (((i % 2 == 0) ? Movement.HORIZONTAL_MOVE_COST : Movement.DIAGONAL_MOVE_COST) * tiles[tileIndexor].GetMovementCost());

                    if (moveCost < distances[targetNeighbour])
                    {
                        distances[targetNeighbour] = moveCost;
                        previous[targetNeighbour] = tile;
                    }
                }
            }
        }

        if (previous[goal] == null)
            return null;

        List<Tile> goalPath = new List<Tile>();
        Tile current = goal;

        while (current != null)
        {
            goalPath.Add(current);
            current = previous[current];
        }

        goalPath.Reverse();

        if (GetTile((int)goal.Coords.x, (int)goal.Coords.y).State == TileType.Impassable)
        {
            Debug.Log("Last tile is impassable");
            goalPath.RemoveAt(goalPath.Count - 1);
        }
        return goalPath;
    }
}
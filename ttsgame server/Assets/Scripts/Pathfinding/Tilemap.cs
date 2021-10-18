using RiptideNetworking;
using System;
using System.Collections.Generic;
using UnityEngine;

public enum TileType { Normal, Difficult, Impassable }

public static class Tilemap
{
    public static int Width { get; private set; }
    public static int Height { get; private set; }

    public static IReadOnlyCollection<Tile> Tiles { get; private set; }
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
            tiles[i] = new Tile(
                new Vector2(i / _layout.Width, i % _layout.Width),
                mapdataMapper[_layout.MapData[i]],
                _layout.MapData[i].ToString());

        Tiles = Array.AsReadOnly(tiles);

        GeneratePathingGraph();

        Message msg = Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.GenerateTilemap);

        SendMapGenerate(ref msg);
        SendDeploymentZoneGenerate(ref msg);

        DrawDebugMap();
    }

    public static void MoveEntityBetweenTiles(Vector2 _from, Vector2 _to) 
    {
        int toIndexor = (Width * Mathf.RoundToInt(_to.x)) + Mathf.RoundToInt(_to.y);
        int fromIndexor = (Width * Mathf.RoundToInt(_from.x)) + Mathf.RoundToInt(_from.y);

        tiles[toIndexor].PlaceEntity(tiles[fromIndexor].EntityOnTile);
        tiles[fromIndexor].RemoveEntity();
    }

    public static Tile TryGetTile(Vector2 _origin, Vector2 _pos)
    {
        int flatCoord = (Width * Mathf.RoundToInt(_pos.x)) + Mathf.RoundToInt(_pos.y);
        if (flatCoord < 0 || flatCoord > tiles.Length)
        {
            Vector2 originToPosNorm = (_pos - _origin).normalized;
            float vectorLength = Vector2.Distance(_origin, _pos);

            int sampleMult = Mathf.RoundToInt(vectorLength);
            Vector2 gridSample = _origin + (sampleMult * originToPosNorm);
            while(Vector2.Distance(_origin, gridSample) >= 0)
            {
                Tile sampleTile = GetTile(gridSample);
                if (sampleTile != null)
                    return sampleTile;
                gridSample = _origin + (--sampleMult * originToPosNorm);
            }
            return null;
        }
        return tiles[flatCoord];
    }

    public static Tile GetTile(int _indexX, int _indexY)
    {
        int flatCoord = (Width * _indexX) + _indexY;
        if (flatCoord < 0 || flatCoord > tiles.Length)
            return null;
        return tiles[flatCoord];
    }
    public static Tile GetTile(Vector2 _pos)
    {
        int flatCoord = (Width * Mathf.RoundToInt(_pos.x)) + Mathf.RoundToInt(_pos.y);
        if (flatCoord < 0 || flatCoord > tiles.Length)
            return null;
        return tiles[flatCoord];
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

    private static void SendMapGenerate(ref Message _msg)
    {
        _msg.Add(Width);
        _msg.Add(Height);
        _msg.Add(ConvertMapToBytes(), true, true);
        NetworkManager.Instance.Server.SendToAll(_msg);
    }
    private static void SendDeploymentZoneGenerate(ref Message _msg)
    {
        for (int i = 1; i < GameSettings.TotalPlayers + 1; i++)
        {
            _msg = Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.GenerateDeploymentZones);
            _msg.Add(i);
            _msg.Add(Tile.DeploymentZones[i].Count);
            for (int j = 0; j < Tile.DeploymentZones[i].Count; j++)
                _msg.Add(Tile.DeploymentZones[i][j]);
            NetworkManager.Instance.Server.SendToAll(_msg);
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
}
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum TileType { Normal, Deployable, Difficult, Impassable }
public static class Tilemap
{
    private static TileType[,] tiles;

    public static TileType GetTile(int _indexX, int _indexY)
    {
        return tiles[_indexX, _indexY];
    }

    public static void BuildMapFromBytes(int _xLength, int _yLength, byte[] _bytes)
    {
        tiles = new TileType[_yLength, _xLength];

        for (int x = _xLength - 1; x >= 0; x--)
        {
            for (int y = _yLength - 1; y >= 0; y--)
            {
                tiles[x, y] = (TileType)Convert.ToInt32(_bytes[(x * _xLength) + y]);
            }
        }
        GameManager.Instance.DrawMap(_xLength, _yLength);
    }
}

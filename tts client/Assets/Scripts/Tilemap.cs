using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum TileType { Normal, Difficult, Impassable }
public static class Tilemap
{
    private static TileType[,] tiles;

    public static TileType GetTile(int _indexX, int _indexY)
    {
        return tiles[_indexX, _indexY];
    }

    public static void BuildMapFromBytes(int _width, int _height, byte[] _bytes)
    {
        tiles = new TileType[_width, _height];

        for (int x = 0; x < _width; x++)
        {
            for (int y = 0; y < _height; y++)
            {
                tiles[x, y] = (TileType)Convert.ToInt32(_bytes[_height * x + y]); //I have no idea why you need to check height, server side applies it with width
            }
        }
        GameManager.Instance.DrawMap(_width, _height);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class GameMaps
{
    public static GameMapLayout TestMap = new GameMapLayout(9, 10,
        ".........." +
        ".........." +
        ".........." +
        ".........." +
        ".........." +
        ".........." +
        ".........." +
        ".........." +
        "..........");
}
public struct GameMapLayout
{
    public int Width { get; }
    public int Height { get; }
    public string Mapdata { get; }

    public GameMapLayout(int _width, int _height, string _mapdata)
    {
        Width = _width;
        Height = _height;
        Mapdata = _mapdata;
    }
}

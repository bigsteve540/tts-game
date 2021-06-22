using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class GameMaps
{
    public static GameMapLayout TestMap = new GameMapLayout(9,10, 
        ".........." +
        ".........." +
        ".........." +
        ".........." +
        ".........." +
        ".........." +
        "...XXXXX.." +
        "...////X.." +
        "...////X..");
}
 public struct GameMapLayout
{
    public int Height { get; }
    public int Width  { get; }
    public string Mapdata { get; }

    public GameMapLayout(int _height, int _width, string _mapdata)
    {
        Height = _height;
        Width = _width;
        Mapdata = _mapdata;
    }
}
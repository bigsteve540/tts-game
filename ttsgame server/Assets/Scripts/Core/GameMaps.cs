using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class GameMaps
{
    public static GameMapLayout TestMap = new GameMapLayout(20, 20,
        "OOOOOOOOOOOOOOOOOOOO" +
        "OOOOOOOOOOOOOOOOOOOO" +
        "OOOOOOOOOOOOOOOOOOOO" +
        "OOOOOOOOOOOOOOOOOOOO" +
        "...................." +
        "...................." +
        "...................." +
        "...................." +
        "...................." +
        "...................." +
        "...................." +
        "...................." +
        "...................." +
        "...................." +
        "...................." +
        "...................." +
        "OOOOOOOOOOOOOOOOOOOO" +
        "OOOOOOOOOOOOOOOOOOOO" +
        "OOOOOOOOOOOOOOOOOOOO" +
        "OOOOOOOOOOOOOOOOOOOO");
}
public struct GameMapLayout
{
    public int Width { get; }
    public int Height { get; }
    public string MapData { get; }

    public GameMapLayout(int _width, int _height, string _mapData)
    {
        Width = _width;
        Height = _height;
        MapData = _mapData;
    }
}

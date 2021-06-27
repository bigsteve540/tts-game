using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class GameMaps
{
    public static GameMapLayout TestMap = new GameMapLayout(20, 20,
        "22222222222222222222" +
        "22222222222222222222" +
        "22222222222222222222" +
        "22222222222222222222" +
        "...................." +
        "XXXX.X..X.XX.XX..X.." +
        "X....X..X.X.X.X..X.." +
        "X....X..X.X...X....." +
        "XXXX.XXXX.X...X..X.." +
        "...................." +
        "...................." +
        "...................." +
        "...................." +
        "...................." +
        "...................." +
        "...................." +
        "11111111111111111111" +
        "11111111111111111111" +
        "11111111111111111111" +
        "11111111111111111111");
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

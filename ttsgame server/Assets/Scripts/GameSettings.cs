using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum GameMode { Standard }
public class GameSettings
{
    public static int TeamCount { get; private set; }
    public static int PlayerCount { get; private set; }
    public static int PlayerAspectCount { get; private set; }

    public static int PlayerTurnTimeLimit { get; private set; }

    public static void Init(GameMode _mode)
    {
        switch (_mode)
        {
            case GameMode.Standard:
                TeamCount = 2;
                PlayerCount = 2;
                PlayerAspectCount = 5;

                PlayerTurnTimeLimit = 90;
                break;
        }
    }
}

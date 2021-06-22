using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum GameMode { Standard }
public static class GameSettings
{
    public static int TeamCount { get; private set; }
    public static int PlayerCountPerTeam { get; private set; }

    public static int AspectCountPerPlayer { get; private set; }
    public static int AspectBansPerPlayer { get; private set; }

    public static int TotalBans { get { return AspectBansPerPlayer * TotalPlayers; } }
    public static int TotalPlayers { get { return TeamCount * PlayerCountPerTeam; } }
    public static int TotalAspects { get { return AspectCountPerPlayer * TotalPlayers; } }

    public static int PlayerDraftSelectionTime { get; private set; }
    public static int PlayerTurnTime { get; private set; }

    public static void Init(GameMode _mode)
    {
        switch (_mode)
        {
            case GameMode.Standard:
                TeamCount = 2;
                PlayerCountPerTeam = 1;
                AspectCountPerPlayer = 5;
                AspectBansPerPlayer = 3;

                PlayerDraftSelectionTime = 30;
                PlayerTurnTime = 90;
                break;
        }
    }
}

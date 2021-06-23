using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum GameMode { Standard }
public class GameSettings
{
    public static int TeamCount { get; private set; }
    public static int PlayersPerTeam { get; private set; }
    public static int AspectCountPerPlayer { get; private set; }
    public static int BanCountPerPlayer { get; private set; }

    public static int TotalPlayers { get { return TeamCount * PlayersPerTeam; } }
    public static int TotalBans { get { return BanCountPerPlayer * TotalPlayers; } }
    public static int TotalAspects {  get{ return TotalPlayers * AspectCountPerPlayer; }  }

    public static int PlayerDraftSelectionTime { get; private set; }
    public static int PlayerTurnTimeLimit { get; private set; }

    public static void Init(GameMode _mode)
    {
        switch (_mode)
        {
            case GameMode.Standard:
                TeamCount = 2;
                PlayersPerTeam = 1;

                AspectCountPerPlayer = 5;
                BanCountPerPlayer = 3;

                PlayerDraftSelectionTime = 30;
                PlayerTurnTimeLimit = 90;
                break;
        }
    }
}

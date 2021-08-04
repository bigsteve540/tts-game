using RiptideNetworking;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class DraftManager
{
    public static int ActivePlayerID { get; private set; } = 0; //0 indicates not set

    public static Dictionary<int, (string[] Bans, string[] Picks)> PlayerPicksNBans;

    private static int draftStepIterator = 0;
    
    public static void Init()
    {
        PlayerPicksNBans = new Dictionary<int, (string[], string[])>();
        for (int i = 1; i < GameSettings.TotalPlayers + 1; i++)
            PlayerPicksNBans.Add(i, (new string[GameSettings.TotalBans], new string[GameSettings.AspectCountPerPlayer]));

        ActivePlayerID = 1;

        SystemClockManager.Begin(GameSettings.PlayerDraftSelectionTime);
        SystemClockManager.OnClockTimeout += OnUserFailsToSelectAspect;
    }

    private static void AssignNextActivePlayer()
    {
        if (++ActivePlayerID > GameSettings.TotalPlayers)
            ActivePlayerID = 1;
        SystemClockManager.Restart();
    }

    public static void AssignAspect(int _clientID, string _aspectCode) //TODO: make this check that bans are not duplicated after there are enough aspects to allow for effective banning
    {
        if (GameManager.GameState != GameState.Ban && GameManager.GameState != GameState.Pick)
            return;

        int comparator = GameManager.GameState == GameState.Ban ? GameSettings.BanCountPerPlayer : GameSettings.AspectCountPerPlayer;

        switch (GameManager.GameState)
        {
            case GameState.Ban:
                for (int i = 0; i < comparator; i++)
                    if (PlayerPicksNBans[_clientID].Bans[i] == null || PlayerPicksNBans[_clientID].Bans[i] == string.Empty)
                    {
                        PlayerPicksNBans[_clientID].Bans[i] = _aspectCode;
                        break;
                    }
                break;
            case GameState.Pick:

                for (int i = 0; i < comparator; i++)
                    if (PlayerPicksNBans[_clientID].Picks[i] == null || PlayerPicksNBans[_clientID].Picks[i] == string.Empty)
                    {
                        PlayerPicksNBans[_clientID].Picks[i] = _aspectCode;
                        break;
                    }
                break;
        }
        GenerateDraftMessage(_aspectCode);
        TestIteratorOverDraftMax();

        string stateTypeForDebug = GameManager.GameState == GameState.Ban ? "banned" : "picked";
        Debug.Log($"Player {ActivePlayerID} Successfully {stateTypeForDebug} {_aspectCode}");

        AssignNextActivePlayer();
    }
    private static void TestIteratorOverDraftMax()
    {
        draftStepIterator++;

        int comparator = GameManager.GameState == GameState.Ban ? GameSettings.TotalBans : GameSettings.TotalAspects;
        if(draftStepIterator >= comparator)
        {
            GameManager.GameState++;
            switch (GameManager.GameState)
            {
                case GameState.Deploy:
                    SystemClockManager.Stop();
                    SystemClockManager.OnClockTimeout -= OnUserFailsToSelectAspect;

                    Tilemap.Init(GameMaps.TestMap);
                    break;
            }
            draftStepIterator = 0;
        }
    }
    private static void GenerateDraftMessage(string _aspectCode)
    {
        Message msg = Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.AspectLocked);
        msg.Add(GameManager.GameState == GameState.Ban ? true : false);
        msg.Add(ActivePlayerID);
        msg.Add(_aspectCode);
        NetworkManager.Instance.Server.SendToAll(msg);

    }

    private static void OnUserFailsToSelectAspect()
    {
        SystemClockManager.OnClockTimeout -= OnUserFailsToSelectAspect;
        NetworkManager.Instance.CloseServer();
    }
}

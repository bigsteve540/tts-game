using RiptideNetworking;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class DraftManager
{
    public static int ActivePlayerID { get; private set; } = 0; //0 indicates not set

    private static int draftStepIterator = 0;
    
    public static void Init()
    {
        ActivePlayerID = 1;

        SystemClockManager.Begin(GameSettings.PlayerDraftSelectionTime);
        SystemClockManager.OnClockTimeout += OnUserFailsToSelectAspect;
    }

    public static void AssignAspect(ushort _clientID, string _aspectCode)
    {
        if (GameManager.GameState != GameState.Ban && GameManager.GameState != GameState.Pick)
            return;

        switch (GameManager.GameState)
        {
            case GameState.Ban:
                Player.AllActive[_clientID].BanPool.AssignDraftChoice(_aspectCode);
                break;
            case GameState.Pick:
                Player.AllActive[_clientID].PickPool.AssignDraftChoice(_aspectCode);
                break;
        }
        GenerateDraftMessage(_aspectCode);
        TestIteratorOverDraftMax();

        Debug.Log($"Player {ActivePlayerID} Successfully {(GameManager.GameState == GameState.Ban ? "banned" : "picked")} {_aspectCode}");

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
    private static void AssignNextActivePlayer()
    {
        if (++ActivePlayerID > GameSettings.TotalPlayers)
            ActivePlayerID = 1;
        SystemClockManager.Restart();
    }
}

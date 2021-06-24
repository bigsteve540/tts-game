using RiptideNetworking;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class DraftManager
{
    public static int ActivePlayerID { get; private set; } = 0; //0 indicates not set

    private static string[] ActiveBannedAspects;
    private static string[] ActivePickedAspects;

    private static int draftStepIterator = 0;
    
    public static void Init()
    {
        ActiveBannedAspects = new string[GameSettings.TotalBans];
        ActivePickedAspects = new string[GameSettings.TotalAspects];

        SystemClockManager.OnClockTimeout += OnUserFailsToSelectAspect;
        AssignNextActivePlayer();
    }

    private static void AssignNextActivePlayer()
    {
        if (ActivePlayerID == 0 || ++ActivePlayerID > GameSettings.TotalPlayers)
            ActivePlayerID = 1;
        SystemClockManager.Restart();
        Debug.Log($"Active player is {ActivePlayerID}");
    }

    public static void AssignAspect(string _aspectCode) //TODO: make this check that bans are not duplicated after there are enough aspects to allow for effective banning
    {
        if (GameManager.GameState != GameState.Ban && GameManager.GameState != GameState.Pick)
            return;

        switch (GameManager.GameState)
        {
            case GameState.Ban:
                ActiveBannedAspects[draftStepIterator++] = _aspectCode;
                Debug.Log($"Successfully banned {_aspectCode}");
                GenerateDraftMessage(_aspectCode);
                if (draftStepIterator >= GameSettings.TotalBans)
                {
                    GameManager.GameState = GameState.Pick;
                    draftStepIterator = 0;
                }
                break;
            case GameState.Pick:
                ActivePickedAspects[draftStepIterator++] = _aspectCode;
                GenerateDraftMessage(_aspectCode);
                if (draftStepIterator >= GameSettings.TotalAspects)
                {
                    GameManager.GameState = GameState.Deploy;
                    draftStepIterator = 0;
                    Tilemap.Init(GameMaps.TestMap);
                }
                break;
        }
        AssignNextActivePlayer();
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
        NetworkManager.Instance.Server.;
        SystemClockManager.OnClockTimeout -= OnUserFailsToSelectAspect;
    }
}

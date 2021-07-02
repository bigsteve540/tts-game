using RiptideNetworking;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class DraftManager
{
    public static int ActivePlayerID { get; private set; } = 0; //0 indicates not set

    private static string[] activeBannedAspects;
    public static Dictionary<int, string[]> ActivePickedAspects;

    private static int draftStepIterator = 0;
    
    public static void Init()
    {
        activeBannedAspects = new string[GameSettings.TotalBans];
        ActivePickedAspects = new Dictionary<int, string[]>();
        for (int i = 1; i < GameSettings.TotalPlayers + 1; i++)
            ActivePickedAspects.Add(i, new string[5]);

        ActivePlayerID = 1;

        SystemClockManager.Begin(GameSettings.PlayerDraftSelectionTime);
        SystemClockManager.OnClockTimeout += OnUserFailsToSelectAspect;
    }

    private static void AssignNextActivePlayer()
    {
        if (++ActivePlayerID > GameSettings.TotalPlayers)
            ActivePlayerID = 1;
        SystemClockManager.Restart();
        Debug.Log($"Active player is {ActivePlayerID}");
    }

    public static void AssignAspect(int _clientID, string _aspectCode) //TODO: make this check that bans are not duplicated after there are enough aspects to allow for effective banning
    {
        if (GameManager.GameState != GameState.Ban && GameManager.GameState != GameState.Pick)
            return;

        switch (GameManager.GameState)
        {
            case GameState.Ban:
                activeBannedAspects[draftStepIterator++] = _aspectCode;
                Debug.Log($"Successfully banned {_aspectCode}");
                GenerateDraftMessage(_aspectCode);
                if (draftStepIterator >= GameSettings.TotalBans)
                {
                    GameManager.GameState = GameState.Pick;
                    draftStepIterator = 0;
                }
                break;
            case GameState.Pick:

                for (int i = 0; i < GameSettings.AspectCountPerPlayer; i++)
                {
                    if (ActivePickedAspects[_clientID][i] == null || ActivePickedAspects[_clientID][i] == string.Empty)
                    {
                        ActivePickedAspects[_clientID][i] = _aspectCode;
                        draftStepIterator++;
                        break;
                    }
                }
                Debug.Log($"Successfully picked {_aspectCode}");
                GenerateDraftMessage(_aspectCode);
                if (draftStepIterator >= GameSettings.TotalAspects)
                {
                    GameManager.GameState = GameState.Deploy;
                    draftStepIterator = 0;
                    Tilemap.Init(GameMaps.TestMap);
                    return;
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
        NetworkManager.Instance.Server.Stop();
        SystemClockManager.OnClockTimeout -= OnUserFailsToSelectAspect;
    }
}

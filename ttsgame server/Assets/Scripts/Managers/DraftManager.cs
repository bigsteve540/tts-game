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
    }

    public static void AssignNextActivePlayer()
    {
        if (ActivePlayerID == 0 || ++ActivePlayerID > GameSettings.TotalPlayers)
            ActivePlayerID = 1;
        Debug.Log($"Active player is {ActivePlayerID}");
    }

    public static void AssignAspect(string _aspectCode) //TODO: make this check that bans are not duplicated after there are enough aspects to allow for effective banning
    {
        if (Server.State != ServerState.BanPhase && Server.State != ServerState.PickPhase)
            return;

        switch (Server.State)
        {
            case ServerState.BanPhase:
                ActiveBannedAspects[draftStepIterator] = _aspectCode;
                draftStepIterator++;
                Debug.Log($"Successfully banned {_aspectCode}");
                ServerSend.AspectLocked(true, _aspectCode);
                if (draftStepIterator >= GameSettings.TotalBans)
                {
                    Server.State = ServerState.PickPhase;
                    draftStepIterator = 0;
                }
                break;
            case ServerState.PickPhase:
                ActivePickedAspects[draftStepIterator] = _aspectCode;
                draftStepIterator++;
                ServerSend.AspectLocked(false, _aspectCode);
                if (draftStepIterator >= GameSettings.TotalAspects)
                {
                    Server.State = ServerState.Deployment;
                    draftStepIterator = 0;
                    Tilemap.Init(GameMaps.TestMap);
                }
                break;
        }
    }
}

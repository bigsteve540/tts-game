using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RiptideNetworking;
using System;

public class ServerHandle : MonoBehaviour
{
    public static void TestPing(ServerClient fromClient, Message message)
    {
        message.Add(DateTime.Now.Ticks);
        NetworkManager.Instance.Server.Send(message, fromClient);
    }

    public static void DraftInteract(ServerClient fromClient, Message message)
    {
        if (GameManager.GameState != GameState.Ban && GameManager.GameState != GameState.Pick || fromClient.Id != DraftManager.ActivePlayerID)
            return;
        DraftManager.AssignAspect(message.GetString());
    }
}


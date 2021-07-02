﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RiptideNetworking;
using System;

public static class ServerHandle
{
    private static int readyPlayers = 0;

    public static void TestPing(ServerClient _fromClient, Message _message)
    {
        _message.Add(DateTime.Now.Ticks);
        NetworkManager.Instance.Server.Send(_message, _fromClient);
    }

    public static void DraftInteract(ServerClient _fromClient, Message _message)
    {
        if (GameManager.GameState != GameState.Ban && GameManager.GameState != GameState.Pick || _fromClient.Id != DraftManager.ActivePlayerID)
            return;
        DraftManager.AssignAspect(_fromClient.Id, _message.GetString());
    }

    public static void DeploymentCompleted(ServerClient _fromClient, Message _message)
    {
        for (int i = 0; i < GameSettings.AspectCountPerPlayer; i++)
        {
            Vector2 pos = _message.GetVector2();
            if (!Tilemap.TileDeployableForID(_fromClient.Id, pos))
                throw new Exception($"Illegal placement of entity attempted by client {_fromClient.Id}.");
            Player.AllActive[_fromClient.Id].AddAspect(DraftManager.ActivePickedAspects[_fromClient.Id][i], pos);
        }
    }
}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RiptideNetworking;
using System;

public static class ServerHandle
{
    private static int readyPlayers = 0;

    public static void DraftInteract(ServerClient _fromClient, Message _message)
    {
        if (GameManager.GameState != GameState.Ban && GameManager.GameState != GameState.Pick || _fromClient.Id != DraftManager.ActivePlayerID)
            return;
        DraftManager.AssignAspect(_fromClient.Id, _message.GetString());
    }

    public static void DeploymentCompleted(ServerClient _fromClient, Message _message)
    {
        List<Vector2> aspectPositions = new List<Vector2>();
        for (int i = 0; i < GameSettings.AspectCountPerPlayer; i++)
        {
            aspectPositions.Add(_message.GetVector2());
            if (Tilemap.GetTile(aspectPositions[i]).DeploymentID != _fromClient.Id)
                throw new Exception($"Illegal placement of entity attempted by client {_fromClient.Id} at position {aspectPositions[i]} in deployment zone designated for client {Tilemap.GetTile(aspectPositions[i]).DeploymentID}");
        }

        Debug.Log($"Player {_fromClient.Id} completed deployment. Generating aspects...");
        Player.AllActive[_fromClient.Id].AssignAspectsFromPool(aspectPositions);

        if(++readyPlayers == NetworkManager.Instance.Server.MaxClientCount)
        {
            Debug.Log("Sending aspect to clients and preparing for play");
            foreach (Player player in Player.AllActive.Values)
                for (int i = 0; i < player.Aspects.Length; i++)
                {
                    Message msg = Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.SpawnAspect);
                    msg.Add(player.GroupID);
                    msg.Add(player.Aspects[i].EntityID);
                    msg.Add(player.Aspects[i].Code);
                    msg.Add(player.Aspects[i].CurrentHP);
                    msg.Add(player.Aspects[i].MapPosition);
                    NetworkManager.Instance.Server.SendToAll(msg);
                }

            GameManager.GameState = GameState.Play;

            Timeline.Progress();

            SystemClockManager.OnClockTimeout += () => { Timeline.Progress(); };
            SystemClockManager.Begin(GameSettings.PlayerTurnTimeLimit);
        }
    }

    public static void CastAspectAbility(ServerClient _fromClient, Message _message)
    {
        if (GameManager.ActiveEntity.EntityID == _message.GetInt() && GameManager.ActiveEntity.GroupingID == _fromClient.Id)
        {
            (GameManager.ActiveEntity as IAbilityCasterBehaviour).AbilityCaster.Cast(_message);
        }
             
    }
}


using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ServerHandle
{
    public static void WelcomeReceived(int _fromClient, NetworkPacket _packet)
    {
        if (Server.State != ServerState.Prep)
            return;

        int _clientIdCheck = _packet.ReadInt();
        string _aspectList = _packet.ReadString();

        SystemLog.Print($"{Server.Clients[_fromClient].tcp.socket.Client.RemoteEndPoint} connected successfully and is now player {_fromClient}.");
        if (_fromClient != _clientIdCheck)
        {
            SystemLog.Print($"Player ID: {_fromClient} has assumed the wrong client ID: {_clientIdCheck}!");
        }
        Server.CurrentPlayers++;

        if (Server.IsFull)
        {
            Debug.Log("Starting Draft!");
            Server.State = ServerState.BanPhase;
            GameManager.AssignNextActivePlayer();
            ServerSend.LoadDraft();
        }
        //Server.clients[_fromClient].SendIntoGame(_aspectList);
    }

    public static void TestPing(int _fromClient, NetworkPacket _packet)
    {
        ServerSend.TestPingReceived(_fromClient);
    }

    public static void DraftInteract(int _fromClient, NetworkPacket _packet)
    {
        if (_fromClient != GameManager.ActivePlayerID || Server.State != ServerState.BanPhase && Server.State != ServerState.PickPhase)
            return;

        if (!SystemClockManager.ElapsedTimeWithinBounds())
            //TODO: this is considered a dodge, kick out both players
            return;

        GameManager.AssignAspect(_packet.ReadString());

        SystemClockManager.Restart();
        GameManager.AssignNextActivePlayer();
    }
}

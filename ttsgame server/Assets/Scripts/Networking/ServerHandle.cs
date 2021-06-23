using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ServerHandle
{
    public static void WelcomeReceived(int _fromClient, NetworkPacket _packet)
    {
        int _clientIdCheck = _packet.ReadInt();
        string _aspectList = _packet.ReadString();

        SystemLog.Print($"{Server.clients[_fromClient].tcp.socket.Client.RemoteEndPoint} connected successfully and is now player {_fromClient}.");
        if (_fromClient != _clientIdCheck)
        {
            SystemLog.Print($"Player \"{_aspectList}\" (ID: {_fromClient}) has assumed the wrong client ID ({_clientIdCheck})!");
        }
        Server.clients[_fromClient].SendIntoGame(_aspectList);
    }
}

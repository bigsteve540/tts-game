﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ClientSend
{
    /// <summary>Sends a packet to the server via TCP.</summary>
    /// <param name="_packet">The packet to send to the sever.</param>
    private static void SendTCPData(NetworkPacket _packet)
    {
        _packet.WriteLength();
        Client.tcp.SendData(_packet);
    }

    /// <summary>Sends a packet to the server via UDP.</summary>
    /// <param name="_packet">The packet to send to the sever.</param>
    private static void SendUDPData(NetworkPacket _packet)
    {
        _packet.WriteLength();
        Client.udp.SendData(_packet);
    }

    #region Packets
    /// <summary>Lets the server know that the welcome message was received.</summary>
    public static void WelcomeReceived()
    {
        using (NetworkPacket _packet = new NetworkPacket((int)ClientPackets.WelcomeReceived))
        {
            _packet.Write(Client.ID);
            _packet.Write("A001,A001,A001,A001,A001");

            SendTCPData(_packet);
        }
    }
    #endregion
}

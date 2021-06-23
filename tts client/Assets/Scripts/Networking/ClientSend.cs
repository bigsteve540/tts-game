using System.Collections;
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
        Debug.Log("Sending acknowledgement.");
        using (NetworkPacket _packet = new NetworkPacket((int)ClientPackets.WelcomeReceived))
        {
            _packet.Write(Client.ID);
            _packet.Write("A000,A000,A000,A000,A000");

            SendTCPData(_packet);
        }
    }

    public static void TestPing()
    {
        Client.PingTimer.Start();
        using (NetworkPacket _packet = new NetworkPacket((int)ClientPackets.TestPing))
        {
            SendUDPData(_packet);
        }
    }

    public static void DraftInteract()
    {
        using (NetworkPacket _packet = new NetworkPacket((int)ClientPackets.DraftInteract))
        {
            _packet.Write(DraftUI.SelectedAspect);
            SendTCPData(_packet);
        }
        DraftUI.SelectedAspect = string.Empty;
    }
    #endregion
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ServerSend
{
    #region packet sending
    private static void SendTCPData(int _toClient, NetworkPacket _packet)
    {
        _packet.WriteLength();
        Server.Clients[_toClient].tcp.SendData(_packet);
    }
    private static void SendTCPDataToAll(NetworkPacket _packet)
    {
        _packet.WriteLength();
        for (int i = 1; i <= Server.MaxPlayers; i++)
        {
            Server.Clients[i].tcp.SendData(_packet);
        }
    }
    private static void SendTCPDataToAll(int _exceptClient, NetworkPacket _packet)
    {
        _packet.WriteLength();
        for (int i = 1; i <= Server.MaxPlayers; i++)
        {
            if (i != _exceptClient)
            {
                Server.Clients[i].tcp.SendData(_packet);
            }
        }
    }

    private static void SendUDPData(int _toClient, NetworkPacket _packet)
    {
        _packet.WriteLength();
        Server.Clients[_toClient].udp.SendData(_packet);
    }
    private static void SendUDPDataToAll(NetworkPacket _packet)
    {
        _packet.WriteLength();
        for (int i = 1; i <= Server.MaxPlayers; i++)
        {
            Server.Clients[i].udp.SendData(_packet);
        }
    }
    private static void SendUDPDataToAll(int _exceptClient, NetworkPacket _packet)
    {
        _packet.WriteLength();
        for (int i = 1; i <= Server.MaxPlayers; i++)
        {
            if (i != _exceptClient)
            {
                Server.Clients[i].udp.SendData(_packet);
            }
        }
    }
    #endregion  

    public static void Welcome(int _toClient)
    {
        Debug.Log($"Welcome sent to client {_toClient}, pending acknowledgement.");
        using (NetworkPacket _packet = new NetworkPacket((int)ServerPackets.Welcome))
        {
            _packet.Write((int)Tilemap.Dimensions.y);
            _packet.Write((int)Tilemap.Dimensions.x);

            _packet.Write(Tilemap.ConvertMapToBytes());
            _packet.Write(_toClient);

            SendTCPData(_toClient, _packet);
        }
    }

    public static void TestPingReceived(int _fromClient)
    {
        using (NetworkPacket _packet = new NetworkPacket((int)ServerPackets.TestPingReceived))
        {
            SendTCPData(_fromClient, _packet);
        }
    }

    public static void LoadDraft()
    {
        DraftManager.Init();
        using(NetworkPacket _packet = new NetworkPacket((int)ServerPackets.LoadDraft))
        {
            SendTCPDataToAll(_packet);
        }
        SystemClockManager.Begin(GameSettings.PlayerDraftSelectionTime);
    }

    public static void AspectLocked(bool _isBanned, string _aspectCode)
    {
        using(NetworkPacket _packet = new NetworkPacket((int)ServerPackets.AspectLocked))
        {
            _packet.Write(_isBanned);
            _packet.Write(DraftManager.ActivePlayerID);
            _packet.Write(_aspectCode);
            SendTCPDataToAll(_packet);
        }
    }
    public static void SpawnAspects(IAspectBehaviour[] _aspects, int _toClient = -1)
    {
        using (NetworkPacket _packet = new NetworkPacket((int)ServerPackets.SpawnAspects))
        {
            _packet.Write(_aspects.Length);

            foreach (IAspectBehaviour aspect in _aspects)
            {
                _packet.Write(aspect.AspectID);
                _packet.Write(aspect.AspectName);
                _packet.Write(aspect.CurrentHP);

                Vector2 pos = aspect.MapPosition;
                _packet.Write((int)pos.x);
                _packet.Write((int)pos.y);
            }

            if (_toClient == -1)
                SendTCPDataToAll(_packet);
            else
                SendTCPData(_toClient, _packet);
        }
    }

    public static void ModifyAspectHealth(int _entityID, int _newHP)
    {
        using (NetworkPacket _packet = new NetworkPacket((int)ServerPackets.ModifyAspectHealth))
        {
            _packet.Write(_entityID);
            _packet.Write(_newHP);

            SendTCPDataToAll(_packet);
        }
    }
}

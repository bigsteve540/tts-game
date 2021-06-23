using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ServerSend
{
    #region packet sending
    private static void SendTCPData(int _toClient, NetworkPacket _packet)
    {
        _packet.WriteLength();
        Server.clients[_toClient].tcp.SendData(_packet);
    }
    private static void SendTCPDataToAll(NetworkPacket _packet)
    {
        _packet.WriteLength();
        for (int i = 1; i <= Server.MaxPlayers; i++)
        {
            Server.clients[i].tcp.SendData(_packet);
        }
    }
    private static void SendTCPDataToAll(int _exceptClient, NetworkPacket _packet)
    {
        _packet.WriteLength();
        for (int i = 1; i <= Server.MaxPlayers; i++)
        {
            if (i != _exceptClient)
            {
                Server.clients[i].tcp.SendData(_packet);
            }
        }
    }

    private static void SendUDPData(int _toClient, NetworkPacket _packet)
    {
        _packet.WriteLength();
        Server.clients[_toClient].udp.SendData(_packet);
    }
    private static void SendUDPDataToAll(NetworkPacket _packet)
    {
        _packet.WriteLength();
        for (int i = 1; i <= Server.MaxPlayers; i++)
        {
            Server.clients[i].udp.SendData(_packet);
        }
    }
    private static void SendUDPDataToAll(int _exceptClient, NetworkPacket _packet)
    {
        _packet.WriteLength();
        for (int i = 1; i <= Server.MaxPlayers; i++)
        {
            if (i != _exceptClient)
            {
                Server.clients[i].udp.SendData(_packet);
            }
        }
    }
    #endregion  

    public static void Welcome(int _toClient, Vector2 _mapDimensions, byte[] _mapData)
    {
        using (NetworkPacket _packet = new NetworkPacket((int)ServerPackets.welcome))
        {
            _packet.Write((int)_mapDimensions.y);
            _packet.Write((int)_mapDimensions.x);

            _packet.Write(_mapData);
            _packet.Write(_toClient);

            SendTCPData(_toClient, _packet);
        }
    }

    public static void SpawnAspects(IAspectBehaviour[] _aspects, int _toClient = -1)
    {
        using (NetworkPacket _packet = new NetworkPacket((int)ServerPackets.SpawnAspects))
        {
            _packet.Write(_aspects.Length);

            foreach (IAspectBehaviour aspect in _aspects)
            {
                int aspectID = aspect.AspectID;

                _packet.Write(aspectID);
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

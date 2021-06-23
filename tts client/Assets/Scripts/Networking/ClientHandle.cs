using System.Collections;
using System.Collections.Generic;
using System.Net;
using UnityEngine;

public static class ClientHandle
{
    public static void Welcome(NetworkPacket _packet)
    {
        int yLength = _packet.ReadInt();
        int xLength = _packet.ReadInt();
        byte[] mapData = _packet.ReadBytes(yLength * xLength);
        int id = _packet.ReadInt();

        Tilemap.BuildMapFromBytes(xLength, yLength, mapData);

        Client.ID = id;
        ClientSend.WelcomeReceived();

        // Now that we have the client's id, connect UDP
        Client.udp.Connect(((IPEndPoint)Client.tcp.socket.Client.LocalEndPoint).Port);
    }

    public static void SpawnAspects(NetworkPacket _packet)
    {
        int aspectCount = _packet.ReadInt();
        for (int i = 0; i < aspectCount; i++)
        {
            int entityID = _packet.ReadInt();
            string aspectName = _packet.ReadString();
            int hp = _packet.ReadInt();
            Vector2 pos = new Vector2(_packet.ReadInt(), _packet.ReadInt());

            GameManager.Instance.SpawnAspect(entityID, aspectName, hp,  pos);
        }
    }

    public static void ModifyAspectHealth(NetworkPacket _packet)
    {
        int entityID = _packet.ReadInt();

        GameManager.Entities[entityID].SetHP(_packet.ReadInt());
    }
}
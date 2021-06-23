using System.Collections;
using System.Collections.Generic;
using System.Net;
using UnityEngine;

public static class ClientHandle
{
    public static void Welcome(NetworkPacket _packet)
    {
        Debug.Log("Welcome received.");
        int height = _packet.ReadInt();
        int width = _packet.ReadInt();

        byte[] mapData = _packet.ReadBytes(height * width);
        int id = _packet.ReadInt();

        Tilemap.BuildMapFromBytes(width, height, mapData);

        Client.ID = id;
        ClientSend.WelcomeReceived();

        Client.udp.Connect(((IPEndPoint)Client.tcp.socket.Client.LocalEndPoint).Port);
    }

    public static void TestPingReceived(NetworkPacket _packet)
    {
        Client.PingTimer.Stop();
        Client.CurrentPing = Client.PingTimer.ElapsedMilliseconds * 0.5f;
        Client.PingTimer.Reset();
    }

    public static void LoadDraft(NetworkPacket _packet)
    {
        UIManager.Instance.OpenDraftUI();
    }

    public static void AspectLocked(NetworkPacket _packet)
    {
        DraftUI.LockAspect(_packet.ReadBool(), _packet.ReadInt(), _packet.ReadString());
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
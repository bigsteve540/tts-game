using RiptideNetworking;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ClientHandle
{
    public static void TestPingReceived(Message _message)
    {
        NetworkManager.Instance.GetPing(_message.GetLong());
    }
    public static void LoadDraft(Message _message)
    {
        UIManager.Instance.OpenDraftUI(true);
    }
    public static void AspectLocked(Message _message)
    {
        DraftUI.Instance.LockAspect(_message.GetBool(), _message.GetInt(), _message.GetString());
    }
    public static void GenerateTilemap(Message _message)
    {
        UIManager.Instance.OpenDraftUI(false);

        int width = _message.GetInt();
        int height = _message.GetInt();
        int arrLen = _message.GetInt();
        byte[] map = _message.GetByteArray(arrLen);
        Tilemap.BuildMapFromBytes(width, height, map);
    }
    public static void SpawnAspect(Message _message)
    {

    }
}

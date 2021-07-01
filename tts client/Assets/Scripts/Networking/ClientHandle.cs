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
        UIManager.Instance.SetUIPanelActive(0);
        GameManager.GameState = GameState.Draft;
    }
    public static void AspectLocked(Message _message)
    {
        DraftUI.Instance.LockAspect(_message.GetBool(), _message.GetInt(), _message.GetString());
    }
    public static void GenerateTilemap(Message _message)
    {
        int width = _message.GetInt();
        int height = _message.GetInt();
        int arrLen = _message.GetInt();
        byte[] map = _message.GetByteArray(arrLen);
        Tilemap.BuildMapFromBytes(width, height, map);
    }
    public static void GenerateDeploymentZones(Message _message)
    {
        int playerID = _message.GetInt();
        int cellCount = _message.GetInt();
        GameManager.DeployableTiles[playerID] = new List<Vector2>();
        for (int j = 0; j < cellCount; j++)
        {
            Vector2 pos = _message.GetVector2();
            GameManager.DeployableTiles[playerID].Add(pos);
            GameManager.Instance.DrawDeployTile(playerID, (int)pos.x, (int)pos.y);
        }
        UIManager.Instance.SetUIPanelActive(1);
        GameManager.GameState = GameState.Deploy;
    }
    public static void SpawnAspect(Message _message)
    {

    }
}

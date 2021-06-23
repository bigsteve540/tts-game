using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RiptideNetworking;

public class ServerHandle : MonoBehaviour
{
    public static void TestPing(ServerClient fromClient, Message message)
    {
        //Player.Spawn(fromClient.Id, message.GetString());
    }

    public static void DraftInteract(ServerClient fromClient, Message message)
    {
        //Player.List[fromClient.Id].SetInput(message.GetBoolArray(5), message.GetVector3());
    }
}


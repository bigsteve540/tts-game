using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using UnityEngine;

public enum ServerState { Prep, BanPhase, PickPhase, Deployment, InGame, PostGame }
public static class Server
{
    public static ServerState State = ServerState.Prep;

    public static int MaxPlayers { get; private set; }

    public static int CurrentPlayers = 0;
    public static bool IsFull { get { return CurrentPlayers == MaxPlayers; } }

    public static int Port { get; private set; }

    public static Dictionary<int, Client> Clients = new Dictionary<int, Client>();

    public delegate void PacketHandler(int _fromClient, NetworkPacket _packet);
    public static Dictionary<int, PacketHandler> packetHandlers;

    private static TcpListener tcpListener;
    private static UdpClient udpListener;

    /// <summary>Starts the server.</summary>
    /// <param name="_maxPlayers">The maximum players that can be connected simultaneously.</param>
    /// <param name="_port">The port to start the server on.</param>
    public static void Start(int _port, GameMode _mode)
    {
        Debug.Log("Starting Server...");

        GameSettings.Init(_mode);

        MaxPlayers = GameSettings.TotalPlayers;
        Port = _port; 

        InitializeServerData();

        tcpListener = new TcpListener(IPAddress.Any, Port);
        tcpListener.Start();
        tcpListener.BeginAcceptTcpClient(TCPConnectCallback, null);

        udpListener = new UdpClient(Port);
        udpListener.BeginReceive(UDPReceiveCallback, null);

        Debug.Log($"Server started on port {Port}.");
    }

    /// <summary>Handles new TCP connections.</summary>
    private static void TCPConnectCallback(IAsyncResult _result)
    {
        TcpClient _client = tcpListener.EndAcceptTcpClient(_result);
        tcpListener.BeginAcceptTcpClient(new AsyncCallback(TCPConnectCallback), null);
        Debug.Log($"Incoming connection from {_client.Client.RemoteEndPoint}...");

        for (int i = 1; i <= MaxPlayers; i++)
        {
            if (Clients[i].tcp.socket == null)
            {
                Clients[i].tcp.Connect(_client);
                return;
            }
        }

        Debug.Log($"{_client.Client.RemoteEndPoint} failed to connect: Server full!");
    }

    /// <summary>Receives incoming UDP data.</summary>
    private static void UDPReceiveCallback(IAsyncResult _result)
    {
        try
        {
            IPEndPoint _clientEndPoint = new IPEndPoint(IPAddress.Any, 0);
            byte[] _data = udpListener.EndReceive(_result, ref _clientEndPoint);
            udpListener.BeginReceive(new AsyncCallback(UDPReceiveCallback), null);

            if (_data.Length < 4)
            {
                return;
            }

            using (NetworkPacket _packet = new NetworkPacket(_data))
            {
                int _clientId = _packet.ReadInt();

                if (_clientId == 0)
                {
                    return;
                }

                if (Clients[_clientId].udp.endPoint == null)
                {
                    // If this is a new connection
                    Clients[_clientId].udp.Connect(_clientEndPoint);
                    return;
                }

                if (Clients[_clientId].udp.endPoint.ToString() == _clientEndPoint.ToString())
                {
                    // Ensures that the client is not being impersonated by another by sending a false clientID
                    Clients[_clientId].udp.HandleData(_packet);
                }
            }
        }
        catch (Exception _ex)
        {
            Debug.Log($"Error receiving UDP data: {_ex}");
        }
    }

    public static void SendUDPData(IPEndPoint _clientEndPoint, NetworkPacket _packet)
    {
        try
        {
            if (_clientEndPoint != null)
            {
                udpListener.BeginSend(_packet.ToArray(), _packet.Length(), _clientEndPoint, null, null);
            }
        }
        catch (Exception _ex)
        {
            Debug.Log($"Error sending data to {_clientEndPoint} via UDP: {_ex}");
        }
    }

    private static void InitializeServerData()
    {
        for (int i = 1; i <= MaxPlayers; i++)
        {
            Clients.Add(i, new Client(i));
        }

        packetHandlers = new Dictionary<int, PacketHandler>()
        {
            { (int)ClientPackets.WelcomeReceived, ServerHandle.WelcomeReceived },
            { (int)ClientPackets.TestPing, ServerHandle.TestPing },
            { (int)ClientPackets.DraftInteract, ServerHandle.DraftInteract }
        };
        Debug.Log("Initialized packets.");
    }
}

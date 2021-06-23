using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net;
using System.Net.Sockets;
using System;

public enum ServerPackets
{
    Welcome = 1,
    TestPingReceived,
    LoadDraft,
    AspectLocked,
    SpawnAspects,
    ModifyAspectHealth
}

/// <summary>Sent from client to server.</summary>
public enum ClientPackets
{
    WelcomeReceived = 1,
    TestPing,
    DraftInteract
}

public static class Client
{
    public static System.Diagnostics.Stopwatch PingTimer = new System.Diagnostics.Stopwatch();
    public static float CurrentPing;

    public static int dataBufferSize = 4096;

    public static string IP = "127.0.0.1"; //FIXME: <-- change this to some other shit for other servers
    public static int Port = 9009;
    public static int ID = 0;
    public static TCP tcp = new TCP();
    public static UDP udp = new UDP();

    private static bool isConnected = false;
    private delegate void PacketHandler(NetworkPacket _packet);
    private static Dictionary<int, PacketHandler> packetHandlers;



    /// <summary>Attempts to connect to the server.</summary>
    public static void ConnectToServer()
    {
        InitializeClientData();

        isConnected = true;
        tcp.Connect(); // Connect tcp, udp gets connected once tcp is done
    }

    public class TCP
    {
        public TcpClient socket;

        private NetworkStream stream;
        private NetworkPacket receivedData;
        private byte[] receiveBuffer;

        /// <summary>Attempts to connect to the server via TCP.</summary>
        public void Connect()
        {
            Debug.Log("TCP Connected");
            socket = new TcpClient
            {
                ReceiveBufferSize = dataBufferSize,
                SendBufferSize = dataBufferSize
            };

            receiveBuffer = new byte[dataBufferSize];
            socket.BeginConnect(IP, Port, new AsyncCallback(ConnectCallback), socket);
        }

        /// <summary>Initializes the newly connected client's TCP-related info.</summary>
        private void ConnectCallback(IAsyncResult _result)
        {
            Debug.Log("Connect callback");
            socket.EndConnect(_result);

            if (!socket.Connected)
                return;

            stream = socket.GetStream();

            receivedData = new NetworkPacket();

            stream.BeginRead(receiveBuffer, 0, dataBufferSize, new AsyncCallback(ReceiveCallback), null);
        }

        /// <summary>Sends data to the client via TCP.</summary>
        /// <param name="_packet">The packet to send.</param>
        public void SendData(NetworkPacket _packet)
        {
            try
            {
                if (socket != null)
                {
                    stream.BeginWrite(_packet.ToArray(), 0, _packet.Length(), null, null); // Send data to server
                }
            }
            catch (Exception _ex)
            {
                Debug.Log($"Error sending data to server via TCP: {_ex}");
            }
        }

        /// <summary>Reads incoming data from the stream.</summary>
        private void ReceiveCallback(IAsyncResult _result)
        {
            Debug.Log("receive callback");
            try
            {
                int _byteLength = stream.EndRead(_result);
                if (_byteLength <= 0)
                {
                    Client.Disconnect();
                    return;
                }

                byte[] _data = new byte[_byteLength];
                Array.Copy(receiveBuffer, _data, _byteLength);

                receivedData.Reset(HandleData(_data)); // Reset receivedData if all data was handled
                stream.BeginRead(receiveBuffer, 0, dataBufferSize, ReceiveCallback, null);
            }
            catch
            {
                Disconnect();
            }
        }

        /// <summary>Prepares received data to be used by the appropriate packet handler methods.</summary>
        /// <param name="_data">The recieved data.</param>
        private bool HandleData(byte[] _data)
        {
            int _packetLength = 0;

            receivedData.SetBytes(_data);

            if (receivedData.UnreadLength() >= 4)
            {
                // If client's received data contains a packet
                _packetLength = receivedData.ReadInt();
                if (_packetLength <= 0)
                {
                    // If packet contains no data
                    return true; // Reset receivedData instance to allow it to be reused
                }
            }

            while (_packetLength > 0 && _packetLength <= receivedData.UnreadLength())
            {
                // While packet contains data AND packet data length doesn't exceed the length of the packet we're reading
                byte[] _packetBytes = receivedData.ReadBytes(_packetLength);
                ThreadManager.ExecuteOnMainThread(() =>
                {
                    using (NetworkPacket _packet = new NetworkPacket(_packetBytes))
                    {
                        int _packetId = _packet.ReadInt(); //TODO: convert this to box the int into the enum instead, looks cleaner overall.
                        packetHandlers[_packetId](_packet); // Call appropriate method to handle the packet
                    }
                });

                _packetLength = 0; // Reset packet length
                if (receivedData.UnreadLength() >= 4)
                {
                    // If client's received data contains another packet
                    _packetLength = receivedData.ReadInt();
                    if (_packetLength <= 0)
                    {
                        // If packet contains no data
                        return true; // Reset receivedData instance to allow it to be reused
                    }
                }
            }

            if (_packetLength <= 1)
            {
                return true; // Reset receivedData instance to allow it to be reused
            }

            return false;
        }

        /// <summary>Disconnects from the server and cleans up the TCP connection.</summary>
        private void Disconnect()
        {
            Client.Disconnect();

            stream = null;
            receivedData = null;
            receiveBuffer = null;
            socket = null;
        }
    }

    public class UDP
    {
        public UdpClient socket;
        public IPEndPoint endPoint;

        public UDP()
        {
            endPoint = new IPEndPoint(IPAddress.Parse(IP), Port);
        }

        /// <summary>Attempts to connect to the server via UDP.</summary>
        /// <param name="_localPort">The port number to bind the UDP socket to.</param>
        public void Connect(int _localPort)
        {
            socket = new UdpClient(_localPort);

            socket.Connect(endPoint);
            socket.BeginReceive(ReceiveCallback, null);

            using (NetworkPacket _packet = new NetworkPacket())
            {
                SendData(_packet);
            }
        }

        /// <summary>Sends data to the client via UDP.</summary>
        /// <param name="_packet">The packet to send.</param>
        public void SendData(NetworkPacket _packet)
        {
            try
            {
                _packet.InsertInt(ID); // Insert the client's ID at the start of the packet
                if (socket != null)
                {
                    socket.BeginSend(_packet.ToArray(), _packet.Length(), null, null);
                }
            }
            catch (Exception _ex)
            {
                Debug.Log($"Error sending data to server via UDP: {_ex}");
            }
        }

        /// <summary>Receives incoming UDP data.</summary>
        private void ReceiveCallback(IAsyncResult _result)
        {
            try
            {
                byte[] _data = socket.EndReceive(_result, ref endPoint);
                socket.BeginReceive(ReceiveCallback, null);

                if (_data.Length < 4)
                {
                    Client.Disconnect();
                    return;
                }

                HandleData(_data);
            }
            catch
            {
                Disconnect();
            }
        }

        /// <summary>Prepares received data to be used by the appropriate packet handler methods.</summary>
        /// <param name="_data">The recieved data.</param>
        private void HandleData(byte[] _data)
        {
            using (NetworkPacket _packet = new NetworkPacket(_data))
            {
                int _packetLength = _packet.ReadInt();
                _data = _packet.ReadBytes(_packetLength);
            }

            ThreadManager.ExecuteOnMainThread(() =>
            {
                using (NetworkPacket _packet = new NetworkPacket(_data))
                {
                    int _packetId = _packet.ReadInt();
                    packetHandlers[_packetId](_packet); // Call appropriate method to handle the packet
                }
            });
        }

        /// <summary>Disconnects from the server and cleans up the UDP connection.</summary>
        private void Disconnect()
        {
            Client.Disconnect();

            endPoint = null;
            socket = null;
        }
    }

    /// <summary>Initializes all necessary client data.</summary>
    private static void InitializeClientData()
    {
        packetHandlers = new Dictionary<int, PacketHandler>()
        {
            { (int)ServerPackets.Welcome, ClientHandle.Welcome },
            { (int)ServerPackets.TestPingReceived, ClientHandle.TestPingReceived },
            { (int)ServerPackets.LoadDraft, ClientHandle.LoadDraft },
            { (int)ServerPackets.AspectLocked, ClientHandle.AspectLocked },
            { (int)ServerPackets.SpawnAspects, ClientHandle.SpawnAspects },
            { (int)ServerPackets.ModifyAspectHealth, ClientHandle.ModifyAspectHealth }
        };
        Debug.Log("Initialized packets.");
    }

    /// <summary>Disconnects from the server and stops all network traffic.</summary>
    public static void Disconnect()
    {
        if (isConnected)
        {
            isConnected = false;
            tcp.socket.Close();
            udp.socket.Close();

            Debug.Log("Disconnected from server.");
        }
    }
}
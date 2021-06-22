using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using UnityEngine;

public class Client
{
    public static int dataBufferSize = 4096;

    public int id;
    public TCP tcp;
    public UDP udp;
    
    public IAspectBehaviour[] Aspects = null;

    private string[] pickedAspectCodes;
    private int aspectCodesIterator = 0;

    public Client(int _clientId)
    {
        id = _clientId;
        tcp = new TCP(id);
        udp = new UDP(id);
    }

    public class TCP
    {
        public TcpClient socket;

        private readonly int id;
        private NetworkStream stream;
        private NetworkPacket receivedData;
        private byte[] receiveBuffer;

        public TCP(int _id)
        {
            id = _id;
        }

        /// <summary>Initializes the newly connected client's TCP-related info.</summary>
        /// <param name="_socket">The TcpClient instance of the newly connected client.</param>
        public void Connect(TcpClient _socket)
        {
            socket = _socket;
            socket.ReceiveBufferSize = dataBufferSize;
            socket.SendBufferSize = dataBufferSize;

            stream = socket.GetStream();

            receivedData = new NetworkPacket();
            receiveBuffer = new byte[dataBufferSize];

            stream.BeginRead(receiveBuffer, 0, dataBufferSize, new AsyncCallback(ReceiveCallback), null);

            ServerSend.Welcome(id);
        }

        /// <summary>Sends data to the client via TCP.</summary>
        /// <param name="_packet">The packet to send.</param>
        public void SendData(NetworkPacket _packet)
        {
            try
            {
                if (socket != null)
                {
                    stream.BeginWrite(_packet.ToArray(), 0, _packet.Length(), null, null); // Send data to appropriate client
                }
            }
            catch (Exception _ex)
            {
                SystemLog.Print($"Error sending data to player {id} via TCP: {_ex}");
            }
        }

        /// <summary>Reads incoming data from the stream.</summary>
        private void ReceiveCallback(IAsyncResult _result)
        {
            try
            {
                int _byteLength = stream.EndRead(_result);
                if (_byteLength <= 0)
                {
                    Server.Clients[id].Disconnect();
                    return;
                }

                byte[] _data = new byte[_byteLength];
                Array.Copy(receiveBuffer, _data, _byteLength);

                receivedData.Reset(HandleData(_data)); // Reset receivedData if all data was handled
                stream.BeginRead(receiveBuffer, 0, dataBufferSize, new AsyncCallback(ReceiveCallback), null);
            }
            catch (Exception _ex)
            {
                SystemLog.Print($"Error receiving TCP data: {_ex}");
                Server.Clients[id].Disconnect();
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
                        Server.packetHandlers[_packetId](id, _packet); // Call appropriate method to handle the packet
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

        /// <summary>Closes and cleans up the TCP connection.</summary>
        public void Disconnect()
        {
            socket.Close();
            stream = null;
            receivedData = null;
            receiveBuffer = null;
            socket = null;
        }
    }

    public class UDP
    {
        public IPEndPoint endPoint;

        private int id;

        public UDP(int _id)
        {
            id = _id;
        }

        /// <summary>Initializes the newly connected client's UDP-related info.</summary>
        /// <param name="_endPoint">The IPEndPoint instance of the newly connected client.</param>
        public void Connect(IPEndPoint _endPoint)
        {
            endPoint = _endPoint;
        }

        /// <summary>Sends data to the client via UDP.</summary>
        /// <param name="_packet">The packet to send.</param>
        public void SendData(NetworkPacket _packet)
        {
            Server.SendUDPData(endPoint, _packet);
        }

        /// <summary>Prepares received data to be used by the appropriate packet handler methods.</summary>
        /// <param name="_packetData">The packet containing the recieved data.</param>
        public void HandleData(NetworkPacket _packetData)
        {
            int _packetLength = _packetData.ReadInt();
            byte[] _packetBytes = _packetData.ReadBytes(_packetLength);

            ThreadManager.ExecuteOnMainThread(() =>
            {
                using (NetworkPacket _packet = new NetworkPacket(_packetBytes))
                {
                    int _packetId = _packet.ReadInt();
                    Server.packetHandlers[_packetId](id, _packet); // Call appropriate method to handle the packet
                }
            });
        }

        /// <summary>Cleans up the UDP connection.</summary>
        public void Disconnect()
        {
            endPoint = null;
        }
    }

    public void AddSelectedAspect(string _aspectCode)
    {
        if (pickedAspectCodes == null)
            pickedAspectCodes = new string[GameSettings.AspectCountPerPlayer];

        pickedAspectCodes[aspectCodesIterator] = _aspectCode;
        aspectCodesIterator++;
    }

    /// <summary>Sends the client into the game and informs other clients of the new player.</summary>
    /// <param name="_playerName">The username of the new player.</param>
    public void SendIntoGame(string _aspectList)
    {
        string[] aspectCodes = _aspectList.Split(',');

        Aspects = new IAspectBehaviour[GameSettings.AspectCountPerPlayer];

        //send all current entities to new player
        ServerSend.SpawnAspects(GameManager.Entities.Values.ToArray(), id);

        //Add new entities to entities dictionary
        for (int i = 0; i < aspectCodes.Length; i++)
            Aspects[i] = Activator.CreateInstance(GameManager.AspectCodes[aspectCodes[i]], id, new Vector2(0, 0)) as IAspectBehaviour;

        // Send all new entities to all players
        ServerSend.SpawnAspects(Aspects);
    }

    /// <summary>Disconnects the client and stops all network traffic.</summary>
    private void Disconnect()
    { 
        //TODO: if the game is in pick or ban, assume it's a dodge and disconnect all players.
        Server.CurrentPlayers--;

        if(Aspects != null)
        {
            foreach (IAspectBehaviour aspect in Aspects)
                if(aspect != null)
                    GameManager.Entities.Remove(aspect.AspectID);
            Aspects = null;
        }

        SystemLog.Print($"{tcp.socket.Client.RemoteEndPoint} has disconnected.");

        tcp.Disconnect();
        udp.Disconnect();
    }
}


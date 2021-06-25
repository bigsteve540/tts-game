#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Void RiptideNetworking.ActionQueue::.ctor(System.String)
extern void ActionQueue__ctor_m4C3002524392AAB970CA9DA4C050D538DED67EBA ();
// 0x00000002 System.Void RiptideNetworking.ActionQueue::Add(System.Action)
extern void ActionQueue_Add_m6D25D1FB5965CA3D9497A0D3BB05CF1D5603DCC1 ();
// 0x00000003 System.Void RiptideNetworking.ActionQueue::ExecuteAll()
extern void ActionQueue_ExecuteAll_m8067713A472D657257777127651C271FC2079813 ();
// 0x00000004 System.UInt16 RiptideNetworking.Client::get_Id()
extern void Client_get_Id_mFCF3A172FA6ED9E6A0643DE38B07AE36F00DA3EC ();
// 0x00000005 System.Void RiptideNetworking.Client::set_Id(System.UInt16)
extern void Client_set_Id_mB587A44CAD65F22B414B26FF684C5FDC08678BFF ();
// 0x00000006 System.UInt16 RiptideNetworking.Client::get_TimeoutTime()
extern void Client_get_TimeoutTime_m9182DD502CBC48F106C1A28F3B2437B95C5FAC68 ();
// 0x00000007 System.UInt16 RiptideNetworking.Client::get_HeartbeatInterval()
extern void Client_get_HeartbeatInterval_mCE7027C9AED7E2326C342960B2F7EDBEF7D2CC2D ();
// 0x00000008 System.Boolean RiptideNetworking.Client::get_HasTimedOut()
extern void Client_get_HasTimedOut_m2CACD4C6623A58CA9D03BC41CCDDC5D96E2053F5 ();
// 0x00000009 System.Void RiptideNetworking.Client::.ctor(System.String)
extern void Client__ctor_m64CF08E873A8DEFDC67BB03C680FD532DCD42DC5 ();
// 0x0000000A System.Void RiptideNetworking.Client::Connect(System.String,System.UInt16,RiptideNetworking.ActionQueue,System.UInt16,System.Byte)
extern void Client_Connect_mADC87B1A953F0EDD30B481C446CFDBAAFA328BBA ();
// 0x0000000B System.Void RiptideNetworking.Client::Heartbeat(System.Object)
extern void Client_Heartbeat_m7388DADB3B9689BBF6B9D2F1237EBAF84CAA108A ();
// 0x0000000C System.Boolean RiptideNetworking.Client::ShouldHandleMessageFrom(System.Net.IPEndPoint,System.Byte)
extern void Client_ShouldHandleMessageFrom_m0C246A14E9DAA0829658089A33F52B8FF9F86E70 ();
// 0x0000000D System.Void RiptideNetworking.Client::Handle(System.Byte[],System.Net.IPEndPoint,RiptideNetworking.HeaderType)
extern void Client_Handle_mF4572783A255A88F454BB81460A5E3505151A348 ();
// 0x0000000E System.Void RiptideNetworking.Client::ReliableHandle(System.Byte[],System.Net.IPEndPoint,RiptideNetworking.HeaderType)
extern void Client_ReliableHandle_m1DFCD0388F2061C4421BBB43B97A2F85D643E327 ();
// 0x0000000F System.Void RiptideNetworking.Client::Send(RiptideNetworking.Message,System.Byte)
extern void Client_Send_m5E2BB4BF64BE146AF33D3D6428D440155B1EE950 ();
// 0x00000010 System.Void RiptideNetworking.Client::Disconnect()
extern void Client_Disconnect_mF0F3FCFB15034CEC61310CFE5C32097EF1007408 ();
// 0x00000011 System.Void RiptideNetworking.Client::LocalDisconnect()
extern void Client_LocalDisconnect_mCB52DBE42764FF0DDA334C1CAEF660D965BAAA96 ();
// 0x00000012 System.Void RiptideNetworking.Client::SendConnect()
extern void Client_SendConnect_mF90E850B84D883786EE7FA9C906A0EACC5F7638F ();
// 0x00000013 System.Void RiptideNetworking.Client::SendAck(System.UInt16,System.Net.IPEndPoint)
extern void Client_SendAck_mCB032FA7CAE349B762AB1020D66A0E8D4DB57D09 ();
// 0x00000014 System.Void RiptideNetworking.Client::HandleAck(RiptideNetworking.Message)
extern void Client_HandleAck_m5711E932E90CF8F7352C7786A2A8050AB96A79B1 ();
// 0x00000015 System.Void RiptideNetworking.Client::HandleAckExtra(RiptideNetworking.Message)
extern void Client_HandleAckExtra_m9CAE182C09B5F36BF5F8A29EB8FF591B68EA3D5A ();
// 0x00000016 System.Void RiptideNetworking.Client::SendHeartbeat()
extern void Client_SendHeartbeat_mDAC3CAAD0521C6DCD8230F1D1546C136DE411681 ();
// 0x00000017 System.Void RiptideNetworking.Client::HandleHeartbeat(RiptideNetworking.Message)
extern void Client_HandleHeartbeat_mAD755FEE635D76C6A0C3A03BB661AB583812FB3C ();
// 0x00000018 System.Void RiptideNetworking.Client::HandleWelcome(RiptideNetworking.Message)
extern void Client_HandleWelcome_m1DA4C628C5131F87A9C859A0A2325F87BB8343D6 ();
// 0x00000019 System.Void RiptideNetworking.Client::SendWelcomeReceived()
extern void Client_SendWelcomeReceived_m7162986A79723571CF9D2C4DE1ADF404FCE09B6B ();
// 0x0000001A System.Void RiptideNetworking.Client::HandleClientConnected(RiptideNetworking.Message)
extern void Client_HandleClientConnected_mE314F6A8EA3CD197A5E7C29C04DED6B850FB4037 ();
// 0x0000001B System.Void RiptideNetworking.Client::HandleClientDisconnected(RiptideNetworking.Message)
extern void Client_HandleClientDisconnected_m96D12A35420420E65DE7F642803374F69DE96E0F ();
// 0x0000001C System.Void RiptideNetworking.Client::SendDisconnect()
extern void Client_SendDisconnect_m36AFEC9C6A5C7CFC114286708D64A87E8F6B99E7 ();
// 0x0000001D System.Void RiptideNetworking.Client::HandleDisconnect()
extern void Client_HandleDisconnect_mCCBF300AF43930C50B739A5CFF02999E1ECD6D45 ();
// 0x0000001E System.Void RiptideNetworking.Client::add_Connected(System.EventHandler)
extern void Client_add_Connected_mB465FFE9C4FCD2BD7A97AE573E98A3F11BC76671 ();
// 0x0000001F System.Void RiptideNetworking.Client::remove_Connected(System.EventHandler)
extern void Client_remove_Connected_m434741C6E3F133A16B9754E6DFA71D3F519253C7 ();
// 0x00000020 System.Void RiptideNetworking.Client::OnConnected(System.EventArgs)
extern void Client_OnConnected_m015682AA625929763C04425DE7346F64E2265E63 ();
// 0x00000021 System.Void RiptideNetworking.Client::add_ConnectionFailed(System.EventHandler)
extern void Client_add_ConnectionFailed_m267BE25E2EDC72D957EF4AD6F253638E7B8C9022 ();
// 0x00000022 System.Void RiptideNetworking.Client::remove_ConnectionFailed(System.EventHandler)
extern void Client_remove_ConnectionFailed_mD6F198FDAA76F1F6E33E19C9910967CF3F2FF3C1 ();
// 0x00000023 System.Void RiptideNetworking.Client::OnConnectionFailed(System.EventArgs)
extern void Client_OnConnectionFailed_m39B5CBA23E51A0E04934EFF9A7776DD546E3D81F ();
// 0x00000024 System.Void RiptideNetworking.Client::add_MessageReceived(System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>)
extern void Client_add_MessageReceived_m896913CBF836608D53B4886019731B2F264EEA7A ();
// 0x00000025 System.Void RiptideNetworking.Client::remove_MessageReceived(System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>)
extern void Client_remove_MessageReceived_m4DBDEAAB51B9B6656653BF0AB41D822B2DA48729 ();
// 0x00000026 System.Void RiptideNetworking.Client::OnMessageReceived(RiptideNetworking.ClientMessageReceivedEventArgs)
extern void Client_OnMessageReceived_m2386EC3991888961B20E0ABB556ABF298505EFD2 ();
// 0x00000027 System.Void RiptideNetworking.Client::add_Disconnected(System.EventHandler)
extern void Client_add_Disconnected_m07D667E4CEC5E79DE9E8F990E09A65E1BBEF5616 ();
// 0x00000028 System.Void RiptideNetworking.Client::remove_Disconnected(System.EventHandler)
extern void Client_remove_Disconnected_m74D9D54559E18048D85D651BFE5279971C7A4925 ();
// 0x00000029 System.Void RiptideNetworking.Client::OnDisconnected(System.EventArgs)
extern void Client_OnDisconnected_m73E365509C3DC068B3E595AA037270F6C912A1EF ();
// 0x0000002A System.Void RiptideNetworking.Client::OnClientConnected(RiptideNetworking.ClientConnectedEventArgs)
extern void Client_OnClientConnected_m15B4B64A844789585A3AA23D96D112B1545056D2 ();
// 0x0000002B System.Void RiptideNetworking.Client::add_ClientDisconnected(System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>)
extern void Client_add_ClientDisconnected_m5BC747E3046CC00B9510AB5D60A879F517860FC9 ();
// 0x0000002C System.Void RiptideNetworking.Client::remove_ClientDisconnected(System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>)
extern void Client_remove_ClientDisconnected_m0C34FEBA9CD77526375852C400C3B0BAA90933D1 ();
// 0x0000002D System.Void RiptideNetworking.Client::OnClientDisconnected(RiptideNetworking.ClientDisconnectedEventArgs)
extern void Client_OnClientDisconnected_m408540FDCE4C451E2405293F52B112672EF51145 ();
// 0x0000002E System.Void RiptideNetworking.Client::OnPingUpdated(RiptideNetworking.PingUpdatedEventArgs)
extern void Client_OnPingUpdated_mBB364F55A07E40E128DE9A6C1C7B2479D8EDE6E4 ();
// 0x0000002F System.Void RiptideNetworking.Client_<>c__DisplayClass37_0::.ctor()
extern void U3CU3Ec__DisplayClass37_0__ctor_m35DDDB570C4C615E08A066CBBAB7BF29F87356CE ();
// 0x00000030 System.Void RiptideNetworking.Client_<>c__DisplayClass37_0::<Handle>b__0()
extern void U3CU3Ec__DisplayClass37_0_U3CHandleU3Eb__0_mE717D72235E61043EC8537AC1E2D2518FF48D191 ();
// 0x00000031 System.Void RiptideNetworking.Client_<>c__DisplayClass57_0::.ctor()
extern void U3CU3Ec__DisplayClass57_0__ctor_m6C1746D19A0AE6590C788637B6F6F270CD02D568 ();
// 0x00000032 System.Void RiptideNetworking.Client_<>c__DisplayClass57_0::<OnConnected>b__0()
extern void U3CU3Ec__DisplayClass57_0_U3COnConnectedU3Eb__0_m0658C5D6EC3F306D7339D133241C82D740C9FCFF ();
// 0x00000033 System.Void RiptideNetworking.Client_<>c__DisplayClass61_0::.ctor()
extern void U3CU3Ec__DisplayClass61_0__ctor_m08ECBCB533319FC4F6C103A8E818CACA2B84E082 ();
// 0x00000034 System.Void RiptideNetworking.Client_<>c__DisplayClass61_0::<OnConnectionFailed>b__0()
extern void U3CU3Ec__DisplayClass61_0_U3COnConnectionFailedU3Eb__0_m90C976D263DEF0EE12AFB39C6E8ECC0E4B59C3E7 ();
// 0x00000035 System.Void RiptideNetworking.Client_<>c__DisplayClass69_0::.ctor()
extern void U3CU3Ec__DisplayClass69_0__ctor_m4454A32380450DF404AD46A890F31223AABC5683 ();
// 0x00000036 System.Void RiptideNetworking.Client_<>c__DisplayClass69_0::<OnDisconnected>b__0()
extern void U3CU3Ec__DisplayClass69_0_U3COnDisconnectedU3Eb__0_mB0661D29AF50E64D076EC49057787C78AA02C8EE ();
// 0x00000037 System.Void RiptideNetworking.Client_<>c__DisplayClass73_0::.ctor()
extern void U3CU3Ec__DisplayClass73_0__ctor_mE6C26CC4073785792FA43C3AAADC535711B8A408 ();
// 0x00000038 System.Void RiptideNetworking.Client_<>c__DisplayClass73_0::<OnClientConnected>b__0()
extern void U3CU3Ec__DisplayClass73_0_U3COnClientConnectedU3Eb__0_m0A37F17A0A81B3D28A7B3632E43E4364382AFE1C ();
// 0x00000039 System.Void RiptideNetworking.Client_<>c__DisplayClass77_0::.ctor()
extern void U3CU3Ec__DisplayClass77_0__ctor_mAE865DE53ADD49AD26A7261124ED98E2AFD2959E ();
// 0x0000003A System.Void RiptideNetworking.Client_<>c__DisplayClass77_0::<OnClientDisconnected>b__0()
extern void U3CU3Ec__DisplayClass77_0_U3COnClientDisconnectedU3Eb__0_m429563B84D7FFD0B0ED581726DF52C2E6AA94324 ();
// 0x0000003B System.Void RiptideNetworking.Client_<>c__DisplayClass81_0::.ctor()
extern void U3CU3Ec__DisplayClass81_0__ctor_mE6BCF9481D835B94F8EDAF1480047A610C7E3AA0 ();
// 0x0000003C System.Void RiptideNetworking.Client_<>c__DisplayClass81_0::<OnPingUpdated>b__0()
extern void U3CU3Ec__DisplayClass81_0_U3COnPingUpdatedU3Eb__0_m3B64D5CCCEC4E8078B60C85A23156282706FB404 ();
// 0x0000003D System.UInt16 RiptideNetworking.ClientConnectedEventArgs::get_Id()
extern void ClientConnectedEventArgs_get_Id_m9BBBFB1659C968FFD7F5E4712D2ABAA61A84A9B2 ();
// 0x0000003E System.Void RiptideNetworking.ClientConnectedEventArgs::set_Id(System.UInt16)
extern void ClientConnectedEventArgs_set_Id_m0F7F2CA64E437B7CD125AD294A894667789063F4 ();
// 0x0000003F System.Void RiptideNetworking.ClientConnectedEventArgs::.ctor(System.UInt16)
extern void ClientConnectedEventArgs__ctor_m1D4277C682DC6660C0CEA6225BC37D3183216624 ();
// 0x00000040 RiptideNetworking.Message RiptideNetworking.ClientMessageReceivedEventArgs::get_Message()
extern void ClientMessageReceivedEventArgs_get_Message_mDA7E70BAFBECF2710ECC6D4BAC60C9DD77DD7D51 ();
// 0x00000041 System.Void RiptideNetworking.ClientMessageReceivedEventArgs::set_Message(RiptideNetworking.Message)
extern void ClientMessageReceivedEventArgs_set_Message_m5730F298CD543ADD3542434D3BE7AD84E1593F57 ();
// 0x00000042 System.Void RiptideNetworking.ClientMessageReceivedEventArgs::.ctor(RiptideNetworking.Message)
extern void ClientMessageReceivedEventArgs__ctor_mBED79CDB1400A66004A86926D5DCB304E7BEEFAB ();
// 0x00000043 System.UInt16 RiptideNetworking.ClientDisconnectedEventArgs::get_Id()
extern void ClientDisconnectedEventArgs_get_Id_m6F3D6144509AFE63445640DEBC4F0E9E0FAC53C4 ();
// 0x00000044 System.Void RiptideNetworking.ClientDisconnectedEventArgs::set_Id(System.UInt16)
extern void ClientDisconnectedEventArgs_set_Id_mFB7C09117CC2E3D11E1A4C90FA241BA344209EC0 ();
// 0x00000045 System.Void RiptideNetworking.ClientDisconnectedEventArgs::.ctor(System.UInt16)
extern void ClientDisconnectedEventArgs__ctor_m0D42F0A2F9E73A13B1300B07C925FB89C507D0DE ();
// 0x00000046 System.Void RiptideNetworking.PingUpdatedEventArgs::set_RTT(System.Int16)
extern void PingUpdatedEventArgs_set_RTT_mF5D8468878F7B03BEC4954AE75417292B3C3EF95 ();
// 0x00000047 System.Void RiptideNetworking.PingUpdatedEventArgs::set_SmoothRTT(System.Int16)
extern void PingUpdatedEventArgs_set_SmoothRTT_m01FD0D3CCD98034A94E217169521D632DC8FEE3D ();
// 0x00000048 System.Void RiptideNetworking.PingUpdatedEventArgs::.ctor(System.Int16,System.Int16)
extern void PingUpdatedEventArgs__ctor_mE3B476379FA39DDE1D81864F1ED265AD77A571CD ();
// 0x00000049 System.Void RiptideNetworking.SendLockables::.ctor()
extern void SendLockables__ctor_m815B851F57E90AC99288C3D20A345FCD1D753D1A ();
// 0x0000004A System.Void RiptideNetworking.ReceiveLockables::.ctor()
extern void ReceiveLockables__ctor_m8515F0878655BC3BE36654D3BB2CED1C9BA1BE10 ();
// 0x0000004B System.Int32 RiptideNetworking.Message::get_ReadableLength()
extern void Message_get_ReadableLength_m71CDA003C2F1F268927F6E86FE53E924A0AFC380 ();
// 0x0000004C System.Void RiptideNetworking.Message::set_ReadableLength(System.Int32)
extern void Message_set_ReadableLength_m21F21555E01B87F912C05927C83466F5FD7B7A01 ();
// 0x0000004D System.Int32 RiptideNetworking.Message::get_UnreadLength()
extern void Message_get_UnreadLength_mD1D16125E204749E33F5A3EEC42132FAB43E387A ();
// 0x0000004E System.Int32 RiptideNetworking.Message::get_WrittenLength()
extern void Message_get_WrittenLength_m9FF559254E16F3BFA3CDC3D634FB1C6B39AE7EE2 ();
// 0x0000004F System.Int32 RiptideNetworking.Message::get_UnwrittenLength()
extern void Message_get_UnwrittenLength_mD5425DE51D89AC68BB31162B387C3B16EBAC4891 ();
// 0x00000050 RiptideNetworking.MessageSendMode RiptideNetworking.Message::get_SendMode()
extern void Message_get_SendMode_m424A47CB1878863EA296363236D377E9FA82F692 ();
// 0x00000051 System.Void RiptideNetworking.Message::set_SendMode(RiptideNetworking.MessageSendMode)
extern void Message_set_SendMode_mDD0360BBDE231A5D81D535E6163D1AFC5CFE24F4 ();
// 0x00000052 System.Byte[] RiptideNetworking.Message::get_Bytes()
extern void Message_get_Bytes_m738D80A324833069F034C03F9AA0AFEC8B999844 ();
// 0x00000053 System.Void RiptideNetworking.Message::set_Bytes(System.Byte[])
extern void Message_set_Bytes_m97FF544FE16B5DF96FC7F764FC8B6B3F8876E39B ();
// 0x00000054 System.Void RiptideNetworking.Message::.ctor(System.UInt16)
extern void Message__ctor_mC95DC58AF076E85113469439E7533AE7FD09BE0A ();
// 0x00000055 System.Void RiptideNetworking.Message::.ctor(RiptideNetworking.HeaderType,System.UInt16)
extern void Message__ctor_m7AB1ACD378B328AC1D042BFBEAE92A8A51381557 ();
// 0x00000056 RiptideNetworking.Message RiptideNetworking.Message::Create(RiptideNetworking.MessageSendMode,System.UInt16)
extern void Message_Create_m6A381F4C069CD1A6471CDD59A66BC4EBBFAF2F73 ();
// 0x00000057 RiptideNetworking.Message RiptideNetworking.Message::Create(RiptideNetworking.HeaderType,System.Byte[])
extern void Message_Create_m083B35E722F738A7D2334534FF28214651246C3B ();
// 0x00000058 RiptideNetworking.Message RiptideNetworking.Message::CreateInternal(RiptideNetworking.HeaderType)
extern void Message_CreateInternal_m0CEA19691C72E88AF22DEAEB4B6A40C6C75359B5 ();
// 0x00000059 RiptideNetworking.Message RiptideNetworking.Message::CreateInternal(RiptideNetworking.HeaderType,System.Byte[])
extern void Message_CreateInternal_m737D416F0544AB67D92DA69DA34EACF6EB1FD97B ();
// 0x0000005A System.Void RiptideNetworking.Message::Reinitialize(RiptideNetworking.Message,RiptideNetworking.HeaderType)
extern void Message_Reinitialize_mBC8A63BF4B1E44E9AFD52B1A722E6B14353D0C23 ();
// 0x0000005B System.Void RiptideNetworking.Message::Reinitialize(RiptideNetworking.Message,RiptideNetworking.HeaderType,System.Byte[])
extern void Message_Reinitialize_mF511491459169AF0C8747E46E8B02F51A2889D2C ();
// 0x0000005C System.Void RiptideNetworking.Message::SetSequenceIdBytes(System.UInt16)
extern void Message_SetSequenceIdBytes_m1C896305A23EDA35C5A3BB988CF1F7A596EB031F ();
// 0x0000005D System.Void RiptideNetworking.Message::Reuse()
extern void Message_Reuse_mD0BC11B92421BC4A10216D7E1A87BE519E295611 ();
// 0x0000005E RiptideNetworking.Message RiptideNetworking.Message::Add(System.Byte)
extern void Message_Add_m154F99536C86E3EC4F4505E4871CD91E7CA36502 ();
// 0x0000005F System.Byte RiptideNetworking.Message::GetByte()
extern void Message_GetByte_m2A6D169E054EBD908D825277AAD08EFF874C98DF ();
// 0x00000060 RiptideNetworking.Message RiptideNetworking.Message::Add(System.Byte[])
extern void Message_Add_mAF6B386BD3F463728D6F997851D6EECCB9B4D117 ();
// 0x00000061 System.Boolean RiptideNetworking.Message::GetBool()
extern void Message_GetBool_mBFBEB8EA13DF2A7B51D036E680A104544D964E82 ();
// 0x00000062 RiptideNetworking.Message RiptideNetworking.Message::Add(System.Int16)
extern void Message_Add_m29EDA3AD9C57F95AFEB05F50851B27810942F759 ();
// 0x00000063 RiptideNetworking.Message RiptideNetworking.Message::Add(System.UInt16)
extern void Message_Add_mC48697E452E81169E6DEF3456D094720B9B5E67F ();
// 0x00000064 System.Void RiptideNetworking.Message::Write(System.UInt16)
extern void Message_Write_m5D58ACA3E57692B56DD8D8D0958EDF4A4374E134 ();
// 0x00000065 System.UInt16 RiptideNetworking.Message::GetUShort()
extern void Message_GetUShort_m917B148BEEFC7FEE212DB9B96A411FA5E8F13FDC ();
// 0x00000066 System.UInt16 RiptideNetworking.Message::ReadUShort()
extern void Message_ReadUShort_mE496700033B10F4615F64BFD4256F84E78810F50 ();
// 0x00000067 System.Int32 RiptideNetworking.Message::GetInt()
extern void Message_GetInt_m72404E688EF8BC7F681753A7519762891A270DB2 ();
// 0x00000068 System.Int32 RiptideNetworking.Message::ReadInt()
extern void Message_ReadInt_m392A834B601B429BEC0F0D593BC79A1538A97C49 ();
// 0x00000069 System.Int64 RiptideNetworking.Message::GetLong()
extern void Message_GetLong_mA9F9AF2B5793EC08FEA603D9FFA114491DEA784F ();
// 0x0000006A RiptideNetworking.Message RiptideNetworking.Message::Add(System.Single)
extern void Message_Add_m0A08DD743458049FEE0F755C9E941B2493F27155 ();
// 0x0000006B System.Single RiptideNetworking.Message::GetFloat()
extern void Message_GetFloat_m2E2D3C22349CC333A30959B89311890DE9E8949D ();
// 0x0000006C RiptideNetworking.Message RiptideNetworking.Message::Add(System.String)
extern void Message_Add_m2202D71A50ADB8697238E528862295579B1B767C ();
// 0x0000006D System.String RiptideNetworking.Message::GetString()
extern void Message_GetString_m33642D43A350BDB4DBEA73FCAF3E2786AA6F06EE ();
// 0x0000006E System.Void RiptideNetworking.Message::.cctor()
extern void Message__cctor_m03FCB6F4E27FBC0BECCF6A4A2E43E7D64111B5FA ();
// 0x0000006F System.Void RiptideNetworking.RiptideLogger::Initialize(RiptideNetworking.RiptideLogger_LogMethod,System.Boolean,System.String)
extern void RiptideLogger_Initialize_m7CC0EB08AE152D017894202815BFD9908C3F9B62 ();
// 0x00000070 System.Void RiptideNetworking.RiptideLogger::Log(System.String,System.String)
extern void RiptideLogger_Log_mAB654BE8367E23EC36F00327A4A389B3B6369A2E ();
// 0x00000071 System.String RiptideNetworking.RiptideLogger::GetTimestamp(System.DateTime)
extern void RiptideLogger_GetTimestamp_m98D2A407DE4629B463A42C04D8086166076A679A ();
// 0x00000072 System.Void RiptideNetworking.RiptideLogger_LogMethod::.ctor(System.Object,System.IntPtr)
extern void LogMethod__ctor_m463D5930D732F697BB6E89F4D577C4E1567258EB ();
// 0x00000073 System.Void RiptideNetworking.RiptideLogger_LogMethod::Invoke(System.String)
extern void LogMethod_Invoke_m9BD1B7EAD2E399DCCB558FE535D43911C3A12D8B ();
// 0x00000074 System.IAsyncResult RiptideNetworking.RiptideLogger_LogMethod::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void LogMethod_BeginInvoke_m9A5A4FF02A106DFEBAD8C982BA717974E77F62C9 ();
// 0x00000075 System.Void RiptideNetworking.RiptideLogger_LogMethod::EndInvoke(System.IAsyncResult)
extern void LogMethod_EndInvoke_mA9EF5C4B1C7F969073C05459D1A55E381C8543BE ();
// 0x00000076 System.UInt16 RiptideNetworking.Rudp::get_NextSequenceId()
extern void Rudp_get_NextSequenceId_m0AC92BE640B4A3CE0BB3F0C7AA1B8D047FB6EDDF ();
// 0x00000077 RiptideNetworking.SendLockables RiptideNetworking.Rudp::get_SendLockables()
extern void Rudp_get_SendLockables_mF9AC7AE6FF65963B935E6E5507880117CC08F299 ();
// 0x00000078 System.Void RiptideNetworking.Rudp::set_SendLockables(RiptideNetworking.SendLockables)
extern void Rudp_set_SendLockables_m1BF80F91F09642C9949ABD2BE67FBAC49F5C356A ();
// 0x00000079 RiptideNetworking.ReceiveLockables RiptideNetworking.Rudp::get_ReceiveLockables()
extern void Rudp_get_ReceiveLockables_m3E1F955793D0E80B038413A838C4ADAF648BE1AD ();
// 0x0000007A System.Void RiptideNetworking.Rudp::set_ReceiveLockables(RiptideNetworking.ReceiveLockables)
extern void Rudp_set_ReceiveLockables_m006F1D4282FB6B77176598CEA87A2C8A864726A8 ();
// 0x0000007B System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Rudp_PendingMessage> RiptideNetworking.Rudp::get_PendingMessages()
extern void Rudp_get_PendingMessages_m868934BC841D1A72CC0454A18DD69B1069B9BA27 ();
// 0x0000007C System.Int16 RiptideNetworking.Rudp::get_RTT()
extern void Rudp_get_RTT_m8F0185B04C75225FF6EE3B181192972C4030F27F ();
// 0x0000007D System.Void RiptideNetworking.Rudp::set_RTT(System.Int16)
extern void Rudp_set_RTT_mF4B646C8FF47E8F9D345E6B6491A47F2A9D462C9 ();
// 0x0000007E System.Int16 RiptideNetworking.Rudp::get_SmoothRTT()
extern void Rudp_get_SmoothRTT_mD61BBCF54EF88AC1A34153276FE4F2C95F8917AF ();
// 0x0000007F System.Void RiptideNetworking.Rudp::set_SmoothRTT(System.Int16)
extern void Rudp_set_SmoothRTT_mBFCCD866540BF9786EB78927FE21265EC1EF9F72 ();
// 0x00000080 System.Void RiptideNetworking.Rudp::.ctor(RiptideNetworking.RudpSocket)
extern void Rudp__ctor_m8D62E3BC629D457522A024B9674CAA19CA442323 ();
// 0x00000081 System.Void RiptideNetworking.Rudp::UpdateReceivedAcks(System.UInt16,System.UInt16)
extern void Rudp_UpdateReceivedAcks_m8B53D1BFD4B0940E22FD6CE5DEE35B093FDB4C0D ();
// 0x00000082 System.Int32 RiptideNetworking.Rudp::GetSequenceGap(System.UInt16,System.UInt16)
extern void Rudp_GetSequenceGap_mBF2383319CCA90CDA74433EB2687693E9C2BEF42 ();
// 0x00000083 System.Void RiptideNetworking.Rudp::CheckMessageAckStatus(System.UInt16,System.UInt16)
extern void Rudp_CheckMessageAckStatus_m2EAFBCAEE00051553E6E067014927633B24D5269 ();
// 0x00000084 System.Void RiptideNetworking.Rudp::AckMessage(System.UInt16)
extern void Rudp_AckMessage_m9863E20B56831EBB0FA81C2EEA97EEAD1CB22FC7 ();
// 0x00000085 System.Void RiptideNetworking.Rudp_PendingMessage::.ctor(RiptideNetworking.Rudp,System.UInt16,RiptideNetworking.Message,System.Net.IPEndPoint,System.Byte)
extern void PendingMessage__ctor_m63062680447E2DF3178111348EEA4BACE4C06E53 ();
// 0x00000086 System.Void RiptideNetworking.Rudp_PendingMessage::RetrySend()
extern void PendingMessage_RetrySend_m686778E635CD2377438FC5EC2A1E4B27A213CC48 ();
// 0x00000087 System.Void RiptideNetworking.Rudp_PendingMessage::TrySend()
extern void PendingMessage_TrySend_m0725059CECF92714EFB042A06F26BB183D2B5FC8 ();
// 0x00000088 System.Void RiptideNetworking.Rudp_PendingMessage::Clear()
extern void PendingMessage_Clear_m3457D3277260DD533434A4E0FA0805831EB4C8BD ();
// 0x00000089 System.Void RiptideNetworking.Rudp_PendingMessage::<.ctor>b__9_0(System.Object,System.Timers.ElapsedEventArgs)
extern void PendingMessage_U3C_ctorU3Eb__9_0_mF500EAD33C0E10778F77B66EE8A7BCAD4FAE51B5 ();
// 0x0000008A System.Boolean RiptideNetworking.RudpSocket::get_ShouldOutputInfoLogs()
extern void RudpSocket_get_ShouldOutputInfoLogs_mF38BC2076BA502D72763FC766979ECE42F51DC12 ();
// 0x0000008B System.Void RiptideNetworking.RudpSocket::.ctor(System.String)
extern void RudpSocket__ctor_mC778C8371E2596EBDDEF3F6526907BDB2DE82771 ();
// 0x0000008C System.Void RiptideNetworking.RudpSocket::StartListening(System.UInt16)
extern void RudpSocket_StartListening_mBA0330186905F34ACFE5180F5232EFD844D47C4F ();
// 0x0000008D System.Void RiptideNetworking.RudpSocket::StopListening()
extern void RudpSocket_StopListening_m813240EC8B5A36170D248B456DFA7F82C7557D4F ();
// 0x0000008E System.Void RiptideNetworking.RudpSocket::Receive()
extern void RudpSocket_Receive_m0CFB57F8357D5251965B28FE5112836111033A66 ();
// 0x0000008F System.Void RiptideNetworking.RudpSocket::PrepareToHandle(System.Byte[],System.Int32,System.Net.IPEndPoint)
extern void RudpSocket_PrepareToHandle_mDC1450211B2AF604591BCDEA29E54E8A14D4C87C ();
// 0x00000090 System.Boolean RiptideNetworking.RudpSocket::ShouldHandleMessageFrom(System.Net.IPEndPoint,System.Byte)
// 0x00000091 System.Void RiptideNetworking.RudpSocket::ReliableHandle(System.Byte[],System.Net.IPEndPoint,RiptideNetworking.HeaderType)
// 0x00000092 System.Void RiptideNetworking.RudpSocket::ReliableHandle(System.Byte[],System.Net.IPEndPoint,RiptideNetworking.HeaderType,RiptideNetworking.SendLockables)
extern void RudpSocket_ReliableHandle_mC09E79862F7BE4655F71C60DAEAEFFA9BAAE06E4 ();
// 0x00000093 System.Void RiptideNetworking.RudpSocket::Handle(System.Byte[],System.Net.IPEndPoint,RiptideNetworking.HeaderType)
// 0x00000094 System.Void RiptideNetworking.RudpSocket::Send(System.Byte[],System.Net.IPEndPoint)
extern void RudpSocket_Send_mAC1052EF3A797D297DFCFE79CB8ED36FF3E5C534 ();
// 0x00000095 System.Void RiptideNetworking.RudpSocket::Send(System.Byte[],System.Int32,System.Net.IPEndPoint)
extern void RudpSocket_Send_m9646B8A2560002C75691117D306092D86479DFB0 ();
// 0x00000096 System.Void RiptideNetworking.RudpSocket::SendReliable(RiptideNetworking.Message,System.Net.IPEndPoint,RiptideNetworking.Rudp,System.Byte)
extern void RudpSocket_SendReliable_m7756C637A96B2E6BB40039BB935529565FF86A12 ();
// 0x00000097 System.Void RiptideNetworking.RudpSocket::SendAck(System.UInt16,System.Net.IPEndPoint)
static Il2CppMethodPointer s_methodPointers[151] = 
{
	ActionQueue__ctor_m4C3002524392AAB970CA9DA4C050D538DED67EBA,
	ActionQueue_Add_m6D25D1FB5965CA3D9497A0D3BB05CF1D5603DCC1,
	ActionQueue_ExecuteAll_m8067713A472D657257777127651C271FC2079813,
	Client_get_Id_mFCF3A172FA6ED9E6A0643DE38B07AE36F00DA3EC,
	Client_set_Id_mB587A44CAD65F22B414B26FF684C5FDC08678BFF,
	Client_get_TimeoutTime_m9182DD502CBC48F106C1A28F3B2437B95C5FAC68,
	Client_get_HeartbeatInterval_mCE7027C9AED7E2326C342960B2F7EDBEF7D2CC2D,
	Client_get_HasTimedOut_m2CACD4C6623A58CA9D03BC41CCDDC5D96E2053F5,
	Client__ctor_m64CF08E873A8DEFDC67BB03C680FD532DCD42DC5,
	Client_Connect_mADC87B1A953F0EDD30B481C446CFDBAAFA328BBA,
	Client_Heartbeat_m7388DADB3B9689BBF6B9D2F1237EBAF84CAA108A,
	Client_ShouldHandleMessageFrom_m0C246A14E9DAA0829658089A33F52B8FF9F86E70,
	Client_Handle_mF4572783A255A88F454BB81460A5E3505151A348,
	Client_ReliableHandle_m1DFCD0388F2061C4421BBB43B97A2F85D643E327,
	Client_Send_m5E2BB4BF64BE146AF33D3D6428D440155B1EE950,
	Client_Disconnect_mF0F3FCFB15034CEC61310CFE5C32097EF1007408,
	Client_LocalDisconnect_mCB52DBE42764FF0DDA334C1CAEF660D965BAAA96,
	Client_SendConnect_mF90E850B84D883786EE7FA9C906A0EACC5F7638F,
	Client_SendAck_mCB032FA7CAE349B762AB1020D66A0E8D4DB57D09,
	Client_HandleAck_m5711E932E90CF8F7352C7786A2A8050AB96A79B1,
	Client_HandleAckExtra_m9CAE182C09B5F36BF5F8A29EB8FF591B68EA3D5A,
	Client_SendHeartbeat_mDAC3CAAD0521C6DCD8230F1D1546C136DE411681,
	Client_HandleHeartbeat_mAD755FEE635D76C6A0C3A03BB661AB583812FB3C,
	Client_HandleWelcome_m1DA4C628C5131F87A9C859A0A2325F87BB8343D6,
	Client_SendWelcomeReceived_m7162986A79723571CF9D2C4DE1ADF404FCE09B6B,
	Client_HandleClientConnected_mE314F6A8EA3CD197A5E7C29C04DED6B850FB4037,
	Client_HandleClientDisconnected_m96D12A35420420E65DE7F642803374F69DE96E0F,
	Client_SendDisconnect_m36AFEC9C6A5C7CFC114286708D64A87E8F6B99E7,
	Client_HandleDisconnect_mCCBF300AF43930C50B739A5CFF02999E1ECD6D45,
	Client_add_Connected_mB465FFE9C4FCD2BD7A97AE573E98A3F11BC76671,
	Client_remove_Connected_m434741C6E3F133A16B9754E6DFA71D3F519253C7,
	Client_OnConnected_m015682AA625929763C04425DE7346F64E2265E63,
	Client_add_ConnectionFailed_m267BE25E2EDC72D957EF4AD6F253638E7B8C9022,
	Client_remove_ConnectionFailed_mD6F198FDAA76F1F6E33E19C9910967CF3F2FF3C1,
	Client_OnConnectionFailed_m39B5CBA23E51A0E04934EFF9A7776DD546E3D81F,
	Client_add_MessageReceived_m896913CBF836608D53B4886019731B2F264EEA7A,
	Client_remove_MessageReceived_m4DBDEAAB51B9B6656653BF0AB41D822B2DA48729,
	Client_OnMessageReceived_m2386EC3991888961B20E0ABB556ABF298505EFD2,
	Client_add_Disconnected_m07D667E4CEC5E79DE9E8F990E09A65E1BBEF5616,
	Client_remove_Disconnected_m74D9D54559E18048D85D651BFE5279971C7A4925,
	Client_OnDisconnected_m73E365509C3DC068B3E595AA037270F6C912A1EF,
	Client_OnClientConnected_m15B4B64A844789585A3AA23D96D112B1545056D2,
	Client_add_ClientDisconnected_m5BC747E3046CC00B9510AB5D60A879F517860FC9,
	Client_remove_ClientDisconnected_m0C34FEBA9CD77526375852C400C3B0BAA90933D1,
	Client_OnClientDisconnected_m408540FDCE4C451E2405293F52B112672EF51145,
	Client_OnPingUpdated_mBB364F55A07E40E128DE9A6C1C7B2479D8EDE6E4,
	U3CU3Ec__DisplayClass37_0__ctor_m35DDDB570C4C615E08A066CBBAB7BF29F87356CE,
	U3CU3Ec__DisplayClass37_0_U3CHandleU3Eb__0_mE717D72235E61043EC8537AC1E2D2518FF48D191,
	U3CU3Ec__DisplayClass57_0__ctor_m6C1746D19A0AE6590C788637B6F6F270CD02D568,
	U3CU3Ec__DisplayClass57_0_U3COnConnectedU3Eb__0_m0658C5D6EC3F306D7339D133241C82D740C9FCFF,
	U3CU3Ec__DisplayClass61_0__ctor_m08ECBCB533319FC4F6C103A8E818CACA2B84E082,
	U3CU3Ec__DisplayClass61_0_U3COnConnectionFailedU3Eb__0_m90C976D263DEF0EE12AFB39C6E8ECC0E4B59C3E7,
	U3CU3Ec__DisplayClass69_0__ctor_m4454A32380450DF404AD46A890F31223AABC5683,
	U3CU3Ec__DisplayClass69_0_U3COnDisconnectedU3Eb__0_mB0661D29AF50E64D076EC49057787C78AA02C8EE,
	U3CU3Ec__DisplayClass73_0__ctor_mE6C26CC4073785792FA43C3AAADC535711B8A408,
	U3CU3Ec__DisplayClass73_0_U3COnClientConnectedU3Eb__0_m0A37F17A0A81B3D28A7B3632E43E4364382AFE1C,
	U3CU3Ec__DisplayClass77_0__ctor_mAE865DE53ADD49AD26A7261124ED98E2AFD2959E,
	U3CU3Ec__DisplayClass77_0_U3COnClientDisconnectedU3Eb__0_m429563B84D7FFD0B0ED581726DF52C2E6AA94324,
	U3CU3Ec__DisplayClass81_0__ctor_mE6BCF9481D835B94F8EDAF1480047A610C7E3AA0,
	U3CU3Ec__DisplayClass81_0_U3COnPingUpdatedU3Eb__0_m3B64D5CCCEC4E8078B60C85A23156282706FB404,
	ClientConnectedEventArgs_get_Id_m9BBBFB1659C968FFD7F5E4712D2ABAA61A84A9B2,
	ClientConnectedEventArgs_set_Id_m0F7F2CA64E437B7CD125AD294A894667789063F4,
	ClientConnectedEventArgs__ctor_m1D4277C682DC6660C0CEA6225BC37D3183216624,
	ClientMessageReceivedEventArgs_get_Message_mDA7E70BAFBECF2710ECC6D4BAC60C9DD77DD7D51,
	ClientMessageReceivedEventArgs_set_Message_m5730F298CD543ADD3542434D3BE7AD84E1593F57,
	ClientMessageReceivedEventArgs__ctor_mBED79CDB1400A66004A86926D5DCB304E7BEEFAB,
	ClientDisconnectedEventArgs_get_Id_m6F3D6144509AFE63445640DEBC4F0E9E0FAC53C4,
	ClientDisconnectedEventArgs_set_Id_mFB7C09117CC2E3D11E1A4C90FA241BA344209EC0,
	ClientDisconnectedEventArgs__ctor_m0D42F0A2F9E73A13B1300B07C925FB89C507D0DE,
	PingUpdatedEventArgs_set_RTT_mF5D8468878F7B03BEC4954AE75417292B3C3EF95,
	PingUpdatedEventArgs_set_SmoothRTT_m01FD0D3CCD98034A94E217169521D632DC8FEE3D,
	PingUpdatedEventArgs__ctor_mE3B476379FA39DDE1D81864F1ED265AD77A571CD,
	SendLockables__ctor_m815B851F57E90AC99288C3D20A345FCD1D753D1A,
	ReceiveLockables__ctor_m8515F0878655BC3BE36654D3BB2CED1C9BA1BE10,
	Message_get_ReadableLength_m71CDA003C2F1F268927F6E86FE53E924A0AFC380,
	Message_set_ReadableLength_m21F21555E01B87F912C05927C83466F5FD7B7A01,
	Message_get_UnreadLength_mD1D16125E204749E33F5A3EEC42132FAB43E387A,
	Message_get_WrittenLength_m9FF559254E16F3BFA3CDC3D634FB1C6B39AE7EE2,
	Message_get_UnwrittenLength_mD5425DE51D89AC68BB31162B387C3B16EBAC4891,
	Message_get_SendMode_m424A47CB1878863EA296363236D377E9FA82F692,
	Message_set_SendMode_mDD0360BBDE231A5D81D535E6163D1AFC5CFE24F4,
	Message_get_Bytes_m738D80A324833069F034C03F9AA0AFEC8B999844,
	Message_set_Bytes_m97FF544FE16B5DF96FC7F764FC8B6B3F8876E39B,
	Message__ctor_mC95DC58AF076E85113469439E7533AE7FD09BE0A,
	Message__ctor_m7AB1ACD378B328AC1D042BFBEAE92A8A51381557,
	Message_Create_m6A381F4C069CD1A6471CDD59A66BC4EBBFAF2F73,
	Message_Create_m083B35E722F738A7D2334534FF28214651246C3B,
	Message_CreateInternal_m0CEA19691C72E88AF22DEAEB4B6A40C6C75359B5,
	Message_CreateInternal_m737D416F0544AB67D92DA69DA34EACF6EB1FD97B,
	Message_Reinitialize_mBC8A63BF4B1E44E9AFD52B1A722E6B14353D0C23,
	Message_Reinitialize_mF511491459169AF0C8747E46E8B02F51A2889D2C,
	Message_SetSequenceIdBytes_m1C896305A23EDA35C5A3BB988CF1F7A596EB031F,
	Message_Reuse_mD0BC11B92421BC4A10216D7E1A87BE519E295611,
	Message_Add_m154F99536C86E3EC4F4505E4871CD91E7CA36502,
	Message_GetByte_m2A6D169E054EBD908D825277AAD08EFF874C98DF,
	Message_Add_mAF6B386BD3F463728D6F997851D6EECCB9B4D117,
	Message_GetBool_mBFBEB8EA13DF2A7B51D036E680A104544D964E82,
	Message_Add_m29EDA3AD9C57F95AFEB05F50851B27810942F759,
	Message_Add_mC48697E452E81169E6DEF3456D094720B9B5E67F,
	Message_Write_m5D58ACA3E57692B56DD8D8D0958EDF4A4374E134,
	Message_GetUShort_m917B148BEEFC7FEE212DB9B96A411FA5E8F13FDC,
	Message_ReadUShort_mE496700033B10F4615F64BFD4256F84E78810F50,
	Message_GetInt_m72404E688EF8BC7F681753A7519762891A270DB2,
	Message_ReadInt_m392A834B601B429BEC0F0D593BC79A1538A97C49,
	Message_GetLong_mA9F9AF2B5793EC08FEA603D9FFA114491DEA784F,
	Message_Add_m0A08DD743458049FEE0F755C9E941B2493F27155,
	Message_GetFloat_m2E2D3C22349CC333A30959B89311890DE9E8949D,
	Message_Add_m2202D71A50ADB8697238E528862295579B1B767C,
	Message_GetString_m33642D43A350BDB4DBEA73FCAF3E2786AA6F06EE,
	Message__cctor_m03FCB6F4E27FBC0BECCF6A4A2E43E7D64111B5FA,
	RiptideLogger_Initialize_m7CC0EB08AE152D017894202815BFD9908C3F9B62,
	RiptideLogger_Log_mAB654BE8367E23EC36F00327A4A389B3B6369A2E,
	RiptideLogger_GetTimestamp_m98D2A407DE4629B463A42C04D8086166076A679A,
	LogMethod__ctor_m463D5930D732F697BB6E89F4D577C4E1567258EB,
	LogMethod_Invoke_m9BD1B7EAD2E399DCCB558FE535D43911C3A12D8B,
	LogMethod_BeginInvoke_m9A5A4FF02A106DFEBAD8C982BA717974E77F62C9,
	LogMethod_EndInvoke_mA9EF5C4B1C7F969073C05459D1A55E381C8543BE,
	Rudp_get_NextSequenceId_m0AC92BE640B4A3CE0BB3F0C7AA1B8D047FB6EDDF,
	Rudp_get_SendLockables_mF9AC7AE6FF65963B935E6E5507880117CC08F299,
	Rudp_set_SendLockables_m1BF80F91F09642C9949ABD2BE67FBAC49F5C356A,
	Rudp_get_ReceiveLockables_m3E1F955793D0E80B038413A838C4ADAF648BE1AD,
	Rudp_set_ReceiveLockables_m006F1D4282FB6B77176598CEA87A2C8A864726A8,
	Rudp_get_PendingMessages_m868934BC841D1A72CC0454A18DD69B1069B9BA27,
	Rudp_get_RTT_m8F0185B04C75225FF6EE3B181192972C4030F27F,
	Rudp_set_RTT_mF4B646C8FF47E8F9D345E6B6491A47F2A9D462C9,
	Rudp_get_SmoothRTT_mD61BBCF54EF88AC1A34153276FE4F2C95F8917AF,
	Rudp_set_SmoothRTT_mBFCCD866540BF9786EB78927FE21265EC1EF9F72,
	Rudp__ctor_m8D62E3BC629D457522A024B9674CAA19CA442323,
	Rudp_UpdateReceivedAcks_m8B53D1BFD4B0940E22FD6CE5DEE35B093FDB4C0D,
	Rudp_GetSequenceGap_mBF2383319CCA90CDA74433EB2687693E9C2BEF42,
	Rudp_CheckMessageAckStatus_m2EAFBCAEE00051553E6E067014927633B24D5269,
	Rudp_AckMessage_m9863E20B56831EBB0FA81C2EEA97EEAD1CB22FC7,
	PendingMessage__ctor_m63062680447E2DF3178111348EEA4BACE4C06E53,
	PendingMessage_RetrySend_m686778E635CD2377438FC5EC2A1E4B27A213CC48,
	PendingMessage_TrySend_m0725059CECF92714EFB042A06F26BB183D2B5FC8,
	PendingMessage_Clear_m3457D3277260DD533434A4E0FA0805831EB4C8BD,
	PendingMessage_U3C_ctorU3Eb__9_0_mF500EAD33C0E10778F77B66EE8A7BCAD4FAE51B5,
	RudpSocket_get_ShouldOutputInfoLogs_mF38BC2076BA502D72763FC766979ECE42F51DC12,
	RudpSocket__ctor_mC778C8371E2596EBDDEF3F6526907BDB2DE82771,
	RudpSocket_StartListening_mBA0330186905F34ACFE5180F5232EFD844D47C4F,
	RudpSocket_StopListening_m813240EC8B5A36170D248B456DFA7F82C7557D4F,
	RudpSocket_Receive_m0CFB57F8357D5251965B28FE5112836111033A66,
	RudpSocket_PrepareToHandle_mDC1450211B2AF604591BCDEA29E54E8A14D4C87C,
	NULL,
	NULL,
	RudpSocket_ReliableHandle_mC09E79862F7BE4655F71C60DAEAEFFA9BAAE06E4,
	NULL,
	RudpSocket_Send_mAC1052EF3A797D297DFCFE79CB8ED36FF3E5C534,
	RudpSocket_Send_m9646B8A2560002C75691117D306092D86479DFB0,
	RudpSocket_SendReliable_m7756C637A96B2E6BB40039BB935529565FF86A12,
	NULL,
};
static const int32_t s_InvokerIndices[151] = 
{
	26,
	26,
	23,
	215,
	562,
	215,
	215,
	114,
	26,
	1942,
	26,
	431,
	110,
	110,
	409,
	23,
	23,
	23,
	1012,
	26,
	26,
	23,
	26,
	26,
	23,
	26,
	26,
	23,
	23,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	215,
	562,
	562,
	14,
	26,
	26,
	215,
	562,
	562,
	562,
	562,
	1073,
	23,
	23,
	10,
	32,
	10,
	10,
	10,
	114,
	31,
	14,
	26,
	562,
	1943,
	1944,
	1945,
	766,
	1945,
	570,
	1946,
	562,
	23,
	330,
	114,
	28,
	114,
	621,
	621,
	562,
	215,
	215,
	10,
	10,
	145,
	1681,
	686,
	28,
	14,
	3,
	1946,
	134,
	1947,
	102,
	26,
	179,
	26,
	215,
	14,
	26,
	14,
	26,
	14,
	215,
	562,
	215,
	562,
	26,
	1073,
	214,
	1073,
	562,
	1948,
	23,
	23,
	23,
	27,
	114,
	26,
	562,
	23,
	23,
	689,
	431,
	110,
	1949,
	110,
	27,
	689,
	879,
	1012,
};
extern const Il2CppCodeGenModule g_RiptideNetworkingCodeGenModule;
const Il2CppCodeGenModule g_RiptideNetworkingCodeGenModule = 
{
	"RiptideNetworking.dll",
	151,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
};

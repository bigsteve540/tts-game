#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Client/PacketHandler
struct PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938;
// Client/TCP
struct TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E;
// Client/TCP/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tF9591FFF455798BD4CC54DA615A4A54A9C9D4026;
// Client/UDP
struct UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24;
// Client/UDP/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63;
// EntityController
struct EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8;
// GameManager
struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89;
// NetworkPacket
struct NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action[]
struct ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Client/PacketHandler>[]
struct EntryU5BU5D_tC5AC19D370533421B45A7A4780E18FEB45C43AC9;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,EntityController>[]
struct EntryU5BU5D_t13AA4C8C571708BE1B48762A4F4919F5A3B17BCF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Client/PacketHandler>
struct KeyCollection_t3009BB409EFB735AEB776AC1FB98F4F35FBAF45E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,EntityController>
struct KeyCollection_t7FACC25CAF592AEFD54CB559683B43713AF50FA7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Client/PacketHandler>
struct ValueCollection_tC3D3D7B0325DDA2F9AC08A5EF2590C6B055ACC3B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,EntityController>
struct ValueCollection_tC3804799430615A6AD3AE21AD5F0CFA505128570;
// System.Collections.Generic.Dictionary`2<System.Int32,Client/PacketHandler>
struct Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6;
// System.Collections.Generic.Dictionary`2<System.Int32,EntityController>
struct Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_t97C8498D8F5654A131F59F1B27B85C7EABA84CEC;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t5A38FCC3E9F64286F2A624D6571AF9EA7844398E;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IOAsyncCallback
struct IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980;
// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE;
// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.Net.Sockets.TcpClient
struct TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB;
// System.Net.Sockets.UdpClient
struct UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// ThreadManager
struct ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5;
// TileType[0...,0...]
struct TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09;

IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tilemap_tAF988A9C99D628D3E856E1BFC1BCAEBDCFA3B836_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tF9591FFF455798BD4CC54DA615A4A54A9C9D4026_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral010E4F5F2C32995E4D6998AD0558ECDA82273CB6;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB4C9078AEB9B5061ECABA95ECCDE754D3F0FBA;
IL2CPP_EXTERN_C String_t* _stringLiteral0EFE752AACF664AB50F2CA2EB7E25EC47B9E19AB;
IL2CPP_EXTERN_C String_t* _stringLiteral20935F6F88E3F5968AA2FAFC29282E874B994F12;
IL2CPP_EXTERN_C String_t* _stringLiteral40C1D631E53990C4AA9566AF9C3ED84B58E34AAC;
IL2CPP_EXTERN_C String_t* _stringLiteral41DA637B750B59D8799CAEF26F6363DEC3DED542;
IL2CPP_EXTERN_C String_t* _stringLiteral4B84B15BFF6EE5796152495A230E45E3D7E947D9;
IL2CPP_EXTERN_C String_t* _stringLiteral578F0843CBF5A28A8E384A76B031CD1F4C2010E8;
IL2CPP_EXTERN_C String_t* _stringLiteral6B741B99D84769DADF7F68923BBA26BE8F874EF1;
IL2CPP_EXTERN_C String_t* _stringLiteral77C52F97DDEBCE706DE951053AD5ECBAF8F457D3;
IL2CPP_EXTERN_C String_t* _stringLiteral87EA91135ADC9A42AE7C8E3BB34E74757946198E;
IL2CPP_EXTERN_C String_t* _stringLiteralAAD39E455EACB67F647FAC5C0CC40D27686E8287;
IL2CPP_EXTERN_C String_t* _stringLiteralAD79105B3D9E444F43507B89583C02C2A8FE04E3;
IL2CPP_EXTERN_C String_t* _stringLiteralBF3919D64DA90D62F8AC2F28949FE279E02ED196;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D5FE0395C6C715A981DF9D8AA4840E6A3C5266;
IL2CPP_EXTERN_C String_t* _stringLiteralD994DC169C95BB569809503D6124878C2A6B06BD;
IL2CPP_EXTERN_C const RuntimeMethod* ClientHandle_ModifyAspectHealth_m5A3218128C5DA44BA74FE0881831790B7E1DF60F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientHandle_SpawnAspects_m2F9CC0DD35DFA95FB9D9AD11DB4E9ADF6E3FB9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientHandle_Welcome_mB1155D5C7612AC6D9102A1C0A0FB03832DA955F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m64919C0982BBD4B73B25FD400713D777C9811293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA1F2CE722489F0BD4BA1B8A77D34D933E92B0C77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0CDAA1CB9A85050112C1D2B542454DFD5D320B77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBC9FDCA02266DD73DB42931E6A4A1A67147CB0D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAA43A4AE57FA4411D52E67C19A4EB6B1D179B1B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEF04BC8FE1BE3C6948688783E3DE50D8F26F33F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8_m1F646446CF0B4A60F139D1E23D767C33F95E2BC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m0907A864BC5EC77E9252608D7610D42C7B896E76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m09D0729675AC499836FEA645EC0F67CEFFF05DDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8DDC8569C5393C3A6DD7345DC74B90A5A276E242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mCE39EB4018B1834C1D57318786D5C7ECDFEE2039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE98031696EA20AC3CCD87477BA06E89432951E8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetRange_mD9D9B30D7D3627F73F328F40CB1B8100A31CBB8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_InsertRange_m57D3791524D74A4D9995D85B2DD6D525943CE505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC8B3CE5991B065CAE86AABC7C683CAF61EBF5FE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD6135FBF7E7225B59A609DE762D15A7123860D8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDB3D24D94D226467C7207905CFFFC9A845E035F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkPacket_ReadBool_m178B60929670931222F8C8AB0800C2AF0D9F7981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkPacket_ReadByte_m61AC865BAAD07096973C14DFD7D25548FE004209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkPacket_ReadBytes_m281142BA2AC28E39FAF9783958CC7313711A5C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkPacket_ReadFloat_m95A714D405C99B975BDA0BAF56CEE92072F45C50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkPacket_ReadLong_m0953C00D675E7E1BA3A3EA919EC91E4F173811F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkPacket_ReadShort_mAD85E33A39BA3266869E8572404B2A3CEFD21017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkPacket_ReadString_m8C44616B906971689ED5C219B1E255079D13BCCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m600AFF3513CE2FD177BFE8F4162929FAF2E4644C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TCP_ConnectCallback_mC23EEEAADEA492CAC56D209E85656EA9B008C7F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TCP_ReceiveCallback_m233BA2C22D579CA51BF4433F73EB2FE009959FE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CHandleDataU3Eb__0_m043222CB8945F00CCCA07BD4C1A2529C39869913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CHandleDataU3Eb__0_m7D71365B0363E28613A87CB95A7F23E483EFA18C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDP_ReceiveCallback_mD9046379207DF8891F595C70857FC722A86E5463_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ClientHandle_ModifyAspectHealth_m5A3218128C5DA44BA74FE0881831790B7E1DF60F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ClientHandle_SpawnAspects_m2F9CC0DD35DFA95FB9D9AD11DB4E9ADF6E3FB9E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ClientHandle_Welcome_mB1155D5C7612AC6D9102A1C0A0FB03832DA955F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ClientSend_SendTCPData_m3BAE89C040AC643A7FCE30682DC78082EB2BFF70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ClientSend_SendUDPData_mB5A2D73186CEA4A6AF3FAD99139C349FEC1BF291_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ClientSend_WelcomeReceived_m992A6A9FBAC5F28B4549A68AA94D3EA353ACE43B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_ConnectToServer_m3AF46AA06235C0FD403C4212D4D738485DBA844D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_Disconnect_m8F4234DE4BDEA7D22A206B695A4A2B2D79968FE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_InitializeClientData_mEA5832E34B1FB2C79B160B7BBD3EC8060B8EC42D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client__cctor_m5B38667E78848E8E2CC9A7FB3D793A0FE7A29082_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EntityController_OnGUI_mBF8208880DB1C2187C491153BB34E74DDF4607AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Awake_m12E1357322F99B1544DAD9C099CBFA6E63529A49_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_DrawMap_m0C073A48A48063B6098207A70B8EA873EC2FC04A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_OnApplicationQuit_m995A9BA1A947614D90FAFF27DDEA66555DCCD5EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_SpawnAspect_m3D9E0AAC7BA47C4CE13A07139E9A00C377AAF314_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Start_m4B67F69CF18652603C29FC1C5B7C6482C77B69DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager__cctor_m31E0C44003795D330970BAA2A0F420D3B71341B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_Dispose_mB278EF2A709E845AA76AAABBED70B8487B853462_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_InsertInt_mFD6EBB60EAC73D24E0BF2CB8DDE4CADACD33E353_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_Length_m4CE900D4DFF269DCD5940752699D30B861BD4754_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_ReadBool_m178B60929670931222F8C8AB0800C2AF0D9F7981_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_ReadByte_m61AC865BAAD07096973C14DFD7D25548FE004209_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_ReadBytes_m281142BA2AC28E39FAF9783958CC7313711A5C19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_ReadFloat_m95A714D405C99B975BDA0BAF56CEE92072F45C50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_ReadLong_m0953C00D675E7E1BA3A3EA919EC91E4F173811F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_ReadShort_mAD85E33A39BA3266869E8572404B2A3CEFD21017_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_ReadString_m8C44616B906971689ED5C219B1E255079D13BCCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_Reset_m922470B8AFAD6508B183607E633C818940368388_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_SetBytes_mA5732852E88F92F067387C4E549E6B65C9DDFB9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_ToArray_m0704A13A927ACAEF1F1B79F0E22372D9E1F7872D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_WriteLength_m87E734FE30CC2C3802AF2E87CB298A68E056E025_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_Write_m1BAE86FDEADC109E69DF950E67B19A58E123E366_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_Write_m2F32778518730D05CE066CF06509F1490C97AD92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_Write_m55AD4B133BFE6A1BB857904B10C3BFF8B3142B84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_Write_m699CE2DE738F9FB687564577A2713C0C525AAB00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_Write_m9F7E1B698A2986D5C3C7C8D7926C62F4BE24F094_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_Write_mA00B58234B9247C80A2265C7461BFF18FD190D11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_Write_mC25CC30DB2B1CDCA4F19487A9AF2DBF88E8F7695_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket_Write_mEAC84578F5DFB79046C8C5FD33A178E6D085C9C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket__ctor_m36C53FCAF42FD15BE21B0C365153AF2F8B1ACEB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket__ctor_mC61FC96DE7E043A982D3411AA0DB87F886E9904A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkPacket__ctor_mCAAA79A7224D8B16958769662A9DDA314915183F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TCP_ConnectCallback_mC23EEEAADEA492CAC56D209E85656EA9B008C7F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TCP_Connect_mA588478B8C2AA838014517245DCC49CAC3E65638_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TCP_Disconnect_m0F291694AB9522290B4F6BE691EAFC9370775D97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TCP_HandleData_m24128E8106C5F82940C50BC1BA183BC3A5299183_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TCP_ReceiveCallback_m233BA2C22D579CA51BF4433F73EB2FE009959FE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TCP_SendData_m14988D02B98172DD4849A478C4CB21D93BFCA027_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadManager_ExecuteOnMainThread_mF3CC60CB0878DB1E4958FFA384EC120E73977295_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadManager_FixedUpdate_mBF85478ABFE93688121D21DF3C14F58407DF420C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadManager_UpdateMain_m8C341416750A1B19A6E4ECDB934C482EAC79D68B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadManager__cctor_m2B8243999D4E27A8E8C3FB353CD4F174B8BEE252_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tilemap_BuildMapFromBytes_mD2AF9C1E4414D826DE30082D714E861F4020EB32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tilemap_GetTile_m2737FCA638C64B80A9032C5D140EF02ED9FAFCB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass6_0_U3CHandleDataU3Eb__0_m043222CB8945F00CCCA07BD4C1A2529C39869913_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass8_0_U3CHandleDataU3Eb__0_m7D71365B0363E28613A87CB95A7F23E483EFA18C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDP_Connect_m3A9D7AC1649C50067C5880D394AC49960C388735_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDP_Disconnect_m57E2347339FF92CF2A8E313C2E25DAE1447573E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDP_HandleData_m58523E54CFC7E0FA5A768CF6CADBD43315837450_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDP_ReceiveCallback_mD9046379207DF8891F595C70857FC722A86E5463_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDP_SendData_mB3DE6AA48991B6D994FCE0D113176BBBA6D50DE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDP__ctor_mE556CA385B134880D96CAA79A15CFEFE8F0BE2CD_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360;
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// Client
struct  Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E  : public RuntimeObject
{
public:

public:
};

struct Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields
{
public:
	// System.Int32 Client::dataBufferSize
	int32_t ___dataBufferSize_0;
	// System.String Client::IP
	String_t* ___IP_1;
	// System.Int32 Client::Port
	int32_t ___Port_2;
	// System.Int32 Client::ID
	int32_t ___ID_3;
	// Client_TCP Client::tcp
	TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * ___tcp_4;
	// Client_UDP Client::udp
	UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * ___udp_5;
	// System.Boolean Client::isConnected
	bool ___isConnected_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,Client_PacketHandler> Client::packetHandlers
	Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 * ___packetHandlers_7;

public:
	inline static int32_t get_offset_of_dataBufferSize_0() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields, ___dataBufferSize_0)); }
	inline int32_t get_dataBufferSize_0() const { return ___dataBufferSize_0; }
	inline int32_t* get_address_of_dataBufferSize_0() { return &___dataBufferSize_0; }
	inline void set_dataBufferSize_0(int32_t value)
	{
		___dataBufferSize_0 = value;
	}

	inline static int32_t get_offset_of_IP_1() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields, ___IP_1)); }
	inline String_t* get_IP_1() const { return ___IP_1; }
	inline String_t** get_address_of_IP_1() { return &___IP_1; }
	inline void set_IP_1(String_t* value)
	{
		___IP_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IP_1), (void*)value);
	}

	inline static int32_t get_offset_of_Port_2() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields, ___Port_2)); }
	inline int32_t get_Port_2() const { return ___Port_2; }
	inline int32_t* get_address_of_Port_2() { return &___Port_2; }
	inline void set_Port_2(int32_t value)
	{
		___Port_2 = value;
	}

	inline static int32_t get_offset_of_ID_3() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields, ___ID_3)); }
	inline int32_t get_ID_3() const { return ___ID_3; }
	inline int32_t* get_address_of_ID_3() { return &___ID_3; }
	inline void set_ID_3(int32_t value)
	{
		___ID_3 = value;
	}

	inline static int32_t get_offset_of_tcp_4() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields, ___tcp_4)); }
	inline TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * get_tcp_4() const { return ___tcp_4; }
	inline TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E ** get_address_of_tcp_4() { return &___tcp_4; }
	inline void set_tcp_4(TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * value)
	{
		___tcp_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcp_4), (void*)value);
	}

	inline static int32_t get_offset_of_udp_5() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields, ___udp_5)); }
	inline UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * get_udp_5() const { return ___udp_5; }
	inline UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 ** get_address_of_udp_5() { return &___udp_5; }
	inline void set_udp_5(UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * value)
	{
		___udp_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___udp_5), (void*)value);
	}

	inline static int32_t get_offset_of_isConnected_6() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields, ___isConnected_6)); }
	inline bool get_isConnected_6() const { return ___isConnected_6; }
	inline bool* get_address_of_isConnected_6() { return &___isConnected_6; }
	inline void set_isConnected_6(bool value)
	{
		___isConnected_6 = value;
	}

	inline static int32_t get_offset_of_packetHandlers_7() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields, ___packetHandlers_7)); }
	inline Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 * get_packetHandlers_7() const { return ___packetHandlers_7; }
	inline Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 ** get_address_of_packetHandlers_7() { return &___packetHandlers_7; }
	inline void set_packetHandlers_7(Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 * value)
	{
		___packetHandlers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packetHandlers_7), (void*)value);
	}
};


// Client_TCP
struct  TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E  : public RuntimeObject
{
public:
	// System.Net.Sockets.TcpClient Client_TCP::socket
	TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___socket_0;
	// System.Net.Sockets.NetworkStream Client_TCP::stream
	NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___stream_1;
	// NetworkPacket Client_TCP::receivedData
	NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ___receivedData_2;
	// System.Byte[] Client_TCP::receiveBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___receiveBuffer_3;

public:
	inline static int32_t get_offset_of_socket_0() { return static_cast<int32_t>(offsetof(TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E, ___socket_0)); }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * get_socket_0() const { return ___socket_0; }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB ** get_address_of_socket_0() { return &___socket_0; }
	inline void set_socket_0(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * value)
	{
		___socket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_0), (void*)value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E, ___stream_1)); }
	inline NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * get_stream_1() const { return ___stream_1; }
	inline NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_receivedData_2() { return static_cast<int32_t>(offsetof(TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E, ___receivedData_2)); }
	inline NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * get_receivedData_2() const { return ___receivedData_2; }
	inline NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 ** get_address_of_receivedData_2() { return &___receivedData_2; }
	inline void set_receivedData_2(NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * value)
	{
		___receivedData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receivedData_2), (void*)value);
	}

	inline static int32_t get_offset_of_receiveBuffer_3() { return static_cast<int32_t>(offsetof(TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E, ___receiveBuffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_receiveBuffer_3() const { return ___receiveBuffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_receiveBuffer_3() { return &___receiveBuffer_3; }
	inline void set_receiveBuffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___receiveBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveBuffer_3), (void*)value);
	}
};


// Client_TCP_<>c__DisplayClass8_0
struct  U3CU3Ec__DisplayClass8_0_tF9591FFF455798BD4CC54DA615A4A54A9C9D4026  : public RuntimeObject
{
public:
	// System.Byte[] Client_TCP_<>c__DisplayClass8_0::_packetBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____packetBytes_0;

public:
	inline static int32_t get_offset_of__packetBytes_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tF9591FFF455798BD4CC54DA615A4A54A9C9D4026, ____packetBytes_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__packetBytes_0() const { return ____packetBytes_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__packetBytes_0() { return &____packetBytes_0; }
	inline void set__packetBytes_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____packetBytes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____packetBytes_0), (void*)value);
	}
};


// Client_UDP
struct  UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24  : public RuntimeObject
{
public:
	// System.Net.Sockets.UdpClient Client_UDP::socket
	UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * ___socket_0;
	// System.Net.IPEndPoint Client_UDP::endPoint
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___endPoint_1;

public:
	inline static int32_t get_offset_of_socket_0() { return static_cast<int32_t>(offsetof(UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24, ___socket_0)); }
	inline UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * get_socket_0() const { return ___socket_0; }
	inline UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 ** get_address_of_socket_0() { return &___socket_0; }
	inline void set_socket_0(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * value)
	{
		___socket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_0), (void*)value);
	}

	inline static int32_t get_offset_of_endPoint_1() { return static_cast<int32_t>(offsetof(UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24, ___endPoint_1)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_endPoint_1() const { return ___endPoint_1; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_endPoint_1() { return &___endPoint_1; }
	inline void set_endPoint_1(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___endPoint_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endPoint_1), (void*)value);
	}
};


// Client_UDP_<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63  : public RuntimeObject
{
public:
	// System.Byte[] Client_UDP_<>c__DisplayClass6_0::_data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data_0;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63, ____data_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__data_0() const { return ____data_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_0), (void*)value);
	}
};


// ClientHandle
struct  ClientHandle_t2239925F736ED2832C486DDE6655AEA73E73662B  : public RuntimeObject
{
public:

public:
};


// ClientSend
struct  ClientSend_t37DDF4910F177D0C5F8CCFC7A627BA7116B6CE2E  : public RuntimeObject
{
public:

public:
};


// NetworkPacket
struct  NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte> NetworkPacket::buffer
	List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * ___buffer_0;
	// System.Byte[] NetworkPacket::readableBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___readableBuffer_1;
	// System.Int32 NetworkPacket::readPos
	int32_t ___readPos_2;
	// System.Boolean NetworkPacket::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5, ___buffer_0)); }
	inline List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * get_buffer_0() const { return ___buffer_0; }
	inline List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_readableBuffer_1() { return static_cast<int32_t>(offsetof(NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5, ___readableBuffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_readableBuffer_1() const { return ___readableBuffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_readableBuffer_1() { return &___readableBuffer_1; }
	inline void set_readableBuffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___readableBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readableBuffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_readPos_2() { return static_cast<int32_t>(offsetof(NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5, ___readPos_2)); }
	inline int32_t get_readPos_2() const { return ___readPos_2; }
	inline int32_t* get_address_of_readPos_2() { return &___readPos_2; }
	inline void set_readPos_2(int32_t value)
	{
		___readPos_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32,Client_PacketHandler>
struct  Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC5AC19D370533421B45A7A4780E18FEB45C43AC9* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3009BB409EFB735AEB776AC1FB98F4F35FBAF45E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC3D3D7B0325DDA2F9AC08A5EF2590C6B055ACC3B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6, ___entries_1)); }
	inline EntryU5BU5D_tC5AC19D370533421B45A7A4780E18FEB45C43AC9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC5AC19D370533421B45A7A4780E18FEB45C43AC9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC5AC19D370533421B45A7A4780E18FEB45C43AC9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6, ___keys_7)); }
	inline KeyCollection_t3009BB409EFB735AEB776AC1FB98F4F35FBAF45E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3009BB409EFB735AEB776AC1FB98F4F35FBAF45E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3009BB409EFB735AEB776AC1FB98F4F35FBAF45E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6, ___values_8)); }
	inline ValueCollection_tC3D3D7B0325DDA2F9AC08A5EF2590C6B055ACC3B * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC3D3D7B0325DDA2F9AC08A5EF2590C6B055ACC3B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC3D3D7B0325DDA2F9AC08A5EF2590C6B055ACC3B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,EntityController>
struct  Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t13AA4C8C571708BE1B48762A4F4919F5A3B17BCF* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t7FACC25CAF592AEFD54CB559683B43713AF50FA7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC3804799430615A6AD3AE21AD5F0CFA505128570 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93, ___entries_1)); }
	inline EntryU5BU5D_t13AA4C8C571708BE1B48762A4F4919F5A3B17BCF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t13AA4C8C571708BE1B48762A4F4919F5A3B17BCF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t13AA4C8C571708BE1B48762A4F4919F5A3B17BCF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93, ___keys_7)); }
	inline KeyCollection_t7FACC25CAF592AEFD54CB559683B43713AF50FA7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t7FACC25CAF592AEFD54CB559683B43713AF50FA7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t7FACC25CAF592AEFD54CB559683B43713AF50FA7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93, ___values_8)); }
	inline ValueCollection_tC3804799430615A6AD3AE21AD5F0CFA505128570 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC3804799430615A6AD3AE21AD5F0CFA505128570 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC3804799430615A6AD3AE21AD5F0CFA505128570 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action>
struct  List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7, ____items_1)); }
	inline ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7_StaticFields, ____emptyArray_5)); }
	inline ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte>
struct  List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____items_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Net.EndPoint
struct  EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Tilemap
struct  Tilemap_tAF988A9C99D628D3E856E1BFC1BCAEBDCFA3B836  : public RuntimeObject
{
public:

public:
};

struct Tilemap_tAF988A9C99D628D3E856E1BFC1BCAEBDCFA3B836_StaticFields
{
public:
	// TileType[0...,0...] Tilemap::tiles
	TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360* ___tiles_0;

public:
	inline static int32_t get_offset_of_tiles_0() { return static_cast<int32_t>(offsetof(Tilemap_tAF988A9C99D628D3E856E1BFC1BCAEBDCFA3B836_StaticFields, ___tiles_0)); }
	inline TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360* get_tiles_0() const { return ___tiles_0; }
	inline TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360** get_address_of_tiles_0() { return &___tiles_0; }
	inline void set_tiles_0(TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360* value)
	{
		___tiles_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tiles_0), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Net.IPEndPoint
struct  IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F  : public EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___m_Address_0;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_1;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Address_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_m_Address_0() const { return ___m_Address_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___m_Address_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_1() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Port_1)); }
	inline int32_t get_m_Port_1() const { return ___m_Port_1; }
	inline int32_t* get_address_of_m_Port_1() { return &___m_Port_1; }
	inline void set_m_Port_1(int32_t value)
	{
		___m_Port_1 = value;
	}
};

struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___IPv6Any_3;

public:
	inline static int32_t get_offset_of_Any_2() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___Any_2)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_Any_2() const { return ___Any_2; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_Any_2() { return &___Any_2; }
	inline void set_Any_2(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___Any_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_2), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_3() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___IPv6Any_3)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_IPv6Any_3() const { return ___IPv6Any_3; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_IPv6Any_3() { return &___IPv6Any_3; }
	inline void set_IPv6Any_3(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___IPv6Any_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_3), (void*)value);
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// ClientPackets
struct  ClientPackets_t965B61C87EEE983543EB1507DFA204AC1E1E1DB1 
{
public:
	// System.Int32 ClientPackets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientPackets_t965B61C87EEE983543EB1507DFA204AC1E1E1DB1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ServerPackets
struct  ServerPackets_t953A1A67CB2F60AACECE5BD7C8F778D9E481FE65 
{
public:
	// System.Int32 ServerPackets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServerPackets_t953A1A67CB2F60AACECE5BD7C8F778D9E481FE65, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.NetworkStream
struct  NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_StreamSocket_4;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_7;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_9;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_11;

public:
	inline static int32_t get_offset_of_m_StreamSocket_4() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_StreamSocket_4)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_StreamSocket_4() const { return ___m_StreamSocket_4; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_StreamSocket_4() { return &___m_StreamSocket_4; }
	inline void set_m_StreamSocket_4(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_StreamSocket_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamSocket_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Readable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_Readable_5)); }
	inline bool get_m_Readable_5() const { return ___m_Readable_5; }
	inline bool* get_address_of_m_Readable_5() { return &___m_Readable_5; }
	inline void set_m_Readable_5(bool value)
	{
		___m_Readable_5 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_Writeable_6)); }
	inline bool get_m_Writeable_6() const { return ___m_Writeable_6; }
	inline bool* get_address_of_m_Writeable_6() { return &___m_Writeable_6; }
	inline void set_m_Writeable_6(bool value)
	{
		___m_Writeable_6 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_7() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_OwnsSocket_7)); }
	inline bool get_m_OwnsSocket_7() const { return ___m_OwnsSocket_7; }
	inline bool* get_address_of_m_OwnsSocket_7() { return &___m_OwnsSocket_7; }
	inline void set_m_OwnsSocket_7(bool value)
	{
		___m_OwnsSocket_7 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_8() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CloseTimeout_8)); }
	inline int32_t get_m_CloseTimeout_8() const { return ___m_CloseTimeout_8; }
	inline int32_t* get_address_of_m_CloseTimeout_8() { return &___m_CloseTimeout_8; }
	inline void set_m_CloseTimeout_8(int32_t value)
	{
		___m_CloseTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_9() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CleanedUp_9)); }
	inline bool get_m_CleanedUp_9() const { return ___m_CleanedUp_9; }
	inline bool* get_address_of_m_CleanedUp_9() { return &___m_CleanedUp_9; }
	inline void set_m_CleanedUp_9(bool value)
	{
		___m_CleanedUp_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_10() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CurrentReadTimeout_10)); }
	inline int32_t get_m_CurrentReadTimeout_10() const { return ___m_CurrentReadTimeout_10; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_10() { return &___m_CurrentReadTimeout_10; }
	inline void set_m_CurrentReadTimeout_10(int32_t value)
	{
		___m_CurrentReadTimeout_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CurrentWriteTimeout_11)); }
	inline int32_t get_m_CurrentWriteTimeout_11() const { return ___m_CurrentWriteTimeout_11; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_11() { return &___m_CurrentWriteTimeout_11; }
	inline void set_m_CurrentWriteTimeout_11(int32_t value)
	{
		___m_CurrentWriteTimeout_11 = value;
	}
};


// System.Net.Sockets.ProtocolType
struct  ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct  SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TileType
struct  TileType_t6C5C9CF0590BC0F7AF04C1C0A97A3DF506DB7B39 
{
public:
	// System.Int32 TileType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TileType_t6C5C9CF0590BC0F7AF04C1C0A97A3DF506DB7B39, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Net.IPAddress
struct  IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Any_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___None_3)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_None_3() const { return ___None_3; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.Net.Sockets.Socket
struct  Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_Handle_13)); }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_13), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___seed_endpoint_14)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___ReadSem_15)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_15), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___WriteSem_16)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_16), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}
};

struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___AcceptAsyncCallback_22;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptReceiveCallback_24;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ConnectAsyncCallback_25;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginConnectCallback_26;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___DisconnectAsyncCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginDisconnectCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveGenericCallback_31;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveFromAsyncCallback_32;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveFromCallback_33;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginSendGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendToAsyncCallback_36;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_22() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___AcceptAsyncCallback_22)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_AcceptAsyncCallback_22() const { return ___AcceptAsyncCallback_22; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_AcceptAsyncCallback_22() { return &___AcceptAsyncCallback_22; }
	inline void set_AcceptAsyncCallback_22(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___AcceptAsyncCallback_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_22), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_23() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptCallback_23)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptCallback_23() const { return ___BeginAcceptCallback_23; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptCallback_23() { return &___BeginAcceptCallback_23; }
	inline void set_BeginAcceptCallback_23(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_24() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptReceiveCallback_24)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptReceiveCallback_24() const { return ___BeginAcceptReceiveCallback_24; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptReceiveCallback_24() { return &___BeginAcceptReceiveCallback_24; }
	inline void set_BeginAcceptReceiveCallback_24(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptReceiveCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_25() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ConnectAsyncCallback_25)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ConnectAsyncCallback_25() const { return ___ConnectAsyncCallback_25; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ConnectAsyncCallback_25() { return &___ConnectAsyncCallback_25; }
	inline void set_ConnectAsyncCallback_25(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ConnectAsyncCallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_26() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginConnectCallback_26)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginConnectCallback_26() const { return ___BeginConnectCallback_26; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginConnectCallback_26() { return &___BeginConnectCallback_26; }
	inline void set_BeginConnectCallback_26(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginConnectCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_27() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___DisconnectAsyncCallback_27)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_DisconnectAsyncCallback_27() const { return ___DisconnectAsyncCallback_27; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_DisconnectAsyncCallback_27() { return &___DisconnectAsyncCallback_27; }
	inline void set_DisconnectAsyncCallback_27(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___DisconnectAsyncCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_28() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginDisconnectCallback_28)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginDisconnectCallback_28() const { return ___BeginDisconnectCallback_28; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginDisconnectCallback_28() { return &___BeginDisconnectCallback_28; }
	inline void set_BeginDisconnectCallback_28(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginDisconnectCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveAsyncCallback_29)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveAsyncCallback_29() const { return ___ReceiveAsyncCallback_29; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveAsyncCallback_29() { return &___ReceiveAsyncCallback_29; }
	inline void set_ReceiveAsyncCallback_29(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_30() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveCallback_30)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveCallback_30() const { return ___BeginReceiveCallback_30; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveCallback_30() { return &___BeginReceiveCallback_30; }
	inline void set_BeginReceiveCallback_30(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_31() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveGenericCallback_31)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveGenericCallback_31() const { return ___BeginReceiveGenericCallback_31; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveGenericCallback_31() { return &___BeginReceiveGenericCallback_31; }
	inline void set_BeginReceiveGenericCallback_31(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveGenericCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_32() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveFromAsyncCallback_32)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveFromAsyncCallback_32() const { return ___ReceiveFromAsyncCallback_32; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveFromAsyncCallback_32() { return &___ReceiveFromAsyncCallback_32; }
	inline void set_ReceiveFromAsyncCallback_32(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveFromAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_33() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveFromCallback_33)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveFromCallback_33() const { return ___BeginReceiveFromCallback_33; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveFromCallback_33() { return &___BeginReceiveFromCallback_33; }
	inline void set_BeginReceiveFromCallback_33(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveFromCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_34() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendAsyncCallback_34)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendAsyncCallback_34() const { return ___SendAsyncCallback_34; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendAsyncCallback_34() { return &___SendAsyncCallback_34; }
	inline void set_SendAsyncCallback_34(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendAsyncCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginSendGenericCallback_35)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginSendGenericCallback_35() const { return ___BeginSendGenericCallback_35; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginSendGenericCallback_35() { return &___BeginSendGenericCallback_35; }
	inline void set_BeginSendGenericCallback_35(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginSendGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendToAsyncCallback_36)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendToAsyncCallback_36() const { return ___SendToAsyncCallback_36; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendToAsyncCallback_36() { return &___SendToAsyncCallback_36; }
	inline void set_SendToAsyncCallback_36(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendToAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_36), (void*)value);
	}
};


// System.Net.Sockets.TcpClient
struct  TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_ClientSocket_0)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_DataStream_2() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_DataStream_2)); }
	inline NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * get_m_DataStream_2() const { return ___m_DataStream_2; }
	inline NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA ** get_address_of_m_DataStream_2() { return &___m_DataStream_2; }
	inline void set_m_DataStream_2(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * value)
	{
		___m_DataStream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataStream_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}
};


// System.Net.Sockets.UdpClient
struct  UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::m_ClientSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.UdpClient::m_Active
	bool ___m_Active_1;
	// System.Byte[] System.Net.Sockets.UdpClient::m_Buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_Buffer_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.UdpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.UdpClient::m_CleanedUp
	bool ___m_CleanedUp_4;
	// System.Boolean System.Net.Sockets.UdpClient::m_IsBroadcast
	bool ___m_IsBroadcast_5;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641, ___m_ClientSocket_0)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_Buffer_2() { return static_cast<int32_t>(offsetof(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641, ___m_Buffer_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_Buffer_2() const { return ___m_Buffer_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_Buffer_2() { return &___m_Buffer_2; }
	inline void set_m_Buffer_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_Buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}

	inline static int32_t get_offset_of_m_IsBroadcast_5() { return static_cast<int32_t>(offsetof(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641, ___m_IsBroadcast_5)); }
	inline bool get_m_IsBroadcast_5() const { return ___m_IsBroadcast_5; }
	inline bool* get_address_of_m_IsBroadcast_5() { return &___m_IsBroadcast_5; }
	inline void set_m_IsBroadcast_5(bool value)
	{
		___m_IsBroadcast_5 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Client_PacketHandler
struct  PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// EntityController
struct  EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject EntityController::EntityUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___EntityUI_4;
	// UnityEngine.GameObject EntityController::Model
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___Model_5;
	// UnityEngine.GameObject EntityController::VFXAnchors
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___VFXAnchors_6;
	// UnityEngine.UI.Slider EntityController::Health
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___Health_7;
	// System.Int32 EntityController::hp
	int32_t ___hp_8;
	// UnityEngine.UI.Slider EntityController::ActionPoints
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___ActionPoints_9;

public:
	inline static int32_t get_offset_of_EntityUI_4() { return static_cast<int32_t>(offsetof(EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8, ___EntityUI_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_EntityUI_4() const { return ___EntityUI_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_EntityUI_4() { return &___EntityUI_4; }
	inline void set_EntityUI_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___EntityUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EntityUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_Model_5() { return static_cast<int32_t>(offsetof(EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8, ___Model_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_Model_5() const { return ___Model_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_Model_5() { return &___Model_5; }
	inline void set_Model_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___Model_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Model_5), (void*)value);
	}

	inline static int32_t get_offset_of_VFXAnchors_6() { return static_cast<int32_t>(offsetof(EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8, ___VFXAnchors_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_VFXAnchors_6() const { return ___VFXAnchors_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_VFXAnchors_6() { return &___VFXAnchors_6; }
	inline void set_VFXAnchors_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___VFXAnchors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VFXAnchors_6), (void*)value);
	}

	inline static int32_t get_offset_of_Health_7() { return static_cast<int32_t>(offsetof(EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8, ___Health_7)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_Health_7() const { return ___Health_7; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_Health_7() { return &___Health_7; }
	inline void set_Health_7(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___Health_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Health_7), (void*)value);
	}

	inline static int32_t get_offset_of_hp_8() { return static_cast<int32_t>(offsetof(EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8, ___hp_8)); }
	inline int32_t get_hp_8() const { return ___hp_8; }
	inline int32_t* get_address_of_hp_8() { return &___hp_8; }
	inline void set_hp_8(int32_t value)
	{
		___hp_8 = value;
	}

	inline static int32_t get_offset_of_ActionPoints_9() { return static_cast<int32_t>(offsetof(EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8, ___ActionPoints_9)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_ActionPoints_9() const { return ___ActionPoints_9; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_ActionPoints_9() { return &___ActionPoints_9; }
	inline void set_ActionPoints_9(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___ActionPoints_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionPoints_9), (void*)value);
	}
};


// GameManager
struct  GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject[] GameManager::tileVisuals
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___tileVisuals_6;

public:
	inline static int32_t get_offset_of_tileVisuals_6() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___tileVisuals_6)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_tileVisuals_6() const { return ___tileVisuals_6; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_tileVisuals_6() { return &___tileVisuals_6; }
	inline void set_tileVisuals_6(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___tileVisuals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tileVisuals_6), (void*)value);
	}
};

struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields
{
public:
	// GameManager GameManager::Instance
	GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * ___Instance_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,EntityController> GameManager::Entities
	Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * ___Entities_5;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields, ___Instance_4)); }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * get_Instance_4() const { return ___Instance_4; }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_Entities_5() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields, ___Entities_5)); }
	inline Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * get_Entities_5() const { return ___Entities_5; }
	inline Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 ** get_address_of_Entities_5() { return &___Entities_5; }
	inline void set_Entities_5(Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * value)
	{
		___Entities_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Entities_5), (void*)value);
	}
};


// ThreadManager
struct  ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Action> ThreadManager::executeOnMainThread
	List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * ___executeOnMainThread_4;
	// System.Collections.Generic.List`1<System.Action> ThreadManager::executeCopiedOnMainThread
	List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * ___executeCopiedOnMainThread_5;
	// System.Boolean ThreadManager::actionToExecuteOnMainThread
	bool ___actionToExecuteOnMainThread_6;

public:
	inline static int32_t get_offset_of_executeOnMainThread_4() { return static_cast<int32_t>(offsetof(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields, ___executeOnMainThread_4)); }
	inline List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * get_executeOnMainThread_4() const { return ___executeOnMainThread_4; }
	inline List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 ** get_address_of_executeOnMainThread_4() { return &___executeOnMainThread_4; }
	inline void set_executeOnMainThread_4(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * value)
	{
		___executeOnMainThread_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___executeOnMainThread_4), (void*)value);
	}

	inline static int32_t get_offset_of_executeCopiedOnMainThread_5() { return static_cast<int32_t>(offsetof(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields, ___executeCopiedOnMainThread_5)); }
	inline List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * get_executeCopiedOnMainThread_5() const { return ___executeCopiedOnMainThread_5; }
	inline List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 ** get_address_of_executeCopiedOnMainThread_5() { return &___executeCopiedOnMainThread_5; }
	inline void set_executeCopiedOnMainThread_5(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * value)
	{
		___executeCopiedOnMainThread_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___executeCopiedOnMainThread_5), (void*)value);
	}

	inline static int32_t get_offset_of_actionToExecuteOnMainThread_6() { return static_cast<int32_t>(offsetof(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields, ___actionToExecuteOnMainThread_6)); }
	inline bool get_actionToExecuteOnMainThread_6() const { return ___actionToExecuteOnMainThread_6; }
	inline bool* get_address_of_actionToExecuteOnMainThread_6() { return &___actionToExecuteOnMainThread_6; }
	inline void set_actionToExecuteOnMainThread_6(bool value)
	{
		___actionToExecuteOnMainThread_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TileType[,]
struct TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m5DBFEC24E0DC9FC8734E858A489BC7B8B64B0BFF_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mFE9C42D5336D4F9EFF8CD96E2A26962EFF523947_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_gshared_inline (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m57D3791524D74A4D9995D85B2DD6D525943CE505_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, int32_t ___index0, RuntimeObject* ___collection1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE98031696EA20AC3CCD87477BA06E89432951E8A_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m09D0729675AC499836FEA645EC0F67CEFFF05DDC_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, uint8_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * List_1_GetRange_mD9D9B30D7D3627F73F328F40CB1B8100A31CBB8B_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// System.Void Client::InitializeClientData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_InitializeClientData_mEA5832E34B1FB2C79B160B7BBD3EC8060B8EC42D (const RuntimeMethod* method);
// System.Void Client/TCP::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Connect_mA588478B8C2AA838014517245DCC49CAC3E65638 (TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Client/PacketHandler>::.ctor()
inline void Dictionary_2__ctor_m0CDAA1CB9A85050112C1D2B542454DFD5D320B77 (Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void Client/PacketHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketHandler__ctor_m81C998D1AB4285D0B0C488FDD63D6F63917FBB7C (PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Client/PacketHandler>::Add(!0,!1)
inline void Dictionary_2_Add_mA1F2CE722489F0BD4BA1B8A77D34D933E92B0C77 (Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 * __this, int32_t ___key0, PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 *, int32_t, PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 *, const RuntimeMethod*))Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpClient_Close_mA85B745647A63FDF485BEF7C5E59567C0430695E (UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * __this, const RuntimeMethod* method);
// System.Void Client/TCP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP__ctor_m7EF5486A4177E53DAA9B30E7E500FDBB14EA728B (TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * __this, const RuntimeMethod* method);
// System.Void Client/UDP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP__ctor_mE556CA385B134880D96CAA79A15CFEFE8F0BE2CD (UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient__ctor_m152C74CC5F0D393E707CF031F18B0E04422936BF (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_ReceiveBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_ReceiveBufferSize_m628AD5C47764AB25329B28ADFE9485D3AA3A4059 (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_SendBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_SendBufferSize_m0338433CA19C7402ED223DD04CA3B63DCE69B2B2 (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TcpClient_BeginConnect_m52E1A875F3FE5DEB08E08FC6DA4281AA1420A743 (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, String_t* ___host0, int32_t ___port1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___requestCallback2, RuntimeObject * ___state3, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::EndConnect(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_EndConnect_m38E0788EDDA2DF9D90A67FA0CB3D030D3A9FC851 (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.TcpClient::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClient_get_Connected_m49D1BA8F64A3FFA32A6E77B4A26E9AAA4822500C (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Void NetworkPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket__ctor_m36C53FCAF42FD15BE21B0C365153AF2F8B1ACEB1 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, const RuntimeMethod* method);
// System.Byte[] NetworkPacket::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetworkPacket_ToArray_m0704A13A927ACAEF1F1B79F0E22372D9E1F7872D (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, const RuntimeMethod* method);
// System.Int32 NetworkPacket::Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkPacket_Length_m4CE900D4DFF269DCD5940752699D30B861BD4754 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_m8F4234DE4BDEA7D22A206B695A4A2B2D79968FE1 (const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean Client/TCP::HandleData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCP_HandleData_m24128E8106C5F82940C50BC1BA183BC3A5299183 (TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data0, const RuntimeMethod* method);
// System.Void NetworkPacket::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Reset_m922470B8AFAD6508B183607E633C818940368388 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____shouldReset0, const RuntimeMethod* method);
// System.Void Client/TCP::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Disconnect_m0F291694AB9522290B4F6BE691EAFC9370775D97 (TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * __this, const RuntimeMethod* method);
// System.Void NetworkPacket::SetBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_SetBytes_mA5732852E88F92F067387C4E549E6B65C9DDFB9C (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data0, const RuntimeMethod* method);
// System.Int32 NetworkPacket::UnreadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkPacket_UnreadLength_mE7E51CA5B1717276CD594BBBEFDB686408AE2551 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, const RuntimeMethod* method);
// System.Int32 NetworkPacket::ReadInt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____moveReadPos0, const RuntimeMethod* method);
// System.Void Client/TCP/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m95CEF16A35DEC938021CB2C2AB44E27529A567C0 (U3CU3Ec__DisplayClass8_0_tF9591FFF455798BD4CC54DA615A4A54A9C9D4026 * __this, const RuntimeMethod* method);
// System.Byte[] NetworkPacket::ReadBytes(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetworkPacket_ReadBytes_m281142BA2AC28E39FAF9783958CC7313711A5C19 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, int32_t ____length0, bool ____moveReadPos1, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ThreadManager::ExecuteOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager_ExecuteOnMainThread_mF3CC60CB0878DB1E4958FFA384EC120E73977295 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ____action0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void NetworkPacket::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket__ctor_mC61FC96DE7E043A982D3411AA0DB87F886E9904A (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Client/PacketHandler>::get_Item(!0)
inline PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * Dictionary_2_get_Item_mAA43A4AE57FA4411D52E67C19A4EB6B1D179B1B4 (Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * (*) (Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared)(__this, ___key0, method);
}
// System.Void Client/PacketHandler::Invoke(NetworkPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketHandler_Invoke_m7560EDDF1F787E29FEC8B7EF795D2FF8BADC32F0 (PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * __this, NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ____packet0, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273 (String_t* ___ipString0, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845 (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpClient__ctor_m16B5D497B74A33323D10285538BF31147B2E5984 (UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * __this, int32_t ___port0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::Connect(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpClient_Connect_mDB1F3F7AB00C747FFB183BF7CD1F691CFC41418F (UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * __this, IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___endPoint0, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.UdpClient::BeginReceive(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UdpClient_BeginReceive_mDC4D583BBB1375CF5C3085FEDD92BB6921E21302 (UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___requestCallback0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void Client/UDP::SendData(NetworkPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_SendData_mB3DE6AA48991B6D994FCE0D113176BBBA6D50DE9 (UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * __this, NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ____packet0, const RuntimeMethod* method);
// System.Void NetworkPacket::InsertInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_InsertInt_mFD6EBB60EAC73D24E0BF2CB8DDE4CADACD33E353 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, int32_t ____value0, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.UdpClient::BeginSend(System.Byte[],System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UdpClient_BeginSend_m392F77D91BCABC15E5AA6CB5A59510A79B7666D3 (UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___datagram0, int32_t ___bytes1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___requestCallback2, RuntimeObject * ___state3, const RuntimeMethod* method);
// System.Byte[] System.Net.Sockets.UdpClient::EndReceive(System.IAsyncResult,System.Net.IPEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* UdpClient_EndReceive_mF25D1BFECC2581E32DB6A1202EA4670B20580A4F (UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * __this, RuntimeObject* ___asyncResult0, IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** ___remoteEP1, const RuntimeMethod* method);
// System.Void Client/UDP::HandleData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_HandleData_m58523E54CFC7E0FA5A768CF6CADBD43315837450 (UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data0, const RuntimeMethod* method);
// System.Void Client/UDP::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Disconnect_m57E2347339FF92CF2A8E313C2E25DAE1447573E1 (UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * __this, const RuntimeMethod* method);
// System.Void Client/UDP/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB987B8E342EB3C54C09016AADB30EBE8B2C4503A (U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63 * __this, const RuntimeMethod* method);
// System.Void Tilemap::BuildMapFromBytes(System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_BuildMapFromBytes_mD2AF9C1E4414D826DE30082D714E861F4020EB32 (int32_t ____xLength0, int32_t ____yLength1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____bytes2, const RuntimeMethod* method);
// System.Void ClientSend::WelcomeReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSend_WelcomeReceived_m992A6A9FBAC5F28B4549A68AA94D3EA353ACE43B (const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * Socket_get_LocalEndPoint_m5BA68FA5F390F1F8913FA78F919FD9364B669E9C (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.IPEndPoint::get_Port()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method);
// System.Void Client/UDP::Connect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Connect_m3A9D7AC1649C50067C5880D394AC49960C388735 (UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * __this, int32_t ____localPort0, const RuntimeMethod* method);
// System.String NetworkPacket::ReadString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkPacket_ReadString_m8C44616B906971689ED5C219B1E255079D13BCCB (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____moveReadPos0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void GameManager::SpawnAspect(System.Int32,System.String,System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnAspect_m3D9E0AAC7BA47C4CE13A07139E9A00C377AAF314 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ____entityID0, String_t* ____aspectCode1, int32_t ____hp2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ____posXZ3, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,EntityController>::get_Item(!0)
inline EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * Dictionary_2_get_Item_mEF04BC8FE1BE3C6948688783E3DE50D8F26F33F0 (Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * (*) (Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared)(__this, ___key0, method);
}
// System.Void EntityController::SetHP(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void EntityController_SetHP_m50F064E829B815DCA06689100DEB22F2BB343EE8_inline (EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * __this, int32_t ____newHP0, const RuntimeMethod* method);
// System.Void NetworkPacket::WriteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_WriteLength_m87E734FE30CC2C3802AF2E87CB298A68E056E025 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, const RuntimeMethod* method);
// System.Void Client/TCP::SendData(NetworkPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_SendData_m14988D02B98172DD4849A478C4CB21D93BFCA027 (TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * __this, NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ____packet0, const RuntimeMethod* method);
// System.Void NetworkPacket::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket__ctor_mCAAA79A7224D8B16958769662A9DDA314915183F (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, int32_t ____id0, const RuntimeMethod* method);
// System.Void NetworkPacket::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_m1BAE86FDEADC109E69DF950E67B19A58E123E366 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, int32_t ____value0, const RuntimeMethod* method);
// System.Void NetworkPacket::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_mA00B58234B9247C80A2265C7461BFF18FD190D11 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, String_t* ____value0, const RuntimeMethod* method);
// System.Void ClientSend::SendTCPData(NetworkPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSend_SendTCPData_m3BAE89C040AC643A7FCE30682DC78082EB2BFF70 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ____packet0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_m8A788187BB0412D6B23AFEED65FCFF70AC197C3A (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void Client::ConnectToServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ConnectToServer_m3AF46AA06235C0FD403C4212D4D738485DBA844D (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Resources_Load_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m600AFF3513CE2FD177BFE8F4162929FAF2E4644C (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m5DBFEC24E0DC9FC8734E858A489BC7B8B64B0BFF_gshared)(___path0, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mFE9C42D5336D4F9EFF8CD96E2A26962EFF523947_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<EntityController>()
inline EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * GameObject_GetComponent_TisEntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8_m1F646446CF0B4A60F139D1E23D767C33F95E2BC2 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,EntityController>::Add(!0,!1)
inline void Dictionary_2_Add_m64919C0982BBD4B73B25FD400713D777C9811293 (Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * __this, int32_t ___key0, EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 *, int32_t, EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 *, const RuntimeMethod*))Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared)(__this, ___key0, ___value1, method);
}
// TileType Tilemap::GetTile(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTile_m2737FCA638C64B80A9032C5D140EF02ED9FAFCB8 (int32_t ____indexX0, int32_t ____indexY1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,EntityController>::.ctor()
inline void Dictionary_2__ctor_mBC9FDCA02266DD73DB42931E6A4A1A67147CB0D0 (Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079 (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, const RuntimeMethod*))List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079_gshared)(__this, method);
}
// System.Void NetworkPacket::Write(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_m2F32778518730D05CE066CF06509F1490C97AD92 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____value0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488 (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, const RuntimeMethod*))List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
inline int32_t List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_inline (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, const RuntimeMethod*))List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_gshared_inline)(__this, method);
}
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_mB5BCBAAFE3AE14F2AF1731187C7155A236DF38EA (int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_InsertRange_m57D3791524D74A4D9995D85B2DD6D525943CE505 (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, int32_t ___index0, RuntimeObject* ___collection1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m57D3791524D74A4D9995D85B2DD6D525943CE505_gshared)(__this, ___index0, ___collection1, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
inline void List_1_Clear_mE98031696EA20AC3CCD87477BA06E89432951E8A (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, const RuntimeMethod*))List_1_Clear_mE98031696EA20AC3CCD87477BA06E89432951E8A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
inline void List_1_Add_m09D0729675AC499836FEA645EC0F67CEFFF05DDC (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, uint8_t, const RuntimeMethod*))List_1_Add_m09D0729675AC499836FEA645EC0F67CEFFF05DDC_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_gshared)(__this, ___collection0, method);
}
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_mB7DFC7C4705F916C40527A87C9AA6D0EABC23512 (int16_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_m2652D1E20FC48C5953639CE61B2F064C2074CF78 (int64_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF (float ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_mB698B4BC6B7F66DB66E049304068A34B44778B87 (bool ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E (const RuntimeMethod* method);
// System.Void NetworkPacket::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_m55AD4B133BFE6A1BB857904B10C3BFF8B3142B84 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, float ____value0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
inline List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * List_1_GetRange_mD9D9B30D7D3627F73F328F40CB1B8100A31CBB8B (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, int32_t, int32_t, const RuntimeMethod*))List_1_GetRange_mD9D9B30D7D3627F73F328F40CB1B8100A31CBB8B_gshared)(__this, ___index0, ___count1, method);
}
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BitConverter_ToInt16_mBFC7B476188DF611E2B21C89693258F6A4969CEA (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m900A016CA90064569D8DF6D9195044C9C106B391 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BitConverter_ToInt64_m28987106F93DB8C163FD4E740B4FEA405CC8A7FA (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Boolean System.BitConverter::ToBoolean(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitConverter_ToBoolean_mDC40E06D2185E50B814E1C016105DD2A3C07D965 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Single NetworkPacket::ReadFloat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkPacket_ReadFloat_m95A714D405C99B975BDA0BAF56CEE92072F45C50 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____moveReadPos0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void ThreadManager::UpdateMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager_UpdateMain_m8C341416750A1B19A6E4ECDB934C482EAC79D68B (const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
inline void List_1_Add_m8DDC8569C5393C3A6DD7345DC74B90A5A276E242 (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_mCE39EB4018B1834C1D57318786D5C7ECDFEE2039 (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m0907A864BC5EC77E9252608D7610D42C7B896E76 (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// !0 System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * List_1_get_Item_mDB3D24D94D226467C7207905CFFFC9A845E035F5_inline (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * (*) (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_mD6135FBF7E7225B59A609DE762D15A7123860D8B_inline (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mC8B3CE5991B065CAE86AABC7C683CAF61EBF5FE3 (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Int32 System.Convert::ToInt32(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m322C82C3EB50E7389A4A38C4601FD08705CA56CF (uint8_t ___value0, const RuntimeMethod* method);
// System.Void GameManager::DrawMap(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DrawMap_m0C073A48A48063B6098207A70B8EA873EC2FC04A (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ____sizeX0, int32_t ____sizeY1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Client::ConnectToServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ConnectToServer_m3AF46AA06235C0FD403C4212D4D738485DBA844D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_ConnectToServer_m3AF46AA06235C0FD403C4212D4D738485DBA844D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitializeClientData();
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		Client_InitializeClientData_mEA5832E34B1FB2C79B160B7BBD3EC8060B8EC42D(/*hidden argument*/NULL);
		// isConnected = true;
		((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->set_isConnected_6((bool)1);
		// tcp.Connect(); // Connect tcp, udp gets connected once tcp is done
		TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * L_0 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_tcp_4();
		NullCheck(L_0);
		TCP_Connect_mA588478B8C2AA838014517245DCC49CAC3E65638(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client::InitializeClientData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_InitializeClientData_mEA5832E34B1FB2C79B160B7BBD3EC8060B8EC42D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_InitializeClientData_mEA5832E34B1FB2C79B160B7BBD3EC8060B8EC42D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// packetHandlers = new Dictionary<int, PacketHandler>()
		// {
		//     { (int)ServerPackets.Welcome, ClientHandle.Welcome },
		//     { (int)ServerPackets.SpawnAspects, ClientHandle.SpawnAspects },
		//     { (int)ServerPackets.ModifyAspectHealth, ClientHandle.ModifyAspectHealth }
		// };
		Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 * L_0 = (Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 *)il2cpp_codegen_object_new(Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0CDAA1CB9A85050112C1D2B542454DFD5D320B77(L_0, /*hidden argument*/Dictionary_2__ctor_m0CDAA1CB9A85050112C1D2B542454DFD5D320B77_RuntimeMethod_var);
		Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 * L_1 = L_0;
		PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * L_2 = (PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 *)il2cpp_codegen_object_new(PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938_il2cpp_TypeInfo_var);
		PacketHandler__ctor_m81C998D1AB4285D0B0C488FDD63D6F63917FBB7C(L_2, NULL, (intptr_t)((intptr_t)ClientHandle_Welcome_mB1155D5C7612AC6D9102A1C0A0FB03832DA955F3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		Dictionary_2_Add_mA1F2CE722489F0BD4BA1B8A77D34D933E92B0C77(L_1, 1, L_2, /*hidden argument*/Dictionary_2_Add_mA1F2CE722489F0BD4BA1B8A77D34D933E92B0C77_RuntimeMethod_var);
		Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 * L_3 = L_1;
		PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * L_4 = (PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 *)il2cpp_codegen_object_new(PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938_il2cpp_TypeInfo_var);
		PacketHandler__ctor_m81C998D1AB4285D0B0C488FDD63D6F63917FBB7C(L_4, NULL, (intptr_t)((intptr_t)ClientHandle_SpawnAspects_m2F9CC0DD35DFA95FB9D9AD11DB4E9ADF6E3FB9E4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		Dictionary_2_Add_mA1F2CE722489F0BD4BA1B8A77D34D933E92B0C77(L_3, 2, L_4, /*hidden argument*/Dictionary_2_Add_mA1F2CE722489F0BD4BA1B8A77D34D933E92B0C77_RuntimeMethod_var);
		Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 * L_5 = L_3;
		PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * L_6 = (PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 *)il2cpp_codegen_object_new(PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938_il2cpp_TypeInfo_var);
		PacketHandler__ctor_m81C998D1AB4285D0B0C488FDD63D6F63917FBB7C(L_6, NULL, (intptr_t)((intptr_t)ClientHandle_ModifyAspectHealth_m5A3218128C5DA44BA74FE0881831790B7E1DF60F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_Add_mA1F2CE722489F0BD4BA1B8A77D34D933E92B0C77(L_5, 3, L_6, /*hidden argument*/Dictionary_2_Add_mA1F2CE722489F0BD4BA1B8A77D34D933E92B0C77_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->set_packetHandlers_7(L_5);
		// Debug.Log("Initialized packets.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral0DB4C9078AEB9B5061ECABA95ECCDE754D3F0FBA, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_m8F4234DE4BDEA7D22A206B695A4A2B2D79968FE1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Disconnect_m8F4234DE4BDEA7D22A206B695A4A2B2D79968FE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isConnected)
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		bool L_0 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_isConnected_6();
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// isConnected = false;
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->set_isConnected_6((bool)0);
		// tcp.socket.Close();
		TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * L_1 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_tcp_4();
		NullCheck(L_1);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_2 = L_1->get_socket_0();
		NullCheck(L_2);
		TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE(L_2, /*hidden argument*/NULL);
		// udp.socket.Close();
		UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * L_3 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_udp_5();
		NullCheck(L_3);
		UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_4 = L_3->get_socket_0();
		NullCheck(L_4);
		UdpClient_Close_mA85B745647A63FDF485BEF7C5E59567C0430695E(L_4, /*hidden argument*/NULL);
		// Debug.Log("Disconnected from server.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralAD79105B3D9E444F43507B89583C02C2A8FE04E3, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Client::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__cctor_m5B38667E78848E8E2CC9A7FB3D793A0FE7A29082 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client__cctor_m5B38667E78848E8E2CC9A7FB3D793A0FE7A29082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int dataBufferSize = 4096;
		((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->set_dataBufferSize_0(((int32_t)4096));
		// public static string IP = "127.0.0.1"; //<-- change this to some other shit for other servers
		((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->set_IP_1(_stringLiteral4B84B15BFF6EE5796152495A230E45E3D7E947D9);
		// public static int Port = 9009;
		((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->set_Port_2(((int32_t)9009));
		// public static int ID = 0;
		((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->set_ID_3(0);
		// public static TCP tcp = new TCP();
		TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * L_0 = (TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E *)il2cpp_codegen_object_new(TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E_il2cpp_TypeInfo_var);
		TCP__ctor_m7EF5486A4177E53DAA9B30E7E500FDBB14EA728B(L_0, /*hidden argument*/NULL);
		((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->set_tcp_4(L_0);
		// public static UDP udp = new UDP();
		UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * L_1 = (UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 *)il2cpp_codegen_object_new(UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24_il2cpp_TypeInfo_var);
		UDP__ctor_mE556CA385B134880D96CAA79A15CFEFE8F0BE2CD(L_1, /*hidden argument*/NULL);
		((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->set_udp_5(L_1);
		// private static bool isConnected = false;
		((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->set_isConnected_6((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Client_PacketHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketHandler__ctor_m81C998D1AB4285D0B0C488FDD63D6F63917FBB7C (PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Client_PacketHandler::Invoke(NetworkPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketHandler_Invoke_m7560EDDF1F787E29FEC8B7EF795D2FF8BADC32F0 (PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * __this, NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ____packet0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____packet0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____packet0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ____packet0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ____packet0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ____packet0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ____packet0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____packet0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(____packet0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * >::Invoke(targetMethod, targetThis, ____packet0);
					else
						GenericVirtActionInvoker1< NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * >::Invoke(targetMethod, targetThis, ____packet0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____packet0);
					else
						VirtActionInvoker1< NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____packet0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(____packet0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ____packet0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Client_PacketHandler::BeginInvoke(NetworkPacket,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PacketHandler_BeginInvoke_m961143FCFA0B81FCFFA4A258424821D83376FD41 (PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * __this, NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ____packet0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____packet0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Client_PacketHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketHandler_EndInvoke_mC127C808F2844C5D97186FE92B17DF4DF598A412 (PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Client_TCP::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Connect_mA588478B8C2AA838014517245DCC49CAC3E65638 (TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TCP_Connect_mA588478B8C2AA838014517245DCC49CAC3E65638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// socket = new TcpClient
		// {
		//     ReceiveBufferSize = dataBufferSize,
		//     SendBufferSize = dataBufferSize
		// };
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB *)il2cpp_codegen_object_new(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB_il2cpp_TypeInfo_var);
		TcpClient__ctor_m152C74CC5F0D393E707CF031F18B0E04422936BF(L_0, /*hidden argument*/NULL);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_dataBufferSize_0();
		NullCheck(L_1);
		TcpClient_set_ReceiveBufferSize_m628AD5C47764AB25329B28ADFE9485D3AA3A4059(L_1, L_2, /*hidden argument*/NULL);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_3 = L_1;
		int32_t L_4 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_dataBufferSize_0();
		NullCheck(L_3);
		TcpClient_set_SendBufferSize_m0338433CA19C7402ED223DD04CA3B63DCE69B2B2(L_3, L_4, /*hidden argument*/NULL);
		__this->set_socket_0(L_3);
		// receiveBuffer = new byte[dataBufferSize];
		int32_t L_5 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_dataBufferSize_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->set_receiveBuffer_3(L_6);
		// socket.BeginConnect(IP, Port, ConnectCallback, socket);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_7 = __this->get_socket_0();
		String_t* L_8 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_IP_1();
		int32_t L_9 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_Port_2();
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_10 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_10, __this, (intptr_t)((intptr_t)TCP_ConnectCallback_mC23EEEAADEA492CAC56D209E85656EA9B008C7F8_RuntimeMethod_var), /*hidden argument*/NULL);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_11 = __this->get_socket_0();
		NullCheck(L_7);
		TcpClient_BeginConnect_m52E1A875F3FE5DEB08E08FC6DA4281AA1420A743(L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client_TCP::ConnectCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_ConnectCallback_mC23EEEAADEA492CAC56D209E85656EA9B008C7F8 (TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * __this, RuntimeObject* ____result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TCP_ConnectCallback_mC23EEEAADEA492CAC56D209E85656EA9B008C7F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// socket.EndConnect(_result);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = __this->get_socket_0();
		RuntimeObject* L_1 = ____result0;
		NullCheck(L_0);
		TcpClient_EndConnect_m38E0788EDDA2DF9D90A67FA0CB3D030D3A9FC851(L_0, L_1, /*hidden argument*/NULL);
		// if (!socket.Connected)
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_2 = __this->get_socket_0();
		NullCheck(L_2);
		bool L_3 = TcpClient_get_Connected_m49D1BA8F64A3FFA32A6E77B4A26E9AAA4822500C(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// stream = socket.GetStream();
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_4 = __this->get_socket_0();
		NullCheck(L_4);
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_5 = TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B(L_4, /*hidden argument*/NULL);
		__this->set_stream_1(L_5);
		// receivedData = new NetworkPacket();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_6 = (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 *)il2cpp_codegen_object_new(NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5_il2cpp_TypeInfo_var);
		NetworkPacket__ctor_m36C53FCAF42FD15BE21B0C365153AF2F8B1ACEB1(L_6, /*hidden argument*/NULL);
		__this->set_receivedData_2(L_6);
		// stream.BeginRead(receiveBuffer, 0, dataBufferSize, ReceiveCallback, null);
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_7 = __this->get_stream_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = __this->get_receiveBuffer_3();
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		int32_t L_9 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_dataBufferSize_0();
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_10 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_10, __this, (intptr_t)((intptr_t)TCP_ReceiveCallback_m233BA2C22D579CA51BF4433F73EB2FE009959FE6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *, RuntimeObject * >::Invoke(16 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_7, L_8, 0, L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void Client_TCP::SendData(NetworkPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_SendData_m14988D02B98172DD4849A478C4CB21D93BFCA027 (TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * __this, NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ____packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TCP_SendData_m14988D02B98172DD4849A478C4CB21D93BFCA027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (socket != null)
			TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = __this->get_socket_0();
			if (!L_0)
			{
				goto IL_0023;
			}
		}

IL_0008:
		{
			// stream.BeginWrite(_packet.ToArray(), 0, _packet.Length(), null, null); // Send data to server
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_1 = __this->get_stream_1();
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_2 = ____packet0;
			NullCheck(L_2);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = NetworkPacket_ToArray_m0704A13A927ACAEF1F1B79F0E22372D9E1F7872D(L_2, /*hidden argument*/NULL);
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_4 = ____packet0;
			NullCheck(L_4);
			int32_t L_5 = NetworkPacket_Length_m4CE900D4DFF269DCD5940752699D30B861BD4754(L_4, /*hidden argument*/NULL);
			NullCheck(L_1);
			VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *, RuntimeObject * >::Invoke(18 /* System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_1, L_3, 0, L_5, (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)NULL, NULL);
		}

IL_0023:
		{
			// }
			goto IL_0038;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0025;
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.Exception)
		// catch (Exception _ex)
		V_0 = ((Exception_t *)__exception_local);
		// Debug.Log($"Error sending data to server via TCP: {_ex}");
		Exception_t * L_6 = V_0;
		String_t* L_7 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral87EA91135ADC9A42AE7C8E3BB34E74757946198E, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		// }
		goto IL_0038;
	} // end catch (depth: 1)

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Client_TCP::ReceiveCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_ReceiveCallback_m233BA2C22D579CA51BF4433F73EB2FE009959FE6 (TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * __this, RuntimeObject* ____result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TCP_ReceiveCallback_m233BA2C22D579CA51BF4433F73EB2FE009959FE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// int _byteLength = stream.EndRead(_result);
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_0 = __this->get_stream_1();
			RuntimeObject* L_1 = ____result0;
			NullCheck(L_0);
			int32_t L_2 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(17 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_0, L_1);
			V_0 = L_2;
			// if (_byteLength <= 0)
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) > ((int32_t)0)))
			{
				goto IL_0018;
			}
		}

IL_0011:
		{
			// Client.Disconnect();
			IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
			Client_Disconnect_m8F4234DE4BDEA7D22A206B695A4A2B2D79968FE1(/*hidden argument*/NULL);
			// return;
			goto IL_006e;
		}

IL_0018:
		{
			// byte[] _data = new byte[_byteLength];
			int32_t L_4 = V_0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_4);
			V_1 = L_5;
			// Array.Copy(receiveBuffer, _data, _byteLength);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get_receiveBuffer_3();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_1;
			int32_t L_8 = V_0;
			Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_6, (RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
			// receivedData.Reset(HandleData(_data)); // Reset receivedData if all data was handled
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_9 = __this->get_receivedData_2();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_1;
			bool L_11 = TCP_HandleData_m24128E8106C5F82940C50BC1BA183BC3A5299183(__this, L_10, /*hidden argument*/NULL);
			NullCheck(L_9);
			NetworkPacket_Reset_m922470B8AFAD6508B183607E633C818940368388(L_9, L_11, /*hidden argument*/NULL);
			// stream.BeginRead(receiveBuffer, 0, dataBufferSize, ReceiveCallback, null);
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_12 = __this->get_stream_1();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = __this->get_receiveBuffer_3();
			IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
			int32_t L_14 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_dataBufferSize_0();
			AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_15 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_15, __this, (intptr_t)((intptr_t)TCP_ReceiveCallback_m233BA2C22D579CA51BF4433F73EB2FE009959FE6_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_12);
			VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *, RuntimeObject * >::Invoke(16 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_12, L_13, 0, L_14, L_15, NULL);
			// }
			goto IL_006e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0065;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Object)
		// catch
		// Disconnect();
		TCP_Disconnect_m0F291694AB9522290B4F6BE691EAFC9370775D97(__this, /*hidden argument*/NULL);
		// }
		goto IL_006e;
	} // end catch (depth: 1)

IL_006e:
	{
		// }
		return;
	}
}
// System.Boolean Client_TCP::HandleData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCP_HandleData_m24128E8106C5F82940C50BC1BA183BC3A5299183 (TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TCP_HandleData_m24128E8106C5F82940C50BC1BA183BC3A5299183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int _packetLength = 0;
		V_0 = 0;
		// receivedData.SetBytes(_data);
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_0 = __this->get_receivedData_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ____data0;
		NullCheck(L_0);
		NetworkPacket_SetBytes_mA5732852E88F92F067387C4E549E6B65C9DDFB9C(L_0, L_1, /*hidden argument*/NULL);
		// if (receivedData.UnreadLength() >= 4)
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_2 = __this->get_receivedData_2();
		NullCheck(L_2);
		int32_t L_3 = NetworkPacket_UnreadLength_mE7E51CA5B1717276CD594BBBEFDB686408AE2551(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)4)))
		{
			goto IL_007a;
		}
	}
	{
		// _packetLength = receivedData.ReadInt();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_4 = __this->get_receivedData_2();
		NullCheck(L_4);
		int32_t L_5 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_4, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (_packetLength <= 0)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		// return true; // Reset receivedData instance to allow it to be reused
		return (bool)1;
	}

IL_002f:
	{
		U3CU3Ec__DisplayClass8_0_tF9591FFF455798BD4CC54DA615A4A54A9C9D4026 * L_7 = (U3CU3Ec__DisplayClass8_0_tF9591FFF455798BD4CC54DA615A4A54A9C9D4026 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tF9591FFF455798BD4CC54DA615A4A54A9C9D4026_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_m95CEF16A35DEC938021CB2C2AB44E27529A567C0(L_7, /*hidden argument*/NULL);
		// byte[] _packetBytes = receivedData.ReadBytes(_packetLength);
		U3CU3Ec__DisplayClass8_0_tF9591FFF455798BD4CC54DA615A4A54A9C9D4026 * L_8 = L_7;
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_9 = __this->get_receivedData_2();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = NetworkPacket_ReadBytes_m281142BA2AC28E39FAF9783958CC7313711A5C19(L_9, L_10, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set__packetBytes_0(L_11);
		// ThreadManager.ExecuteOnMainThread(() =>
		// {
		//     using (NetworkPacket _packet = new NetworkPacket(_packetBytes))
		//     {
		//         int _packetId = _packet.ReadInt();
		//         packetHandlers[_packetId](_packet); // Call appropriate method to handle the packet
		//     }
		// });
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_12 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_12, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CHandleDataU3Eb__0_m7D71365B0363E28613A87CB95A7F23E483EFA18C_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var);
		ThreadManager_ExecuteOnMainThread_mF3CC60CB0878DB1E4958FFA384EC120E73977295(L_12, /*hidden argument*/NULL);
		// _packetLength = 0; // Reset packet length
		V_0 = 0;
		// if (receivedData.UnreadLength() >= 4)
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_13 = __this->get_receivedData_2();
		NullCheck(L_13);
		int32_t L_14 = NetworkPacket_UnreadLength_mE7E51CA5B1717276CD594BBBEFDB686408AE2551(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)4)))
		{
			goto IL_007a;
		}
	}
	{
		// _packetLength = receivedData.ReadInt();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_15 = __this->get_receivedData_2();
		NullCheck(L_15);
		int32_t L_16 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_15, (bool)1, /*hidden argument*/NULL);
		V_0 = L_16;
		// if (_packetLength <= 0)
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		// return true; // Reset receivedData instance to allow it to be reused
		return (bool)1;
	}

IL_007a:
	{
		// while (_packetLength > 0 && _packetLength <= receivedData.UnreadLength())
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_19 = V_0;
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_20 = __this->get_receivedData_2();
		NullCheck(L_20);
		int32_t L_21 = NetworkPacket_UnreadLength_mE7E51CA5B1717276CD594BBBEFDB686408AE2551(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_19) <= ((int32_t)L_21)))
		{
			goto IL_002f;
		}
	}

IL_008c:
	{
		// if (_packetLength <= 1)
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) > ((int32_t)1)))
		{
			goto IL_0092;
		}
	}
	{
		// return true; // Reset receivedData instance to allow it to be reused
		return (bool)1;
	}

IL_0092:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Client_TCP::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Disconnect_m0F291694AB9522290B4F6BE691EAFC9370775D97 (TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TCP_Disconnect_m0F291694AB9522290B4F6BE691EAFC9370775D97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Client.Disconnect();
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		Client_Disconnect_m8F4234DE4BDEA7D22A206B695A4A2B2D79968FE1(/*hidden argument*/NULL);
		// stream = null;
		__this->set_stream_1((NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA *)NULL);
		// receivedData = null;
		__this->set_receivedData_2((NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 *)NULL);
		// receiveBuffer = null;
		__this->set_receiveBuffer_3((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL);
		// socket = null;
		__this->set_socket_0((TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB *)NULL);
		// }
		return;
	}
}
// System.Void Client_TCP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP__ctor_m7EF5486A4177E53DAA9B30E7E500FDBB14EA728B (TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Client_TCP_<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m95CEF16A35DEC938021CB2C2AB44E27529A567C0 (U3CU3Ec__DisplayClass8_0_tF9591FFF455798BD4CC54DA615A4A54A9C9D4026 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Client_TCP_<>c__DisplayClass8_0::<HandleData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CHandleDataU3Eb__0_m7D71365B0363E28613A87CB95A7F23E483EFA18C (U3CU3Ec__DisplayClass8_0_tF9591FFF455798BD4CC54DA615A4A54A9C9D4026 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass8_0_U3CHandleDataU3Eb__0_m7D71365B0363E28613A87CB95A7F23E483EFA18C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (NetworkPacket _packet = new NetworkPacket(_packetBytes))
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__packetBytes_0();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_1 = (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 *)il2cpp_codegen_object_new(NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5_il2cpp_TypeInfo_var);
		NetworkPacket__ctor_mC61FC96DE7E043A982D3411AA0DB87F886E9904A(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		// int _packetId = _packet.ReadInt();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_2, (bool)1, /*hidden argument*/NULL);
		V_1 = L_3;
		// packetHandlers[_packetId](_packet); // Call appropriate method to handle the packet
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 * L_4 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_packetHandlers_7();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * L_6 = Dictionary_2_get_Item_mAA43A4AE57FA4411D52E67C19A4EB6B1D179B1B4(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mAA43A4AE57FA4411D52E67C19A4EB6B1D179B1B4_RuntimeMethod_var);
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_7 = V_0;
		NullCheck(L_6);
		PacketHandler_Invoke_m7560EDDF1F787E29FEC8B7EF795D2FF8BADC32F0(L_6, L_7, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x31, FINALLY_0027);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_8 = V_0;
			if (!L_8)
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_9);
		}

IL_0030:
		{
			IL2CPP_END_FINALLY(39)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_JUMP_TBL(0x31, IL_0031)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0031:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Client_UDP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP__ctor_mE556CA385B134880D96CAA79A15CFEFE8F0BE2CD (UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDP__ctor_mE556CA385B134880D96CAA79A15CFEFE8F0BE2CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UDP()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// endPoint = new IPEndPoint(IPAddress.Parse(IP), Port);
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_IP_1();
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_1 = IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_Port_2();
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_3 = (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)il2cpp_codegen_object_new(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845(L_3, L_1, L_2, /*hidden argument*/NULL);
		__this->set_endPoint_1(L_3);
		// }
		return;
	}
}
// System.Void Client_UDP::Connect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Connect_m3A9D7AC1649C50067C5880D394AC49960C388735 (UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * __this, int32_t ____localPort0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDP_Connect_m3A9D7AC1649C50067C5880D394AC49960C388735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// socket = new UdpClient(_localPort);
		int32_t L_0 = ____localPort0;
		UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_1 = (UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 *)il2cpp_codegen_object_new(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641_il2cpp_TypeInfo_var);
		UdpClient__ctor_m16B5D497B74A33323D10285538BF31147B2E5984(L_1, L_0, /*hidden argument*/NULL);
		__this->set_socket_0(L_1);
		// socket.Connect(endPoint);
		UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_2 = __this->get_socket_0();
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_3 = __this->get_endPoint_1();
		NullCheck(L_2);
		UdpClient_Connect_mDB1F3F7AB00C747FFB183BF7CD1F691CFC41418F(L_2, L_3, /*hidden argument*/NULL);
		// socket.BeginReceive(ReceiveCallback, null);
		UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_4 = __this->get_socket_0();
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_5 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_5, __this, (intptr_t)((intptr_t)UDP_ReceiveCallback_mD9046379207DF8891F595C70857FC722A86E5463_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UdpClient_BeginReceive_mDC4D583BBB1375CF5C3085FEDD92BB6921E21302(L_4, L_5, NULL, /*hidden argument*/NULL);
		// using (NetworkPacket _packet = new NetworkPacket())
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_6 = (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 *)il2cpp_codegen_object_new(NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5_il2cpp_TypeInfo_var);
		NetworkPacket__ctor_m36C53FCAF42FD15BE21B0C365153AF2F8B1ACEB1(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		// SendData(_packet);
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_7 = V_0;
		UDP_SendData_mB3DE6AA48991B6D994FCE0D113176BBBA6D50DE9(__this, L_7, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x4F, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_8 = V_0;
			if (!L_8)
			{
				goto IL_004e;
			}
		}

IL_0048:
		{
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_9);
		}

IL_004e:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Client_UDP::SendData(NetworkPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_SendData_mB3DE6AA48991B6D994FCE0D113176BBBA6D50DE9 (UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * __this, NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ____packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDP_SendData_mB3DE6AA48991B6D994FCE0D113176BBBA6D50DE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// _packet.InsertInt(ID); // Insert the client's ID at the start of the packet
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_0 = ____packet0;
			IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
			int32_t L_1 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_ID_3();
			NullCheck(L_0);
			NetworkPacket_InsertInt_mFD6EBB60EAC73D24E0BF2CB8DDE4CADACD33E353(L_0, L_1, /*hidden argument*/NULL);
			// if (socket != null)
			UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_2 = __this->get_socket_0();
			if (!L_2)
			{
				goto IL_002d;
			}
		}

IL_0013:
		{
			// socket.BeginSend(_packet.ToArray(), _packet.Length(), null, null);
			UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_3 = __this->get_socket_0();
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_4 = ____packet0;
			NullCheck(L_4);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = NetworkPacket_ToArray_m0704A13A927ACAEF1F1B79F0E22372D9E1F7872D(L_4, /*hidden argument*/NULL);
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_6 = ____packet0;
			NullCheck(L_6);
			int32_t L_7 = NetworkPacket_Length_m4CE900D4DFF269DCD5940752699D30B861BD4754(L_6, /*hidden argument*/NULL);
			NullCheck(L_3);
			UdpClient_BeginSend_m392F77D91BCABC15E5AA6CB5A59510A79B7666D3(L_3, L_5, L_7, (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)NULL, NULL, /*hidden argument*/NULL);
		}

IL_002d:
		{
			// }
			goto IL_0042;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002f;
		throw e;
	}

CATCH_002f:
	{ // begin catch(System.Exception)
		// catch (Exception _ex)
		V_0 = ((Exception_t *)__exception_local);
		// Debug.Log($"Error sending data to server via UDP: {_ex}");
		Exception_t * L_8 = V_0;
		String_t* L_9 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralD994DC169C95BB569809503D6124878C2A6B06BD, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_9, /*hidden argument*/NULL);
		// }
		goto IL_0042;
	} // end catch (depth: 1)

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Client_UDP::ReceiveCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_ReceiveCallback_mD9046379207DF8891F595C70857FC722A86E5463 (UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * __this, RuntimeObject* ____result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDP_ReceiveCallback_mD9046379207DF8891F595C70857FC722A86E5463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// byte[] _data = socket.EndReceive(_result, ref endPoint);
			UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_0 = __this->get_socket_0();
			RuntimeObject* L_1 = ____result0;
			IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** L_2 = __this->get_address_of_endPoint_1();
			NullCheck(L_0);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = UdpClient_EndReceive_mF25D1BFECC2581E32DB6A1202EA4670B20580A4F(L_0, L_1, (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F **)L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			// socket.BeginReceive(ReceiveCallback, null);
			UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_4 = __this->get_socket_0();
			AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_5 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_5, __this, (intptr_t)((intptr_t)UDP_ReceiveCallback_mD9046379207DF8891F595C70857FC722A86E5463_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_4);
			UdpClient_BeginReceive_mDC4D583BBB1375CF5C3085FEDD92BB6921E21302(L_4, L_5, NULL, /*hidden argument*/NULL);
			// if (_data.Length < 4)
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
			NullCheck(L_6);
			if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))) >= ((int32_t)4)))
			{
				goto IL_0039;
			}
		}

IL_0032:
		{
			// Client.Disconnect();
			IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
			Client_Disconnect_m8F4234DE4BDEA7D22A206B695A4A2B2D79968FE1(/*hidden argument*/NULL);
			// return;
			goto IL_004b;
		}

IL_0039:
		{
			// HandleData(_data);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
			UDP_HandleData_m58523E54CFC7E0FA5A768CF6CADBD43315837450(__this, L_7, /*hidden argument*/NULL);
			// }
			goto IL_004b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0042;
		throw e;
	}

CATCH_0042:
	{ // begin catch(System.Object)
		// catch
		// Disconnect();
		UDP_Disconnect_m57E2347339FF92CF2A8E313C2E25DAE1447573E1(__this, /*hidden argument*/NULL);
		// }
		goto IL_004b;
	} // end catch (depth: 1)

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Client_UDP::HandleData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_HandleData_m58523E54CFC7E0FA5A768CF6CADBD43315837450 (UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDP_HandleData_m58523E54CFC7E0FA5A768CF6CADBD43315837450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63 * V_0 = NULL;
	NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63 * L_0 = (U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_mB987B8E342EB3C54C09016AADB30EBE8B2C4503A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63 * L_1 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ____data0;
		NullCheck(L_1);
		L_1->set__data_0(L_2);
		// using (NetworkPacket _packet = new NetworkPacket(_data))
		U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63 * L_3 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = L_3->get__data_0();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_5 = (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 *)il2cpp_codegen_object_new(NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5_il2cpp_TypeInfo_var);
		NetworkPacket__ctor_mC61FC96DE7E043A982D3411AA0DB87F886E9904A(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		// int _packetLength = _packet.ReadInt();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_6, (bool)1, /*hidden argument*/NULL);
		V_2 = L_7;
		// _data = _packet.ReadBytes(_packetLength);
		U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63 * L_8 = V_0;
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = NetworkPacket_ReadBytes_m281142BA2AC28E39FAF9783958CC7313711A5C19(L_9, L_10, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set__data_0(L_11);
		// }
		IL2CPP_LEAVE(0x3B, FINALLY_0031);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_12 = V_1;
			if (!L_12)
			{
				goto IL_003a;
			}
		}

IL_0034:
		{
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_13);
		}

IL_003a:
		{
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		// ThreadManager.ExecuteOnMainThread(() =>
		// {
		//     using (NetworkPacket _packet = new NetworkPacket(_data))
		//     {
		//         int _packetId = _packet.ReadInt();
		//         packetHandlers[_packetId](_packet); // Call appropriate method to handle the packet
		//     }
		// });
		U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63 * L_14 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_15 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_15, L_14, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CHandleDataU3Eb__0_m043222CB8945F00CCCA07BD4C1A2529C39869913_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var);
		ThreadManager_ExecuteOnMainThread_mF3CC60CB0878DB1E4958FFA384EC120E73977295(L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client_UDP::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Disconnect_m57E2347339FF92CF2A8E313C2E25DAE1447573E1 (UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDP_Disconnect_m57E2347339FF92CF2A8E313C2E25DAE1447573E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Client.Disconnect();
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		Client_Disconnect_m8F4234DE4BDEA7D22A206B695A4A2B2D79968FE1(/*hidden argument*/NULL);
		// endPoint = null;
		__this->set_endPoint_1((IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)NULL);
		// socket = null;
		__this->set_socket_0((UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 *)NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Client_UDP_<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB987B8E342EB3C54C09016AADB30EBE8B2C4503A (U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Client_UDP_<>c__DisplayClass6_0::<HandleData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CHandleDataU3Eb__0_m043222CB8945F00CCCA07BD4C1A2529C39869913 (U3CU3Ec__DisplayClass6_0_t2636AC6A55744A757837F5720840A18EB5D95C63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass6_0_U3CHandleDataU3Eb__0_m043222CB8945F00CCCA07BD4C1A2529C39869913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (NetworkPacket _packet = new NetworkPacket(_data))
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_1 = (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 *)il2cpp_codegen_object_new(NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5_il2cpp_TypeInfo_var);
		NetworkPacket__ctor_mC61FC96DE7E043A982D3411AA0DB87F886E9904A(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		// int _packetId = _packet.ReadInt();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_2, (bool)1, /*hidden argument*/NULL);
		V_1 = L_3;
		// packetHandlers[_packetId](_packet); // Call appropriate method to handle the packet
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		Dictionary_2_tA534989C84CB9D73BB0A05171C6BAD52D3FB9AF6 * L_4 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_packetHandlers_7();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		PacketHandler_tE6ACE63ED3D47D1FD471D141640F134596D19938 * L_6 = Dictionary_2_get_Item_mAA43A4AE57FA4411D52E67C19A4EB6B1D179B1B4(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mAA43A4AE57FA4411D52E67C19A4EB6B1D179B1B4_RuntimeMethod_var);
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_7 = V_0;
		NullCheck(L_6);
		PacketHandler_Invoke_m7560EDDF1F787E29FEC8B7EF795D2FF8BADC32F0(L_6, L_7, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x31, FINALLY_0027);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_8 = V_0;
			if (!L_8)
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_9);
		}

IL_0030:
		{
			IL2CPP_END_FINALLY(39)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_JUMP_TBL(0x31, IL_0031)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0031:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ClientHandle::Welcome(NetworkPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientHandle_Welcome_mB1155D5C7612AC6D9102A1C0A0FB03832DA955F3 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ____packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientHandle_Welcome_mB1155D5C7612AC6D9102A1C0A0FB03832DA955F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	{
		// int yLength = _packet.ReadInt();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_0 = ____packet0;
		NullCheck(L_0);
		int32_t L_1 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		// int xLength = _packet.ReadInt();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_2 = ____packet0;
		NullCheck(L_2);
		int32_t L_3 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_2, (bool)1, /*hidden argument*/NULL);
		V_1 = L_3;
		// byte[] mapData = _packet.ReadBytes(yLength * xLength);
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_4 = ____packet0;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = NetworkPacket_ReadBytes_m281142BA2AC28E39FAF9783958CC7313711A5C19(L_4, ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6)), (bool)1, /*hidden argument*/NULL);
		V_2 = L_7;
		// int id = _packet.ReadInt();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_8 = ____packet0;
		NullCheck(L_8);
		int32_t L_9 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_8, (bool)1, /*hidden argument*/NULL);
		// Tilemap.BuildMapFromBytes(xLength, yLength, mapData);
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_2;
		Tilemap_BuildMapFromBytes_mD2AF9C1E4414D826DE30082D714E861F4020EB32(L_10, L_11, L_12, /*hidden argument*/NULL);
		// Client.ID = id;
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->set_ID_3(L_9);
		// ClientSend.WelcomeReceived();
		ClientSend_WelcomeReceived_m992A6A9FBAC5F28B4549A68AA94D3EA353ACE43B(/*hidden argument*/NULL);
		// Client.udp.Connect(((IPEndPoint)Client.tcp.socket.Client.LocalEndPoint).Port);
		UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * L_13 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_udp_5();
		TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * L_14 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_tcp_4();
		NullCheck(L_14);
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_15 = L_14->get_socket_0();
		NullCheck(L_15);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_16 = TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * L_17 = Socket_get_LocalEndPoint_m5BA68FA5F390F1F8913FA78F919FD9364B669E9C(L_16, /*hidden argument*/NULL);
		NullCheck(((IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)CastclassClass((RuntimeObject*)L_17, IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var)));
		int32_t L_18 = IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9_inline(((IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)CastclassClass((RuntimeObject*)L_17, IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_13);
		UDP_Connect_m3A9D7AC1649C50067C5880D394AC49960C388735(L_13, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ClientHandle::SpawnAspects(NetworkPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientHandle_SpawnAspects_m2F9CC0DD35DFA95FB9D9AD11DB4E9ADF6E3FB9E4 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ____packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientHandle_SpawnAspects_m2F9CC0DD35DFA95FB9D9AD11DB4E9ADF6E3FB9E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// int aspectCount = _packet.ReadInt();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_0 = ____packet0;
		NullCheck(L_0);
		int32_t L_1 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		// for (int i = 0; i < aspectCount; i++)
		V_1 = 0;
		goto IL_0050;
	}

IL_000c:
	{
		// int entityID = _packet.ReadInt();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_2 = ____packet0;
		NullCheck(L_2);
		int32_t L_3 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_2, (bool)1, /*hidden argument*/NULL);
		V_2 = L_3;
		// string aspectName = _packet.ReadString();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_4 = ____packet0;
		NullCheck(L_4);
		String_t* L_5 = NetworkPacket_ReadString_m8C44616B906971689ED5C219B1E255079D13BCCB(L_4, (bool)1, /*hidden argument*/NULL);
		V_3 = L_5;
		// int hp = _packet.ReadInt();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_6 = ____packet0;
		NullCheck(L_6);
		int32_t L_7 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_6, (bool)1, /*hidden argument*/NULL);
		V_4 = L_7;
		// Vector2 pos = new Vector2(_packet.ReadInt(), _packet.ReadInt());
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_8 = ____packet0;
		NullCheck(L_8);
		int32_t L_9 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_8, (bool)1, /*hidden argument*/NULL);
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_10 = ____packet0;
		NullCheck(L_10);
		int32_t L_11 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_10, (bool)1, /*hidden argument*/NULL);
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_5), (((float)((float)L_9))), (((float)((float)L_11))), /*hidden argument*/NULL);
		// GameManager.Instance.SpawnAspect(entityID, aspectName, hp,  pos);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_12 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_Instance_4();
		int32_t L_13 = V_2;
		String_t* L_14 = V_3;
		int32_t L_15 = V_4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = V_5;
		NullCheck(L_12);
		GameManager_SpawnAspect_m3D9E0AAC7BA47C4CE13A07139E9A00C377AAF314(L_12, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		// for (int i = 0; i < aspectCount; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0050:
	{
		// for (int i = 0; i < aspectCount; i++)
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ClientHandle::ModifyAspectHealth(NetworkPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientHandle_ModifyAspectHealth_m5A3218128C5DA44BA74FE0881831790B7E1DF60F (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ____packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientHandle_ModifyAspectHealth_m5A3218128C5DA44BA74FE0881831790B7E1DF60F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int entityID = _packet.ReadInt();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_0 = ____packet0;
		NullCheck(L_0);
		int32_t L_1 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		// GameManager.Entities[entityID].SetHP(_packet.ReadInt());
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * L_2 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_Entities_5();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * L_4 = Dictionary_2_get_Item_mEF04BC8FE1BE3C6948688783E3DE50D8F26F33F0(L_2, L_3, /*hidden argument*/Dictionary_2_get_Item_mEF04BC8FE1BE3C6948688783E3DE50D8F26F33F0_RuntimeMethod_var);
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_5 = ____packet0;
		NullCheck(L_5);
		int32_t L_6 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(L_5, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_4);
		EntityController_SetHP_m50F064E829B815DCA06689100DEB22F2BB343EE8_inline(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ClientSend::SendTCPData(NetworkPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSend_SendTCPData_m3BAE89C040AC643A7FCE30682DC78082EB2BFF70 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ____packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSend_SendTCPData_m3BAE89C040AC643A7FCE30682DC78082EB2BFF70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _packet.WriteLength();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_0 = ____packet0;
		NullCheck(L_0);
		NetworkPacket_WriteLength_m87E734FE30CC2C3802AF2E87CB298A68E056E025(L_0, /*hidden argument*/NULL);
		// Client.tcp.SendData(_packet);
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		TCP_tA00305A06B275C7E885FE056EC4E443D14B54A6E * L_1 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_tcp_4();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_2 = ____packet0;
		NullCheck(L_1);
		TCP_SendData_m14988D02B98172DD4849A478C4CB21D93BFCA027(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ClientSend::SendUDPData(NetworkPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSend_SendUDPData_mB5A2D73186CEA4A6AF3FAD99139C349FEC1BF291 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * ____packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSend_SendUDPData_mB5A2D73186CEA4A6AF3FAD99139C349FEC1BF291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _packet.WriteLength();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_0 = ____packet0;
		NullCheck(L_0);
		NetworkPacket_WriteLength_m87E734FE30CC2C3802AF2E87CB298A68E056E025(L_0, /*hidden argument*/NULL);
		// Client.udp.SendData(_packet);
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		UDP_tC3D2173C20D4B8CE2EA5AC1A92650BE91787CE24 * L_1 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_udp_5();
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_2 = ____packet0;
		NullCheck(L_1);
		UDP_SendData_mB3DE6AA48991B6D994FCE0D113176BBBA6D50DE9(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ClientSend::WelcomeReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSend_WelcomeReceived_m992A6A9FBAC5F28B4549A68AA94D3EA353ACE43B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSend_WelcomeReceived_m992A6A9FBAC5F28B4549A68AA94D3EA353ACE43B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (NetworkPacket _packet = new NetworkPacket((int)ClientPackets.WelcomeReceived))
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_0 = (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 *)il2cpp_codegen_object_new(NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5_il2cpp_TypeInfo_var);
		NetworkPacket__ctor_mCAAA79A7224D8B16958769662A9DDA314915183F(L_0, 1, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// _packet.Write(Client.ID);
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_StaticFields*)il2cpp_codegen_static_fields_for(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var))->get_ID_3();
		NullCheck(L_1);
		NetworkPacket_Write_m1BAE86FDEADC109E69DF950E67B19A58E123E366(L_1, L_2, /*hidden argument*/NULL);
		// _packet.Write("A001,A001,A001,A001,A001");
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_3 = V_0;
		NullCheck(L_3);
		NetworkPacket_Write_mA00B58234B9247C80A2265C7461BFF18FD190D11(L_3, _stringLiteral41DA637B750B59D8799CAEF26F6363DEC3DED542, /*hidden argument*/NULL);
		// SendTCPData(_packet);
		NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_4 = V_0;
		ClientSend_SendTCPData_m3BAE89C040AC643A7FCE30682DC78082EB2BFF70(L_4, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x2F, FINALLY_0025);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		{
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_5 = V_0;
			if (!L_5)
			{
				goto IL_002e;
			}
		}

IL_0028:
		{
			NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * L_6 = V_0;
			NullCheck(L_6);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_6);
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(37)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002f:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EntityController::SetHP(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityController_SetHP_m50F064E829B815DCA06689100DEB22F2BB343EE8 (EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * __this, int32_t ____newHP0, const RuntimeMethod* method)
{
	{
		// hp = _newHP;
		int32_t L_0 = ____newHP0;
		__this->set_hp_8(L_0);
		// }
		return;
	}
}
// System.Void EntityController::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityController_OnGUI_mBF8208880DB1C2187C491153BB34E74DDF4607AA (EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EntityController_OnGUI_mBF8208880DB1C2187C491153BB34E74DDF4607AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 modifiedPos = new Vector3(transform.position.x, transform.position.y + 3.8f, transform.position.z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), L_2, ((float)il2cpp_codegen_add((float)L_5, (float)(3.8f))), L_8, /*hidden argument*/NULL);
		// Vector2 screenPoint = Camera.main.WorldToScreenPoint(modifiedPos);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_9 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// GUI.Box(new Rect(screenPoint.x - 30f, Screen.height - screenPoint.y, 60f, 20f), hp.ToString());
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = V_1;
		float L_14 = L_13.get_x_0();
		int32_t L_15 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = V_1;
		float L_17 = L_16.get_y_1();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_18), ((float)il2cpp_codegen_subtract((float)L_14, (float)(30.0f))), ((float)il2cpp_codegen_subtract((float)(((float)((float)L_15))), (float)L_17)), (60.0f), (20.0f), /*hidden argument*/NULL);
		int32_t* L_19 = __this->get_address_of_hp_8();
		String_t* L_20 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_Box_m8A788187BB0412D6B23AFEED65FCFF70AC197C3A(L_18, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EntityController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityController__ctor_mBE66148D6D1C5E9E7828AEC18ECC278DB05A4090 (EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m12E1357322F99B1544DAD9C099CBFA6E63529A49 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Awake_m12E1357322F99B1544DAD9C099CBFA6E63529A49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// Instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m4B67F69CF18652603C29FC1C5B7C6482C77B69DB (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Start_m4B67F69CF18652603C29FC1C5B7C6482C77B69DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Client.ConnectToServer();
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		Client_ConnectToServer_m3AF46AA06235C0FD403C4212D4D738485DBA844D(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::SpawnAspect(System.Int32,System.String,System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnAspect_m3D9E0AAC7BA47C4CE13A07139E9A00C377AAF314 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ____entityID0, String_t* ____aspectCode1, int32_t ____hp2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ____posXZ3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_SpawnAspect_m3D9E0AAC7BA47C4CE13A07139E9A00C377AAF314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Entities.Add(
		//     _entityID,
		//     Instantiate(Resources.Load<GameObject>($"Aspects/{_aspectCode}"), new Vector3(0, 0f, 0), Quaternion.identity).GetComponent<EntityController>()
		//     );
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_Entities_5();
		int32_t L_1 = ____entityID0;
		String_t* L_2 = ____aspectCode1;
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralAAD39E455EACB67F647FAC5C0CC40D27686E8287, L_2, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Resources_Load_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m600AFF3513CE2FD177BFE8F4162929FAF2E4644C(L_3, /*hidden argument*/Resources_Load_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m600AFF3513CE2FD177BFE8F4162929FAF2E4644C_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_4, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		NullCheck(L_7);
		EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * L_8 = GameObject_GetComponent_TisEntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8_m1F646446CF0B4A60F139D1E23D767C33F95E2BC2(L_7, /*hidden argument*/GameObject_GetComponent_TisEntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8_m1F646446CF0B4A60F139D1E23D767C33F95E2BC2_RuntimeMethod_var);
		NullCheck(L_0);
		Dictionary_2_Add_m64919C0982BBD4B73B25FD400713D777C9811293(L_0, L_1, L_8, /*hidden argument*/Dictionary_2_Add_m64919C0982BBD4B73B25FD400713D777C9811293_RuntimeMethod_var);
		// Entities[_entityID].SetHP(_hp);
		Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * L_9 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_Entities_5();
		int32_t L_10 = ____entityID0;
		NullCheck(L_9);
		EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * L_11 = Dictionary_2_get_Item_mEF04BC8FE1BE3C6948688783E3DE50D8F26F33F0(L_9, L_10, /*hidden argument*/Dictionary_2_get_Item_mEF04BC8FE1BE3C6948688783E3DE50D8F26F33F0_RuntimeMethod_var);
		int32_t L_12 = ____hp2;
		NullCheck(L_11);
		EntityController_SetHP_m50F064E829B815DCA06689100DEB22F2BB343EE8_inline(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::DrawMap(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DrawMap_m0C073A48A48063B6098207A70B8EA873EC2FC04A (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ____sizeX0, int32_t ____sizeY1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_DrawMap_m0C073A48A48063B6098207A70B8EA873EC2FC04A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int x = 0; x < _sizeX; x++)
		V_0 = 0;
		goto IL_003b;
	}

IL_0004:
	{
		// for (int y = 0; y < _sizeY; y++)
		V_1 = 0;
		goto IL_0033;
	}

IL_0008:
	{
		// Instantiate(tileVisuals[(int)Tilemap.GetTile(x, y)], new Vector3(x, 0, y), Quaternion.identity);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = __this->get_tileVisuals_6();
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = Tilemap_GetTile_m2737FCA638C64B80A9032C5D140EF02ED9FAFCB8(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_4 = L_3;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), (((float)((float)L_6))), (0.0f), (((float)((float)L_7))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_5, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// for (int y = 0; y < _sizeY; y++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0033:
	{
		// for (int y = 0; y < _sizeY; y++)
		int32_t L_11 = V_1;
		int32_t L_12 = ____sizeY1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0008;
		}
	}
	{
		// for (int x = 0; x < _sizeX; x++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003b:
	{
		// for (int x = 0; x < _sizeX; x++)
		int32_t L_14 = V_0;
		int32_t L_15 = ____sizeX0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnApplicationQuit_m995A9BA1A947614D90FAFF27DDEA66555DCCD5EF (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_OnApplicationQuit_m995A9BA1A947614D90FAFF27DDEA66555DCCD5EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Client.Disconnect(); // Disconnect when the game is closed
		IL2CPP_RUNTIME_CLASS_INIT(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E_il2cpp_TypeInfo_var);
		Client_Disconnect_m8F4234DE4BDEA7D22A206B695A4A2B2D79968FE1(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mFBEDEFD70BE58F3D3BE07FA8F9D97DE156D5C358 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__cctor_m31E0C44003795D330970BAA2A0F420D3B71341B3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager__cctor_m31E0C44003795D330970BAA2A0F420D3B71341B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dictionary<int, EntityController> Entities = new Dictionary<int, EntityController>();
		Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * L_0 = (Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 *)il2cpp_codegen_object_new(Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBC9FDCA02266DD73DB42931E6A4A1A67147CB0D0(L_0, /*hidden argument*/Dictionary_2__ctor_mBC9FDCA02266DD73DB42931E6A4A1A67147CB0D0_RuntimeMethod_var);
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_Entities_5(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NetworkPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket__ctor_m36C53FCAF42FD15BE21B0C365153AF2F8B1ACEB1 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket__ctor_m36C53FCAF42FD15BE21B0C365153AF2F8B1ACEB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NetworkPacket()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// buffer = new List<byte>(); // Initialize buffer
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *)il2cpp_codegen_object_new(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_il2cpp_TypeInfo_var);
		List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079(L_0, /*hidden argument*/List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079_RuntimeMethod_var);
		__this->set_buffer_0(L_0);
		// readPos = 0; // Set readPos to 0
		__this->set_readPos_2(0);
		// }
		return;
	}
}
// System.Void NetworkPacket::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket__ctor_mCAAA79A7224D8B16958769662A9DDA314915183F (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, int32_t ____id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket__ctor_mCAAA79A7224D8B16958769662A9DDA314915183F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NetworkPacket(int _id)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// buffer = new List<byte>(); // Initialize buffer
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *)il2cpp_codegen_object_new(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_il2cpp_TypeInfo_var);
		List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079(L_0, /*hidden argument*/List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079_RuntimeMethod_var);
		__this->set_buffer_0(L_0);
		// readPos = 0; // Set readPos to 0
		__this->set_readPos_2(0);
		// Write(_id); // Write packet id to the buffer
		int32_t L_1 = ____id0;
		NetworkPacket_Write_m1BAE86FDEADC109E69DF950E67B19A58E123E366(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetworkPacket::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket__ctor_mC61FC96DE7E043A982D3411AA0DB87F886E9904A (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket__ctor_mC61FC96DE7E043A982D3411AA0DB87F886E9904A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NetworkPacket(byte[] _data)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// buffer = new List<byte>(); // Initialize buffer
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *)il2cpp_codegen_object_new(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_il2cpp_TypeInfo_var);
		List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079(L_0, /*hidden argument*/List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079_RuntimeMethod_var);
		__this->set_buffer_0(L_0);
		// readPos = 0; // Set readPos to 0
		__this->set_readPos_2(0);
		// SetBytes(_data);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ____data0;
		NetworkPacket_SetBytes_mA5732852E88F92F067387C4E549E6B65C9DDFB9C(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetworkPacket::SetBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_SetBytes_mA5732852E88F92F067387C4E549E6B65C9DDFB9C (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_SetBytes_mA5732852E88F92F067387C4E549E6B65C9DDFB9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Write(_data);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ____data0;
		NetworkPacket_Write_m2F32778518730D05CE066CF06509F1490C97AD92(__this, L_0, /*hidden argument*/NULL);
		// readableBuffer = buffer.ToArray();
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_1 = __this->get_buffer_0();
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488(L_1, /*hidden argument*/List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488_RuntimeMethod_var);
		__this->set_readableBuffer_1(L_2);
		// }
		return;
	}
}
// System.Void NetworkPacket::WriteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_WriteLength_m87E734FE30CC2C3802AF2E87CB298A68E056E025 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_WriteLength_m87E734FE30CC2C3802AF2E87CB298A68E056E025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.InsertRange(0, BitConverter.GetBytes(buffer.Count)); // Insert the byte length of the packet at the very beginning
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_1 = __this->get_buffer_0();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_inline(L_1, /*hidden argument*/List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = BitConverter_GetBytes_mB5BCBAAFE3AE14F2AF1731187C7155A236DF38EA(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_InsertRange_m57D3791524D74A4D9995D85B2DD6D525943CE505(L_0, 0, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1_InsertRange_m57D3791524D74A4D9995D85B2DD6D525943CE505_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NetworkPacket::InsertInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_InsertInt_mFD6EBB60EAC73D24E0BF2CB8DDE4CADACD33E353 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, int32_t ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_InsertInt_mFD6EBB60EAC73D24E0BF2CB8DDE4CADACD33E353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.InsertRange(0, BitConverter.GetBytes(_value)); // Insert the int at the start of the buffer
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		int32_t L_1 = ____value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = BitConverter_GetBytes_mB5BCBAAFE3AE14F2AF1731187C7155A236DF38EA(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_InsertRange_m57D3791524D74A4D9995D85B2DD6D525943CE505(L_0, 0, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_InsertRange_m57D3791524D74A4D9995D85B2DD6D525943CE505_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Byte[] NetworkPacket::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetworkPacket_ToArray_m0704A13A927ACAEF1F1B79F0E22372D9E1F7872D (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_ToArray_m0704A13A927ACAEF1F1B79F0E22372D9E1F7872D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readableBuffer = buffer.ToArray();
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488(L_0, /*hidden argument*/List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488_RuntimeMethod_var);
		__this->set_readableBuffer_1(L_1);
		// return readableBuffer;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_readableBuffer_1();
		return L_2;
	}
}
// System.Int32 NetworkPacket::Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkPacket_Length_m4CE900D4DFF269DCD5940752699D30B861BD4754 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_Length_m4CE900D4DFF269DCD5940752699D30B861BD4754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return buffer.Count; // Return the length of buffer
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_inline(L_0, /*hidden argument*/List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 NetworkPacket::UnreadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkPacket_UnreadLength_mE7E51CA5B1717276CD594BBBEFDB686408AE2551 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, const RuntimeMethod* method)
{
	{
		// return Length() - readPos; // Return the remaining length (unread)
		int32_t L_0 = NetworkPacket_Length_m4CE900D4DFF269DCD5940752699D30B861BD4754(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_readPos_2();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Void NetworkPacket::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Reset_m922470B8AFAD6508B183607E633C818940368388 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____shouldReset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_Reset_m922470B8AFAD6508B183607E633C818940368388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_shouldReset)
		bool L_0 = ____shouldReset0;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// buffer.Clear(); // Clear buffer
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_1 = __this->get_buffer_0();
		NullCheck(L_1);
		List_1_Clear_mE98031696EA20AC3CCD87477BA06E89432951E8A(L_1, /*hidden argument*/List_1_Clear_mE98031696EA20AC3CCD87477BA06E89432951E8A_RuntimeMethod_var);
		// readableBuffer = null;
		__this->set_readableBuffer_1((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL);
		// readPos = 0; // Reset readPos
		__this->set_readPos_2(0);
		// }
		return;
	}

IL_001d:
	{
		// readPos -= 4; // "Unread" the last read int
		int32_t L_2 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)4)));
		// }
		return;
	}
}
// System.Void NetworkPacket::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_mEAC84578F5DFB79046C8C5FD33A178E6D085C9C4 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, uint8_t ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_Write_mEAC84578F5DFB79046C8C5FD33A178E6D085C9C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.Add(_value);
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		uint8_t L_1 = ____value0;
		NullCheck(L_0);
		List_1_Add_m09D0729675AC499836FEA645EC0F67CEFFF05DDC(L_0, L_1, /*hidden argument*/List_1_Add_m09D0729675AC499836FEA645EC0F67CEFFF05DDC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NetworkPacket::Write(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_m2F32778518730D05CE066CF06509F1490C97AD92 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_Write_m2F32778518730D05CE066CF06509F1490C97AD92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.AddRange(_value);
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ____value0;
		NullCheck(L_0);
		List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B(L_0, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NetworkPacket::Write(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_m9F7E1B698A2986D5C3C7C8D7926C62F4BE24F094 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, int16_t ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_Write_m9F7E1B698A2986D5C3C7C8D7926C62F4BE24F094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.AddRange(BitConverter.GetBytes(_value));
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		int16_t L_1 = ____value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = BitConverter_GetBytes_mB7DFC7C4705F916C40527A87C9AA6D0EABC23512(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B(L_0, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NetworkPacket::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_m1BAE86FDEADC109E69DF950E67B19A58E123E366 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, int32_t ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_Write_m1BAE86FDEADC109E69DF950E67B19A58E123E366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.AddRange(BitConverter.GetBytes(_value));
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		int32_t L_1 = ____value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = BitConverter_GetBytes_mB5BCBAAFE3AE14F2AF1731187C7155A236DF38EA(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B(L_0, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NetworkPacket::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_mC25CC30DB2B1CDCA4F19487A9AF2DBF88E8F7695 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, int64_t ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_Write_mC25CC30DB2B1CDCA4F19487A9AF2DBF88E8F7695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.AddRange(BitConverter.GetBytes(_value));
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		int64_t L_1 = ____value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = BitConverter_GetBytes_m2652D1E20FC48C5953639CE61B2F064C2074CF78(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B(L_0, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NetworkPacket::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_m55AD4B133BFE6A1BB857904B10C3BFF8B3142B84 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, float ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_Write_m55AD4B133BFE6A1BB857904B10C3BFF8B3142B84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.AddRange(BitConverter.GetBytes(_value));
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		float L_1 = ____value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B(L_0, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NetworkPacket::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_m699CE2DE738F9FB687564577A2713C0C525AAB00 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_Write_m699CE2DE738F9FB687564577A2713C0C525AAB00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.AddRange(BitConverter.GetBytes(_value));
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		bool L_1 = ____value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = BitConverter_GetBytes_mB698B4BC6B7F66DB66E049304068A34B44778B87(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B(L_0, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NetworkPacket::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_mA00B58234B9247C80A2265C7461BFF18FD190D11 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, String_t* ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_Write_mA00B58234B9247C80A2265C7461BFF18FD190D11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Write(_value.Length); // Add the length of the string to the packet
		String_t* L_0 = ____value0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_0, /*hidden argument*/NULL);
		NetworkPacket_Write_m1BAE86FDEADC109E69DF950E67B19A58E123E366(__this, L_1, /*hidden argument*/NULL);
		// buffer.AddRange(Encoding.ASCII.GetBytes(_value)); // Add the string itself
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_2 = __this->get_buffer_0();
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_3 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		String_t* L_4 = ____value0;
		NullCheck(L_3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_4);
		NullCheck(L_2);
		List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B(L_2, (RuntimeObject*)(RuntimeObject*)L_5, /*hidden argument*/List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NetworkPacket::Write(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_m80B9EF24A81E673D138627624AA17F6BE7F9D986 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____value0, const RuntimeMethod* method)
{
	{
		// Write(_value.x);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ____value0;
		float L_1 = L_0.get_x_2();
		NetworkPacket_Write_m55AD4B133BFE6A1BB857904B10C3BFF8B3142B84(__this, L_1, /*hidden argument*/NULL);
		// Write(_value.y);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ____value0;
		float L_3 = L_2.get_y_3();
		NetworkPacket_Write_m55AD4B133BFE6A1BB857904B10C3BFF8B3142B84(__this, L_3, /*hidden argument*/NULL);
		// Write(_value.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ____value0;
		float L_5 = L_4.get_z_4();
		NetworkPacket_Write_m55AD4B133BFE6A1BB857904B10C3BFF8B3142B84(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetworkPacket::Write(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Write_m1E6977C1B228A739B03B2C2C5788C8EA58A04272 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ____value0, const RuntimeMethod* method)
{
	{
		// Write(_value.x);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ____value0;
		float L_1 = L_0.get_x_0();
		NetworkPacket_Write_m55AD4B133BFE6A1BB857904B10C3BFF8B3142B84(__this, L_1, /*hidden argument*/NULL);
		// Write(_value.y);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = ____value0;
		float L_3 = L_2.get_y_1();
		NetworkPacket_Write_m55AD4B133BFE6A1BB857904B10C3BFF8B3142B84(__this, L_3, /*hidden argument*/NULL);
		// Write(_value.z);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ____value0;
		float L_5 = L_4.get_z_2();
		NetworkPacket_Write_m55AD4B133BFE6A1BB857904B10C3BFF8B3142B84(__this, L_5, /*hidden argument*/NULL);
		// Write(_value.w);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = ____value0;
		float L_7 = L_6.get_w_3();
		NetworkPacket_Write_m55AD4B133BFE6A1BB857904B10C3BFF8B3142B84(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Byte NetworkPacket::ReadByte(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetworkPacket_ReadByte_m61AC865BAAD07096973C14DFD7D25548FE004209 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_ReadByte_m61AC865BAAD07096973C14DFD7D25548FE004209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	{
		// if (buffer.Count > readPos)
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_inline(L_0, /*hidden argument*/List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0032;
		}
	}
	{
		// byte _value = readableBuffer[readPos]; // Get the byte at readPos' position
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_readableBuffer_1();
		int32_t L_4 = __this->get_readPos_2();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// if (_moveReadPos)
		bool L_7 = ____moveReadPos0;
		G_B2_0 = ((int32_t)(L_6));
		if (!L_7)
		{
			G_B3_0 = ((int32_t)(L_6));
			goto IL_0031;
		}
	}
	{
		// readPos += 1; // Increase readPos by 1
		int32_t L_8 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		G_B3_0 = G_B2_0;
	}

IL_0031:
	{
		// return _value; // Return the byte
		return (uint8_t)G_B3_0;
	}

IL_0032:
	{
		// throw new Exception("Could not read value of type 'byte'!");
		Exception_t * L_9 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_9, _stringLiteral6B741B99D84769DADF7F68923BBA26BE8F874EF1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NetworkPacket_ReadByte_m61AC865BAAD07096973C14DFD7D25548FE004209_RuntimeMethod_var);
	}
}
// System.Byte[] NetworkPacket::ReadBytes(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetworkPacket_ReadBytes_m281142BA2AC28E39FAF9783958CC7313711A5C19 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, int32_t ____length0, bool ____moveReadPos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_ReadBytes_m281142BA2AC28E39FAF9783958CC7313711A5C19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B3_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B2_0 = NULL;
	{
		// if (buffer.Count > readPos)
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_inline(L_0, /*hidden argument*/List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_003c;
		}
	}
	{
		// byte[] _value = buffer.GetRange(readPos, _length).ToArray(); // Get the bytes at readPos' position with a range of _length
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_3 = __this->get_buffer_0();
		int32_t L_4 = __this->get_readPos_2();
		int32_t L_5 = ____length0;
		NullCheck(L_3);
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_6 = List_1_GetRange_mD9D9B30D7D3627F73F328F40CB1B8100A31CBB8B(L_3, L_4, L_5, /*hidden argument*/List_1_GetRange_mD9D9B30D7D3627F73F328F40CB1B8100A31CBB8B_RuntimeMethod_var);
		NullCheck(L_6);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488(L_6, /*hidden argument*/List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488_RuntimeMethod_var);
		// if (_moveReadPos)
		bool L_8 = ____moveReadPos1;
		G_B2_0 = L_7;
		if (!L_8)
		{
			G_B3_0 = L_7;
			goto IL_003b;
		}
	}
	{
		// readPos += _length; // Increase readPos by _length
		int32_t L_9 = __this->get_readPos_2();
		int32_t L_10 = ____length0;
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)));
		G_B3_0 = G_B2_0;
	}

IL_003b:
	{
		// return _value; // Return the bytes
		return G_B3_0;
	}

IL_003c:
	{
		// throw new Exception("Could not read value of type 'byte[]'!");
		Exception_t * L_11 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_11, _stringLiteral0EFE752AACF664AB50F2CA2EB7E25EC47B9E19AB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NetworkPacket_ReadBytes_m281142BA2AC28E39FAF9783958CC7313711A5C19_RuntimeMethod_var);
	}
}
// System.Int16 NetworkPacket::ReadShort(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t NetworkPacket_ReadShort_mAD85E33A39BA3266869E8572404B2A3CEFD21017 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_ReadShort_mAD85E33A39BA3266869E8572404B2A3CEFD21017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int16_t G_B3_0 = 0;
	int16_t G_B2_0 = 0;
	{
		// if (buffer.Count > readPos)
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_inline(L_0, /*hidden argument*/List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		// short _value = BitConverter.ToInt16(readableBuffer, readPos); // Convert the bytes to a short
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_readableBuffer_1();
		int32_t L_4 = __this->get_readPos_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		int16_t L_5 = BitConverter_ToInt16_mBFC7B476188DF611E2B21C89693258F6A4969CEA(L_3, L_4, /*hidden argument*/NULL);
		// if (_moveReadPos)
		bool L_6 = ____moveReadPos0;
		G_B2_0 = L_5;
		if (!L_6)
		{
			G_B3_0 = L_5;
			goto IL_0035;
		}
	}
	{
		// readPos += 2; // Increase readPos by 2
		int32_t L_7 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2)));
		G_B3_0 = G_B2_0;
	}

IL_0035:
	{
		// return _value; // Return the short
		return G_B3_0;
	}

IL_0036:
	{
		// throw new Exception("Could not read value of type 'short'!");
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_8, _stringLiteral578F0843CBF5A28A8E384A76B031CD1F4C2010E8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NetworkPacket_ReadShort_mAD85E33A39BA3266869E8572404B2A3CEFD21017_RuntimeMethod_var);
	}
}
// System.Int32 NetworkPacket::ReadInt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	{
		// if (buffer.Count > readPos)
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_inline(L_0, /*hidden argument*/List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		// int _value = BitConverter.ToInt32(readableBuffer, readPos); // Convert the bytes to an int
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_readableBuffer_1();
		int32_t L_4 = __this->get_readPos_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		int32_t L_5 = BitConverter_ToInt32_m900A016CA90064569D8DF6D9195044C9C106B391(L_3, L_4, /*hidden argument*/NULL);
		// if (_moveReadPos)
		bool L_6 = ____moveReadPos0;
		G_B2_0 = L_5;
		if (!L_6)
		{
			G_B3_0 = L_5;
			goto IL_0035;
		}
	}
	{
		// readPos += 4; // Increase readPos by 4
		int32_t L_7 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)4)));
		G_B3_0 = G_B2_0;
	}

IL_0035:
	{
		// return _value; // Return the int
		return G_B3_0;
	}

IL_0036:
	{
		// throw new Exception("Could not read value of type 'int'!");
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_8, _stringLiteralD7D5FE0395C6C715A981DF9D8AA4840E6A3C5266, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D_RuntimeMethod_var);
	}
}
// System.Int64 NetworkPacket::ReadLong(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetworkPacket_ReadLong_m0953C00D675E7E1BA3A3EA919EC91E4F173811F1 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_ReadLong_m0953C00D675E7E1BA3A3EA919EC91E4F173811F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t G_B3_0 = 0;
	int64_t G_B2_0 = 0;
	{
		// if (buffer.Count > readPos)
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_inline(L_0, /*hidden argument*/List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		// long _value = BitConverter.ToInt64(readableBuffer, readPos); // Convert the bytes to a long
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_readableBuffer_1();
		int32_t L_4 = __this->get_readPos_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		int64_t L_5 = BitConverter_ToInt64_m28987106F93DB8C163FD4E740B4FEA405CC8A7FA(L_3, L_4, /*hidden argument*/NULL);
		// if (_moveReadPos)
		bool L_6 = ____moveReadPos0;
		G_B2_0 = L_5;
		if (!L_6)
		{
			G_B3_0 = L_5;
			goto IL_0035;
		}
	}
	{
		// readPos += 8; // Increase readPos by 8
		int32_t L_7 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)8)));
		G_B3_0 = G_B2_0;
	}

IL_0035:
	{
		// return _value; // Return the long
		return G_B3_0;
	}

IL_0036:
	{
		// throw new Exception("Could not read value of type 'long'!");
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_8, _stringLiteral40C1D631E53990C4AA9566AF9C3ED84B58E34AAC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NetworkPacket_ReadLong_m0953C00D675E7E1BA3A3EA919EC91E4F173811F1_RuntimeMethod_var);
	}
}
// System.Single NetworkPacket::ReadFloat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkPacket_ReadFloat_m95A714D405C99B975BDA0BAF56CEE92072F45C50 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_ReadFloat_m95A714D405C99B975BDA0BAF56CEE92072F45C50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0 = 0.0f;
	float G_B2_0 = 0.0f;
	{
		// if (buffer.Count > readPos)
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_inline(L_0, /*hidden argument*/List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		// float _value = BitConverter.ToSingle(readableBuffer, readPos); // Convert the bytes to a float
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_readableBuffer_1();
		int32_t L_4 = __this->get_readPos_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		float L_5 = BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17(L_3, L_4, /*hidden argument*/NULL);
		// if (_moveReadPos)
		bool L_6 = ____moveReadPos0;
		G_B2_0 = L_5;
		if (!L_6)
		{
			G_B3_0 = L_5;
			goto IL_0035;
		}
	}
	{
		// readPos += 4; // Increase readPos by 4
		int32_t L_7 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)4)));
		G_B3_0 = G_B2_0;
	}

IL_0035:
	{
		// return _value; // Return the float
		return G_B3_0;
	}

IL_0036:
	{
		// throw new Exception("Could not read value of type 'float'!");
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_8, _stringLiteral20935F6F88E3F5968AA2FAFC29282E874B994F12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NetworkPacket_ReadFloat_m95A714D405C99B975BDA0BAF56CEE92072F45C50_RuntimeMethod_var);
	}
}
// System.Boolean NetworkPacket::ReadBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkPacket_ReadBool_m178B60929670931222F8C8AB0800C2AF0D9F7981 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_ReadBool_m178B60929670931222F8C8AB0800C2AF0D9F7981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B3_0 = false;
	bool G_B2_0 = false;
	{
		// if (buffer.Count > readPos)
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_inline(L_0, /*hidden argument*/List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		// bool _value = BitConverter.ToBoolean(readableBuffer, readPos); // Convert the bytes to a bool
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_readableBuffer_1();
		int32_t L_4 = __this->get_readPos_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		bool L_5 = BitConverter_ToBoolean_mDC40E06D2185E50B814E1C016105DD2A3C07D965(L_3, L_4, /*hidden argument*/NULL);
		// if (_moveReadPos)
		bool L_6 = ____moveReadPos0;
		G_B2_0 = L_5;
		if (!L_6)
		{
			G_B3_0 = L_5;
			goto IL_0035;
		}
	}
	{
		// readPos += 1; // Increase readPos by 1
		int32_t L_7 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		G_B3_0 = G_B2_0;
	}

IL_0035:
	{
		// return _value; // Return the bool
		return G_B3_0;
	}

IL_0036:
	{
		// throw new Exception("Could not read value of type 'bool'!");
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_8, _stringLiteral77C52F97DDEBCE706DE951053AD5ECBAF8F457D3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NetworkPacket_ReadBool_m178B60929670931222F8C8AB0800C2AF0D9F7981_RuntimeMethod_var);
	}
}
// System.String NetworkPacket::ReadString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkPacket_ReadString_m8C44616B906971689ED5C219B1E255079D13BCCB (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_ReadString_m8C44616B906971689ED5C219B1E255079D13BCCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// int _length = ReadInt(); // Get the length of the string
			int32_t L_0 = NetworkPacket_ReadInt_mE5066B62FCCEE741A39BBBBA820E585C6A3B082D(__this, (bool)1, /*hidden argument*/NULL);
			V_0 = L_0;
			// string _value = Encoding.ASCII.GetString(readableBuffer, readPos, _length); // Convert the bytes to a string
			Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_1 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_readableBuffer_1();
			int32_t L_3 = __this->get_readPos_2();
			int32_t L_4 = V_0;
			NullCheck(L_1);
			String_t* L_5 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, L_3, L_4);
			V_1 = L_5;
			// if (_moveReadPos && _value.Length > 0)
			bool L_6 = ____moveReadPos0;
			if (!L_6)
			{
				goto IL_003a;
			}
		}

IL_0023:
		{
			String_t* L_7 = V_1;
			NullCheck(L_7);
			int32_t L_8 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_7, /*hidden argument*/NULL);
			if ((((int32_t)L_8) <= ((int32_t)0)))
			{
				goto IL_003a;
			}
		}

IL_002c:
		{
			// readPos += _length; // Increase readPos by the length of the string
			int32_t L_9 = __this->get_readPos_2();
			int32_t L_10 = V_0;
			__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)));
		}

IL_003a:
		{
			// return _value; // Return the string
			String_t* L_11 = V_1;
			V_2 = L_11;
			goto IL_004a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003e;
		throw e;
	}

CATCH_003e:
	{ // begin catch(System.Object)
		// catch
		// throw new Exception("Could not read value of type 'string'!");
		Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_12, _stringLiteral010E4F5F2C32995E4D6998AD0558ECDA82273CB6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NetworkPacket_ReadString_m8C44616B906971689ED5C219B1E255079D13BCCB_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_004a:
	{
		// }
		String_t* L_13 = V_2;
		return L_13;
	}
}
// UnityEngine.Vector3 NetworkPacket::ReadVector3(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NetworkPacket_ReadVector3_mB41BB368607393C7718CCD5EA7F8115CCFFC2C1C (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	{
		// return new Vector3(ReadFloat(_moveReadPos), ReadFloat(_moveReadPos), ReadFloat(_moveReadPos));
		bool L_0 = ____moveReadPos0;
		float L_1 = NetworkPacket_ReadFloat_m95A714D405C99B975BDA0BAF56CEE92072F45C50(__this, L_0, /*hidden argument*/NULL);
		bool L_2 = ____moveReadPos0;
		float L_3 = NetworkPacket_ReadFloat_m95A714D405C99B975BDA0BAF56CEE92072F45C50(__this, L_2, /*hidden argument*/NULL);
		bool L_4 = ____moveReadPos0;
		float L_5 = NetworkPacket_ReadFloat_m95A714D405C99B975BDA0BAF56CEE92072F45C50(__this, L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Quaternion NetworkPacket::ReadQuaternion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  NetworkPacket_ReadQuaternion_m17A3551A46E1526CFBE5C86E799CF233D2047544 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	{
		// return new Quaternion(ReadFloat(_moveReadPos), ReadFloat(_moveReadPos), ReadFloat(_moveReadPos), ReadFloat(_moveReadPos));
		bool L_0 = ____moveReadPos0;
		float L_1 = NetworkPacket_ReadFloat_m95A714D405C99B975BDA0BAF56CEE92072F45C50(__this, L_0, /*hidden argument*/NULL);
		bool L_2 = ____moveReadPos0;
		float L_3 = NetworkPacket_ReadFloat_m95A714D405C99B975BDA0BAF56CEE92072F45C50(__this, L_2, /*hidden argument*/NULL);
		bool L_4 = ____moveReadPos0;
		float L_5 = NetworkPacket_ReadFloat_m95A714D405C99B975BDA0BAF56CEE92072F45C50(__this, L_4, /*hidden argument*/NULL);
		bool L_6 = ____moveReadPos0;
		float L_7 = NetworkPacket_ReadFloat_m95A714D405C99B975BDA0BAF56CEE92072F45C50(__this, L_6, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void NetworkPacket::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Dispose_m24D4382D3518A35ADC9CFAA1D505E798C5AC5EA1 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, bool ____disposing0, const RuntimeMethod* method)
{
	{
		// if (!disposed)
		bool L_0 = __this->get_disposed_3();
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (_disposing)
		bool L_1 = ____disposing0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// buffer = null;
		__this->set_buffer_0((List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *)NULL);
		// readableBuffer = null;
		__this->set_readableBuffer_1((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL);
		// readPos = 0;
		__this->set_readPos_2(0);
	}

IL_0020:
	{
		// disposed = true;
		__this->set_disposed_3((bool)1);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void NetworkPacket::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkPacket_Dispose_mB278EF2A709E845AA76AAABBED70B8487B853462 (NetworkPacket_t1C5A27ED3EDB9FD2E8F4FF6FB67EB46A57B522A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkPacket_Dispose_mB278EF2A709E845AA76AAABBED70B8487B853462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void NetworkPacket::Dispose(System.Boolean) */, __this, (bool)1);
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ThreadManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager_FixedUpdate_mBF85478ABFE93688121D21DF3C14F58407DF420C (ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadManager_FixedUpdate_mBF85478ABFE93688121D21DF3C14F58407DF420C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateMain();
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var);
		ThreadManager_UpdateMain_m8C341416750A1B19A6E4ECDB934C482EAC79D68B(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ThreadManager::ExecuteOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager_ExecuteOnMainThread_mF3CC60CB0878DB1E4958FFA384EC120E73977295 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ____action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadManager_ExecuteOnMainThread_mF3CC60CB0878DB1E4958FFA384EC120E73977295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (_action == null)
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ____action0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Debug.Log("No action to execute on main thread!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralBF3919D64DA90D62F8AC2F28949FE279E02ED196, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_000e:
	{
		// lock (executeOnMainThread)
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var);
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_1 = ((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->get_executeOnMainThread_4();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_2 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
		// executeOnMainThread.Add(_action);
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var);
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_3 = ((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->get_executeOnMainThread_4();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_4 = ____action0;
		NullCheck(L_3);
		List_1_Add_m8DDC8569C5393C3A6DD7345DC74B90A5A276E242(L_3, L_4, /*hidden argument*/List_1_Add_m8DDC8569C5393C3A6DD7345DC74B90A5A276E242_RuntimeMethod_var);
		// actionToExecuteOnMainThread = true;
		((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->set_actionToExecuteOnMainThread_6((bool)1);
		// }
		IL2CPP_LEAVE(0x3B, FINALLY_0031);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_003a;
			}
		}

IL_0034:
		{
			List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_6 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_6, /*hidden argument*/NULL);
		}

IL_003a:
		{
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void ThreadManager::UpdateMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager_UpdateMain_m8C341416750A1B19A6E4ECDB934C482EAC79D68B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadManager_UpdateMain_m8C341416750A1B19A6E4ECDB934C482EAC79D68B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (actionToExecuteOnMainThread)
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var);
		bool L_0 = ((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->get_actionToExecuteOnMainThread_6();
		if (!L_0)
		{
			goto IL_0071;
		}
	}
	{
		// executeCopiedOnMainThread.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var);
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_1 = ((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->get_executeCopiedOnMainThread_5();
		NullCheck(L_1);
		List_1_Clear_mCE39EB4018B1834C1D57318786D5C7ECDFEE2039(L_1, /*hidden argument*/List_1_Clear_mCE39EB4018B1834C1D57318786D5C7ECDFEE2039_RuntimeMethod_var);
		// lock (executeOnMainThread)
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_2 = ((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->get_executeOnMainThread_4();
		V_0 = L_2;
		V_1 = (bool)0;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_3 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
		// executeCopiedOnMainThread.AddRange(executeOnMainThread);
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var);
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_4 = ((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->get_executeCopiedOnMainThread_5();
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_5 = ((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->get_executeOnMainThread_4();
		NullCheck(L_4);
		List_1_AddRange_m0907A864BC5EC77E9252608D7610D42C7B896E76(L_4, L_5, /*hidden argument*/List_1_AddRange_m0907A864BC5EC77E9252608D7610D42C7B896E76_RuntimeMethod_var);
		// executeOnMainThread.Clear();
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_6 = ((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->get_executeOnMainThread_4();
		NullCheck(L_6);
		List_1_Clear_mCE39EB4018B1834C1D57318786D5C7ECDFEE2039(L_6, /*hidden argument*/List_1_Clear_mCE39EB4018B1834C1D57318786D5C7ECDFEE2039_RuntimeMethod_var);
		// actionToExecuteOnMainThread = false;
		((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->set_actionToExecuteOnMainThread_6((bool)0);
		// }
		IL2CPP_LEAVE(0x4C, FINALLY_0042);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_004b;
			}
		}

IL_0045:
		{
			List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_8 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_8, /*hidden argument*/NULL);
		}

IL_004b:
		{
			IL2CPP_END_FINALLY(66)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		// for (int i = 0; i < executeCopiedOnMainThread.Count; i++)
		V_2 = 0;
		goto IL_0064;
	}

IL_0050:
	{
		// executeCopiedOnMainThread[i]();
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var);
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_9 = ((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->get_executeCopiedOnMainThread_5();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_11 = List_1_get_Item_mDB3D24D94D226467C7207905CFFFC9A845E035F5_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_mDB3D24D94D226467C7207905CFFFC9A845E035F5_RuntimeMethod_var);
		NullCheck(L_11);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_11, /*hidden argument*/NULL);
		// for (int i = 0; i < executeCopiedOnMainThread.Count; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0064:
	{
		// for (int i = 0; i < executeCopiedOnMainThread.Count; i++)
		int32_t L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var);
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_14 = ((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->get_executeCopiedOnMainThread_5();
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_mD6135FBF7E7225B59A609DE762D15A7123860D8B_inline(L_14, /*hidden argument*/List_1_get_Count_mD6135FBF7E7225B59A609DE762D15A7123860D8B_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0050;
		}
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void ThreadManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager__ctor_m6C43FDE1E05DBEBFC9157B9F6EA1C4897D0A3C3C (ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThreadManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager__cctor_m2B8243999D4E27A8E8C3FB353CD4F174B8BEE252 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadManager__cctor_m2B8243999D4E27A8E8C3FB353CD4F174B8BEE252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<Action> executeOnMainThread = new List<Action>();
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_0 = (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *)il2cpp_codegen_object_new(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7_il2cpp_TypeInfo_var);
		List_1__ctor_mC8B3CE5991B065CAE86AABC7C683CAF61EBF5FE3(L_0, /*hidden argument*/List_1__ctor_mC8B3CE5991B065CAE86AABC7C683CAF61EBF5FE3_RuntimeMethod_var);
		((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->set_executeOnMainThread_4(L_0);
		// private static readonly List<Action> executeCopiedOnMainThread = new List<Action>();
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_1 = (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *)il2cpp_codegen_object_new(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7_il2cpp_TypeInfo_var);
		List_1__ctor_mC8B3CE5991B065CAE86AABC7C683CAF61EBF5FE3(L_1, /*hidden argument*/List_1__ctor_mC8B3CE5991B065CAE86AABC7C683CAF61EBF5FE3_RuntimeMethod_var);
		((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->set_executeCopiedOnMainThread_5(L_1);
		// private static bool actionToExecuteOnMainThread = false;
		((ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_t5024AC411B175D5112CC7ED2F813563D43FC7CC5_il2cpp_TypeInfo_var))->set_actionToExecuteOnMainThread_6((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TileType Tilemap::GetTile(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTile_m2737FCA638C64B80A9032C5D140EF02ED9FAFCB8 (int32_t ____indexX0, int32_t ____indexY1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tilemap_GetTile_m2737FCA638C64B80A9032C5D140EF02ED9FAFCB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return tiles[_indexX, _indexY];
		TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360* L_0 = ((Tilemap_tAF988A9C99D628D3E856E1BFC1BCAEBDCFA3B836_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_tAF988A9C99D628D3E856E1BFC1BCAEBDCFA3B836_il2cpp_TypeInfo_var))->get_tiles_0();
		int32_t L_1 = ____indexX0;
		int32_t L_2 = ____indexY1;
		NullCheck((TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360*)(TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360*)L_0);
		int32_t L_3 = ((TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360*)(TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360*)L_0)->GetAt(L_1, L_2);
		return L_3;
	}
}
// System.Void Tilemap::BuildMapFromBytes(System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_BuildMapFromBytes_mD2AF9C1E4414D826DE30082D714E861F4020EB32 (int32_t ____xLength0, int32_t ____yLength1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____bytes2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tilemap_BuildMapFromBytes_mD2AF9C1E4414D826DE30082D714E861F4020EB32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// tiles = new TileType[_yLength, _xLength];
		int32_t L_0 = ____yLength1;
		int32_t L_1 = ____xLength0;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360* L_2 = (TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360*)GenArrayNew(TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360_il2cpp_TypeInfo_var, L_3);
		((Tilemap_tAF988A9C99D628D3E856E1BFC1BCAEBDCFA3B836_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_tAF988A9C99D628D3E856E1BFC1BCAEBDCFA3B836_il2cpp_TypeInfo_var))->set_tiles_0((TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360*)L_2);
		// for (int x = _xLength - 1; x >= 0; x--)
		int32_t L_4 = ____xLength0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		goto IL_003c;
	}

IL_0012:
	{
		// for (int y = _yLength - 1; y >= 0; y--)
		int32_t L_5 = ____yLength1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		goto IL_0034;
	}

IL_0018:
	{
		// tiles[x, y] = (TileType)Convert.ToInt32(_bytes[(x * _xLength) + y]);
		TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360* L_6 = ((Tilemap_tAF988A9C99D628D3E856E1BFC1BCAEBDCFA3B836_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_tAF988A9C99D628D3E856E1BFC1BCAEBDCFA3B836_il2cpp_TypeInfo_var))->get_tiles_0();
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ____bytes2;
		int32_t L_10 = V_0;
		int32_t L_11 = ____xLength0;
		int32_t L_12 = V_1;
		NullCheck(L_9);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)), (int32_t)L_12));
		uint8_t L_14 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_15 = Convert_ToInt32_m322C82C3EB50E7389A4A38C4601FD08705CA56CF(L_14, /*hidden argument*/NULL);
		NullCheck((TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360*)(TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360*)L_6);
		((TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360*)(TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360*)L_6)->SetAt(L_7, L_8, L_15);
		// for (int y = _yLength - 1; y >= 0; y--)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
	}

IL_0034:
	{
		// for (int y = _yLength - 1; y >= 0; y--)
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// for (int x = _xLength - 1; x >= 0; x--)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
	}

IL_003c:
	{
		// for (int x = _xLength - 1; x >= 0; x--)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		// GameManager.Instance.DrawMap(_xLength, _yLength);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_20 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_Instance_4();
		int32_t L_21 = ____xLength0;
		int32_t L_22 = ____yLength1;
		NullCheck(L_20);
		GameManager_DrawMap_m0C073A48A48063B6098207A70B8EA873EC2FC04A(L_20, L_21, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395_inline (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method)
{
	{
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_ClientSocket_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Port_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void EntityController_SetHP_m50F064E829B815DCA06689100DEB22F2BB343EE8_inline (EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * __this, int32_t ____newHP0, const RuntimeMethod* method)
{
	{
		// hp = _newHP;
		int32_t L_0 = ____newHP0;
		__this->set_hp_8(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_gshared_inline (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}

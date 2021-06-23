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

// AspectData
struct AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4;
// AspectData[]
struct AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3;
// AspectPortraitUI
struct AspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715;
// DraftUI
struct DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC;
// EntityController
struct EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8;
// GameManager
struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89;
// NetworkManager
struct NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C;
// NetworkManager/<TestPing>d__25
struct U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B;
// NetworkManager/MessageHandler
struct MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65;
// RiptideNetworking.ActionQueue
struct ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C;
// RiptideNetworking.Client
struct Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C;
// RiptideNetworking.ClientDisconnectedEventArgs
struct ClientDisconnectedEventArgs_t8DA97C9EB8D362876DEA37743F8BC53FF4D45587;
// RiptideNetworking.ClientMessageReceivedEventArgs
struct ClientMessageReceivedEventArgs_t0328F5CC4E66401A0A6CFA1267B964731B6CE1E4;
// RiptideNetworking.Message
struct Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454;
// RiptideNetworking.RiptideLogger/LogMethod
struct LogMethod_t386E421814648D7D957C04B454155405FDF8A541;
// RiptideNetworking.Rudp
struct Rudp_tD683FB93AF0126BC46FA19B187E12D13F4E5E6DC;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,EntityController>[]
struct EntryU5BU5D_t13AA4C8C571708BE1B48762A4F4919F5A3B17BCF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Sprite>[]
struct EntryU5BU5D_tC92F618D057AC2FC4C5A322B726736D6E8C4C77E;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt16,NetworkManager/MessageHandler>[]
struct EntryU5BU5D_t6E4169602E53BD00C71253E4FC46AEE087D8058A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,EntityController>
struct KeyCollection_t7FACC25CAF592AEFD54CB559683B43713AF50FA7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Sprite>
struct KeyCollection_tEFE83CF239DA080784262952FE1E1AEB99B7DC88;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt16,NetworkManager/MessageHandler>
struct KeyCollection_t22D4EA6BFE22DBC17C617B7E21B208C3B98B0C7D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,EntityController>
struct ValueCollection_tC3804799430615A6AD3AE21AD5F0CFA505128570;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Sprite>
struct ValueCollection_t37330ECD1B3499539ED662DCDD33B7138222B83D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt16,NetworkManager/MessageHandler>
struct ValueCollection_tDC4F9B4E79E2EA611FA2FA4679731E99ECE1830A;
// System.Collections.Generic.Dictionary`2<System.Int32,EntityController>
struct Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>
struct Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9;
// System.Collections.Generic.Dictionary`2<System.UInt16,NetworkManager/MessageHandler>
struct Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63;
// System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>
struct Dictionary_2_t230021F9E0FC2B2A957F86C0AEAA5E1EB32B672A;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IEqualityComparer`1<System.UInt16>
struct IEqualityComparer_1_t2264E7071E33F5D2BA6043126890F48B0007C295;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tF3653E6C83C09A018881AD9B85FEB961C912DF46;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<RiptideNetworking.ClientConnectedEventArgs>
struct EventHandler_1_tAE53E434C413BE299F11FA81BDDDC692451B29CE;
// System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>
struct EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6;
// System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>
struct EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA;
// System.EventHandler`1<RiptideNetworking.PingUpdatedEventArgs>
struct EventHandler_1_tFA75EF3F08E26BEED32DB57BBB3ABF98743A6F34;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Threading.Timer
struct Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TileType[0...,0...]
struct TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360;
// UIManager
struct UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.ILogger
struct ILogger_t572B66532D8EB6E76240476A788384A26D70866F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;

IL2CPP_EXTERN_C RuntimeClass* ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogMethod_t386E421814648D7D957C04B454155405FDF8A541_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tilemap_tAF988A9C99D628D3E856E1BFC1BCAEBDCFA3B836_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral289FD6DD86C78FC18484670BD5337FFC1457B23F;
IL2CPP_EXTERN_C String_t* _stringLiteral43F6218313E8BCCE8E7E241FC550B1DFFC92DF67;
IL2CPP_EXTERN_C String_t* _stringLiteral5DAD4184159AB5E3F7D9F6021CA1CDE32D4E4B21;
IL2CPP_EXTERN_C String_t* _stringLiteral5DB80151CADA9474E5DBF3165953B15D4AE81E4F;
IL2CPP_EXTERN_C String_t* _stringLiteral60ED6F729B8E3F43004A34E3D63D12A2DCF8F4D5;
IL2CPP_EXTERN_C String_t* _stringLiteral7786CB0246CB4AD5F850BF88421A89554075B75F;
IL2CPP_EXTERN_C String_t* _stringLiteral92B6B1BF71E0C08079E7114003E05A76E0786041;
IL2CPP_EXTERN_C String_t* _stringLiteralAAD39E455EACB67F647FAC5C0CC40D27686E8287;
IL2CPP_EXTERN_C String_t* _stringLiteralC2397555E76C08865D878D91F5932D53A26CE7E5;
IL2CPP_EXTERN_C String_t* _stringLiteralDCE54DCDAC85F06A19366C606042058BAD8C84C6;
IL2CPP_EXTERN_C const RuntimeMethod* ClientHandle_AspectLocked_mE723ADBD6C703B525524791E26DE7DC717EE8DFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientHandle_LoadDraft_mC0AC54FA8B1EC75AC09085C6E62B22374194FC75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientHandle_SpawnAspect_m2FA37F80383542434539BC2D3578673BFA748C59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientHandle_TestPingReceived_m5AC473FF011BFCBE6744C470A3BB24CA9FB91572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m64919C0982BBD4B73B25FD400713D777C9811293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m82F210F811DEB815B3FFE279913B31CD5219F428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE86471A37D4C88489C5AF33F5492A841C47C19F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m17F5BDE687E44BF02E623A9F6BCE567234266990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m49C4D7AFA2BB75BB0C6224FAFF85CD3AEC74DB76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBC9FDCA02266DD73DB42931E6A4A1A67147CB0D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mBE9F8C8142DBD886CC96ADBC04AF6022F76284FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC4F33F6981A3CFA78E96D1785E544F9DD57806E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEF04BC8FE1BE3C6948688783E3DE50D8F26F33F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m52F93489A34DD8B7EEA472D019EF4DC669192A35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mAFA74E0D127C37F8C36576F5F45675DDCD9EBD7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715_m42CB37CD70ACF05920CD975BDC1BF8567CD8EC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8_m1F646446CF0B4A60F139D1E23D767C33F95E2BC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkManager_ClientDisconnected_m7322C9A24903D70AEE9E9FE3E787115C9A8EDD9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkManager_FailedToConnect_m8C0A36DC725DB684D42B82E1083BDF868550E35C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkManager_LocalDisconnect_mD8D293C7BC25DA4D91EE4C2E3CBBCD179CCA3849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkManager_MessageReceived_m519A0D70110E4FEB5337B67B87E9FBC1AECA91FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkManager_SuccessfulConnection_m0D4A2FBCFFF7A1C51E41568A27E848D7B20A6968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAll_TisAspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4_m093250FC73A6A37F89513E3BC7430EAF09740F47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m600AFF3513CE2FD177BFE8F4162929FAF2E4644C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTestPingU3Ed__25_System_Collections_IEnumerator_Reset_m5C63789EAAD28AE14A90093D9889784EDE11339B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AspectData__ctor_mA167D15DDB75408AFF41F824C9A172C0A0E0A943_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AspectPortraitUI_ButtonInteract_m3D140FA3CF9352B6A0C22A3DF5F6F8388C106F95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AspectPortraitUI_Init_mC686B268BD591A14AB42C18B39880AC2BBB8EAC0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AspectPortraitUI__ctor_mCDD10D702F98480D140F49AD190E955638F4CBE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ClientHandle_AspectLocked_mE723ADBD6C703B525524791E26DE7DC717EE8DFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ClientHandle_LoadDraft_mC0AC54FA8B1EC75AC09085C6E62B22374194FC75_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DraftUI_Awake_mF2D1DB6FA765D397153E79870C008C1C81B5A433_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DraftUI_ButtonInteract_m96C48DD416C6DBE3FEB9014B613113233DD6A32B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DraftUI_LockAspect_mF26D7FB045BAB156A335926016EB2192C34F38A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DraftUI_Start_m1051E48F9DBD0ACBBBBD5DC266C1A9AEE47F9BB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DraftUI__cctor_m83F05D5A8A7B81FA0BE3C35CC8FB064BFD9CE593_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DraftUI__ctor_mEAAC11F5E586FF3381BFA1EBD1B5D6F967E6FFB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DraftUI_get_Instance_m2D0C71E6F06AF634922D64B8BB9C224B4365F126AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DraftUI_get_Instance_m2D0C71E6F06AF634922D64B8BB9C224B4365F126_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DraftUI_set_Instance_m2401D515DA6F5411D6E413541686B1B457383D07_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EntityController_OnGUI_mBF8208880DB1C2187C491153BB34E74DDF4607AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Awake_m12E1357322F99B1544DAD9C099CBFA6E63529A49_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_DrawMap_m0C073A48A48063B6098207A70B8EA873EC2FC04A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_SpawnAspect_m3D9E0AAC7BA47C4CE13A07139E9A00C377AAF314_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager__cctor_m31E0C44003795D330970BAA2A0F420D3B71341B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManager_Connect_m5DF96B11941118AF39C98987904E60CD6946F9A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManager_GetPing_m0F62E85D675E8E0F71F86D11FDF4EC7F82CE9E36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManager_LocalDisconnect_mD8D293C7BC25DA4D91EE4C2E3CBBCD179CCA3849_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManager_MessageReceived_m519A0D70110E4FEB5337B67B87E9FBC1AECA91FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManager_OnApplicationQuit_m06A58A94A5E11A1D897BB19956B656098E417DFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManager_Start_m6533F49FA8842AB15F5C8EBDDC92E6DC50002B91_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManager_TestPing_mDAD05FCBAECA49DD35ED93A8247FDD556633324D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManager__ctor_mF87DB7AEE8B70869E378CD2AF907AC1BA1419970_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManager_get_Instance_mEA21C6C03B8F9B8B612A9B8B5BC82B455A563C84AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManager_get_Instance_mEA21C6C03B8F9B8B612A9B8B5BC82B455A563C84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManager_set_Instance_mB3D50185087E37847ED6932BFD87244BE50E59FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tilemap_BuildMapFromBytes_mD2AF9C1E4414D826DE30082D714E861F4020EB32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tilemap_GetTile_m2737FCA638C64B80A9032C5D140EF02ED9FAFCB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CTestPingU3Ed__25_MoveNext_mE42074ABA47140A0A87E5D8F60D73837215A370B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CTestPingU3Ed__25_System_Collections_IEnumerator_Reset_m5C63789EAAD28AE14A90093D9889784EDE11339B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIManager_Awake_mD9EFB03744D897F8A0784A58CB31CE9B0BC5D651_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct TileTypeU5BU2CU5D_t71DBA254F629FA8697E097A9A37DA2DD58FAD360;
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
struct ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D;

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


// ClientHandle
struct  ClientHandle_t2239925F736ED2832C486DDE6655AEA73E73662B  : public RuntimeObject
{
public:

public:
};


// MessageExtensions
struct  MessageExtensions_tB6D6F399862D88E7CB8145C21D0793AB985E3BAD  : public RuntimeObject
{
public:

public:
};


// NetworkManager_<TestPing>d__25
struct  U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B  : public RuntimeObject
{
public:
	// System.Int32 NetworkManager_<TestPing>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NetworkManager_<TestPing>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// NetworkManager NetworkManager_<TestPing>d__25::<>4__this
	NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B, ___U3CU3E4__this_2)); }
	inline NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// RiptideNetworking.ActionQueue
struct  ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C  : public RuntimeObject
{
public:
	// System.String RiptideNetworking.ActionQueue::LogName
	String_t* ___LogName_0;
	// System.Collections.Generic.List`1<System.Action> RiptideNetworking.ActionQueue::executionQueue
	List_1_tF3653E6C83C09A018881AD9B85FEB961C912DF46 * ___executionQueue_1;
	// System.Collections.Generic.List`1<System.Action> RiptideNetworking.ActionQueue::executionQueueCopy
	List_1_tF3653E6C83C09A018881AD9B85FEB961C912DF46 * ___executionQueueCopy_2;
	// System.Boolean RiptideNetworking.ActionQueue::hasActionToExecute
	bool ___hasActionToExecute_3;

public:
	inline static int32_t get_offset_of_LogName_0() { return static_cast<int32_t>(offsetof(ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C, ___LogName_0)); }
	inline String_t* get_LogName_0() const { return ___LogName_0; }
	inline String_t** get_address_of_LogName_0() { return &___LogName_0; }
	inline void set_LogName_0(String_t* value)
	{
		___LogName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogName_0), (void*)value);
	}

	inline static int32_t get_offset_of_executionQueue_1() { return static_cast<int32_t>(offsetof(ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C, ___executionQueue_1)); }
	inline List_1_tF3653E6C83C09A018881AD9B85FEB961C912DF46 * get_executionQueue_1() const { return ___executionQueue_1; }
	inline List_1_tF3653E6C83C09A018881AD9B85FEB961C912DF46 ** get_address_of_executionQueue_1() { return &___executionQueue_1; }
	inline void set_executionQueue_1(List_1_tF3653E6C83C09A018881AD9B85FEB961C912DF46 * value)
	{
		___executionQueue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___executionQueue_1), (void*)value);
	}

	inline static int32_t get_offset_of_executionQueueCopy_2() { return static_cast<int32_t>(offsetof(ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C, ___executionQueueCopy_2)); }
	inline List_1_tF3653E6C83C09A018881AD9B85FEB961C912DF46 * get_executionQueueCopy_2() const { return ___executionQueueCopy_2; }
	inline List_1_tF3653E6C83C09A018881AD9B85FEB961C912DF46 ** get_address_of_executionQueueCopy_2() { return &___executionQueueCopy_2; }
	inline void set_executionQueueCopy_2(List_1_tF3653E6C83C09A018881AD9B85FEB961C912DF46 * value)
	{
		___executionQueueCopy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___executionQueueCopy_2), (void*)value);
	}

	inline static int32_t get_offset_of_hasActionToExecute_3() { return static_cast<int32_t>(offsetof(ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C, ___hasActionToExecute_3)); }
	inline bool get_hasActionToExecute_3() const { return ___hasActionToExecute_3; }
	inline bool* get_address_of_hasActionToExecute_3() { return &___hasActionToExecute_3; }
	inline void set_hasActionToExecute_3(bool value)
	{
		___hasActionToExecute_3 = value;
	}
};


// RiptideNetworking.RudpSocket
struct  RudpSocket_tA96E94D59A55EF7E19E203C3610995A05839B748  : public RuntimeObject
{
public:
	// System.Boolean RiptideNetworking.RudpSocket::<ShouldOutputInfoLogs>k__BackingField
	bool ___U3CShouldOutputInfoLogsU3Ek__BackingField_0;
	// System.String RiptideNetworking.RudpSocket::LogName
	String_t* ___LogName_1;
	// System.Net.Sockets.Socket RiptideNetworking.RudpSocket::socket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___socket_3;
	// System.Boolean RiptideNetworking.RudpSocket::isListening
	bool ___isListening_4;
	// System.UInt16 RiptideNetworking.RudpSocket::maxPacketSize
	uint16_t ___maxPacketSize_5;

public:
	inline static int32_t get_offset_of_U3CShouldOutputInfoLogsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RudpSocket_tA96E94D59A55EF7E19E203C3610995A05839B748, ___U3CShouldOutputInfoLogsU3Ek__BackingField_0)); }
	inline bool get_U3CShouldOutputInfoLogsU3Ek__BackingField_0() const { return ___U3CShouldOutputInfoLogsU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CShouldOutputInfoLogsU3Ek__BackingField_0() { return &___U3CShouldOutputInfoLogsU3Ek__BackingField_0; }
	inline void set_U3CShouldOutputInfoLogsU3Ek__BackingField_0(bool value)
	{
		___U3CShouldOutputInfoLogsU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_LogName_1() { return static_cast<int32_t>(offsetof(RudpSocket_tA96E94D59A55EF7E19E203C3610995A05839B748, ___LogName_1)); }
	inline String_t* get_LogName_1() const { return ___LogName_1; }
	inline String_t** get_address_of_LogName_1() { return &___LogName_1; }
	inline void set_LogName_1(String_t* value)
	{
		___LogName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogName_1), (void*)value);
	}

	inline static int32_t get_offset_of_socket_3() { return static_cast<int32_t>(offsetof(RudpSocket_tA96E94D59A55EF7E19E203C3610995A05839B748, ___socket_3)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_socket_3() const { return ___socket_3; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_socket_3() { return &___socket_3; }
	inline void set_socket_3(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___socket_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_3), (void*)value);
	}

	inline static int32_t get_offset_of_isListening_4() { return static_cast<int32_t>(offsetof(RudpSocket_tA96E94D59A55EF7E19E203C3610995A05839B748, ___isListening_4)); }
	inline bool get_isListening_4() const { return ___isListening_4; }
	inline bool* get_address_of_isListening_4() { return &___isListening_4; }
	inline void set_isListening_4(bool value)
	{
		___isListening_4 = value;
	}

	inline static int32_t get_offset_of_maxPacketSize_5() { return static_cast<int32_t>(offsetof(RudpSocket_tA96E94D59A55EF7E19E203C3610995A05839B748, ___maxPacketSize_5)); }
	inline uint16_t get_maxPacketSize_5() const { return ___maxPacketSize_5; }
	inline uint16_t* get_address_of_maxPacketSize_5() { return &___maxPacketSize_5; }
	inline void set_maxPacketSize_5(uint16_t value)
	{
		___maxPacketSize_5 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>
struct  Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC92F618D057AC2FC4C5A322B726736D6E8C4C77E* ___entries_1;
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
	KeyCollection_tEFE83CF239DA080784262952FE1E1AEB99B7DC88 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t37330ECD1B3499539ED662DCDD33B7138222B83D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9, ___entries_1)); }
	inline EntryU5BU5D_tC92F618D057AC2FC4C5A322B726736D6E8C4C77E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC92F618D057AC2FC4C5A322B726736D6E8C4C77E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC92F618D057AC2FC4C5A322B726736D6E8C4C77E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9, ___keys_7)); }
	inline KeyCollection_tEFE83CF239DA080784262952FE1E1AEB99B7DC88 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEFE83CF239DA080784262952FE1E1AEB99B7DC88 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEFE83CF239DA080784262952FE1E1AEB99B7DC88 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9, ___values_8)); }
	inline ValueCollection_t37330ECD1B3499539ED662DCDD33B7138222B83D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t37330ECD1B3499539ED662DCDD33B7138222B83D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t37330ECD1B3499539ED662DCDD33B7138222B83D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.UInt16,NetworkManager_MessageHandler>
struct  Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6E4169602E53BD00C71253E4FC46AEE087D8058A* ___entries_1;
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
	KeyCollection_t22D4EA6BFE22DBC17C617B7E21B208C3B98B0C7D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDC4F9B4E79E2EA611FA2FA4679731E99ECE1830A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63, ___entries_1)); }
	inline EntryU5BU5D_t6E4169602E53BD00C71253E4FC46AEE087D8058A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6E4169602E53BD00C71253E4FC46AEE087D8058A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6E4169602E53BD00C71253E4FC46AEE087D8058A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63, ___keys_7)); }
	inline KeyCollection_t22D4EA6BFE22DBC17C617B7E21B208C3B98B0C7D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t22D4EA6BFE22DBC17C617B7E21B208C3B98B0C7D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t22D4EA6BFE22DBC17C617B7E21B208C3B98B0C7D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63, ___values_8)); }
	inline ValueCollection_tDC4F9B4E79E2EA611FA2FA4679731E99ECE1830A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDC4F9B4E79E2EA611FA2FA4679731E99ECE1830A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDC4F9B4E79E2EA611FA2FA4679731E99ECE1830A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
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


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Debug
struct  Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4  : public RuntimeObject
{
public:

public:
};

struct Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Logger_0), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// RiptideNetworking.ClientDisconnectedEventArgs
struct  ClientDisconnectedEventArgs_t8DA97C9EB8D362876DEA37743F8BC53FF4D45587  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.UInt16 RiptideNetworking.ClientDisconnectedEventArgs::<Id>k__BackingField
	uint16_t ___U3CIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ClientDisconnectedEventArgs_t8DA97C9EB8D362876DEA37743F8BC53FF4D45587, ___U3CIdU3Ek__BackingField_1)); }
	inline uint16_t get_U3CIdU3Ek__BackingField_1() const { return ___U3CIdU3Ek__BackingField_1; }
	inline uint16_t* get_address_of_U3CIdU3Ek__BackingField_1() { return &___U3CIdU3Ek__BackingField_1; }
	inline void set_U3CIdU3Ek__BackingField_1(uint16_t value)
	{
		___U3CIdU3Ek__BackingField_1 = value;
	}
};


// RiptideNetworking.ClientMessageReceivedEventArgs
struct  ClientMessageReceivedEventArgs_t0328F5CC4E66401A0A6CFA1267B964731B6CE1E4  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// RiptideNetworking.Message RiptideNetworking.ClientMessageReceivedEventArgs::<Message>k__BackingField
	Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ClientMessageReceivedEventArgs_t0328F5CC4E66401A0A6CFA1267B964731B6CE1E4, ___U3CMessageU3Ek__BackingField_1)); }
	inline Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 ** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
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


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
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


// UnityEngine.Vector2Int
struct  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
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


// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// ClientToServerRequest
struct  ClientToServerRequest_tD23541FE3623D6DB7064ABE44A9E2ED7A433031B 
{
public:
	// System.UInt16 ClientToServerRequest::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientToServerRequest_tD23541FE3623D6DB7064ABE44A9E2ED7A433031B, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// RiptideNetworking.ConnectionState
struct  ConnectionState_tC21E96FA3184C1A3FA2B8E63A43E7B331CC4F048 
{
public:
	// System.Byte RiptideNetworking.ConnectionState::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionState_tC21E96FA3184C1A3FA2B8E63A43E7B331CC4F048, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// RiptideNetworking.MessageSendMode
struct  MessageSendMode_t32853FD69C7ECBB25616E82411DED0CAF76AAD06 
{
public:
	// System.Byte RiptideNetworking.MessageSendMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageSendMode_t32853FD69C7ECBB25616E82411DED0CAF76AAD06, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ServerToClientRequest
struct  ServerToClientRequest_t63761376F5EC5DA70C9CEE61CE483A668E8C60CE 
{
public:
	// System.UInt16 ServerToClientRequest::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServerToClientRequest_t63761376F5EC5DA70C9CEE61CE483A668E8C60CE, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
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

// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// System.ValueTuple`2<System.Byte,System.DateTime>
struct  ValueTuple_2_t4F3F37D1311369A42B79DA72B9689289AF0592F2 
{
public:
	// T1 System.ValueTuple`2::Item1
	uint8_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t4F3F37D1311369A42B79DA72B9689289AF0592F2, ___Item1_0)); }
	inline uint8_t get_Item1_0() const { return ___Item1_0; }
	inline uint8_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(uint8_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t4F3F37D1311369A42B79DA72B9689289AF0592F2, ___Item2_1)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_Item2_1() const { return ___Item2_1; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___Item2_1 = value;
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


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.UI.Image_FillMethod
struct  FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5 
{
public:
	// System.Int32 UnityEngine.UI.Image_FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_Type
struct  Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A 
{
public:
	// System.Int32 UnityEngine.UI.Image_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// RiptideNetworking.Client
struct  Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C  : public RudpSocket_tA96E94D59A55EF7E19E203C3610995A05839B748
{
public:
	// System.UInt16 RiptideNetworking.Client::<Id>k__BackingField
	uint16_t ___U3CIdU3Ek__BackingField_6;
	// System.UInt16 RiptideNetworking.Client::<TimeoutTime>k__BackingField
	uint16_t ___U3CTimeoutTimeU3Ek__BackingField_7;
	// System.UInt16 RiptideNetworking.Client::_heartbeatInterval
	uint16_t ____heartbeatInterval_8;
	// RiptideNetworking.ActionQueue RiptideNetworking.Client::receiveActionQueue
	ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C * ___receiveActionQueue_9;
	// System.Net.IPEndPoint RiptideNetworking.Client::remoteEndPoint
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___remoteEndPoint_10;
	// RiptideNetworking.Rudp RiptideNetworking.Client::rudp
	Rudp_tD683FB93AF0126BC46FA19B187E12D13F4E5E6DC * ___rudp_11;
	// RiptideNetworking.ConnectionState RiptideNetworking.Client::connectionState
	uint8_t ___connectionState_12;
	// System.Byte RiptideNetworking.Client::connectionAttempts
	uint8_t ___connectionAttempts_13;
	// System.Byte RiptideNetworking.Client::maxConnectionAttempts
	uint8_t ___maxConnectionAttempts_14;
	// System.Threading.Timer RiptideNetworking.Client::heartbeatTimer
	Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * ___heartbeatTimer_15;
	// System.DateTime RiptideNetworking.Client::lastHeartbeat
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___lastHeartbeat_16;
	// RiptideNetworking.Message RiptideNetworking.Client::heartbeatMessage
	Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___heartbeatMessage_17;
	// System.Byte RiptideNetworking.Client::lastPingId
	uint8_t ___lastPingId_18;
	// System.ValueTuple`2<System.Byte,System.DateTime> RiptideNetworking.Client::pendingPing
	ValueTuple_2_t4F3F37D1311369A42B79DA72B9689289AF0592F2  ___pendingPing_19;
	// System.EventHandler RiptideNetworking.Client::Connected
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___Connected_20;
	// System.EventHandler RiptideNetworking.Client::ConnectionFailed
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___ConnectionFailed_21;
	// System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs> RiptideNetworking.Client::MessageReceived
	EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA * ___MessageReceived_22;
	// System.EventHandler RiptideNetworking.Client::Disconnected
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___Disconnected_23;
	// System.EventHandler`1<RiptideNetworking.ClientConnectedEventArgs> RiptideNetworking.Client::ClientConnected
	EventHandler_1_tAE53E434C413BE299F11FA81BDDDC692451B29CE * ___ClientConnected_24;
	// System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs> RiptideNetworking.Client::ClientDisconnected
	EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6 * ___ClientDisconnected_25;
	// System.EventHandler`1<RiptideNetworking.PingUpdatedEventArgs> RiptideNetworking.Client::PingUpdated
	EventHandler_1_tFA75EF3F08E26BEED32DB57BBB3ABF98743A6F34 * ___PingUpdated_26;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___U3CIdU3Ek__BackingField_6)); }
	inline uint16_t get_U3CIdU3Ek__BackingField_6() const { return ___U3CIdU3Ek__BackingField_6; }
	inline uint16_t* get_address_of_U3CIdU3Ek__BackingField_6() { return &___U3CIdU3Ek__BackingField_6; }
	inline void set_U3CIdU3Ek__BackingField_6(uint16_t value)
	{
		___U3CIdU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CTimeoutTimeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___U3CTimeoutTimeU3Ek__BackingField_7)); }
	inline uint16_t get_U3CTimeoutTimeU3Ek__BackingField_7() const { return ___U3CTimeoutTimeU3Ek__BackingField_7; }
	inline uint16_t* get_address_of_U3CTimeoutTimeU3Ek__BackingField_7() { return &___U3CTimeoutTimeU3Ek__BackingField_7; }
	inline void set_U3CTimeoutTimeU3Ek__BackingField_7(uint16_t value)
	{
		___U3CTimeoutTimeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of__heartbeatInterval_8() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ____heartbeatInterval_8)); }
	inline uint16_t get__heartbeatInterval_8() const { return ____heartbeatInterval_8; }
	inline uint16_t* get_address_of__heartbeatInterval_8() { return &____heartbeatInterval_8; }
	inline void set__heartbeatInterval_8(uint16_t value)
	{
		____heartbeatInterval_8 = value;
	}

	inline static int32_t get_offset_of_receiveActionQueue_9() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___receiveActionQueue_9)); }
	inline ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C * get_receiveActionQueue_9() const { return ___receiveActionQueue_9; }
	inline ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C ** get_address_of_receiveActionQueue_9() { return &___receiveActionQueue_9; }
	inline void set_receiveActionQueue_9(ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C * value)
	{
		___receiveActionQueue_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveActionQueue_9), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndPoint_10() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___remoteEndPoint_10)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_remoteEndPoint_10() const { return ___remoteEndPoint_10; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_remoteEndPoint_10() { return &___remoteEndPoint_10; }
	inline void set_remoteEndPoint_10(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___remoteEndPoint_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndPoint_10), (void*)value);
	}

	inline static int32_t get_offset_of_rudp_11() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___rudp_11)); }
	inline Rudp_tD683FB93AF0126BC46FA19B187E12D13F4E5E6DC * get_rudp_11() const { return ___rudp_11; }
	inline Rudp_tD683FB93AF0126BC46FA19B187E12D13F4E5E6DC ** get_address_of_rudp_11() { return &___rudp_11; }
	inline void set_rudp_11(Rudp_tD683FB93AF0126BC46FA19B187E12D13F4E5E6DC * value)
	{
		___rudp_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rudp_11), (void*)value);
	}

	inline static int32_t get_offset_of_connectionState_12() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___connectionState_12)); }
	inline uint8_t get_connectionState_12() const { return ___connectionState_12; }
	inline uint8_t* get_address_of_connectionState_12() { return &___connectionState_12; }
	inline void set_connectionState_12(uint8_t value)
	{
		___connectionState_12 = value;
	}

	inline static int32_t get_offset_of_connectionAttempts_13() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___connectionAttempts_13)); }
	inline uint8_t get_connectionAttempts_13() const { return ___connectionAttempts_13; }
	inline uint8_t* get_address_of_connectionAttempts_13() { return &___connectionAttempts_13; }
	inline void set_connectionAttempts_13(uint8_t value)
	{
		___connectionAttempts_13 = value;
	}

	inline static int32_t get_offset_of_maxConnectionAttempts_14() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___maxConnectionAttempts_14)); }
	inline uint8_t get_maxConnectionAttempts_14() const { return ___maxConnectionAttempts_14; }
	inline uint8_t* get_address_of_maxConnectionAttempts_14() { return &___maxConnectionAttempts_14; }
	inline void set_maxConnectionAttempts_14(uint8_t value)
	{
		___maxConnectionAttempts_14 = value;
	}

	inline static int32_t get_offset_of_heartbeatTimer_15() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___heartbeatTimer_15)); }
	inline Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * get_heartbeatTimer_15() const { return ___heartbeatTimer_15; }
	inline Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 ** get_address_of_heartbeatTimer_15() { return &___heartbeatTimer_15; }
	inline void set_heartbeatTimer_15(Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * value)
	{
		___heartbeatTimer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heartbeatTimer_15), (void*)value);
	}

	inline static int32_t get_offset_of_lastHeartbeat_16() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___lastHeartbeat_16)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_lastHeartbeat_16() const { return ___lastHeartbeat_16; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_lastHeartbeat_16() { return &___lastHeartbeat_16; }
	inline void set_lastHeartbeat_16(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___lastHeartbeat_16 = value;
	}

	inline static int32_t get_offset_of_heartbeatMessage_17() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___heartbeatMessage_17)); }
	inline Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * get_heartbeatMessage_17() const { return ___heartbeatMessage_17; }
	inline Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 ** get_address_of_heartbeatMessage_17() { return &___heartbeatMessage_17; }
	inline void set_heartbeatMessage_17(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * value)
	{
		___heartbeatMessage_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heartbeatMessage_17), (void*)value);
	}

	inline static int32_t get_offset_of_lastPingId_18() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___lastPingId_18)); }
	inline uint8_t get_lastPingId_18() const { return ___lastPingId_18; }
	inline uint8_t* get_address_of_lastPingId_18() { return &___lastPingId_18; }
	inline void set_lastPingId_18(uint8_t value)
	{
		___lastPingId_18 = value;
	}

	inline static int32_t get_offset_of_pendingPing_19() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___pendingPing_19)); }
	inline ValueTuple_2_t4F3F37D1311369A42B79DA72B9689289AF0592F2  get_pendingPing_19() const { return ___pendingPing_19; }
	inline ValueTuple_2_t4F3F37D1311369A42B79DA72B9689289AF0592F2 * get_address_of_pendingPing_19() { return &___pendingPing_19; }
	inline void set_pendingPing_19(ValueTuple_2_t4F3F37D1311369A42B79DA72B9689289AF0592F2  value)
	{
		___pendingPing_19 = value;
	}

	inline static int32_t get_offset_of_Connected_20() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___Connected_20)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_Connected_20() const { return ___Connected_20; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_Connected_20() { return &___Connected_20; }
	inline void set_Connected_20(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___Connected_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Connected_20), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionFailed_21() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___ConnectionFailed_21)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_ConnectionFailed_21() const { return ___ConnectionFailed_21; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_ConnectionFailed_21() { return &___ConnectionFailed_21; }
	inline void set_ConnectionFailed_21(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___ConnectionFailed_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionFailed_21), (void*)value);
	}

	inline static int32_t get_offset_of_MessageReceived_22() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___MessageReceived_22)); }
	inline EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA * get_MessageReceived_22() const { return ___MessageReceived_22; }
	inline EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA ** get_address_of_MessageReceived_22() { return &___MessageReceived_22; }
	inline void set_MessageReceived_22(EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA * value)
	{
		___MessageReceived_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageReceived_22), (void*)value);
	}

	inline static int32_t get_offset_of_Disconnected_23() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___Disconnected_23)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_Disconnected_23() const { return ___Disconnected_23; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_Disconnected_23() { return &___Disconnected_23; }
	inline void set_Disconnected_23(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___Disconnected_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Disconnected_23), (void*)value);
	}

	inline static int32_t get_offset_of_ClientConnected_24() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___ClientConnected_24)); }
	inline EventHandler_1_tAE53E434C413BE299F11FA81BDDDC692451B29CE * get_ClientConnected_24() const { return ___ClientConnected_24; }
	inline EventHandler_1_tAE53E434C413BE299F11FA81BDDDC692451B29CE ** get_address_of_ClientConnected_24() { return &___ClientConnected_24; }
	inline void set_ClientConnected_24(EventHandler_1_tAE53E434C413BE299F11FA81BDDDC692451B29CE * value)
	{
		___ClientConnected_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClientConnected_24), (void*)value);
	}

	inline static int32_t get_offset_of_ClientDisconnected_25() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___ClientDisconnected_25)); }
	inline EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6 * get_ClientDisconnected_25() const { return ___ClientDisconnected_25; }
	inline EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6 ** get_address_of_ClientDisconnected_25() { return &___ClientDisconnected_25; }
	inline void set_ClientDisconnected_25(EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6 * value)
	{
		___ClientDisconnected_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClientDisconnected_25), (void*)value);
	}

	inline static int32_t get_offset_of_PingUpdated_26() { return static_cast<int32_t>(offsetof(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C, ___PingUpdated_26)); }
	inline EventHandler_1_tFA75EF3F08E26BEED32DB57BBB3ABF98743A6F34 * get_PingUpdated_26() const { return ___PingUpdated_26; }
	inline EventHandler_1_tFA75EF3F08E26BEED32DB57BBB3ABF98743A6F34 ** get_address_of_PingUpdated_26() { return &___PingUpdated_26; }
	inline void set_PingUpdated_26(EventHandler_1_tFA75EF3F08E26BEED32DB57BBB3ABF98743A6F34 * value)
	{
		___PingUpdated_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PingUpdated_26), (void*)value);
	}
};


// RiptideNetworking.Message
struct  Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454  : public RuntimeObject
{
public:
	// System.Int32 RiptideNetworking.Message::<ReadableLength>k__BackingField
	int32_t ___U3CReadableLengthU3Ek__BackingField_10;
	// RiptideNetworking.MessageSendMode RiptideNetworking.Message::<SendMode>k__BackingField
	uint8_t ___U3CSendModeU3Ek__BackingField_11;
	// System.Byte[] RiptideNetworking.Message::<Bytes>k__BackingField
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___U3CBytesU3Ek__BackingField_12;
	// System.UInt16 RiptideNetworking.Message::writePos
	uint16_t ___writePos_13;
	// System.UInt16 RiptideNetworking.Message::readPos
	uint16_t ___readPos_14;

public:
	inline static int32_t get_offset_of_U3CReadableLengthU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454, ___U3CReadableLengthU3Ek__BackingField_10)); }
	inline int32_t get_U3CReadableLengthU3Ek__BackingField_10() const { return ___U3CReadableLengthU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CReadableLengthU3Ek__BackingField_10() { return &___U3CReadableLengthU3Ek__BackingField_10; }
	inline void set_U3CReadableLengthU3Ek__BackingField_10(int32_t value)
	{
		___U3CReadableLengthU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CSendModeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454, ___U3CSendModeU3Ek__BackingField_11)); }
	inline uint8_t get_U3CSendModeU3Ek__BackingField_11() const { return ___U3CSendModeU3Ek__BackingField_11; }
	inline uint8_t* get_address_of_U3CSendModeU3Ek__BackingField_11() { return &___U3CSendModeU3Ek__BackingField_11; }
	inline void set_U3CSendModeU3Ek__BackingField_11(uint8_t value)
	{
		___U3CSendModeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CBytesU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454, ___U3CBytesU3Ek__BackingField_12)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_U3CBytesU3Ek__BackingField_12() const { return ___U3CBytesU3Ek__BackingField_12; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_U3CBytesU3Ek__BackingField_12() { return &___U3CBytesU3Ek__BackingField_12; }
	inline void set_U3CBytesU3Ek__BackingField_12(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___U3CBytesU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBytesU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_writePos_13() { return static_cast<int32_t>(offsetof(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454, ___writePos_13)); }
	inline uint16_t get_writePos_13() const { return ___writePos_13; }
	inline uint16_t* get_address_of_writePos_13() { return &___writePos_13; }
	inline void set_writePos_13(uint16_t value)
	{
		___writePos_13 = value;
	}

	inline static int32_t get_offset_of_readPos_14() { return static_cast<int32_t>(offsetof(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454, ___readPos_14)); }
	inline uint16_t get_readPos_14() const { return ___readPos_14; }
	inline uint16_t* get_address_of_readPos_14() { return &___readPos_14; }
	inline void set_readPos_14(uint16_t value)
	{
		___readPos_14 = value;
	}
};

struct Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454_StaticFields
{
public:
	// RiptideNetworking.Message RiptideNetworking.Message::send
	Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___send_0;
	// RiptideNetworking.Message RiptideNetworking.Message::sendInternal
	Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___sendInternal_1;
	// RiptideNetworking.Message RiptideNetworking.Message::handle
	Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___handle_2;
	// RiptideNetworking.Message RiptideNetworking.Message::handleInternal
	Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___handleInternal_3;

public:
	inline static int32_t get_offset_of_send_0() { return static_cast<int32_t>(offsetof(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454_StaticFields, ___send_0)); }
	inline Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * get_send_0() const { return ___send_0; }
	inline Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 ** get_address_of_send_0() { return &___send_0; }
	inline void set_send_0(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * value)
	{
		___send_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___send_0), (void*)value);
	}

	inline static int32_t get_offset_of_sendInternal_1() { return static_cast<int32_t>(offsetof(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454_StaticFields, ___sendInternal_1)); }
	inline Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * get_sendInternal_1() const { return ___sendInternal_1; }
	inline Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 ** get_address_of_sendInternal_1() { return &___sendInternal_1; }
	inline void set_sendInternal_1(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * value)
	{
		___sendInternal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendInternal_1), (void*)value);
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454_StaticFields, ___handle_2)); }
	inline Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * get_handle_2() const { return ___handle_2; }
	inline Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 ** get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * value)
	{
		___handle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_2), (void*)value);
	}

	inline static int32_t get_offset_of_handleInternal_3() { return static_cast<int32_t>(offsetof(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454_StaticFields, ___handleInternal_3)); }
	inline Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * get_handleInternal_3() const { return ___handleInternal_3; }
	inline Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 ** get_address_of_handleInternal_3() { return &___handleInternal_3; }
	inline void set_handleInternal_3(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * value)
	{
		___handleInternal_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handleInternal_3), (void*)value);
	}
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
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


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Sprite
struct  Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// AspectData
struct  AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.String AspectData::AspectCode
	String_t* ___AspectCode_4;
	// System.String AspectData::AspectName
	String_t* ___AspectName_5;
	// UnityEngine.Sprite AspectData::AspectSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___AspectSprite_6;
	// UnityEngine.GameObject AspectData::AspectModel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___AspectModel_7;

public:
	inline static int32_t get_offset_of_AspectCode_4() { return static_cast<int32_t>(offsetof(AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4, ___AspectCode_4)); }
	inline String_t* get_AspectCode_4() const { return ___AspectCode_4; }
	inline String_t** get_address_of_AspectCode_4() { return &___AspectCode_4; }
	inline void set_AspectCode_4(String_t* value)
	{
		___AspectCode_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AspectCode_4), (void*)value);
	}

	inline static int32_t get_offset_of_AspectName_5() { return static_cast<int32_t>(offsetof(AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4, ___AspectName_5)); }
	inline String_t* get_AspectName_5() const { return ___AspectName_5; }
	inline String_t** get_address_of_AspectName_5() { return &___AspectName_5; }
	inline void set_AspectName_5(String_t* value)
	{
		___AspectName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AspectName_5), (void*)value);
	}

	inline static int32_t get_offset_of_AspectSprite_6() { return static_cast<int32_t>(offsetof(AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4, ___AspectSprite_6)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_AspectSprite_6() const { return ___AspectSprite_6; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_AspectSprite_6() { return &___AspectSprite_6; }
	inline void set_AspectSprite_6(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___AspectSprite_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AspectSprite_6), (void*)value);
	}

	inline static int32_t get_offset_of_AspectModel_7() { return static_cast<int32_t>(offsetof(AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4, ___AspectModel_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_AspectModel_7() const { return ___AspectModel_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_AspectModel_7() { return &___AspectModel_7; }
	inline void set_AspectModel_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___AspectModel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AspectModel_7), (void*)value);
	}
};


// NetworkManager_MessageHandler
struct  MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65  : public MulticastDelegate_t
{
public:

public:
};


// RiptideNetworking.RiptideLogger_LogMethod
struct  LogMethod_t386E421814648D7D957C04B454155405FDF8A541  : public MulticastDelegate_t
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


// System.EventHandler
struct  EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>
struct  EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>
struct  EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
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


// AspectPortraitUI
struct  AspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Image AspectPortraitUI::portraitImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___portraitImage_4;
	// System.String AspectPortraitUI::aspectCode
	String_t* ___aspectCode_5;

public:
	inline static int32_t get_offset_of_portraitImage_4() { return static_cast<int32_t>(offsetof(AspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715, ___portraitImage_4)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_portraitImage_4() const { return ___portraitImage_4; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_portraitImage_4() { return &___portraitImage_4; }
	inline void set_portraitImage_4(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___portraitImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portraitImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_aspectCode_5() { return static_cast<int32_t>(offsetof(AspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715, ___aspectCode_5)); }
	inline String_t* get_aspectCode_5() const { return ___aspectCode_5; }
	inline String_t** get_address_of_aspectCode_5() { return &___aspectCode_5; }
	inline void set_aspectCode_5(String_t* value)
	{
		___aspectCode_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aspectCode_5), (void*)value);
	}
};


// DraftUI
struct  DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject DraftUI::aspectPortrait
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___aspectPortrait_6;
	// UnityEngine.Transform DraftUI::scrollviewContent
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___scrollviewContent_7;
	// UnityEngine.UI.Image[] DraftUI::localBans
	ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* ___localBans_8;
	// UnityEngine.UI.Image[] DraftUI::networkBans
	ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* ___networkBans_9;
	// UnityEngine.Vector2Int DraftUI::banIndexors
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___banIndexors_10;
	// UnityEngine.Vector2Int DraftUI::pickIndexors
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___pickIndexors_11;
	// UnityEngine.UI.Image[] DraftUI::localPicks
	ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* ___localPicks_12;
	// UnityEngine.UI.Image[] DraftUI::networkPicks
	ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* ___networkPicks_13;
	// AspectData[] DraftUI::data
	AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3* ___data_14;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite> DraftUI::aspectSprites
	Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 * ___aspectSprites_15;

public:
	inline static int32_t get_offset_of_aspectPortrait_6() { return static_cast<int32_t>(offsetof(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC, ___aspectPortrait_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_aspectPortrait_6() const { return ___aspectPortrait_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_aspectPortrait_6() { return &___aspectPortrait_6; }
	inline void set_aspectPortrait_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___aspectPortrait_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aspectPortrait_6), (void*)value);
	}

	inline static int32_t get_offset_of_scrollviewContent_7() { return static_cast<int32_t>(offsetof(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC, ___scrollviewContent_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_scrollviewContent_7() const { return ___scrollviewContent_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_scrollviewContent_7() { return &___scrollviewContent_7; }
	inline void set_scrollviewContent_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___scrollviewContent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollviewContent_7), (void*)value);
	}

	inline static int32_t get_offset_of_localBans_8() { return static_cast<int32_t>(offsetof(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC, ___localBans_8)); }
	inline ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* get_localBans_8() const { return ___localBans_8; }
	inline ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D** get_address_of_localBans_8() { return &___localBans_8; }
	inline void set_localBans_8(ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* value)
	{
		___localBans_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localBans_8), (void*)value);
	}

	inline static int32_t get_offset_of_networkBans_9() { return static_cast<int32_t>(offsetof(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC, ___networkBans_9)); }
	inline ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* get_networkBans_9() const { return ___networkBans_9; }
	inline ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D** get_address_of_networkBans_9() { return &___networkBans_9; }
	inline void set_networkBans_9(ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* value)
	{
		___networkBans_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkBans_9), (void*)value);
	}

	inline static int32_t get_offset_of_banIndexors_10() { return static_cast<int32_t>(offsetof(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC, ___banIndexors_10)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_banIndexors_10() const { return ___banIndexors_10; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_banIndexors_10() { return &___banIndexors_10; }
	inline void set_banIndexors_10(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___banIndexors_10 = value;
	}

	inline static int32_t get_offset_of_pickIndexors_11() { return static_cast<int32_t>(offsetof(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC, ___pickIndexors_11)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_pickIndexors_11() const { return ___pickIndexors_11; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_pickIndexors_11() { return &___pickIndexors_11; }
	inline void set_pickIndexors_11(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___pickIndexors_11 = value;
	}

	inline static int32_t get_offset_of_localPicks_12() { return static_cast<int32_t>(offsetof(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC, ___localPicks_12)); }
	inline ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* get_localPicks_12() const { return ___localPicks_12; }
	inline ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D** get_address_of_localPicks_12() { return &___localPicks_12; }
	inline void set_localPicks_12(ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* value)
	{
		___localPicks_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localPicks_12), (void*)value);
	}

	inline static int32_t get_offset_of_networkPicks_13() { return static_cast<int32_t>(offsetof(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC, ___networkPicks_13)); }
	inline ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* get_networkPicks_13() const { return ___networkPicks_13; }
	inline ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D** get_address_of_networkPicks_13() { return &___networkPicks_13; }
	inline void set_networkPicks_13(ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* value)
	{
		___networkPicks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkPicks_13), (void*)value);
	}

	inline static int32_t get_offset_of_data_14() { return static_cast<int32_t>(offsetof(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC, ___data_14)); }
	inline AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3* get_data_14() const { return ___data_14; }
	inline AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3** get_address_of_data_14() { return &___data_14; }
	inline void set_data_14(AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3* value)
	{
		___data_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_14), (void*)value);
	}

	inline static int32_t get_offset_of_aspectSprites_15() { return static_cast<int32_t>(offsetof(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC, ___aspectSprites_15)); }
	inline Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 * get_aspectSprites_15() const { return ___aspectSprites_15; }
	inline Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 ** get_address_of_aspectSprites_15() { return &___aspectSprites_15; }
	inline void set_aspectSprites_15(Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 * value)
	{
		___aspectSprites_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aspectSprites_15), (void*)value);
	}
};

struct DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_StaticFields
{
public:
	// DraftUI DraftUI::instance
	DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * ___instance_4;
	// System.String DraftUI::SelectedAspect
	String_t* ___SelectedAspect_5;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_StaticFields, ___instance_4)); }
	inline DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * get_instance_4() const { return ___instance_4; }
	inline DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedAspect_5() { return static_cast<int32_t>(offsetof(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_StaticFields, ___SelectedAspect_5)); }
	inline String_t* get_SelectedAspect_5() const { return ___SelectedAspect_5; }
	inline String_t** get_address_of_SelectedAspect_5() { return &___SelectedAspect_5; }
	inline void set_SelectedAspect_5(String_t* value)
	{
		___SelectedAspect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedAspect_5), (void*)value);
	}
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
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___tileVisuals_5;

public:
	inline static int32_t get_offset_of_tileVisuals_5() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___tileVisuals_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_tileVisuals_5() const { return ___tileVisuals_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_tileVisuals_5() { return &___tileVisuals_5; }
	inline void set_tileVisuals_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___tileVisuals_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tileVisuals_5), (void*)value);
	}
};

struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,EntityController> GameManager::Entities
	Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * ___Entities_4;
	// GameManager GameManager::Instance
	GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * ___Instance_6;

public:
	inline static int32_t get_offset_of_Entities_4() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields, ___Entities_4)); }
	inline Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * get_Entities_4() const { return ___Entities_4; }
	inline Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 ** get_address_of_Entities_4() { return &___Entities_4; }
	inline void set_Entities_4(Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * value)
	{
		___Entities_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Entities_4), (void*)value);
	}

	inline static int32_t get_offset_of_Instance_6() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields, ___Instance_6)); }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * get_Instance_6() const { return ___Instance_6; }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 ** get_address_of_Instance_6() { return &___Instance_6; }
	inline void set_Instance_6(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * value)
	{
		___Instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_6), (void*)value);
	}
};


// NetworkManager
struct  NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String NetworkManager::ip
	String_t* ___ip_5;
	// System.UInt16 NetworkManager::port
	uint16_t ___port_6;
	// RiptideNetworking.Client NetworkManager::<Client>k__BackingField
	Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * ___U3CClientU3Ek__BackingField_7;
	// RiptideNetworking.ActionQueue NetworkManager::actionQueue
	ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C * ___actionQueue_8;
	// System.Int32 NetworkManager::<Ping>k__BackingField
	int32_t ___U3CPingU3Ek__BackingField_9;
	// System.DateTime NetworkManager::timeofPingTest
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___timeofPingTest_10;
	// System.Collections.Generic.Dictionary`2<System.UInt16,NetworkManager_MessageHandler> NetworkManager::messageHandlers
	Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 * ___messageHandlers_11;

public:
	inline static int32_t get_offset_of_ip_5() { return static_cast<int32_t>(offsetof(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C, ___ip_5)); }
	inline String_t* get_ip_5() const { return ___ip_5; }
	inline String_t** get_address_of_ip_5() { return &___ip_5; }
	inline void set_ip_5(String_t* value)
	{
		___ip_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ip_5), (void*)value);
	}

	inline static int32_t get_offset_of_port_6() { return static_cast<int32_t>(offsetof(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C, ___port_6)); }
	inline uint16_t get_port_6() const { return ___port_6; }
	inline uint16_t* get_address_of_port_6() { return &___port_6; }
	inline void set_port_6(uint16_t value)
	{
		___port_6 = value;
	}

	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C, ___U3CClientU3Ek__BackingField_7)); }
	inline Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * get_U3CClientU3Ek__BackingField_7() const { return ___U3CClientU3Ek__BackingField_7; }
	inline Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C ** get_address_of_U3CClientU3Ek__BackingField_7() { return &___U3CClientU3Ek__BackingField_7; }
	inline void set_U3CClientU3Ek__BackingField_7(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * value)
	{
		___U3CClientU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_actionQueue_8() { return static_cast<int32_t>(offsetof(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C, ___actionQueue_8)); }
	inline ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C * get_actionQueue_8() const { return ___actionQueue_8; }
	inline ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C ** get_address_of_actionQueue_8() { return &___actionQueue_8; }
	inline void set_actionQueue_8(ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C * value)
	{
		___actionQueue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionQueue_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPingU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C, ___U3CPingU3Ek__BackingField_9)); }
	inline int32_t get_U3CPingU3Ek__BackingField_9() const { return ___U3CPingU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CPingU3Ek__BackingField_9() { return &___U3CPingU3Ek__BackingField_9; }
	inline void set_U3CPingU3Ek__BackingField_9(int32_t value)
	{
		___U3CPingU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_timeofPingTest_10() { return static_cast<int32_t>(offsetof(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C, ___timeofPingTest_10)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_timeofPingTest_10() const { return ___timeofPingTest_10; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_timeofPingTest_10() { return &___timeofPingTest_10; }
	inline void set_timeofPingTest_10(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___timeofPingTest_10 = value;
	}

	inline static int32_t get_offset_of_messageHandlers_11() { return static_cast<int32_t>(offsetof(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C, ___messageHandlers_11)); }
	inline Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 * get_messageHandlers_11() const { return ___messageHandlers_11; }
	inline Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 ** get_address_of_messageHandlers_11() { return &___messageHandlers_11; }
	inline void set_messageHandlers_11(Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 * value)
	{
		___messageHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHandlers_11), (void*)value);
	}
};

struct NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_StaticFields
{
public:
	// NetworkManager NetworkManager::instance
	NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_StaticFields, ___instance_4)); }
	inline NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * get_instance_4() const { return ___instance_4; }
	inline NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// UIManager
struct  UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject UIManager::draftUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___draftUI_5;

public:
	inline static int32_t get_offset_of_draftUI_5() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C, ___draftUI_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_draftUI_5() const { return ___draftUI_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_draftUI_5() { return &___draftUI_5; }
	inline void set_draftUI_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___draftUI_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___draftUI_5), (void*)value);
	}
};

struct UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields
{
public:
	// UIManager UIManager::Instance
	UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields, ___Instance_4)); }
	inline UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * get_Instance_4() const { return ___Instance_4; }
	inline UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_36;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_OverrideSprite_37;
	// UnityEngine.UI.Image_Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_38;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_39;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_40;
	// UnityEngine.UI.Image_FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_41;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_42;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_43;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_44;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_45;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_46;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_47;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_48;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_49;

public:
	inline static int32_t get_offset_of_m_Sprite_36() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Sprite_36)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_36() const { return ___m_Sprite_36; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_36() { return &___m_Sprite_36; }
	inline void set_m_Sprite_36(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_37() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_OverrideSprite_37)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_OverrideSprite_37() const { return ___m_OverrideSprite_37; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_OverrideSprite_37() { return &___m_OverrideSprite_37; }
	inline void set_m_OverrideSprite_37(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_OverrideSprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_38() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Type_38)); }
	inline int32_t get_m_Type_38() const { return ___m_Type_38; }
	inline int32_t* get_address_of_m_Type_38() { return &___m_Type_38; }
	inline void set_m_Type_38(int32_t value)
	{
		___m_Type_38 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_39() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PreserveAspect_39)); }
	inline bool get_m_PreserveAspect_39() const { return ___m_PreserveAspect_39; }
	inline bool* get_address_of_m_PreserveAspect_39() { return &___m_PreserveAspect_39; }
	inline void set_m_PreserveAspect_39(bool value)
	{
		___m_PreserveAspect_39 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_40() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillCenter_40)); }
	inline bool get_m_FillCenter_40() const { return ___m_FillCenter_40; }
	inline bool* get_address_of_m_FillCenter_40() { return &___m_FillCenter_40; }
	inline void set_m_FillCenter_40(bool value)
	{
		___m_FillCenter_40 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_41() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillMethod_41)); }
	inline int32_t get_m_FillMethod_41() const { return ___m_FillMethod_41; }
	inline int32_t* get_address_of_m_FillMethod_41() { return &___m_FillMethod_41; }
	inline void set_m_FillMethod_41(int32_t value)
	{
		___m_FillMethod_41 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_42() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillAmount_42)); }
	inline float get_m_FillAmount_42() const { return ___m_FillAmount_42; }
	inline float* get_address_of_m_FillAmount_42() { return &___m_FillAmount_42; }
	inline void set_m_FillAmount_42(float value)
	{
		___m_FillAmount_42 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_43() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillClockwise_43)); }
	inline bool get_m_FillClockwise_43() const { return ___m_FillClockwise_43; }
	inline bool* get_address_of_m_FillClockwise_43() { return &___m_FillClockwise_43; }
	inline void set_m_FillClockwise_43(bool value)
	{
		___m_FillClockwise_43 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_44() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillOrigin_44)); }
	inline int32_t get_m_FillOrigin_44() const { return ___m_FillOrigin_44; }
	inline int32_t* get_address_of_m_FillOrigin_44() { return &___m_FillOrigin_44; }
	inline void set_m_FillOrigin_44(int32_t value)
	{
		___m_FillOrigin_44 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_45() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_AlphaHitTestMinimumThreshold_45)); }
	inline float get_m_AlphaHitTestMinimumThreshold_45() const { return ___m_AlphaHitTestMinimumThreshold_45; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_45() { return &___m_AlphaHitTestMinimumThreshold_45; }
	inline void set_m_AlphaHitTestMinimumThreshold_45(float value)
	{
		___m_AlphaHitTestMinimumThreshold_45 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_46() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Tracked_46)); }
	inline bool get_m_Tracked_46() const { return ___m_Tracked_46; }
	inline bool* get_address_of_m_Tracked_46() { return &___m_Tracked_46; }
	inline void set_m_Tracked_46(bool value)
	{
		___m_Tracked_46 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_47() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseSpriteMesh_47)); }
	inline bool get_m_UseSpriteMesh_47() const { return ___m_UseSpriteMesh_47; }
	inline bool* get_address_of_m_UseSpriteMesh_47() { return &___m_UseSpriteMesh_47; }
	inline void set_m_UseSpriteMesh_47(bool value)
	{
		___m_UseSpriteMesh_47 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_48() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PixelsPerUnitMultiplier_48)); }
	inline float get_m_PixelsPerUnitMultiplier_48() const { return ___m_PixelsPerUnitMultiplier_48; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_48() { return &___m_PixelsPerUnitMultiplier_48; }
	inline void set_m_PixelsPerUnitMultiplier_48(float value)
	{
		___m_PixelsPerUnitMultiplier_48 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_49() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_CachedReferencePixelsPerUnit_49)); }
	inline float get_m_CachedReferencePixelsPerUnit_49() const { return ___m_CachedReferencePixelsPerUnit_49; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_49() { return &___m_CachedReferencePixelsPerUnit_49; }
	inline void set_m_CachedReferencePixelsPerUnit_49(float value)
	{
		___m_CachedReferencePixelsPerUnit_49 = value;
	}
};

struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ETC1DefaultUI_35;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_VertScratch_50;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_UVScratch_51;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Xy_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Uv_53;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883 * ___m_TrackedTexturelessImages_54;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_55;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_35() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_ETC1DefaultUI_35)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ETC1DefaultUI_35() const { return ___s_ETC1DefaultUI_35; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ETC1DefaultUI_35() { return &___s_ETC1DefaultUI_35; }
	inline void set_s_ETC1DefaultUI_35(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ETC1DefaultUI_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_50() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_VertScratch_50)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_VertScratch_50() const { return ___s_VertScratch_50; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_VertScratch_50() { return &___s_VertScratch_50; }
	inline void set_s_VertScratch_50(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_VertScratch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_50), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_51() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_UVScratch_51)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_UVScratch_51() const { return ___s_UVScratch_51; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_UVScratch_51() { return &___s_UVScratch_51; }
	inline void set_s_UVScratch_51(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_UVScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_52() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Xy_52)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Xy_52() const { return ___s_Xy_52; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Xy_52() { return &___s_Xy_52; }
	inline void set_s_Xy_52(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Xy_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_53() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Uv_53)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Uv_53() const { return ___s_Uv_53; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Uv_53() { return &___s_Uv_53; }
	inline void set_s_Uv_53(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Uv_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_54() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___m_TrackedTexturelessImages_54)); }
	inline List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883 * get_m_TrackedTexturelessImages_54() const { return ___m_TrackedTexturelessImages_54; }
	inline List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883 ** get_address_of_m_TrackedTexturelessImages_54() { return &___m_TrackedTexturelessImages_54; }
	inline void set_m_TrackedTexturelessImages_54(List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883 * value)
	{
		___m_TrackedTexturelessImages_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_54), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_55() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Initialized_55)); }
	inline bool get_s_Initialized_55() const { return ___s_Initialized_55; }
	inline bool* get_address_of_s_Initialized_55() { return &___s_Initialized_55; }
	inline void set_s_Initialized_55(bool value)
	{
		___s_Initialized_55 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * m_Items[1];

public:
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// AspectData[]
struct AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * m_Items[1];

public:
	inline AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !!0[] UnityEngine.Resources::LoadAll<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Resources_LoadAll_TisRuntimeObject_m60C23038086244FDF458D2835F7CF148C2CD8BAE_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m5DBFEC24E0DC9FC8734E858A489BC7B8B64B0BFF_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mFE9C42D5336D4F9EFF8CD96E2A26962EFF523947_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m2F4B147DEC855146FD0EDA4C46398F7DA148FD1B_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9C83A0643CC3D3FDEC96DAC03B355B0BFA9FB775_gshared (Dictionary_2_t230021F9E0FC2B2A957F86C0AEAA5E1EB32B672A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAD84417D3783D2DF68ED49FD74E6358AD2A21312_gshared (Dictionary_2_t230021F9E0FC2B2A957F86C0AEAA5E1EB32B672A * __this, uint16_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m5EF8A779C74241E87941F8C88E9E797FFF95FA50_gshared (Dictionary_2_t230021F9E0FC2B2A957F86C0AEAA5E1EB32B672A * __this, uint16_t ___key0, const RuntimeMethod* method);

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m0D1DBEFD8E361B3967964C71F93EF47E2AC53A13 (Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// NetworkManager NetworkManager::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * NetworkManager_get_Instance_mEA21C6C03B8F9B8B612A9B8B5BC82B455A563C84_inline (const RuntimeMethod* method);
// System.Void NetworkManager::GetPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_GetPing_m0F62E85D675E8E0F71F86D11FDF4EC7F82CE9E36 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method);
// System.Void UIManager::OpenDraftUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OpenDraftUI_m4AEC635F1556CCCFA545DC9A877589FBCCAD1B41 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method);
// DraftUI DraftUI::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * DraftUI_get_Instance_m2D0C71E6F06AF634922D64B8BB9C224B4365F126_inline (const RuntimeMethod* method);
// System.Boolean RiptideNetworking.Message::GetBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Message_GetBool_mBFBEB8EA13DF2A7B51D036E680A104544D964E82 (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * __this, const RuntimeMethod* method);
// System.Int32 RiptideNetworking.Message::GetInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_GetInt_m72404E688EF8BC7F681753A7519762891A270DB2 (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * __this, const RuntimeMethod* method);
// System.String RiptideNetworking.Message::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Message_GetString_m33642D43A350BDB4DBEA73FCAF3E2786AA6F06EE (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * __this, const RuntimeMethod* method);
// System.Void DraftUI::LockAspect(System.Boolean,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DraftUI_LockAspect_mF26D7FB045BAB156A335926016EB2192C34F38A3 (DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * __this, bool ____isBan0, int32_t ____lockerID1, String_t* ____aspectCode2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void DraftUI::set_Instance(DraftUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DraftUI_set_Instance_m2401D515DA6F5411D6E413541686B1B457383D07 (DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * ___value0, const RuntimeMethod* method);
// RiptideNetworking.Client NetworkManager::get_Client()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.Client::get_Id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint16_t Client_get_Id_mFCF3A172FA6ED9E6A0643DE38B07AE36F00DA3EC_inline (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m0D6E131AB5FA4AD532DEC377F981AADA189E680B (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::set_y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF79CD7FACF0A9A1CC12678E2E24BD43C5E836D88 (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, int32_t ___value0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>::get_Item(!0)
inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * Dictionary_2_get_Item_mBE9F8C8142DBD886CC96ADBC04AF6022F76284FC (Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * (*) (Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_m300C7C05CD66D24EE62D91CDC0C557A6C0ABF25E (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Int_set_x_mC6F9F1E43668A7F8E8C44CEFB427BA97389F1420 (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// RiptideNetworking.Message RiptideNetworking.Message::Create(RiptideNetworking.MessageSendMode,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * Message_Create_m6A381F4C069CD1A6471CDD59A66BC4EBBFAF2F73 (uint8_t ___sendMode0, uint16_t ___id1, const RuntimeMethod* method);
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * Message_Add_m2202D71A50ADB8697238E528862295579B1B767C (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client::Send(RiptideNetworking.Message,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Send_m5E2BB4BF64BE146AF33D3D6428D440155B1EE950 (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___message0, uint8_t ___maxSendAttempts1, const RuntimeMethod* method);
// !!0[] UnityEngine.Resources::LoadAll<AspectData>(System.String)
inline AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3* Resources_LoadAll_TisAspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4_m093250FC73A6A37F89513E3BC7430EAF09740F47 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3* (*) (String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m60C23038086244FDF458D2835F7CF148C2CD8BAE_gshared)(___path0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>::Add(!0,!1)
inline void Dictionary_2_Add_m82F210F811DEB815B3FFE279913B31CD5219F428 (Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 * __this, String_t* ___key0, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 *, String_t*, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<AspectPortraitUI>()
inline AspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715 * GameObject_GetComponent_TisAspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715_m42CB37CD70ACF05920CD975BDC1BF8567CD8EC66 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  AspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void AspectPortraitUI::Init(AspectData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectPortraitUI_Init_mC686B268BD591A14AB42C18B39880AC2BBB8EAC0 (AspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715 * __this, AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * ____data0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>::.ctor()
inline void Dictionary_2__ctor_m17F5BDE687E44BF02E623A9F6BCE567234266990 (Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
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
// System.Void NetworkManager::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_Connect_m5DF96B11941118AF39C98987904E60CD6946F9A2 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method);
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
// !1 System.Collections.Generic.Dictionary`2<System.Int32,EntityController>::get_Item(!0)
inline EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * Dictionary_2_get_Item_mEF04BC8FE1BE3C6948688783E3DE50D8F26F33F0 (Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * (*) (Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared)(__this, ___key0, method);
}
// System.Void EntityController::SetHP(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void EntityController_SetHP_m50F064E829B815DCA06689100DEB22F2BB343EE8_inline (EntityController_t00255E4EEE2D43EE30BF442E62DFDCF9E38A6ED8 * __this, int32_t ____newHP0, const RuntimeMethod* method);
// TileType Tilemap::GetTile(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTile_m2737FCA638C64B80A9032C5D140EF02ED9FAFCB8 (int32_t ____indexX0, int32_t ____indexY1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,EntityController>::.ctor()
inline void Dictionary_2__ctor_mBC9FDCA02266DD73DB42931E6A4A1A67147CB0D0 (Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * Message_Add_m0A08DD743458049FEE0F755C9E941B2493F27155 (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * __this, float ___value0, const RuntimeMethod* method);
// System.Single RiptideNetworking.Message::GetFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Message_GetFloat_m2E2D3C22349CC333A30959B89311890DE9E8949D (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void NetworkManager::set_Instance(NetworkManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_set_Instance_mB3D50185087E37847ED6932BFD87244BE50E59FC (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.ActionQueue::ExecuteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionQueue_ExecuteAll_m8067713A472D657257777127651C271FC2079813 (ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.RiptideLogger/LogMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMethod__ctor_m463D5930D732F697BB6E89F4D577C4E1567258EB (LogMethod_t386E421814648D7D957C04B454155405FDF8A541 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void RiptideNetworking.RiptideLogger::Initialize(RiptideNetworking.RiptideLogger/LogMethod,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiptideLogger_Initialize_m7CC0EB08AE152D017894202815BFD9908C3F9B62 (LogMethod_t386E421814648D7D957C04B454155405FDF8A541 * ___logMethod0, bool ___includeTimestamps1, String_t* ___timestampFormat2, const RuntimeMethod* method);
// System.Void RiptideNetworking.ActionQueue::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionQueue__ctor_m4C3002524392AAB970CA9DA4C050D538DED67EBA (ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C * __this, String_t* ___logName0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m64CF08E873A8DEFDC67BB03C680FD532DCD42DC5 (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, String_t* ___logName0, const RuntimeMethod* method);
// System.Void NetworkManager::set_Client(RiptideNetworking.Client)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NetworkManager_set_Client_mD3137169EC314F4A4D6519E09937469BC1930023_inline (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client::add_Connected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_add_Connected_mB465FFE9C4FCD2BD7A97AE573E98A3F11BC76671 (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client::add_ConnectionFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_add_ConnectionFailed_m267BE25E2EDC72D957EF4AD6F253638E7B8C9022 (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mAFA74E0D127C37F8C36576F5F45675DDCD9EBD7F (EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2F4B147DEC855146FD0EDA4C46398F7DA148FD1B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void RiptideNetworking.Client::add_MessageReceived(System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_add_MessageReceived_m896913CBF836608D53B4886019731B2F264EEA7A (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m52F93489A34DD8B7EEA472D019EF4DC669192A35 (EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2F4B147DEC855146FD0EDA4C46398F7DA148FD1B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void RiptideNetworking.Client::add_ClientDisconnected(System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_add_ClientDisconnected_m5BC747E3046CC00B9510AB5D60A879F517860FC9 (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6 * ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client::add_Disconnected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_add_Disconnected_m07D667E4CEC5E79DE9E8F990E09A65E1BBEF5616 (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// System.Void NetworkManager::LocalDisconnect(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_LocalDisconnect_mD8D293C7BC25DA4D91EE4C2E3CBBCD179CCA3849 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_mF0F3FCFB15034CEC61310CFE5C32097EF1007408 (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,NetworkManager/MessageHandler>::.ctor()
inline void Dictionary_2__ctor_m49C4D7AFA2BB75BB0C6224FAFF85CD3AEC74DB76 (Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 *, const RuntimeMethod*))Dictionary_2__ctor_m9C83A0643CC3D3FDEC96DAC03B355B0BFA9FB775_gshared)(__this, method);
}
// System.Void NetworkManager/MessageHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_mF32DD0B39314427EA11238C418B90921AF242FA2 (MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,NetworkManager/MessageHandler>::Add(!0,!1)
inline void Dictionary_2_Add_mE86471A37D4C88489C5AF33F5492A841C47C19F8 (Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 * __this, uint16_t ___key0, MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 *, uint16_t, MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 *, const RuntimeMethod*))Dictionary_2_Add_mAD84417D3783D2DF68ED49FD74E6358AD2A21312_gshared)(__this, ___key0, ___value1, method);
}
// System.Void RiptideNetworking.Client::Connect(System.String,System.UInt16,RiptideNetworking.ActionQueue,System.UInt16,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Connect_mADC87B1A953F0EDD30B481C446CFDBAAFA328BBA (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, String_t* ___ip0, uint16_t ___port1, ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C * ___receiveActionQueue2, uint16_t ___heartbeatInterval3, uint8_t ___maxConnectionAttempts4, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  DateTime_Subtract_m12814A53110B4E3887A84A911C5F9C1402D98842 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m48B00B27D485CC556C10A5119BC11E1A1E0FE363 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041 (float ___f0, const RuntimeMethod* method);
// System.Void NetworkManager::set_Ping(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NetworkManager_set_Ping_m009FF771086164AC68103D4E11B26C04CA4C7EF1_inline (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator NetworkManager::TestPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkManager_TestPing_mDAD05FCBAECA49DD35ED93A8247FDD556633324D (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void NetworkManager/<TestPing>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPingU3Ed__25__ctor_mCF7BD9C30FF229872F885125C2AB8197268FD2BF (U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// RiptideNetworking.Message RiptideNetworking.ClientMessageReceivedEventArgs::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ClientMessageReceivedEventArgs_get_Message_mDA7E70BAFBECF2710ECC6D4BAC60C9DD77DD7D51_inline (ClientMessageReceivedEventArgs_t0328F5CC4E66401A0A6CFA1267B964731B6CE1E4 * __this, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.Message::GetUShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Message_GetUShort_m917B148BEEFC7FEE212DB9B96A411FA5E8F13FDC (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.UInt16,NetworkManager/MessageHandler>::get_Item(!0)
inline MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * Dictionary_2_get_Item_mC4F33F6981A3CFA78E96D1785E544F9DD57806E9 (Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 * __this, uint16_t ___key0, const RuntimeMethod* method)
{
	return ((  MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * (*) (Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 *, uint16_t, const RuntimeMethod*))Dictionary_2_get_Item_m5EF8A779C74241E87941F8C88E9E797FFF95FA50_gshared)(__this, ___key0, method);
}
// System.Void NetworkManager/MessageHandler::Invoke(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_Invoke_m8AD0C695723924E4DCFE59133537F8B820F67A1F (MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * __this, Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client::remove_Connected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_remove_Connected_m434741C6E3F133A16B9754E6DFA71D3F519253C7 (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client::remove_ConnectionFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_remove_ConnectionFailed_mD6F198FDAA76F1F6E33E19C9910967CF3F2FF3C1 (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client::remove_MessageReceived(System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_remove_MessageReceived_m4DBDEAAB51B9B6656653BF0AB41D822B2DA48729 (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA * ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client::remove_ClientDisconnected(System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_remove_ClientDisconnected_m0C34FEBA9CD77526375852C400C3B0BAA90933D1 (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6 * ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client::remove_Disconnected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_remove_Disconnected_m74D9D54559E18048D85D651BFE5279971C7A4925 (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float ___time0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m322C82C3EB50E7389A4A38C4601FD08705CA56CF (uint8_t ___value0, const RuntimeMethod* method);
// System.Void GameManager::DrawMap(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DrawMap_m0C073A48A48063B6098207A70B8EA873EC2FC04A (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ____sizeX0, int32_t ____sizeY1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
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
// System.Void AspectData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectData__ctor_mA167D15DDB75408AFF41F824C9A172C0A0E0A943 (AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AspectData__ctor_mA167D15DDB75408AFF41F824C9A172C0A0E0A943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string AspectCode = "A###";
		__this->set_AspectCode_4(_stringLiteralC2397555E76C08865D878D91F5932D53A26CE7E5);
		// public string AspectName = "New Aspect";
		__this->set_AspectName_5(_stringLiteral7786CB0246CB4AD5F850BF88421A89554075B75F);
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
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
// System.Void AspectPortraitUI::Init(AspectData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectPortraitUI_Init_mC686B268BD591A14AB42C18B39880AC2BBB8EAC0 (AspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715 * __this, AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * ____data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AspectPortraitUI_Init_mC686B268BD591A14AB42C18B39880AC2BBB8EAC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.name = $"{_data.AspectName}Portrait";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * L_1 = ____data0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_AspectName_5();
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_2, _stringLiteral92B6B1BF71E0C08079E7114003E05A76E0786041, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_0, L_3, /*hidden argument*/NULL);
		// portraitImage.sprite = _data.AspectSprite;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_4 = __this->get_portraitImage_4();
		AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * L_5 = ____data0;
		NullCheck(L_5);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_6 = L_5->get_AspectSprite_6();
		NullCheck(L_4);
		Image_set_sprite_m0D1DBEFD8E361B3967964C71F93EF47E2AC53A13(L_4, L_6, /*hidden argument*/NULL);
		// aspectCode = _data.AspectCode;
		AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * L_7 = ____data0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_AspectCode_4();
		__this->set_aspectCode_5(L_8);
		// }
		return;
	}
}
// System.Void AspectPortraitUI::ButtonInteract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectPortraitUI_ButtonInteract_m3D140FA3CF9352B6A0C22A3DF5F6F8388C106F95 (AspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AspectPortraitUI_ButtonInteract_m3D140FA3CF9352B6A0C22A3DF5F6F8388C106F95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void ButtonInteract() { DraftUI.SelectedAspect = aspectCode; }
		String_t* L_0 = __this->get_aspectCode_5();
		IL2CPP_RUNTIME_CLASS_INIT(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var);
		((DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_StaticFields*)il2cpp_codegen_static_fields_for(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var))->set_SelectedAspect_5(L_0);
		// public void ButtonInteract() { DraftUI.SelectedAspect = aspectCode; }
		return;
	}
}
// System.Void AspectPortraitUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectPortraitUI__ctor_mCDD10D702F98480D140F49AD190E955638F4CBE5 (AspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AspectPortraitUI__ctor_mCDD10D702F98480D140F49AD190E955638F4CBE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string aspectCode = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_aspectCode_5(L_0);
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
// System.Void ClientHandle::TestPingReceived(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientHandle_TestPingReceived_m5AC473FF011BFCBE6744C470A3BB24CA9FB91572 (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ____message0, const RuntimeMethod* method)
{
	{
		// NetworkManager.Instance.GetPing();
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_0 = NetworkManager_get_Instance_mEA21C6C03B8F9B8B612A9B8B5BC82B455A563C84_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		NetworkManager_GetPing_m0F62E85D675E8E0F71F86D11FDF4EC7F82CE9E36(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ClientHandle::LoadDraft(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientHandle_LoadDraft_mC0AC54FA8B1EC75AC09085C6E62B22374194FC75 (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ____message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientHandle_LoadDraft_mC0AC54FA8B1EC75AC09085C6E62B22374194FC75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UIManager.Instance.OpenDraftUI();
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_0 = ((UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_0);
		UIManager_OpenDraftUI_m4AEC635F1556CCCFA545DC9A877589FBCCAD1B41(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ClientHandle::AspectLocked(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientHandle_AspectLocked_mE723ADBD6C703B525524791E26DE7DC717EE8DFF (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ____message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientHandle_AspectLocked_mE723ADBD6C703B525524791E26DE7DC717EE8DFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DraftUI.Instance.LockAspect(_message.GetBool(), _message.GetInt(), _message.GetString());
		IL2CPP_RUNTIME_CLASS_INIT(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var);
		DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * L_0 = DraftUI_get_Instance_m2D0C71E6F06AF634922D64B8BB9C224B4365F126_inline(/*hidden argument*/NULL);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_1 = ____message0;
		NullCheck(L_1);
		bool L_2 = Message_GetBool_mBFBEB8EA13DF2A7B51D036E680A104544D964E82(L_1, /*hidden argument*/NULL);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_3 = ____message0;
		NullCheck(L_3);
		int32_t L_4 = Message_GetInt_m72404E688EF8BC7F681753A7519762891A270DB2(L_3, /*hidden argument*/NULL);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_5 = ____message0;
		NullCheck(L_5);
		String_t* L_6 = Message_GetString_m33642D43A350BDB4DBEA73FCAF3E2786AA6F06EE(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		DraftUI_LockAspect_mF26D7FB045BAB156A335926016EB2192C34F38A3(L_0, L_2, L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ClientHandle::SpawnAspect(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientHandle_SpawnAspect_m2FA37F80383542434539BC2D3578673BFA748C59 (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ____message0, const RuntimeMethod* method)
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// DraftUI DraftUI::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * DraftUI_get_Instance_m2D0C71E6F06AF634922D64B8BB9C224B4365F126 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DraftUI_get_Instance_m2D0C71E6F06AF634922D64B8BB9C224B4365F126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => instance;
		IL2CPP_RUNTIME_CLASS_INIT(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var);
		DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * L_0 = ((DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_StaticFields*)il2cpp_codegen_static_fields_for(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
// System.Void DraftUI::set_Instance(DraftUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DraftUI_set_Instance_m2401D515DA6F5411D6E413541686B1B457383D07 (DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DraftUI_set_Instance_m2401D515DA6F5411D6E413541686B1B457383D07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var);
		DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * L_0 = ((DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_StaticFields*)il2cpp_codegen_static_fields_for(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = value;
		DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var);
		((DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_StaticFields*)il2cpp_codegen_static_fields_for(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var))->set_instance_4(L_2);
		return;
	}

IL_0014:
	{
		// else if (instance != value)
		IL2CPP_RUNTIME_CLASS_INIT(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var);
		DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * L_3 = ((DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_StaticFields*)il2cpp_codegen_static_fields_for(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var))->get_instance_4();
		DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * L_4 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.Log($"{nameof(NetworkManager)} instance already exists, destroying object!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral43F6218313E8BCCE8E7E241FC550B1DFFC92DF67, /*hidden argument*/NULL);
		// Destroy(value);
		DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * L_6 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void DraftUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DraftUI_Awake_mF2D1DB6FA765D397153E79870C008C1C81B5A433 (DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DraftUI_Awake_mF2D1DB6FA765D397153E79870C008C1C81B5A433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void Awake() { Instance = this; }
		IL2CPP_RUNTIME_CLASS_INIT(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var);
		DraftUI_set_Instance_m2401D515DA6F5411D6E413541686B1B457383D07(__this, /*hidden argument*/NULL);
		// private void Awake() { Instance = this; }
		return;
	}
}
// System.Void DraftUI::LockAspect(System.Boolean,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DraftUI_LockAspect_mF26D7FB045BAB156A335926016EB2192C34F38A3 (DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * __this, bool ____isBan0, int32_t ____lockerID1, String_t* ____aspectCode2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DraftUI_LockAspect_mF26D7FB045BAB156A335926016EB2192C34F38A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_isBan)
		bool L_0 = ____isBan0;
		if (!L_0)
		{
			goto IL_0073;
		}
	}
	{
		// if(_lockerID != NetworkManager.Instance.Client.Id)
		int32_t L_1 = ____lockerID1;
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_2 = NetworkManager_get_Instance_mEA21C6C03B8F9B8B612A9B8B5BC82B455A563C84_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_3 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		uint16_t L_4 = Client_get_Id_mFCF3A172FA6ED9E6A0643DE38B07AE36F00DA3EC_inline(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)L_4)))
		{
			goto IL_0044;
		}
	}
	{
		// networkBans[banIndexors.y++].sprite = aspectSprites[_aspectCode];
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_5 = __this->get_networkBans_9();
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * L_6 = __this->get_address_of_banIndexors_10();
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * L_7 = L_6;
		int32_t L_8 = Vector2Int_get_y_m0D6E131AB5FA4AD532DEC377F981AADA189E680B((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		Vector2Int_set_y_mF79CD7FACF0A9A1CC12678E2E24BD43C5E836D88((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)L_7, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		NullCheck(L_5);
		int32_t L_11 = L_10;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_12 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 * L_13 = __this->get_aspectSprites_15();
		String_t* L_14 = ____aspectCode2;
		NullCheck(L_13);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_15 = Dictionary_2_get_Item_mBE9F8C8142DBD886CC96ADBC04AF6022F76284FC(L_13, L_14, /*hidden argument*/Dictionary_2_get_Item_mBE9F8C8142DBD886CC96ADBC04AF6022F76284FC_RuntimeMethod_var);
		NullCheck(L_12);
		Image_set_sprite_m0D1DBEFD8E361B3967964C71F93EF47E2AC53A13(L_12, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0044:
	{
		// localBans[banIndexors.x++].sprite = aspectSprites[_aspectCode];
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_16 = __this->get_localBans_8();
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * L_17 = __this->get_address_of_banIndexors_10();
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * L_18 = L_17;
		int32_t L_19 = Vector2Int_get_x_m300C7C05CD66D24EE62D91CDC0C557A6C0ABF25E((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		int32_t L_20 = V_0;
		Vector2Int_set_x_mC6F9F1E43668A7F8E8C44CEFB427BA97389F1420((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_21 = V_0;
		NullCheck(L_16);
		int32_t L_22 = L_21;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_23 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 * L_24 = __this->get_aspectSprites_15();
		String_t* L_25 = ____aspectCode2;
		NullCheck(L_24);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_26 = Dictionary_2_get_Item_mBE9F8C8142DBD886CC96ADBC04AF6022F76284FC(L_24, L_25, /*hidden argument*/Dictionary_2_get_Item_mBE9F8C8142DBD886CC96ADBC04AF6022F76284FC_RuntimeMethod_var);
		NullCheck(L_23);
		Image_set_sprite_m0D1DBEFD8E361B3967964C71F93EF47E2AC53A13(L_23, L_26, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0073:
	{
		// if (_lockerID != NetworkManager.Instance.Client.Id)
		int32_t L_27 = ____lockerID1;
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_28 = NetworkManager_get_Instance_mEA21C6C03B8F9B8B612A9B8B5BC82B455A563C84_inline(/*hidden argument*/NULL);
		NullCheck(L_28);
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_29 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		uint16_t L_30 = Client_get_Id_mFCF3A172FA6ED9E6A0643DE38B07AE36F00DA3EC_inline(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_27) == ((int32_t)L_30)))
		{
			goto IL_00b4;
		}
	}
	{
		// networkPicks[pickIndexors.y++].sprite = aspectSprites[_aspectCode];
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_31 = __this->get_networkPicks_13();
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * L_32 = __this->get_address_of_pickIndexors_11();
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * L_33 = L_32;
		int32_t L_34 = Vector2Int_get_y_m0D6E131AB5FA4AD532DEC377F981AADA189E680B((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)L_33, /*hidden argument*/NULL);
		V_0 = L_34;
		int32_t L_35 = V_0;
		Vector2Int_set_y_mF79CD7FACF0A9A1CC12678E2E24BD43C5E836D88((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_36 = V_0;
		NullCheck(L_31);
		int32_t L_37 = L_36;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_38 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 * L_39 = __this->get_aspectSprites_15();
		String_t* L_40 = ____aspectCode2;
		NullCheck(L_39);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_41 = Dictionary_2_get_Item_mBE9F8C8142DBD886CC96ADBC04AF6022F76284FC(L_39, L_40, /*hidden argument*/Dictionary_2_get_Item_mBE9F8C8142DBD886CC96ADBC04AF6022F76284FC_RuntimeMethod_var);
		NullCheck(L_38);
		Image_set_sprite_m0D1DBEFD8E361B3967964C71F93EF47E2AC53A13(L_38, L_41, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b4:
	{
		// localPicks[pickIndexors.x++].sprite = aspectSprites[_aspectCode];
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_42 = __this->get_localPicks_12();
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * L_43 = __this->get_address_of_pickIndexors_11();
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * L_44 = L_43;
		int32_t L_45 = Vector2Int_get_x_m300C7C05CD66D24EE62D91CDC0C557A6C0ABF25E((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)L_44, /*hidden argument*/NULL);
		V_0 = L_45;
		int32_t L_46 = V_0;
		Vector2Int_set_x_mC6F9F1E43668A7F8E8C44CEFB427BA97389F1420((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)L_44, ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_47 = V_0;
		NullCheck(L_42);
		int32_t L_48 = L_47;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_49 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 * L_50 = __this->get_aspectSprites_15();
		String_t* L_51 = ____aspectCode2;
		NullCheck(L_50);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_52 = Dictionary_2_get_Item_mBE9F8C8142DBD886CC96ADBC04AF6022F76284FC(L_50, L_51, /*hidden argument*/Dictionary_2_get_Item_mBE9F8C8142DBD886CC96ADBC04AF6022F76284FC_RuntimeMethod_var);
		NullCheck(L_49);
		Image_set_sprite_m0D1DBEFD8E361B3967964C71F93EF47E2AC53A13(L_49, L_52, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DraftUI::ButtonInteract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DraftUI_ButtonInteract_m96C48DD416C6DBE3FEB9014B613113233DD6A32B (DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DraftUI_ButtonInteract_m96C48DD416C6DBE3FEB9014B613113233DD6A32B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * V_0 = NULL;
	{
		// if (SelectedAspect == string.Empty)
		IL2CPP_RUNTIME_CLASS_INIT(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var);
		String_t* L_0 = ((DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_StaticFields*)il2cpp_codegen_static_fields_for(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var))->get_SelectedAspect_5();
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// Message msg = Message.Create(MessageSendMode.reliable, (ushort)ClientToServerRequest.DraftInteract);
		IL2CPP_RUNTIME_CLASS_INIT(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454_il2cpp_TypeInfo_var);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_3 = Message_Create_m6A381F4C069CD1A6471CDD59A66BC4EBBFAF2F73(6, (uint16_t)2, /*hidden argument*/NULL);
		V_0 = L_3;
		// msg.Add(SelectedAspect);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var);
		String_t* L_5 = ((DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_StaticFields*)il2cpp_codegen_static_fields_for(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var))->get_SelectedAspect_5();
		NullCheck(L_4);
		Message_Add_m2202D71A50ADB8697238E528862295579B1B767C(L_4, L_5, /*hidden argument*/NULL);
		// NetworkManager.Instance.Client.Send(msg);
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_6 = NetworkManager_get_Instance_mEA21C6C03B8F9B8B612A9B8B5BC82B455A563C84_inline(/*hidden argument*/NULL);
		NullCheck(L_6);
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_7 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(L_6, /*hidden argument*/NULL);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_8 = V_0;
		NullCheck(L_7);
		Client_Send_m5E2BB4BF64BE146AF33D3D6428D440155B1EE950(L_7, L_8, (uint8_t)((int32_t)15), /*hidden argument*/NULL);
		// SelectedAspect = string.Empty;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		((DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_StaticFields*)il2cpp_codegen_static_fields_for(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var))->set_SelectedAspect_5(L_9);
		// }
		return;
	}
}
// System.Void DraftUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DraftUI_Start_m1051E48F9DBD0ACBBBBD5DC266C1A9AEE47F9BB2 (DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DraftUI_Start_m1051E48F9DBD0ACBBBBD5DC266C1A9AEE47F9BB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// data = Resources.LoadAll<AspectData>("Aspects/Data");
		AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3* L_0 = Resources_LoadAll_TisAspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4_m093250FC73A6A37F89513E3BC7430EAF09740F47(_stringLiteral5DAD4184159AB5E3F7D9F6021CA1CDE32D4E4B21, /*hidden argument*/Resources_LoadAll_TisAspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4_m093250FC73A6A37F89513E3BC7430EAF09740F47_RuntimeMethod_var);
		__this->set_data_14(L_0);
		// for (int i = 0; i < data.Length; i++)
		V_0 = 0;
		goto IL_0060;
	}

IL_0014:
	{
		// aspectSprites.Add(data[i].AspectCode, data[i].AspectSprite);
		Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 * L_1 = __this->get_aspectSprites_15();
		AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3* L_2 = __this->get_data_14();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6 = L_5->get_AspectCode_4();
		AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3* L_7 = __this->get_data_14();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_11 = L_10->get_AspectSprite_6();
		NullCheck(L_1);
		Dictionary_2_Add_m82F210F811DEB815B3FFE279913B31CD5219F428(L_1, L_6, L_11, /*hidden argument*/Dictionary_2_Add_m82F210F811DEB815B3FFE279913B31CD5219F428_RuntimeMethod_var);
		// Instantiate(aspectPortrait, scrollviewContent).GetComponent<AspectPortraitUI>().Init(data[i]);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_aspectPortrait_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = __this->get_scrollviewContent_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_12, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		NullCheck(L_14);
		AspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715 * L_15 = GameObject_GetComponent_TisAspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715_m42CB37CD70ACF05920CD975BDC1BF8567CD8EC66(L_14, /*hidden argument*/GameObject_GetComponent_TisAspectPortraitUI_tDCC149EB87D887AA19DCC13470CADC7ADDDD8715_m42CB37CD70ACF05920CD975BDC1BF8567CD8EC66_RuntimeMethod_var);
		AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3* L_16 = __this->get_data_14();
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		AspectData_t4CE6959C5257A3D8367CE0AAA1003ACB2D78F1E4 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		AspectPortraitUI_Init_mC686B268BD591A14AB42C18B39880AC2BBB8EAC0(L_15, L_19, /*hidden argument*/NULL);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0060:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_21 = V_0;
		AspectDataU5BU5D_t2F1786990758F7996D2CC3802C1319C4DEE950D3* L_22 = __this->get_data_14();
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DraftUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DraftUI__ctor_mEAAC11F5E586FF3381BFA1EBD1B5D6F967E6FFB7 (DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DraftUI__ctor_mEAAC11F5E586FF3381BFA1EBD1B5D6F967E6FFB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, Sprite> aspectSprites = new Dictionary<string, Sprite>();
		Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 * L_0 = (Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9 *)il2cpp_codegen_object_new(Dictionary_2_t08107DE97D3661D374D54356092C44C550883EA9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m17F5BDE687E44BF02E623A9F6BCE567234266990(L_0, /*hidden argument*/Dictionary_2__ctor_m17F5BDE687E44BF02E623A9F6BCE567234266990_RuntimeMethod_var);
		__this->set_aspectSprites_15(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DraftUI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DraftUI__cctor_m83F05D5A8A7B81FA0BE3C35CC8FB064BFD9CE593 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DraftUI__cctor_m83F05D5A8A7B81FA0BE3C35CC8FB064BFD9CE593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string SelectedAspect = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		((DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_StaticFields*)il2cpp_codegen_static_fields_for(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var))->set_SelectedAspect_5(L_0);
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
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_Instance_6();
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
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_Instance_6(__this);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m4B67F69CF18652603C29FC1C5B7C6482C77B69DB (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	{
		// NetworkManager.Instance.Connect();
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_0 = NetworkManager_get_Instance_mEA21C6C03B8F9B8B612A9B8B5BC82B455A563C84_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		NetworkManager_Connect_m5DF96B11941118AF39C98987904E60CD6946F9A2(L_0, /*hidden argument*/NULL);
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
		Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_Entities_4();
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
		Dictionary_2_t1C35B7A8D16EE6EE2ADADF8765E6130C7DD23E93 * L_9 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_Entities_4();
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
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = __this->get_tileVisuals_5();
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
	{
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
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_Entities_4(L_0);
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
// System.Void MessageExtensions::Add(RiptideNetworking.Message,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageExtensions_Add_m1B76C96509DF42604DF483B8E90D5BAB199B55CC (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___message0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value1, const RuntimeMethod* method)
{
	{
		// message.Add(value.x);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_0 = ___message0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___value1;
		float L_2 = L_1.get_x_0();
		NullCheck(L_0);
		Message_Add_m0A08DD743458049FEE0F755C9E941B2493F27155(L_0, L_2, /*hidden argument*/NULL);
		// message.Add(value.y);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_3 = ___message0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___value1;
		float L_5 = L_4.get_y_1();
		NullCheck(L_3);
		Message_Add_m0A08DD743458049FEE0F755C9E941B2493F27155(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MessageExtensions::Add(RiptideNetworking.Message,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageExtensions_Add_m88BEE6E4208F458A76E117C805870EE360E33422 (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___message0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value1, const RuntimeMethod* method)
{
	{
		// message.Add(value.x);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_0 = ___message0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value1;
		float L_2 = L_1.get_x_2();
		NullCheck(L_0);
		Message_Add_m0A08DD743458049FEE0F755C9E941B2493F27155(L_0, L_2, /*hidden argument*/NULL);
		// message.Add(value.y);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_3 = ___message0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value1;
		float L_5 = L_4.get_y_3();
		NullCheck(L_3);
		Message_Add_m0A08DD743458049FEE0F755C9E941B2493F27155(L_3, L_5, /*hidden argument*/NULL);
		// message.Add(value.z);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_6 = ___message0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___value1;
		float L_8 = L_7.get_z_4();
		NullCheck(L_6);
		Message_Add_m0A08DD743458049FEE0F755C9E941B2493F27155(L_6, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MessageExtensions::Add(RiptideNetworking.Message,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageExtensions_Add_m83A31A02756AC4076993E9BE1FEECF93C5E93321 (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___message0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value1, const RuntimeMethod* method)
{
	{
		// message.Add(value.x);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_0 = ___message0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___value1;
		float L_2 = L_1.get_x_0();
		NullCheck(L_0);
		Message_Add_m0A08DD743458049FEE0F755C9E941B2493F27155(L_0, L_2, /*hidden argument*/NULL);
		// message.Add(value.y);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_3 = ___message0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___value1;
		float L_5 = L_4.get_y_1();
		NullCheck(L_3);
		Message_Add_m0A08DD743458049FEE0F755C9E941B2493F27155(L_3, L_5, /*hidden argument*/NULL);
		// message.Add(value.z);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_6 = ___message0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = ___value1;
		float L_8 = L_7.get_z_2();
		NullCheck(L_6);
		Message_Add_m0A08DD743458049FEE0F755C9E941B2493F27155(L_6, L_8, /*hidden argument*/NULL);
		// message.Add(value.w);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_9 = ___message0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = ___value1;
		float L_11 = L_10.get_w_3();
		NullCheck(L_9);
		Message_Add_m0A08DD743458049FEE0F755C9E941B2493F27155(L_9, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 MessageExtensions::GetVector2(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MessageExtensions_GetVector2_mE147A1A00411BF12F93E2369659FCE5E061ACF50 (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___message0, const RuntimeMethod* method)
{
	{
		// return new Vector2(message.GetFloat(), message.GetFloat());
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_0 = ___message0;
		NullCheck(L_0);
		float L_1 = Message_GetFloat_m2E2D3C22349CC333A30959B89311890DE9E8949D(L_0, /*hidden argument*/NULL);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_2 = ___message0;
		NullCheck(L_2);
		float L_3 = Message_GetFloat_m2E2D3C22349CC333A30959B89311890DE9E8949D(L_2, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 MessageExtensions::GetVector3(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MessageExtensions_GetVector3_m28C33434B0874AD59F9F83C4D7863E05C193452C (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___message0, const RuntimeMethod* method)
{
	{
		// return new Vector3(message.GetFloat(), message.GetFloat(), message.GetFloat());
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_0 = ___message0;
		NullCheck(L_0);
		float L_1 = Message_GetFloat_m2E2D3C22349CC333A30959B89311890DE9E8949D(L_0, /*hidden argument*/NULL);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_2 = ___message0;
		NullCheck(L_2);
		float L_3 = Message_GetFloat_m2E2D3C22349CC333A30959B89311890DE9E8949D(L_2, /*hidden argument*/NULL);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_4 = ___message0;
		NullCheck(L_4);
		float L_5 = Message_GetFloat_m2E2D3C22349CC333A30959B89311890DE9E8949D(L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Quaternion MessageExtensions::GetQuaternion(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MessageExtensions_GetQuaternion_m51D2CB85353B550EF2DCAB47B2BAA351E33B0938 (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___message0, const RuntimeMethod* method)
{
	{
		// return new Quaternion(message.GetFloat(), message.GetFloat(), message.GetFloat(), message.GetFloat());
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_0 = ___message0;
		NullCheck(L_0);
		float L_1 = Message_GetFloat_m2E2D3C22349CC333A30959B89311890DE9E8949D(L_0, /*hidden argument*/NULL);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_2 = ___message0;
		NullCheck(L_2);
		float L_3 = Message_GetFloat_m2E2D3C22349CC333A30959B89311890DE9E8949D(L_2, /*hidden argument*/NULL);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_4 = ___message0;
		NullCheck(L_4);
		float L_5 = Message_GetFloat_m2E2D3C22349CC333A30959B89311890DE9E8949D(L_4, /*hidden argument*/NULL);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_6 = ___message0;
		NullCheck(L_6);
		float L_7 = Message_GetFloat_m2E2D3C22349CC333A30959B89311890DE9E8949D(L_6, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
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
// NetworkManager NetworkManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * NetworkManager_get_Instance_mEA21C6C03B8F9B8B612A9B8B5BC82B455A563C84 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManager_get_Instance_mEA21C6C03B8F9B8B612A9B8B5BC82B455A563C84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => instance;
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_0 = ((NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
// System.Void NetworkManager::set_Instance(NetworkManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_set_Instance_mB3D50185087E37847ED6932BFD87244BE50E59FC (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManager_set_Instance_mB3D50185087E37847ED6932BFD87244BE50E59FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_0 = ((NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = value;
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_2 = ___value0;
		((NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_il2cpp_TypeInfo_var))->set_instance_4(L_2);
		return;
	}

IL_0014:
	{
		// else if (instance != value)
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_3 = ((NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_il2cpp_TypeInfo_var))->get_instance_4();
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_4 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.Log($"{nameof(NetworkManager)} instance already exists, destroying object!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral43F6218313E8BCCE8E7E241FC550B1DFFC92DF67, /*hidden argument*/NULL);
		// Destroy(value);
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_6 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// RiptideNetworking.Client NetworkManager::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method)
{
	{
		// public Client Client { get; private set; }
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_0 = __this->get_U3CClientU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void NetworkManager::set_Client(RiptideNetworking.Client)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_set_Client_mD3137169EC314F4A4D6519E09937469BC1930023 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * ___value0, const RuntimeMethod* method)
{
	{
		// public Client Client { get; private set; }
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_0 = ___value0;
		__this->set_U3CClientU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 NetworkManager::get_Ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkManager_get_Ping_m20BDC7D868914232CE62C453B634E26364669D98 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method)
{
	{
		// public int Ping { get; private set; }
		int32_t L_0 = __this->get_U3CPingU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void NetworkManager::set_Ping(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_set_Ping_m009FF771086164AC68103D4E11B26C04CA4C7EF1 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Ping { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPingU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void NetworkManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_Awake_m8BDFCA065BD9CDBC35321EEA652685B9B31384B7 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method)
{
	{
		// private void Awake() { Instance = this; }
		NetworkManager_set_Instance_mB3D50185087E37847ED6932BFD87244BE50E59FC(__this, /*hidden argument*/NULL);
		// private void Awake() { Instance = this; }
		return;
	}
}
// System.Void NetworkManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_FixedUpdate_m458F9B067AB6303E98138D1D4EDFD8813CF053C8 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method)
{
	{
		// private void FixedUpdate() { actionQueue.ExecuteAll(); }
		ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C * L_0 = __this->get_actionQueue_8();
		NullCheck(L_0);
		ActionQueue_ExecuteAll_m8067713A472D657257777127651C271FC2079813(L_0, /*hidden argument*/NULL);
		// private void FixedUpdate() { actionQueue.ExecuteAll(); }
		return;
	}
}
// System.Void NetworkManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_Start_m6533F49FA8842AB15F5C8EBDDC92E6DC50002B91 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManager_Start_m6533F49FA8842AB15F5C8EBDDC92E6DC50002B91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RiptideLogger.Initialize(Debug.Log, false);
		LogMethod_t386E421814648D7D957C04B454155405FDF8A541 * L_0 = (LogMethod_t386E421814648D7D957C04B454155405FDF8A541 *)il2cpp_codegen_object_new(LogMethod_t386E421814648D7D957C04B454155405FDF8A541_il2cpp_TypeInfo_var);
		LogMethod__ctor_m463D5930D732F697BB6E89F4D577C4E1567258EB(L_0, NULL, (intptr_t)((intptr_t)Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708_RuntimeMethod_var), /*hidden argument*/NULL);
		RiptideLogger_Initialize_m7CC0EB08AE152D017894202815BFD9908C3F9B62(L_0, (bool)0, _stringLiteralDCE54DCDAC85F06A19366C606042058BAD8C84C6, /*hidden argument*/NULL);
		// actionQueue = new ActionQueue();
		ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C * L_1 = (ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C *)il2cpp_codegen_object_new(ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C_il2cpp_TypeInfo_var);
		ActionQueue__ctor_m4C3002524392AAB970CA9DA4C050D538DED67EBA(L_1, _stringLiteral60ED6F729B8E3F43004A34E3D63D12A2DCF8F4D5, /*hidden argument*/NULL);
		__this->set_actionQueue_8(L_1);
		// Client = new Client();
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_2 = (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C *)il2cpp_codegen_object_new(Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C_il2cpp_TypeInfo_var);
		Client__ctor_m64CF08E873A8DEFDC67BB03C680FD532DCD42DC5(L_2, _stringLiteral289FD6DD86C78FC18484670BD5337FFC1457B23F, /*hidden argument*/NULL);
		NetworkManager_set_Client_mD3137169EC314F4A4D6519E09937469BC1930023_inline(__this, L_2, /*hidden argument*/NULL);
		// Client.Connected += SuccessfulConnection;
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_3 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(__this, /*hidden argument*/NULL);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_4 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_4, __this, (intptr_t)((intptr_t)NetworkManager_SuccessfulConnection_m0D4A2FBCFFF7A1C51E41568A27E848D7B20A6968_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		Client_add_Connected_mB465FFE9C4FCD2BD7A97AE573E98A3F11BC76671(L_3, L_4, /*hidden argument*/NULL);
		// Client.ConnectionFailed += FailedToConnect;
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_5 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(__this, /*hidden argument*/NULL);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_6 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_6, __this, (intptr_t)((intptr_t)NetworkManager_FailedToConnect_m8C0A36DC725DB684D42B82E1083BDF868550E35C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		Client_add_ConnectionFailed_m267BE25E2EDC72D957EF4AD6F253638E7B8C9022(L_5, L_6, /*hidden argument*/NULL);
		// Client.MessageReceived += MessageReceived;
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_7 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(__this, /*hidden argument*/NULL);
		EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA * L_8 = (EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA *)il2cpp_codegen_object_new(EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mAFA74E0D127C37F8C36576F5F45675DDCD9EBD7F(L_8, __this, (intptr_t)((intptr_t)NetworkManager_MessageReceived_m519A0D70110E4FEB5337B67B87E9FBC1AECA91FB_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mAFA74E0D127C37F8C36576F5F45675DDCD9EBD7F_RuntimeMethod_var);
		NullCheck(L_7);
		Client_add_MessageReceived_m896913CBF836608D53B4886019731B2F264EEA7A(L_7, L_8, /*hidden argument*/NULL);
		// Client.ClientDisconnected += ClientDisconnected;
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_9 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(__this, /*hidden argument*/NULL);
		EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6 * L_10 = (EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6 *)il2cpp_codegen_object_new(EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m52F93489A34DD8B7EEA472D019EF4DC669192A35(L_10, __this, (intptr_t)((intptr_t)NetworkManager_ClientDisconnected_m7322C9A24903D70AEE9E9FE3E787115C9A8EDD9F_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m52F93489A34DD8B7EEA472D019EF4DC669192A35_RuntimeMethod_var);
		NullCheck(L_9);
		Client_add_ClientDisconnected_m5BC747E3046CC00B9510AB5D60A879F517860FC9(L_9, L_10, /*hidden argument*/NULL);
		// Client.Disconnected += LocalDisconnect;
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_11 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(__this, /*hidden argument*/NULL);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_12 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_12, __this, (intptr_t)((intptr_t)NetworkManager_LocalDisconnect_mD8D293C7BC25DA4D91EE4C2E3CBBCD179CCA3849_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		Client_add_Disconnected_m07D667E4CEC5E79DE9E8F990E09A65E1BBEF5616(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetworkManager::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_OnApplicationQuit_m06A58A94A5E11A1D897BB19956B656098E417DFB (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManager_OnApplicationQuit_m06A58A94A5E11A1D897BB19956B656098E417DFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalDisconnect(null, new EventArgs());
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_0 = (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *)il2cpp_codegen_object_new(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(L_0, /*hidden argument*/NULL);
		NetworkManager_LocalDisconnect_mD8D293C7BC25DA4D91EE4C2E3CBBCD179CCA3849(__this, NULL, L_0, /*hidden argument*/NULL);
		// Client.Disconnect();
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_1 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Client_Disconnect_mF0F3FCFB15034CEC61310CFE5C32097EF1007408(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetworkManager::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_Connect_m5DF96B11941118AF39C98987904E60CD6946F9A2 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManager_Connect_m5DF96B11941118AF39C98987904E60CD6946F9A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// messageHandlers = new Dictionary<ushort, MessageHandler>()
		// {
		//     { (ushort)ServerToClientRequest.TestPingReceived, ClientHandle.TestPingReceived },
		//     { (ushort)ServerToClientRequest.LoadDraft, ClientHandle.LoadDraft },
		//     { (ushort)ServerToClientRequest.AspectLocked, ClientHandle.AspectLocked },
		//     { (ushort)ServerToClientRequest.SpawnAspect, ClientHandle.SpawnAspect }
		// };
		Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 * L_0 = (Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 *)il2cpp_codegen_object_new(Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m49C4D7AFA2BB75BB0C6224FAFF85CD3AEC74DB76(L_0, /*hidden argument*/Dictionary_2__ctor_m49C4D7AFA2BB75BB0C6224FAFF85CD3AEC74DB76_RuntimeMethod_var);
		Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 * L_1 = L_0;
		MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * L_2 = (MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 *)il2cpp_codegen_object_new(MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65_il2cpp_TypeInfo_var);
		MessageHandler__ctor_mF32DD0B39314427EA11238C418B90921AF242FA2(L_2, NULL, (intptr_t)((intptr_t)ClientHandle_TestPingReceived_m5AC473FF011BFCBE6744C470A3BB24CA9FB91572_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		Dictionary_2_Add_mE86471A37D4C88489C5AF33F5492A841C47C19F8(L_1, (uint16_t)1, L_2, /*hidden argument*/Dictionary_2_Add_mE86471A37D4C88489C5AF33F5492A841C47C19F8_RuntimeMethod_var);
		Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 * L_3 = L_1;
		MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * L_4 = (MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 *)il2cpp_codegen_object_new(MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65_il2cpp_TypeInfo_var);
		MessageHandler__ctor_mF32DD0B39314427EA11238C418B90921AF242FA2(L_4, NULL, (intptr_t)((intptr_t)ClientHandle_LoadDraft_mC0AC54FA8B1EC75AC09085C6E62B22374194FC75_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		Dictionary_2_Add_mE86471A37D4C88489C5AF33F5492A841C47C19F8(L_3, (uint16_t)2, L_4, /*hidden argument*/Dictionary_2_Add_mE86471A37D4C88489C5AF33F5492A841C47C19F8_RuntimeMethod_var);
		Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 * L_5 = L_3;
		MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * L_6 = (MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 *)il2cpp_codegen_object_new(MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65_il2cpp_TypeInfo_var);
		MessageHandler__ctor_mF32DD0B39314427EA11238C418B90921AF242FA2(L_6, NULL, (intptr_t)((intptr_t)ClientHandle_AspectLocked_mE723ADBD6C703B525524791E26DE7DC717EE8DFF_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_Add_mE86471A37D4C88489C5AF33F5492A841C47C19F8(L_5, (uint16_t)3, L_6, /*hidden argument*/Dictionary_2_Add_mE86471A37D4C88489C5AF33F5492A841C47C19F8_RuntimeMethod_var);
		Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 * L_7 = L_5;
		MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * L_8 = (MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 *)il2cpp_codegen_object_new(MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65_il2cpp_TypeInfo_var);
		MessageHandler__ctor_mF32DD0B39314427EA11238C418B90921AF242FA2(L_8, NULL, (intptr_t)((intptr_t)ClientHandle_SpawnAspect_m2FA37F80383542434539BC2D3578673BFA748C59_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		Dictionary_2_Add_mE86471A37D4C88489C5AF33F5492A841C47C19F8(L_7, (uint16_t)4, L_8, /*hidden argument*/Dictionary_2_Add_mE86471A37D4C88489C5AF33F5492A841C47C19F8_RuntimeMethod_var);
		__this->set_messageHandlers_11(L_7);
		// Client.Connect(ip, port, actionQueue);
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_9 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(__this, /*hidden argument*/NULL);
		String_t* L_10 = __this->get_ip_5();
		uint16_t L_11 = __this->get_port_6();
		ActionQueue_t3D7DB5B4E29FE961F8148B86C2328144BE08F44C * L_12 = __this->get_actionQueue_8();
		NullCheck(L_9);
		Client_Connect_mADC87B1A953F0EDD30B481C446CFDBAAFA328BBA(L_9, L_10, L_11, L_12, (uint16_t)((int32_t)1000), (uint8_t)5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetworkManager::GetPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_GetPing_m0F62E85D675E8E0F71F86D11FDF4EC7F82CE9E36 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManager_GetPing_m0F62E85D675E8E0F71F86D11FDF4EC7F82CE9E36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Ping = Mathf.RoundToInt((float)DateTime.Now.Subtract(timeofPingTest).TotalMilliseconds * 0.5f);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_0 = L_0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = __this->get_timeofPingTest_10();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_2 = DateTime_Subtract_m12814A53110B4E3887A84A911C5F9C1402D98842((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		double L_3 = TimeSpan_get_TotalMilliseconds_m48B00B27D485CC556C10A5119BC11E1A1E0FE363((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_4 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041(((float)il2cpp_codegen_multiply((float)(((float)((float)L_3))), (float)(0.5f))), /*hidden argument*/NULL);
		NetworkManager_set_Ping_m009FF771086164AC68103D4E11B26C04CA4C7EF1_inline(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetworkManager::SuccessfulConnection(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_SuccessfulConnection_m0D4A2FBCFFF7A1C51E41568A27E848D7B20A6968 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method)
{
	{
		// StartCoroutine(TestPing());
		RuntimeObject* L_0 = NetworkManager_TestPing_mDAD05FCBAECA49DD35ED93A8247FDD556633324D(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator NetworkManager::TestPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkManager_TestPing_mDAD05FCBAECA49DD35ED93A8247FDD556633324D (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManager_TestPing_mDAD05FCBAECA49DD35ED93A8247FDD556633324D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B * L_0 = (U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B *)il2cpp_codegen_object_new(U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B_il2cpp_TypeInfo_var);
		U3CTestPingU3Ed__25__ctor_mCF7BD9C30FF229872F885125C2AB8197268FD2BF(L_0, 0, /*hidden argument*/NULL);
		U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void NetworkManager::FailedToConnect(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_FailedToConnect_m8C0A36DC725DB684D42B82E1083BDF868550E35C (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NetworkManager::MessageReceived(System.Object,RiptideNetworking.ClientMessageReceivedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_MessageReceived_m519A0D70110E4FEB5337B67B87E9FBC1AECA91FB (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, RuntimeObject * ___sender0, ClientMessageReceivedEventArgs_t0328F5CC4E66401A0A6CFA1267B964731B6CE1E4 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManager_MessageReceived_m519A0D70110E4FEB5337B67B87E9FBC1AECA91FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// messageHandlers[e.Message.GetUShort()](e.Message);
		Dictionary_2_tAD14015E44D58D51B2DE4112A5505664CEDF0C63 * L_0 = __this->get_messageHandlers_11();
		ClientMessageReceivedEventArgs_t0328F5CC4E66401A0A6CFA1267B964731B6CE1E4 * L_1 = ___e1;
		NullCheck(L_1);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_2 = ClientMessageReceivedEventArgs_get_Message_mDA7E70BAFBECF2710ECC6D4BAC60C9DD77DD7D51_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		uint16_t L_3 = Message_GetUShort_m917B148BEEFC7FEE212DB9B96A411FA5E8F13FDC(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * L_4 = Dictionary_2_get_Item_mC4F33F6981A3CFA78E96D1785E544F9DD57806E9(L_0, L_3, /*hidden argument*/Dictionary_2_get_Item_mC4F33F6981A3CFA78E96D1785E544F9DD57806E9_RuntimeMethod_var);
		ClientMessageReceivedEventArgs_t0328F5CC4E66401A0A6CFA1267B964731B6CE1E4 * L_5 = ___e1;
		NullCheck(L_5);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_6 = ClientMessageReceivedEventArgs_get_Message_mDA7E70BAFBECF2710ECC6D4BAC60C9DD77DD7D51_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		MessageHandler_Invoke_m8AD0C695723924E4DCFE59133537F8B820F67A1F(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetworkManager::ClientDisconnected(System.Object,RiptideNetworking.ClientDisconnectedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_ClientDisconnected_m7322C9A24903D70AEE9E9FE3E787115C9A8EDD9F (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, RuntimeObject * ___sender0, ClientDisconnectedEventArgs_t8DA97C9EB8D362876DEA37743F8BC53FF4D45587 * ___e1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NetworkManager::LocalDisconnect(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_LocalDisconnect_mD8D293C7BC25DA4D91EE4C2E3CBBCD179CCA3849 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManager_LocalDisconnect_mD8D293C7BC25DA4D91EE4C2E3CBBCD179CCA3849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCoroutine(TestPing());
		RuntimeObject* L_0 = NetworkManager_TestPing_mDAD05FCBAECA49DD35ED93A8247FDD556633324D(__this, /*hidden argument*/NULL);
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA(__this, L_0, /*hidden argument*/NULL);
		// Client.Connected -= SuccessfulConnection;
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_1 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(__this, /*hidden argument*/NULL);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_2 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_2, __this, (intptr_t)((intptr_t)NetworkManager_SuccessfulConnection_m0D4A2FBCFFF7A1C51E41568A27E848D7B20A6968_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		Client_remove_Connected_m434741C6E3F133A16B9754E6DFA71D3F519253C7(L_1, L_2, /*hidden argument*/NULL);
		// Client.ConnectionFailed -= FailedToConnect;
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_3 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(__this, /*hidden argument*/NULL);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_4 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_4, __this, (intptr_t)((intptr_t)NetworkManager_FailedToConnect_m8C0A36DC725DB684D42B82E1083BDF868550E35C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		Client_remove_ConnectionFailed_mD6F198FDAA76F1F6E33E19C9910967CF3F2FF3C1(L_3, L_4, /*hidden argument*/NULL);
		// Client.MessageReceived -= MessageReceived;
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_5 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(__this, /*hidden argument*/NULL);
		EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA * L_6 = (EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA *)il2cpp_codegen_object_new(EventHandler_1_t1F7E924AEE71FA640D4B4A064D913260598A86FA_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mAFA74E0D127C37F8C36576F5F45675DDCD9EBD7F(L_6, __this, (intptr_t)((intptr_t)NetworkManager_MessageReceived_m519A0D70110E4FEB5337B67B87E9FBC1AECA91FB_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mAFA74E0D127C37F8C36576F5F45675DDCD9EBD7F_RuntimeMethod_var);
		NullCheck(L_5);
		Client_remove_MessageReceived_m4DBDEAAB51B9B6656653BF0AB41D822B2DA48729(L_5, L_6, /*hidden argument*/NULL);
		// Client.ClientDisconnected -= ClientDisconnected;
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_7 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(__this, /*hidden argument*/NULL);
		EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6 * L_8 = (EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6 *)il2cpp_codegen_object_new(EventHandler_1_tC9BC6F8F6597D956BCC527457DF93209B04B1BD6_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m52F93489A34DD8B7EEA472D019EF4DC669192A35(L_8, __this, (intptr_t)((intptr_t)NetworkManager_ClientDisconnected_m7322C9A24903D70AEE9E9FE3E787115C9A8EDD9F_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m52F93489A34DD8B7EEA472D019EF4DC669192A35_RuntimeMethod_var);
		NullCheck(L_7);
		Client_remove_ClientDisconnected_m0C34FEBA9CD77526375852C400C3B0BAA90933D1(L_7, L_8, /*hidden argument*/NULL);
		// Client.Disconnected -= LocalDisconnect;
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_9 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(__this, /*hidden argument*/NULL);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_10 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_10, __this, (intptr_t)((intptr_t)NetworkManager_LocalDisconnect_mD8D293C7BC25DA4D91EE4C2E3CBBCD179CCA3849_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		Client_remove_Disconnected_m74D9D54559E18048D85D651BFE5279971C7A4925(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetworkManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager__ctor_mF87DB7AEE8B70869E378CD2AF907AC1BA1419970 (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManager__ctor_mF87DB7AEE8B70869E378CD2AF907AC1BA1419970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string ip = "94.15.186.228";
		__this->set_ip_5(_stringLiteral5DB80151CADA9474E5DBF3165953B15D4AE81E4F);
		// private ushort port = 9009;
		__this->set_port_6((uint16_t)((int32_t)9009));
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
// System.Void NetworkManager_<TestPing>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPingU3Ed__25__ctor_mCF7BD9C30FF229872F885125C2AB8197268FD2BF (U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void NetworkManager_<TestPing>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPingU3Ed__25_System_IDisposable_Dispose_m67ED4F525F7F63A736AE7452160C04E4242D0E6B (U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean NetworkManager_<TestPing>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTestPingU3Ed__25_MoveNext_mE42074ABA47140A0A87E5D8F60D73837215A370B (U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTestPingU3Ed__25_MoveNext_mE42074ABA47140A0A87E5D8F60D73837215A370B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// Client.Send(Message.Create(MessageSendMode.unreliable, (ushort)ClientToServerRequest.TestPing));
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_4 = V_1;
		NullCheck(L_4);
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_5 = NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454_il2cpp_TypeInfo_var);
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_6 = Message_Create_m6A381F4C069CD1A6471CDD59A66BC4EBBFAF2F73(0, (uint16_t)1, /*hidden argument*/NULL);
		NullCheck(L_5);
		Client_Send_m5E2BB4BF64BE146AF33D3D6428D440155B1EE950(L_5, L_6, (uint8_t)((int32_t)15), /*hidden argument*/NULL);
		// timeofPingTest = DateTime.Now;
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_8 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_timeofPingTest_10(L_8);
		// yield return new WaitForSecondsRealtime(0.25f);
		WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * L_9 = (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525(L_9, (0.25f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0056:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_001e;
	}
}
// System.Object NetworkManager_<TestPing>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTestPingU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF9CBFF1E7DC75840B1B8E4054DE62CD086EAC176 (U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void NetworkManager_<TestPing>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPingU3Ed__25_System_Collections_IEnumerator_Reset_m5C63789EAAD28AE14A90093D9889784EDE11339B (U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTestPingU3Ed__25_System_Collections_IEnumerator_Reset_m5C63789EAAD28AE14A90093D9889784EDE11339B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CTestPingU3Ed__25_System_Collections_IEnumerator_Reset_m5C63789EAAD28AE14A90093D9889784EDE11339B_RuntimeMethod_var);
	}
}
// System.Object NetworkManager_<TestPing>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTestPingU3Ed__25_System_Collections_IEnumerator_get_Current_mE3E5A0744F249259C72A03696156D6EC86FBEDCB (U3CTestPingU3Ed__25_tEBC90E9506863CA602F34FFB2ADDECDE06C9F22B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void NetworkManager_MessageHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_mF32DD0B39314427EA11238C418B90921AF242FA2 (MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NetworkManager_MessageHandler::Invoke(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_Invoke_m8AD0C695723924E4DCFE59133537F8B820F67A1F (MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * __this, Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___message0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NetworkManager_MessageHandler::BeginInvoke(RiptideNetworking.Message,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandler_BeginInvoke_m26D5B5C59259AF67DE3908C324202DA0B95ED850 (MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * __this, Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NetworkManager_MessageHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_EndInvoke_m78EE9D60A431AAD9777A016415C4F2A07BEE29D1 (MessageHandler_t0C041FCC14D6ADA43E43AFB134553C6E2DECCB65 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_20 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_Instance_6();
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Awake_mD9EFB03744D897F8A0784A58CB31CE9B0BC5D651 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_Awake_mD9EFB03744D897F8A0784A58CB31CE9B0BC5D651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null)
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_0 = ((UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_il2cpp_TypeInfo_var))->get_Instance_4();
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
		((UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// }
		return;
	}
}
// System.Void UIManager::OpenDraftUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OpenDraftUI_m4AEC635F1556CCCFA545DC9A877589FBCCAD1B41 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	{
		// draftUI.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_draftUI_5();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_m5E5065654115BEE5B00F84AC64469D5D642351A3 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * NetworkManager_get_Instance_mEA21C6C03B8F9B8B612A9B8B5BC82B455A563C84_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManager_get_Instance_mEA21C6C03B8F9B8B612A9B8B5BC82B455A563C84AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => instance;
		NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * L_0 = ((NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * DraftUI_get_Instance_m2D0C71E6F06AF634922D64B8BB9C224B4365F126_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DraftUI_get_Instance_m2D0C71E6F06AF634922D64B8BB9C224B4365F126AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => instance;
		IL2CPP_RUNTIME_CLASS_INIT(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var);
		DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC * L_0 = ((DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_StaticFields*)il2cpp_codegen_static_fields_for(DraftUI_tCC607DE22DE0836980AD1B03CEFE2DAE2D8EA1AC_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * NetworkManager_get_Client_m40E309571A2654EC9DE9F50B8E523D73475236D1_inline (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, const RuntimeMethod* method)
{
	{
		// public Client Client { get; private set; }
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_0 = __this->get_U3CClientU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint16_t Client_get_Id_mFCF3A172FA6ED9E6A0643DE38B07AE36F00DA3EC_inline (Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CIdU3Ek__BackingField_6();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NetworkManager_set_Client_mD3137169EC314F4A4D6519E09937469BC1930023_inline (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * ___value0, const RuntimeMethod* method)
{
	{
		// public Client Client { get; private set; }
		Client_tEE4D00AA7E4FF049613172A5B440372E2691F34C * L_0 = ___value0;
		__this->set_U3CClientU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NetworkManager_set_Ping_m009FF771086164AC68103D4E11B26C04CA4C7EF1_inline (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Ping { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPingU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * ClientMessageReceivedEventArgs_get_Message_mDA7E70BAFBECF2710ECC6D4BAC60C9DD77DD7D51_inline (ClientMessageReceivedEventArgs_t0328F5CC4E66401A0A6CFA1267B964731B6CE1E4 * __this, const RuntimeMethod* method)
{
	{
		Message_t237C8782ED8BCAA556E91B06BC366AC4FBA28454 * L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}

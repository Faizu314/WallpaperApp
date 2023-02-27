#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Action`1<UnityEngine.GameObject>
struct Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Single>
struct Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE;
// System.Collections.Generic.Dictionary`2<System.Single,System.Int32>
struct Dictionary_2_t72CA64D07B0F6A0E5D97B0D6C8CD64A683AAC155;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Func`1<UnityEngine.GameObject>
struct Func_1_t2C71FBC561D6EB520D698CBC4D1FF81B6894C6D4;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
// System.Func`2<System.Int32,System.Single>
struct Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t9CC3C47C67E4184F7F1B8B0AFAEF692B9EDDDF05;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_tFE667855A98BB6902B52DD03254BE42CC7CEB26E;
// System.Linq.IOrderedEnumerable`1<System.Int32>
struct IOrderedEnumerable_1_t07B8E72925E861AB83B6CF77BBBB4758A2D0706C;
// System.Linq.IOrderedEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IOrderedEnumerable_1_tEC69DE4EAD0C8A8943156A96E6B44A96825EBBB2;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.GameObject,System.Single>
struct KeyCollection_tB48EF58C1CCCF0C8B223824F8624FF902FA9205D;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Int32>>
struct List_1_tC7866C4163CF296EDC67C92EC60E1B7CCEB9C27B;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<Phezu.Util.Tokenizer/Token>
struct List_1_t678434BE3728D08672059C5165BFE76A332848B8;
// Phezu.Util.MinHeap`3<System.Single,System.Int32,System.Collections.Generic.Dictionary`2<System.Single,System.Int32>>
struct MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB;
// Phezu.Util.MinHeap`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct MinHeap_3_t8CF65313E70443EDCFF467D2BD3B70E25DBFA445;
// UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject>
struct ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528;
// UnityEngine.Pool.ObjectPool`1<System.Object>
struct ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.GameObject,System.Single>
struct ValueCollection_t1D42A9E0E3FCF5D056F90DE31EE155F6AB9C4ADD;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.GameObject,System.Single>[]
struct EntryU5BU5D_tD738E6373B31F14A981281B01E4CD42093B76C97;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.ScriptableObject[]
struct ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// Phezu.Util.Tokenizer/Token[]
struct TokenU5BU5D_t6A5EEC44AC4F6924669D228A79EE9B448EFC678D;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Phezu.Util.Config
struct Config_t221EF6EC94659C17112A886383C0148F74477ABA;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// Phezu.Util.FileReader
struct FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Phezu.Util.MinSubsetSum
struct MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// Phezu.Util.RequireInterfaceAttribute
struct RequireInterfaceAttribute_t01D46B1A2D89C10E6E31211FEFE24BEF69DD7C3E;
// Phezu.Util.RuntimeAssetHandler
struct RuntimeAssetHandler_t5AC1A35E95ABDE260E5D77989296AA34B534DD51;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneFieldAttribute
struct SceneFieldAttribute_tB110A6D4D29307E0CE92A8C4E3259ACB7709F197;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// Phezu.Util.TimedSpawner
struct TimedSpawner_t23237D1051E78A2C341D803349E73B1A6A8CC9A2;
// Phezu.Util.Tokenizer
struct Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Phezu.Util.MinSubsetSum/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3;
// Phezu.Util.MinSubsetSum/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2;
// Phezu.Util.TimedSpawner/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441;
// Phezu.Util.Tokenizer/Token
struct Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2C71FBC561D6EB520D698CBC4D1FF81B6894C6D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRuntimeAsset_t21350255F2102EB17F46D75768F76AA206ED06A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t678434BE3728D08672059C5165BFE76A332848B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742;
IL2CPP_EXTERN_C String_t* _stringLiteral2B660B756FABC4B9ABC5F346B7D2B2942F6E372C;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m725045BA11F200D1EFDD76E7C402E5FE68F21DE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m5B05E568C9D13FA27E5E907BAD3E2E469E98DF02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m68FFA13B4F8B9B2E4C5F889EED11E60985B30C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m45E195014CCFE6336B5E004D0737FF6D04E56534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m9FFDF5270202185F5F627314159D78314394EF3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mAA368612C7FCF7C385A5F6F9865ED8979F5E4B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB5300CE24346D869C7AC22CEFB9DA985BF30FCA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7A3360AF98140FF0B952B4ED7B5D6C4F7780E03B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9B6273E174B51EE2B6C10C92B3E13DE52CBABB90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m481909F42F34DB8BEE3021AA3876812492DE1EF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9350D91CA5BD57E5A0FA8EE8BC7CA0E95B7E27C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC7E55286177BE34472F953FDC3D32601C328E750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFE985985A6B127D91F611703FAA188B9E13C2705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileReader_GetFileReader_m28D311C1D9FC79C390E181E70B0C08D0B6C9D509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m8FB37AE23EED40DB6F3B22118559ED8C4BC73C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m9A1A4D5E7034DE77EB9FA3266E20B54960924E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mAB1FC5832CB06EEF53C3A3E9C2A67258EAC6048E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mF445373A70498E9A9844DC2C04384E837F3444CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBCE8506880A55D2AC0063B4B90EFDE57C0FBE60F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC5C154F6C1E95005ECBA27FD59F5195010489904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m84D5E21447A2DBAD10CCEEA7B9D6712EA85B8052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m613EB9AC2BEA1965B2B521EB77C019C888F5A991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m88EB510D961B109997B2C1C336B75791B631D3D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF7B8D24C7D34D7A575A8E6E9EE9D3FB4DABB91AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinHeap_3_Add_m3FCA292AB75B02EACA9B1597DF7B819A96FF6448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinHeap_3_ExtractMin_m8A1BA22BCC1F1F2DB35CBF122763876854A012C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinHeap_3__ctor_mACA92653CFDA00207956A35EDC6A48A76F0AC1EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_mA672E936AACD458D3F9E41CFF8BA232F492137DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Release_m6A47FE582CCFA96EC938D6374E2AE9FDF7BF7D4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_mFAEF592622C047291D959988E64185E20CB8CB1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tokenizer__ctor_mB1815E285CA6814C80492C8C21109AAF3C688158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CIncrementFrontIteratorU3Eb__0_mFA9DD8EEED70B859E2AD1CB74C503B70BCEC61C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CIncrementInverseIteratorU3Eb__0_m82E400E550B6171831CAD1E651325F4CD8F1D6A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m3794D59ADC9FAB1ECBAD798827036E9942390FD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__1_m18685D5F782F28A310824B36FAD36B938DF156E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__2_mF89A538B7C2A10E2D31798E7164352902A4B1C5E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD982E712901C71C6FE1E752C74307444C1DEB98A 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Single>
struct Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD738E6373B31F14A981281B01E4CD42093B76C97* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB48EF58C1CCCF0C8B223824F8624FF902FA9205D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1D42A9E0E3FCF5D056F90DE31EE155F6AB9C4ADD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Phezu.Util.Tokenizer/Token>
struct List_1_t678434BE3728D08672059C5165BFE76A332848B8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TokenU5BU5D_t6A5EEC44AC4F6924669D228A79EE9B448EFC678D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t678434BE3728D08672059C5165BFE76A332848B8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TokenU5BU5D_t6A5EEC44AC4F6924669D228A79EE9B448EFC678D* ___s_emptyArray_5;
};

// Phezu.Util.MinHeap`3<System.Single,System.Int32,System.Collections.Generic.Dictionary`2<System.Single,System.Int32>>
struct MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Phezu.Util.MinHeap`3::values
	List_1_tC7866C4163CF296EDC67C92EC60E1B7CCEB9C27B* ___values_0;
	// TDictionary Phezu.Util.MinHeap`3::indexInList
	Dictionary_2_t72CA64D07B0F6A0E5D97B0D6C8CD64A683AAC155* ___indexInList_1;
	// System.Collections.Generic.IComparer`1<TValue> Phezu.Util.MinHeap`3::comparer
	RuntimeObject* ___comparer_2;
};

// UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject>
struct ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528  : public RuntimeObject
{
	// System.Collections.Generic.Stack`1<T> UnityEngine.Pool.ObjectPool`1::m_Stack
	Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* ___m_Stack_0;
	// System.Func`1<T> UnityEngine.Pool.ObjectPool`1::m_CreateFunc
	Func_1_t2C71FBC561D6EB520D698CBC4D1FF81B6894C6D4* ___m_CreateFunc_1;
	// System.Action`1<T> UnityEngine.Pool.ObjectPool`1::m_ActionOnGet
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___m_ActionOnGet_2;
	// System.Action`1<T> UnityEngine.Pool.ObjectPool`1::m_ActionOnRelease
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___m_ActionOnRelease_3;
	// System.Action`1<T> UnityEngine.Pool.ObjectPool`1::m_ActionOnDestroy
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___m_ActionOnDestroy_4;
	// System.Int32 UnityEngine.Pool.ObjectPool`1::m_MaxSize
	int32_t ___m_MaxSize_5;
	// System.Boolean UnityEngine.Pool.ObjectPool`1::m_CollectionCheck
	bool ___m_CollectionCheck_6;
	// System.Int32 UnityEngine.Pool.ObjectPool`1::<CountAll>k__BackingField
	int32_t ___U3CCountAllU3Ek__BackingField_7;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Phezu.Util.FMath
struct FMath_t0C8A426E4C28F4F8354279983F5F30094B239D69  : public RuntimeObject
{
};

// Phezu.Util.FileReader
struct FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> Phezu.Util.FileReader::m_Lines
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_Lines_0;
	// System.Int32 Phezu.Util.FileReader::m_LineIndex
	int32_t ___m_LineIndex_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Phezu.Util.MinSubsetSum
struct MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D  : public RuntimeObject
{
	// System.Single[] Phezu.Util.MinSubsetSum::mArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___mArray_0;
	// System.Single Phezu.Util.MinSubsetSum::mArraySum
	float ___mArraySum_1;
	// System.Int32[][] Phezu.Util.MinSubsetSum::mIteratorStates
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___mIteratorStates_2;
	// System.Single[] Phezu.Util.MinSubsetSum::mIteratorSums
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___mIteratorSums_3;
	// Phezu.Util.MinHeap`3<System.Single,System.Int32,System.Collections.Generic.Dictionary`2<System.Single,System.Int32>> Phezu.Util.MinSubsetSum::mSumsMinHeap
	MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB* ___mSumsMinHeap_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Phezu.Util.TimedSpawner
struct TimedSpawner_t23237D1051E78A2C341D803349E73B1A6A8CC9A2  : public RuntimeObject
{
	// UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject> Phezu.Util.TimedSpawner::mObjectPool
	ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528* ___mObjectPool_0;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Single> Phezu.Util.TimedSpawner::mTimers
	Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* ___mTimers_1;
};

// Phezu.Util.Tokenizer
struct Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Char> Phezu.Util.Tokenizer::m_SpecialCharacters
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___m_SpecialCharacters_0;
	// System.Char Phezu.Util.Tokenizer::m_Seperator
	Il2CppChar ___m_Seperator_1;
	// System.Collections.Generic.List`1<Phezu.Util.Tokenizer/Token> Phezu.Util.Tokenizer::m_LineTokens
	List_1_t678434BE3728D08672059C5165BFE76A332848B8* ___m_LineTokens_2;
	// System.Text.StringBuilder Phezu.Util.Tokenizer::m_CurrWord
	StringBuilder_t* ___m_CurrWord_3;
	// System.Boolean Phezu.Util.Tokenizer::m_IsBuildingToken
	bool ___m_IsBuildingToken_4;
};

// Phezu.Util.UserData
struct UserData_tD2CA28734F8D0284B840041F449F30A95F05C05B  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Phezu.Util.MinSubsetSum/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3  : public RuntimeObject
{
	// Phezu.Util.MinSubsetSum Phezu.Util.MinSubsetSum/<>c__DisplayClass12_0::<>4__this
	MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* ___U3CU3E4__this_0;
	// System.Int32 Phezu.Util.MinSubsetSum/<>c__DisplayClass12_0::iteratorIndex
	int32_t ___iteratorIndex_1;
};

// Phezu.Util.MinSubsetSum/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2  : public RuntimeObject
{
	// Phezu.Util.MinSubsetSum Phezu.Util.MinSubsetSum/<>c__DisplayClass13_0::<>4__this
	MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* ___U3CU3E4__this_0;
	// System.Int32 Phezu.Util.MinSubsetSum/<>c__DisplayClass13_0::iteratorIndex
	int32_t ___iteratorIndex_1;
};

// Phezu.Util.TimedSpawner/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441  : public RuntimeObject
{
	// UnityEngine.GameObject Phezu.Util.TimedSpawner/<>c__DisplayClass2_0::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_0;
	// System.Action`1<UnityEngine.GameObject> Phezu.Util.TimedSpawner/<>c__DisplayClass2_0::onCreate
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___onCreate_1;
	// System.Action`1<UnityEngine.GameObject> Phezu.Util.TimedSpawner/<>c__DisplayClass2_0::onGet
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___onGet_2;
	// Phezu.Util.TimedSpawner Phezu.Util.TimedSpawner/<>c__DisplayClass2_0::<>4__this
	TimedSpawner_t23237D1051E78A2C341D803349E73B1A6A8CC9A2* ___U3CU3E4__this_3;
	// System.Single Phezu.Util.TimedSpawner/<>c__DisplayClass2_0::activeDurationInSecs
	float ___activeDurationInSecs_4;
	// System.Action`1<UnityEngine.GameObject> Phezu.Util.TimedSpawner/<>c__DisplayClass2_0::onRelease
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___onRelease_5;
};

// Phezu.Util.Tokenizer/Token
struct Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493  : public RuntimeObject
{
	// System.String Phezu.Util.Tokenizer/Token::<Word>k__BackingField
	String_t* ___U3CWordU3Ek__BackingField_0;
	// System.Boolean Phezu.Util.Tokenizer/Token::<IsSpecial>k__BackingField
	bool ___U3CIsSpecialU3Ek__BackingField_1;
	// System.Boolean Phezu.Util.Tokenizer/Token::<AtEndOfLine>k__BackingField
	bool ___U3CAtEndOfLineU3Ek__BackingField_2;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ScriptableObject>
struct Enumerator_tBD2A3CB7D686CFDC7DE4054EFB9DCCCB3B7ACF4E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Single>
struct KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Single,System.Int32>
struct KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	float ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,System.Single>
struct Enumerator_t95CD3BA1B2BBED4D5B3C77D724AA84659BD14D6D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Phezu.Util.RequireInterfaceAttribute
struct RequireInterfaceAttribute_t01D46B1A2D89C10E6E31211FEFE24BEF69DD7C3E  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Type Phezu.Util.RequireInterfaceAttribute::<requiredType>k__BackingField
	Type_t* ___U3CrequiredTypeU3Ek__BackingField_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// SceneFieldAttribute
struct SceneFieldAttribute_tB110A6D4D29307E0CE92A8C4E3259ACB7709F197  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<UnityEngine.GameObject>
struct Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Func`1<UnityEngine.GameObject>
struct Func_1_t2C71FBC561D6EB520D698CBC4D1FF81B6894C6D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.Single>
struct Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Phezu.Util.Config
struct Config_t221EF6EC94659C17112A886383C0148F74477ABA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Phezu.Util.RuntimeAssetHandler
struct RuntimeAssetHandler_t5AC1A35E95ABDE260E5D77989296AA34B534DD51  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> Phezu.Util.RuntimeAssetHandler::allRuntimeAssets
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___allRuntimeAssets_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
};
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Single>[]
struct KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 m_Items[1];

	inline KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// T[] System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.MinHeap`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinHeap_3__ctor_mAA5115B2270D7525C0E45B3445757201ACA819EE_gshared (/*Phezu.Util.MinHeap`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/MinHeap_3_t8CF65313E70443EDCFF467D2BD3B70E25DBFA445* __this, const RuntimeMethod* method) ;
// System.Void Phezu.Util.MinHeap`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinHeap_3_Add_m68E7C85C7FA0A3A0E559BB67BC34CD35EE3265C0_gshared (/*Phezu.Util.MinHeap`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/MinHeap_3_t8CF65313E70443EDCFF467D2BD3B70E25DBFA445* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___val1, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mCA0D4A157D5453421E5E883B0A9489E97328A9BC_gshared (RuntimeObject* ___source0, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___keySelector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> Phezu.Util.MinHeap`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ExtractMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinHeap_3_ExtractMin_mD756D4F08C6558196D9340A465DC8CA397B8D87D_gshared (/*Phezu.Util.MinHeap`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/MinHeap_3_t8CF65313E70443EDCFF467D2BD3B70E25DBFA445* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pool.ObjectPool`1<System.Object>::.ctor(System.Func`1<T>,System.Action`1<T>,System.Action`1<T>,System.Action`1<T>,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___createFunc0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___actionOnGet1, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___actionOnRelease2, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___actionOnDestroy3, bool ___collectionCheck4, int32_t ___defaultCapacity5, int32_t ___maxSize6, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pool.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject* ___element0, const RuntimeMethod* method) ;
// T UnityEngine.Pool.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisIl2CppFullySharedGenericAny_m40E4F8989539AFEF3812EAC9D9AD165D258D5814_gshared (RuntimeObject* ___source0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;

// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.QualitySettings::set_vSyncCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_set_vSyncCount_m0F1D9979392C140D248C6C3736F882A5A5C860E4 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)il2cppRetVal;
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Phezu.Util.FileReader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileReader_Initialize_mFF494A04590D57B79537B47C3101C3C63033E0D9 (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, const RuntimeMethod* method) ;
// System.Void Phezu.Util.FileReader::OpenFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileReader_OpenFile_mEB5640F78D15E3A9C92BE26102B87EEF9C0D3BA8 (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, String_t* ___filePath0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean Phezu.Util.FileReader::HasNextLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileReader_HasNextLine_m59CE37DB356C1BCAF6F7742680ED30D74061919A (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.IO.StreamReader Phezu.Util.FileReader::GetFileReader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* FileReader_GetFileReader_m28D311C1D9FC79C390E181E70B0C08D0B6C9D509 (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, String_t* ___filePath0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.FileReader::ReadFile(System.IO.StreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileReader_ReadFile_m7ACED6D76B333F75D3B6192515BE7E8D24736814 (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___fileReader0, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.String::op_Implicit(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8 (String_t* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Single System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Enumerable_Sum_m1374719E4DC4497F0842561BCCA42070CECA9AD0 (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Int32 Phezu.Util.MinSubsetSum::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MinSubsetSum_get_Count_m16D2BCF3F8F6078E0C9FA659A1907F31513A63BE (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, const RuntimeMethod* method) ;
// System.Void Phezu.Util.MinHeap`3<System.Single,System.Int32,System.Collections.Generic.Dictionary`2<System.Single,System.Int32>>::.ctor()
inline void MinHeap_3__ctor_mACA92653CFDA00207956A35EDC6A48A76F0AC1EE (MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB* __this, const RuntimeMethod* method)
{
	((  void (*) (/*Phezu.Util.MinHeap`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/MinHeap_3_t8CF65313E70443EDCFF467D2BD3B70E25DBFA445*, const RuntimeMethod*))MinHeap_3__ctor_mAA5115B2270D7525C0E45B3445757201ACA819EE_gshared)((MinHeap_3_t8CF65313E70443EDCFF467D2BD3B70E25DBFA445*)__this, method);
}
// System.Void Phezu.Util.MinSubsetSum::UpdateIteratorSum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinSubsetSum_UpdateIteratorSum_m378B38C352A44C6749E7373A51E37CF2FC873645 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, int32_t ___iteratorIndex0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.MinHeap`3<System.Single,System.Int32,System.Collections.Generic.Dictionary`2<System.Single,System.Int32>>::Add(TKey,TValue)
inline void MinHeap_3_Add_m3FCA292AB75B02EACA9B1597DF7B819A96FF6448 (MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB* __this, float ___key0, int32_t ___val1, const RuntimeMethod* method)
{
	((  void (*) (/*Phezu.Util.MinHeap`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/MinHeap_3_t8CF65313E70443EDCFF467D2BD3B70E25DBFA445*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))MinHeap_3_Add_m68E7C85C7FA0A3A0E559BB67BC34CD35EE3265C0_gshared)((MinHeap_3_t8CF65313E70443EDCFF467D2BD3B70E25DBFA445*)__this, (Il2CppFullySharedGenericAny)&___key0, (Il2CppFullySharedGenericAny)&___val1, method);
}
// System.Void Phezu.Util.MinSubsetSum::IncrementFrontIterator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinSubsetSum_IncrementFrontIterator_m8753371D63BDC3C45A11B3822BA980CBFDF041F6 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, int32_t ___iteratorIndex0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.MinSubsetSum::IncrementInverseIterator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinSubsetSum_IncrementInverseIterator_m063EDD7F2AB7019127C64FE128D1C0ED863BFCA8 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, int32_t ___iteratorIndex0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.MinSubsetSum::SetFrontIteratorSum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinSubsetSum_SetFrontIteratorSum_mA81C8C7049017A23E26B51414B26B3B36F7F5005 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, int32_t ___iteratorIndex0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.MinSubsetSum::SetInverseIteratorSum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinSubsetSum_SetInverseIteratorSum_mD5A468767A3EF55EAC2ACC0CB64C15461994EF71 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, int32_t ___iteratorIndex0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.MinSubsetSum/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mEE526D2A8B5BE24EA567DA4F4276C97D4D2660DE (U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Void System.Func`2<System.Int32,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m21E85B4040A96377ECFBA2A1C40E3A1C0EF3EF7F (Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Int32,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F (RuntimeObject* ___source0, Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* ___keySelector1, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))Enumerable_OrderBy_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mCA0D4A157D5453421E5E883B0A9489E97328A9BC_gshared)((RuntimeObject*)___source0, (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)___keySelector1, method);
	return (RuntimeObject*)il2cppRetVal;
}
// System.Void Phezu.Util.MinSubsetSum/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mD73096581FF0A8E4DEEB787B81D22F7CDF0D29C9 (U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared)((RuntimeObject*)___source0, method);
	return (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cppRetVal;
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> Phezu.Util.MinHeap`3<System.Single,System.Int32,System.Collections.Generic.Dictionary`2<System.Single,System.Int32>>::ExtractMin()
inline KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120 MinHeap_3_ExtractMin_m8A1BA22BCC1F1F2DB35CBF122763876854A012C4 (MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB* __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120 il2cppRetVal;
	((  void (*) (/*Phezu.Util.MinHeap`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/MinHeap_3_t8CF65313E70443EDCFF467D2BD3B70E25DBFA445*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))MinHeap_3_ExtractMin_mD756D4F08C6558196D9340A465DC8CA397B8D87D_gshared)((MinHeap_3_t8CF65313E70443EDCFF467D2BD3B70E25DBFA445*)__this, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Single,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_mAB1FC5832CB06EEF53C3A3E9C2A67258EAC6048E_inline (KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Phezu.Util.MinSubsetSum::IncrementIterator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinSubsetSum_IncrementIterator_m1201DF4E1C48EB5C9D97508D4CE7F1163A6B83E0 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, int32_t ___iteratorIndex0, const RuntimeMethod* method) ;
// System.Single[] Phezu.Util.MinSubsetSum::NextMinSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* MinSubsetSum_NextMinSubset_m00C61A954D6822DDE36589167C13259D3B21EDC3 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, const RuntimeMethod* method) ;
// System.Int32[] Phezu.Util.MinSubsetSum::GetNextSubsetIndicies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* MinSubsetSum_GetNextSubsetIndicies_m1C62F44225473E6381C85725B76D7FE967795189 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, const RuntimeMethod* method) ;
// System.Void Phezu.Util.RequireInterfaceAttribute::set_requiredType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequireInterfaceAttribute_set_requiredType_m4C18A84ADA7FE01C58A20E76C881C1571D84B457_inline (RequireInterfaceAttribute_t01D46B1A2D89C10E6E31211FEFE24BEF69DD7C3E* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ScriptableObject>::.ctor()
inline void List_1__ctor_m613EB9AC2BEA1965B2B521EB77C019C888F5A991 (List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ScriptableObject>::GetEnumerator()
inline Enumerator_tBD2A3CB7D686CFDC7DE4054EFB9DCCCB3B7ACF4E List_1_GetEnumerator_m84D5E21447A2DBAD10CCEEA7B9D6712EA85B8052 (List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* __this, const RuntimeMethod* method)
{
	Enumerator_tBD2A3CB7D686CFDC7DE4054EFB9DCCCB3B7ACF4E il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ScriptableObject>::Dispose()
inline void Enumerator_Dispose_m9B6273E174B51EE2B6C10C92B3E13DE52CBABB90 (Enumerator_tBD2A3CB7D686CFDC7DE4054EFB9DCCCB3B7ACF4E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ScriptableObject>::get_Current()
inline ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* Enumerator_get_Current_mFE985985A6B127D91F611703FAA188B9E13C2705_inline (Enumerator_tBD2A3CB7D686CFDC7DE4054EFB9DCCCB3B7ACF4E* __this, const RuntimeMethod* method)
{
	ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ScriptableObject>::Add(T)
inline void List_1_Add_mBCE8506880A55D2AC0063B4B90EFDE57C0FBE60F_inline (List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* __this, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ScriptableObject>::MoveNext()
inline bool Enumerator_MoveNext_m481909F42F34DB8BEE3021AA3876812492DE1EF6 (Enumerator_tBD2A3CB7D686CFDC7DE4054EFB9DCCCB3B7ACF4E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void Phezu.Util.TimedSpawner/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m270A8439EA82FFC1913E3B53E455DD3CCD9F4EDF (U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Single>::.ctor()
inline void Dictionary_2__ctor_m45E195014CCFE6336B5E004D0737FF6D04E56534 (Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Func`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m046EB3E4ACB238B00990EE892BB74F2B30E6B996 (Func_1_t2C71FBC561D6EB520D698CBC4D1FF81B6894C6D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3FA37AFA5AAB09F49F9C00A7D5B2A5F3D83CBB01 (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject>::.ctor(System.Func`1<T>,System.Action`1<T>,System.Action`1<T>,System.Action`1<T>,System.Boolean,System.Int32,System.Int32)
inline void ObjectPool_1__ctor_mFAEF592622C047291D959988E64185E20CB8CB1B (ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528* __this, Func_1_t2C71FBC561D6EB520D698CBC4D1FF81B6894C6D4* ___createFunc0, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___actionOnGet1, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___actionOnRelease2, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___actionOnDestroy3, bool ___collectionCheck4, int32_t ___defaultCapacity5, int32_t ___maxSize6, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528*, Func_1_t2C71FBC561D6EB520D698CBC4D1FF81B6894C6D4*, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*, bool, int32_t, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F_gshared)(__this, ___createFunc0, ___actionOnGet1, ___actionOnRelease2, ___actionOnDestroy3, ___collectionCheck4, ___defaultCapacity5, ___maxSize6, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Single>::get_Count()
inline int32_t Dictionary_2_get_Count_m9FFDF5270202185F5F627314159D78314394EF3C (Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Single>::GetEnumerator()
inline Enumerator_t95CD3BA1B2BBED4D5B3C77D724AA84659BD14D6D Dictionary_2_GetEnumerator_m5B05E568C9D13FA27E5E907BAD3E2E469E98DF02 (Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* __this, const RuntimeMethod* method)
{
	Enumerator_t95CD3BA1B2BBED4D5B3C77D724AA84659BD14D6D il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,System.Single>::Dispose()
inline void Enumerator_Dispose_m7A3360AF98140FF0B952B4ED7B5D6C4F7780E03B (Enumerator_t95CD3BA1B2BBED4D5B3C77D724AA84659BD14D6D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,System.Single>::get_Current()
inline KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 Enumerator_get_Current_mC7E55286177BE34472F953FDC3D32601C328E750_inline (Enumerator_t95CD3BA1B2BBED4D5B3C77D724AA84659BD14D6D* __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 il2cppRetVal;
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Single>::get_Key()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* KeyValuePair_2_get_Key_m9A1A4D5E7034DE77EB9FA3266E20B54960924E7A_inline (KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5* __this, const RuntimeMethod* method)
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Single>::get_Value()
inline float KeyValuePair_2_get_Value_mF445373A70498E9A9844DC2C04384E837F3444CB_inline (KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5* __this, const RuntimeMethod* method)
{
	float il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Single>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m8FB37AE23EED40DB6F3B22118559ED8C4BC73C1E (KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)&___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,System.Single>::MoveNext()
inline bool Enumerator_MoveNext_m9350D91CA5BD57E5A0FA8EE8BC7CA0E95B7E27C2 (Enumerator_t95CD3BA1B2BBED4D5B3C77D724AA84659BD14D6D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Single>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mAA368612C7FCF7C385A5F6F9865ED8979F5E4B8B (Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)&___value1, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject>::Release(T)
inline void ObjectPool_1_Release_m6A47FE582CCFA96EC938D6374E2AE9FDF7BF7D4C (ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___element0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_gshared)(__this, ___element0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject>::Get()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_1_Get_mA672E936AACD458D3F9E41CFF8BA232F492137DE (ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528*, const RuntimeMethod*))ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void System.Action`1<UnityEngine.GameObject>::Invoke(T)
inline void Action_1_Invoke_mBF1852490A3A2C4508CEF22E3887E57A8E6C6E45_inline (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___obj0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Single>::Add(TKey,TValue)
inline void Dictionary_2_Add_m725045BA11F200D1EFDD76E7C402E5FE68F21DE7 (Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)&___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Single>::Remove(TKey)
inline bool Dictionary_2_Remove_m68FFA13B4F8B9B2E4C5F889EED11E60985B30C99 (Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// System.Boolean System.Linq.Enumerable::Contains<System.Char>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB5300CE24346D869C7AC22CEFB9DA985BF30FCA4 (RuntimeObject* ___source0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Enumerable_Contains_TisIl2CppFullySharedGenericAny_m40E4F8989539AFEF3812EAC9D9AD165D258D5814_gshared)((RuntimeObject*)___source0, (Il2CppFullySharedGenericAny)&___value1, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mF7B8D24C7D34D7A575A8E6E9EE9D3FB4DABB91AE (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___collection0, method);
}
// System.Void System.Collections.Generic.List`1<Phezu.Util.Tokenizer/Token>::.ctor()
inline void List_1__ctor_m88EB510D961B109997B2C1C336B75791B631D3D1 (List_1_t678434BE3728D08672059C5165BFE76A332848B8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.Tokenizer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Reset_m012FCED821F0FC27758F0B0C559A8405F4A0B1BE (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.Tokenizer::ProcessCharacter(System.Char,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_ProcessCharacter_m9738640EFA4FF99D3276AC407B6506527BC0F1EE (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, Il2CppChar ___character0, bool ___isLastCharacter1, const RuntimeMethod* method) ;
// System.Boolean Phezu.Util.Tokenizer::IsSpecialCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_IsSpecialCharacter_m963732E96DBCF569BDC32656A32D9AA702D3A0FA (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, Il2CppChar ___character0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.Tokenizer::ProcessSpecialCharacter(System.Char,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_ProcessSpecialCharacter_mDF0CFD96600C30D5BC60205D3021365B6FA1D93E (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, Il2CppChar ___character0, bool ___isEndOfLineToken1, const RuntimeMethod* method) ;
// System.Boolean Phezu.Util.Tokenizer::ReachedTokenEnd(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_ReachedTokenEnd_mC2D299862C867A654EDA12DA2DA9A19CAD7694BA (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, Il2CppChar ___character0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.Tokenizer::ExtractTokenFromCurrWord(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_ExtractTokenFromCurrWord_mDF76DF99FA1F93D609CA2E543FD6AAE2870FBB29 (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, bool ___isEndOfLineToken0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.Tokenizer::AppendCurrWord(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_AppendCurrWord_m650ED5AB956948AFFCE956B8198BE64398EA2D9E (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, Il2CppChar ___character0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Char>::Contains(T)
inline bool List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.Tokenizer::CreateTokenFromCurrWord(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_CreateTokenFromCurrWord_m72BD204C6AD30B5221E378F722B5689739C98C78 (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, bool ___isEndOfLineToken0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void Phezu.Util.Tokenizer/Token::.ctor(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_m3229717B808E049AB6EBF79F7489B41C287179CE (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, String_t* ___word0, bool ___isSpecial1, bool ___atEndOfLine2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Phezu.Util.Tokenizer/Token>::Add(T)
inline void List_1_Add_mC5C154F6C1E95005ECBA27FD59F5195010489904_inline (List_1_t678434BE3728D08672059C5165BFE76A332848B8* __this, Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Void Phezu.Util.Tokenizer/Token::set_Word(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Token_set_Word_m45E749A88EBA3D8D8CAE562D412B4374C847AA1F_inline (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.Tokenizer/Token::set_IsSpecial(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Token_set_IsSpecial_m0FF16480A94199BE876BD974722356A60A910942_inline (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Phezu.Util.Tokenizer/Token::set_AtEndOfLine(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Token_set_AtEndOfLine_mFBDEAF9AF97118DE922BBC0CD4D654E1F75D6608_inline (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.JsonUtility::FromJsonOverwrite(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_FromJsonOverwrite_mF60C8238431C1A42F7F482BB717757B281570D56 (String_t* ___json0, RuntimeObject* ___objectToOverwrite1, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline)((ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*)__this, (Il2CppFullySharedGenericAny*)___ptr0, ___length1, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// System.Void SceneFieldAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneFieldAttribute__ctor_mBE2655C9C6F54BBF4B2272D55C401CC98F88B140 (SceneFieldAttribute_tB110A6D4D29307E0CE92A8C4E3259ACB7709F197* __this, const RuntimeMethod* method) 
{
	{
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
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
// System.Void Phezu.Util.Config::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config_Awake_mDFFCD60664D56B353F0647918B36386E37083175 (Config_t221EF6EC94659C17112A886383C0148F74477ABA* __this, const RuntimeMethod* method) 
{
	{
		// Application.targetFrameRate = 200;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)200), NULL);
		// QualitySettings.vSyncCount = 0;
		QualitySettings_set_vSyncCount_m0F1D9979392C140D248C6C3736F882A5A5C860E4(0, NULL);
		// }
		return;
	}
}
// System.Void Phezu.Util.Config::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_mFCF828DD0C05CF4899D58DBAA6E68C62AF9272A9 (Config_t221EF6EC94659C17112A886383C0148F74477ABA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String[] Phezu.Util.FileReader::get_Lines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* FileReader_get_Lines_m35E90D1C69C4EF43D4738DEB4CDB071550CFE5B5 (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string[] Lines => m_Lines.ToArray();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___m_Lines_0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_0, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Phezu.Util.FileReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileReader__ctor_m8ABAFEF95EF8D48A7475488F8707FE866523EAE6 (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, const RuntimeMethod* method) 
{
	{
		// public FileReader() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Initialize();
		FileReader_Initialize_mFF494A04590D57B79537B47C3101C3C63033E0D9(__this, NULL);
		// }
		return;
	}
}
// System.Void Phezu.Util.FileReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileReader__ctor_m2538F7831EBCC0F366AB5B7AAE6C69C9CBD281CA (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, String_t* ___filePath0, const RuntimeMethod* method) 
{
	{
		// public FileReader(string filePath) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Initialize();
		FileReader_Initialize_mFF494A04590D57B79537B47C3101C3C63033E0D9(__this, NULL);
		// OpenFile(filePath);
		String_t* L_0 = ___filePath0;
		FileReader_OpenFile_mEB5640F78D15E3A9C92BE26102B87EEF9C0D3BA8(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Phezu.Util.FileReader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileReader_Initialize_mFF494A04590D57B79537B47C3101C3C63033E0D9 (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Lines = new();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___m_Lines_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Lines_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Phezu.Util.FileReader::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileReader_Clear_mF9C10E6E940BD4403AD8E93EE28702CE1E66A1CA (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Lines = new();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___m_Lines_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Lines_0), (void*)L_0);
		// m_LineIndex = 0;
		__this->___m_LineIndex_1 = 0;
		// }
		return;
	}
}
// System.Boolean Phezu.Util.FileReader::HasNextLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileReader_HasNextLine_m59CE37DB356C1BCAF6F7742680ED30D74061919A (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return m_LineIndex < m_Lines.Count;
		int32_t L_0 = __this->___m_LineIndex_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___m_Lines_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_1, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0);
		goto IL_0017;
	}

IL_0017:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Phezu.Util.FileReader::NextLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileReader_NextLine_mFE5222358961AC31028E0BB57DC187C76928559C (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (HasNextLine())
		bool L_0;
		L_0 = FileReader_HasNextLine_m59CE37DB356C1BCAF6F7742680ED30D74061919A(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_LineIndex++;
		int32_t L_2 = __this->___m_LineIndex_1;
		__this->___m_LineIndex_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.String Phezu.Util.FileReader::GetCurrentLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileReader_GetCurrentLine_mF89BBAB050445401186E4671FBD6C16E3BA6D3DA (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (m_LineIndex < m_Lines.Count)
		int32_t L_0 = __this->___m_LineIndex_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___m_Lines_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_1, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// return m_Lines[m_LineIndex];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___m_Lines_0;
		int32_t L_5 = __this->___m_LineIndex_1;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_4, L_5, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_1 = L_6;
		goto IL_0030;
	}

IL_002c:
	{
		// return null;
		V_1 = (String_t*)NULL;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.Void Phezu.Util.FileReader::ResetLineIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileReader_ResetLineIndex_mCD10BC2E456065AE15F559D9477F4A35BDCFEA3B (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, const RuntimeMethod* method) 
{
	{
		// m_LineIndex = 0;
		__this->___m_LineIndex_1 = 0;
		// }
		return;
	}
}
// System.Void Phezu.Util.FileReader::OpenFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileReader_OpenFile_mEB5640F78D15E3A9C92BE26102B87EEF9C0D3BA8 (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, String_t* ___filePath0, const RuntimeMethod* method) 
{
	{
		// ReadFile(GetFileReader(filePath));
		String_t* L_0 = ___filePath0;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_1;
		L_1 = FileReader_GetFileReader_m28D311C1D9FC79C390E181E70B0C08D0B6C9D509(__this, L_0, NULL);
		FileReader_ReadFile_m7ACED6D76B333F75D3B6192515BE7E8D24736814(__this, L_1, NULL);
		// }
		return;
	}
}
// System.IO.StreamReader Phezu.Util.FileReader::GetFileReader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* FileReader_GetFileReader_m28D311C1D9FC79C390E181E70B0C08D0B6C9D509 (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_0 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// StreamReader fileReader = new(filePath);
		String_t* L_0 = ___filePath0;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_1 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6(L_1, L_0, NULL);
		V_0 = L_1;
		// return fileReader;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000d;
		}
		throw e;
	}

CATCH_000d:
	{// begin catch(System.Exception)
		// catch (Exception e) {
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// throw e;
		Exception_t* L_3 = V_2;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileReader_GetFileReader_m28D311C1D9FC79C390E181E70B0C08D0B6C9D509_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0011:
	{
		// }
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_4 = V_1;
		return L_4;
	}
}
// System.Void Phezu.Util.FileReader::ReadFile(System.IO.StreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileReader_ReadFile_m7ACED6D76B333F75D3B6192515BE7E8D24736814 (FileReader_t337471450D3E46E9027C682D7E4536C1144B5F81* __this, StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___fileReader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// int counter = 0;
		V_1 = 0;
		goto IL_0022;
	}

IL_0005:
	{
		// m_Lines.Add(new(line));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___m_Lines_0;
		String_t* L_1 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2;
		L_2 = String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline(L_1, NULL);
		String_t* L_3;
		L_3 = String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8(NULL, L_2, NULL);
		NullCheck(L_0);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_0, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// counter++;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0022:
	{
		// while ((line = fileReader.ReadLine()) != null) {
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_5 = ___fileReader0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadLine() */, L_5);
		String_t* L_7 = L_6;
		V_0 = L_7;
		V_2 = (bool)((!(((RuntimeObject*)(String_t*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		// fileReader.Close();
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_9 = ___fileReader0;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_9);
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
// UnityEngine.Vector3 Phezu.Util.FMath::FreeLerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FMath_FreeLerp_m18A7FB25B5A77D15452D8288DA83312451AA74F9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, float ___life2, float ___ratio3, float ___dt4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float K = Mathf.Pow(ratio, -life);
		float L_0 = ___ratio3;
		float L_1 = ___life2;
		float L_2;
		L_2 = powf(L_0, ((-L_1)));
		V_0 = L_2;
		// float t = 1 - Mathf.Pow(K, dt);
		float L_3 = V_0;
		float L_4 = ___dt4;
		float L_5;
		L_5 = powf(L_3, L_4);
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), L_5));
		// return start + (end - start) * t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___start0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___end1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___start0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_8, NULL);
		float L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_11, NULL);
		V_2 = L_12;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_2;
		return L_13;
	}
}
// System.Single Phezu.Util.FMath::GetFreeLerpK(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FMath_GetFreeLerpK_m0C550E49AF1687947DA22AF4E06A7C08811CAF32 (float ___life0, float ___ratio1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return Mathf.Pow(1 - ratio, 1f / life);
		float L_0 = ___ratio1;
		float L_1 = ___life0;
		float L_2;
		L_2 = powf(((float)il2cpp_codegen_subtract((1.0f), L_0)), ((float)((1.0f)/L_1)));
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Single Phezu.Util.FMath::GetFreeLerpT(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FMath_GetFreeLerpT_m63CA99D1CD06237EAC560C74A662C6361587BB13 (float ___K0, float ___dt1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return 1 - Mathf.Pow(K, dt);
		float L_0 = ___K0;
		float L_1 = ___dt1;
		float L_2;
		L_2 = powf(L_0, L_1);
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_2));
		goto IL_0011;
	}

IL_0011:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Phezu.Util.FMath::IsInLayerMask(UnityEngine.LayerMask,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FMath_IsInLayerMask_m716E090322C9E4BB12A244019D9D1B7D90B571AD (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask0, int32_t ___layer1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return layerMask == (layerMask | 1 << layer);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___layerMask0;
		int32_t L_1;
		L_1 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_0, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2 = ___layerMask0;
		int32_t L_3;
		L_3 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_2, NULL);
		int32_t L_4 = ___layer1;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)(L_3|((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))))? 1 : 0);
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Int32 Phezu.Util.FMath::Mod(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FMath_Mod_m530F966891E6B6F0A62F92EE40CD88E7FCB9701B (int32_t ___num0, int32_t ___mod1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (num >= 0)
		int32_t L_0 = ___num0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return num % mod;
		int32_t L_2 = ___num0;
		int32_t L_3 = ___mod1;
		V_1 = ((int32_t)(L_2%L_3));
		goto IL_001b;
	}

IL_0012:
	{
		// return mod - ((-num) % mod);
		int32_t L_4 = ___mod1;
		int32_t L_5 = ___num0;
		int32_t L_6 = ___mod1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)(((-L_5))%L_6))));
		goto IL_001b;
	}

IL_001b:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
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
// System.Int32 Phezu.Util.MinSubsetSum::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MinSubsetSum_get_Count_m16D2BCF3F8F6078E0C9FA659A1907F31513A63BE (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// private int Count { get { return mArray.Length; } }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___mArray_0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_000c;
	}

IL_000c:
	{
		// private int Count { get { return mArray.Length; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Phezu.Util.MinSubsetSum::.ctor(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinSubsetSum__ctor_m6C3641F38CAAA96DA32578AB5D7E8C5E2917A853 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinHeap_3_Add_m3FCA292AB75B02EACA9B1597DF7B819A96FF6448_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinHeap_3__ctor_mACA92653CFDA00207956A35EDC6A48A76F0AC1EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B7_1 = NULL;
	int32_t G_B6_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B6_1 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B8_2 = NULL;
	{
		// public MinSubsetSum(float[] array)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mArray = array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		__this->___mArray_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mArray_0), (void*)L_0);
		// mArraySum = array.Sum();
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___array0;
		float L_2;
		L_2 = Enumerable_Sum_m1374719E4DC4497F0842561BCCA42070CECA9AD0((RuntimeObject*)L_1, NULL);
		__this->___mArraySum_1 = L_2;
		// mIteratorStates = new int[Count - 1][];
		int32_t L_3;
		L_3 = MinSubsetSum_get_Count_m16D2BCF3F8F6078E0C9FA659A1907F31513A63BE(__this, NULL);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)));
		__this->___mIteratorStates_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mIteratorStates_2), (void*)L_4);
		// for (int i = 0; i < Count - 1; i++)
		V_0 = 0;
		goto IL_0097;
	}

IL_0032:
	{
		// int arraySize = i + 1 < Count - i ?
		//     i + 1 :
		//     Count - i - 1;
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = MinSubsetSum_get_Count_m16D2BCF3F8F6078E0C9FA659A1907F31513A63BE(__this, NULL);
		int32_t L_7 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_5, 1))) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7)))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_8;
		L_8 = MinSubsetSum_get_Count_m16D2BCF3F8F6078E0C9FA659A1907F31513A63BE(__this, NULL);
		int32_t L_9 = V_0;
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_8, L_9)), 1));
		goto IL_004f;
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		G_B4_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004f:
	{
		V_1 = G_B4_0;
		// mIteratorStates[i] = new int[arraySize];
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_11 = __this->___mIteratorStates_2;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_14);
		// for (int j = 0; j < arraySize; j++)
		V_2 = 0;
		goto IL_008a;
	}

IL_0062:
	{
		// mIteratorStates[i][j] =
		//     i + 1 < Count - i ? j : Count - (arraySize - j);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_15 = __this->___mIteratorStates_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_2;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = MinSubsetSum_get_Count_m16D2BCF3F8F6078E0C9FA659A1907F31513A63BE(__this, NULL);
		int32_t L_22 = V_0;
		G_B6_0 = L_19;
		G_B6_1 = L_18;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, L_22)))))
		{
			G_B7_0 = L_19;
			G_B7_1 = L_18;
			goto IL_0084;
		}
	}
	{
		int32_t L_23;
		L_23 = MinSubsetSum_get_Count_m16D2BCF3F8F6078E0C9FA659A1907F31513A63BE(__this, NULL);
		int32_t L_24 = V_1;
		int32_t L_25 = V_2;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, ((int32_t)il2cpp_codegen_subtract(L_24, L_25))));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0085;
	}

IL_0084:
	{
		int32_t L_26 = V_2;
		G_B8_0 = L_26;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0085:
	{
		NullCheck(G_B8_2);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (int32_t)G_B8_0);
		// for (int j = 0; j < arraySize; j++)
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_008a:
	{
		// for (int j = 0; j < arraySize; j++)
		int32_t L_28 = V_2;
		int32_t L_29 = V_1;
		V_3 = (bool)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_0062;
		}
	}
	{
		// for (int i = 0; i < Count - 1; i++)
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0097:
	{
		// for (int i = 0; i < Count - 1; i++)
		int32_t L_32 = V_0;
		int32_t L_33;
		L_33 = MinSubsetSum_get_Count_m16D2BCF3F8F6078E0C9FA659A1907F31513A63BE(__this, NULL);
		V_4 = (bool)((((int32_t)L_32) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_33, 1))))? 1 : 0);
		bool L_34 = V_4;
		if (L_34)
		{
			goto IL_0032;
		}
	}
	{
		// mIteratorSums = new float[Count - 1];
		int32_t L_35;
		L_35 = MinSubsetSum_get_Count_m16D2BCF3F8F6078E0C9FA659A1907F31513A63BE(__this, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_35, 1)));
		__this->___mIteratorSums_3 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mIteratorSums_3), (void*)L_36);
		// mSumsMinHeap = new();
		MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB* L_37 = (MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB*)il2cpp_codegen_object_new(MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		MinHeap_3__ctor_mACA92653CFDA00207956A35EDC6A48A76F0AC1EE(L_37, MinHeap_3__ctor_mACA92653CFDA00207956A35EDC6A48A76F0AC1EE_RuntimeMethod_var);
		__this->___mSumsMinHeap_4 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mSumsMinHeap_4), (void*)L_37);
		// for (int i = 0; i < Count - 1; i++)
		V_5 = 0;
		goto IL_00f3;
	}

IL_00cb:
	{
		// UpdateIteratorSum(i);
		int32_t L_38 = V_5;
		MinSubsetSum_UpdateIteratorSum_m378B38C352A44C6749E7373A51E37CF2FC873645(__this, L_38, NULL);
		// mSumsMinHeap.Add(mIteratorSums[i], i);
		MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB* L_39 = __this->___mSumsMinHeap_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = __this->___mIteratorSums_3;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		float L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		int32_t L_44 = V_5;
		NullCheck(L_39);
		MinHeap_3_Add_m3FCA292AB75B02EACA9B1597DF7B819A96FF6448(L_39, L_43, L_44, MinHeap_3_Add_m3FCA292AB75B02EACA9B1597DF7B819A96FF6448_RuntimeMethod_var);
		// for (int i = 0; i < Count - 1; i++)
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00f3:
	{
		// for (int i = 0; i < Count - 1; i++)
		int32_t L_46 = V_5;
		int32_t L_47;
		L_47 = MinSubsetSum_get_Count_m16D2BCF3F8F6078E0C9FA659A1907F31513A63BE(__this, NULL);
		V_6 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))? 1 : 0);
		bool L_48 = V_6;
		if (L_48)
		{
			goto IL_00cb;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Phezu.Util.MinSubsetSum::IncrementIterator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinSubsetSum_IncrementIterator_m1201DF4E1C48EB5C9D97508D4CE7F1163A6B83E0 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, int32_t ___iteratorIndex0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (iteratorIndex + 1 < Count - iteratorIndex)
		int32_t L_0 = ___iteratorIndex0;
		int32_t L_1;
		L_1 = MinSubsetSum_get_Count_m16D2BCF3F8F6078E0C9FA659A1907F31513A63BE(__this, NULL);
		int32_t L_2 = ___iteratorIndex0;
		V_0 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// IncrementFrontIterator(iteratorIndex);
		int32_t L_4 = ___iteratorIndex0;
		MinSubsetSum_IncrementFrontIterator_m8753371D63BDC3C45A11B3822BA980CBFDF041F6(__this, L_4, NULL);
		goto IL_0024;
	}

IL_001c:
	{
		// IncrementInverseIterator(iteratorIndex);
		int32_t L_5 = ___iteratorIndex0;
		MinSubsetSum_IncrementInverseIterator_m063EDD7F2AB7019127C64FE128D1C0ED863BFCA8(__this, L_5, NULL);
	}

IL_0024:
	{
		// UpdateIteratorSum(iteratorIndex);
		int32_t L_6 = ___iteratorIndex0;
		MinSubsetSum_UpdateIteratorSum_m378B38C352A44C6749E7373A51E37CF2FC873645(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void Phezu.Util.MinSubsetSum::UpdateIteratorSum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinSubsetSum_UpdateIteratorSum_m378B38C352A44C6749E7373A51E37CF2FC873645 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, int32_t ___iteratorIndex0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (iteratorIndex + 1 < Count - iteratorIndex)
		int32_t L_0 = ___iteratorIndex0;
		int32_t L_1;
		L_1 = MinSubsetSum_get_Count_m16D2BCF3F8F6078E0C9FA659A1907F31513A63BE(__this, NULL);
		int32_t L_2 = ___iteratorIndex0;
		V_0 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// SetFrontIteratorSum(iteratorIndex);
		int32_t L_4 = ___iteratorIndex0;
		MinSubsetSum_SetFrontIteratorSum_mA81C8C7049017A23E26B51414B26B3B36F7F5005(__this, L_4, NULL);
		goto IL_0024;
	}

IL_001c:
	{
		// SetInverseIteratorSum(iteratorIndex);
		int32_t L_5 = ___iteratorIndex0;
		MinSubsetSum_SetInverseIteratorSum_mD5A468767A3EF55EAC2ACC0CB64C15461994EF71(__this, L_5, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Phezu.Util.MinSubsetSum::SetFrontIteratorSum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinSubsetSum_SetFrontIteratorSum_mA81C8C7049017A23E26B51414B26B3B36F7F5005 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, int32_t ___iteratorIndex0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// mIteratorSums[iteratorIndex] = 0f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___mIteratorSums_3;
		int32_t L_1 = ___iteratorIndex0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (float)(0.0f));
		// for (int i = 0; i < mIteratorStates[iteratorIndex].Length; i++)
		V_0 = 0;
		goto IL_0037;
	}

IL_0012:
	{
		// mIteratorSums[iteratorIndex] += mArray[mIteratorStates[iteratorIndex][i]];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___mIteratorSums_3;
		int32_t L_3 = ___iteratorIndex0;
		NullCheck(L_2);
		float* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		float L_5 = *((float*)L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___mArray_0;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_7 = __this->___mIteratorStates_2;
		int32_t L_8 = ___iteratorIndex0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_6);
		int32_t L_14 = L_13;
		float L_15 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		*((float*)L_4) = (float)((float)il2cpp_codegen_add(L_5, L_15));
		// for (int i = 0; i < mIteratorStates[iteratorIndex].Length; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < mIteratorStates[iteratorIndex].Length; i++)
		int32_t L_17 = V_0;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_18 = __this->___mIteratorStates_2;
		int32_t L_19 = ___iteratorIndex0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		V_1 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))? 1 : 0);
		bool L_22 = V_1;
		if (L_22)
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Phezu.Util.MinSubsetSum::SetInverseIteratorSum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinSubsetSum_SetInverseIteratorSum_mD5A468767A3EF55EAC2ACC0CB64C15461994EF71 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, int32_t ___iteratorIndex0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// mIteratorSums[iteratorIndex] = mArraySum;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___mIteratorSums_3;
		int32_t L_1 = ___iteratorIndex0;
		float L_2 = __this->___mArraySum_1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (float)L_2);
		// for (int i = 0; i < mIteratorStates[iteratorIndex].Length; i++)
		V_0 = 0;
		goto IL_0038;
	}

IL_0013:
	{
		// mIteratorSums[iteratorIndex] -= mArray[mIteratorStates[iteratorIndex][i]];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___mIteratorSums_3;
		int32_t L_4 = ___iteratorIndex0;
		NullCheck(L_3);
		float* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
		float L_6 = *((float*)L_5);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___mArray_0;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_8 = __this->___mIteratorStates_2;
		int32_t L_9 = ___iteratorIndex0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_7);
		int32_t L_15 = L_14;
		float L_16 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		*((float*)L_5) = (float)((float)il2cpp_codegen_subtract(L_6, L_16));
		// for (int i = 0; i < mIteratorStates[iteratorIndex].Length; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < mIteratorStates[iteratorIndex].Length; i++)
		int32_t L_18 = V_0;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_19 = __this->___mIteratorStates_2;
		int32_t L_20 = ___iteratorIndex0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		V_1 = (bool)((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
		bool L_23 = V_1;
		if (L_23)
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Phezu.Util.MinSubsetSum::IncrementFrontIterator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinSubsetSum_IncrementFrontIterator_m8753371D63BDC3C45A11B3822BA980CBFDF041F6 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, int32_t ___iteratorIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CIncrementFrontIteratorU3Eb__0_mFA9DD8EEED70B859E2AD1CB74C503B70BCEC61C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3* L_0 = (U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_mEE526D2A8B5BE24EA567DA4F4276C97D4D2660DE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3* L_2 = V_0;
		int32_t L_3 = ___iteratorIndex0;
		NullCheck(L_2);
		L_2->___iteratorIndex_1 = L_3;
		// int size = mIteratorStates[iteratorIndex].Length;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = __this->___mIteratorStates_2;
		U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___iteratorIndex_1;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		V_1 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
		// List<int> options = new();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_9, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_2 = L_9;
		// for (int i = 0; i < size; i++)
		V_4 = 0;
		goto IL_00ae;
	}

IL_0030:
	{
		// if (i == size - 1)
		int32_t L_10 = V_4;
		int32_t L_11 = V_1;
		V_5 = (bool)((((int32_t)L_10) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_11, 1))))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		// if (mIteratorStates[iteratorIndex][i] == Count - 1)
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_13 = __this->___mIteratorStates_2;
		U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___iteratorIndex_1;
		NullCheck(L_13);
		int32_t L_16 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21;
		L_21 = MinSubsetSum_get_Count_m16D2BCF3F8F6078E0C9FA659A1907F31513A63BE(__this, NULL);
		V_6 = (bool)((((int32_t)L_20) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1))))? 1 : 0);
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_0060;
		}
	}
	{
		// continue;
		goto IL_00a8;
	}

IL_0060:
	{
		// if (i != size - 1)
		int32_t L_23 = V_4;
		int32_t L_24 = V_1;
		V_7 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_009e;
		}
	}
	{
		// if (mIteratorStates[iteratorIndex][i] + 1 == mIteratorStates[iteratorIndex][i + 1])
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_26 = __this->___mIteratorStates_2;
		U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___iteratorIndex_1;
		NullCheck(L_26);
		int32_t L_29 = L_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = V_4;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_34 = __this->___mIteratorStates_2;
		U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = L_35->___iteratorIndex_1;
		NullCheck(L_34);
		int32_t L_37 = L_36;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_8 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_33, 1))) == ((int32_t)L_41))? 1 : 0);
		bool L_42 = V_8;
		if (!L_42)
		{
			goto IL_009e;
		}
	}
	{
		// continue;
		goto IL_00a8;
	}

IL_009e:
	{
		// options.Add(i);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_43 = V_2;
		int32_t L_44 = V_4;
		NullCheck(L_43);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_43, L_44, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00a8:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_45 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00ae:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_46 = V_4;
		int32_t L_47 = V_1;
		V_9 = (bool)((((int32_t)L_46) < ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_9;
		if (L_48)
		{
			goto IL_0030;
		}
	}
	{
		// int indexToIncrement = options.OrderBy((x) => mArray[mIteratorStates[iteratorIndex][x + 1]])
		//     .GetEnumerator().Current;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_49 = V_2;
		U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3* L_50 = V_0;
		Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* L_51 = (Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF*)il2cpp_codegen_object_new(Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		Func_2__ctor_m21E85B4040A96377ECFBA2A1C40E3A1C0EF3EF7F(L_51, L_50, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CIncrementFrontIteratorU3Eb__0_mFA9DD8EEED70B859E2AD1CB74C503B70BCEC61C6_RuntimeMethod_var), NULL);
		RuntimeObject* L_52;
		L_52 = Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F(L_49, L_51, Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F_RuntimeMethod_var);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_52);
		NullCheck(L_53);
		int32_t L_54;
		L_54 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_53);
		V_3 = L_54;
		// mIteratorStates[iteratorIndex][indexToIncrement]++;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_55 = __this->___mIteratorStates_2;
		U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3* L_56 = V_0;
		NullCheck(L_56);
		int32_t L_57 = L_56->___iteratorIndex_1;
		NullCheck(L_55);
		int32_t L_58 = L_57;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		int32_t L_60 = V_3;
		NullCheck(L_59);
		int32_t* L_61 = ((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)));
		int32_t L_62 = *((int32_t*)L_61);
		*((int32_t*)L_61) = (int32_t)((int32_t)il2cpp_codegen_add(L_62, 1));
		// }
		return;
	}
}
// System.Void Phezu.Util.MinSubsetSum::IncrementInverseIterator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinSubsetSum_IncrementInverseIterator_m063EDD7F2AB7019127C64FE128D1C0ED863BFCA8 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, int32_t ___iteratorIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CIncrementInverseIteratorU3Eb__0_m82E400E550B6171831CAD1E651325F4CD8F1D6A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2* L_0 = (U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_mD73096581FF0A8E4DEEB787B81D22F7CDF0D29C9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2* L_2 = V_0;
		int32_t L_3 = ___iteratorIndex0;
		NullCheck(L_2);
		L_2->___iteratorIndex_1 = L_3;
		// int size = mIteratorStates[iteratorIndex].Length;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = __this->___mIteratorStates_2;
		U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___iteratorIndex_1;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		V_1 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
		// List<int> options = new();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_9, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_2 = L_9;
		// for (int i = 0; i < size; i++)
		V_4 = 0;
		goto IL_00a0;
	}

IL_0030:
	{
		// if (i == 0)
		int32_t L_10 = V_4;
		V_5 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		// if (mIteratorStates[iteratorIndex][i] == 0)
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_12 = __this->___mIteratorStates_2;
		U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___iteratorIndex_1;
		NullCheck(L_12);
		int32_t L_15 = L_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_6 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0057;
		}
	}
	{
		// continue;
		goto IL_009a;
	}

IL_0057:
	{
		// if (i != 0)
		int32_t L_21 = V_4;
		V_7 = (bool)((!(((uint32_t)L_21) <= ((uint32_t)0)))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_0090;
		}
	}
	{
		// if (mIteratorStates[iteratorIndex][i] - 1 == mIteratorStates[iteratorIndex][i - 1])
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_23 = __this->___mIteratorStates_2;
		U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = L_24->___iteratorIndex_1;
		NullCheck(L_23);
		int32_t L_26 = L_25;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = V_4;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_31 = __this->___mIteratorStates_2;
		U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = L_32->___iteratorIndex_1;
		NullCheck(L_31);
		int32_t L_34 = L_33;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		int32_t L_36 = V_4;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_8 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_30, 1))) == ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0090;
		}
	}
	{
		// continue;
		goto IL_009a;
	}

IL_0090:
	{
		// options.Add(i);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_40 = V_2;
		int32_t L_41 = V_4;
		NullCheck(L_40);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_40, L_41, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_009a:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00a0:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_43 = V_4;
		int32_t L_44 = V_1;
		V_9 = (bool)((((int32_t)L_43) < ((int32_t)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (L_45)
		{
			goto IL_0030;
		}
	}
	{
		// int indexToDecrement = options.OrderBy((x) => mArray[mIteratorStates[iteratorIndex][x - 1]])
		//     .ToArray()[^1];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_46 = V_2;
		U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2* L_47 = V_0;
		Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* L_48 = (Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF*)il2cpp_codegen_object_new(Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Func_2__ctor_m21E85B4040A96377ECFBA2A1C40E3A1C0EF3EF7F(L_48, L_47, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CIncrementInverseIteratorU3Eb__0_m82E400E550B6171831CAD1E651325F4CD8F1D6A7_RuntimeMethod_var), NULL);
		RuntimeObject* L_49;
		L_49 = Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F(L_46, L_48, Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50;
		L_50 = Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8(L_49, Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = L_50;
		NullCheck(L_51);
		NullCheck(L_51);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_51)->max_length)), 1));
		int32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_3 = L_53;
		// mIteratorStates[iteratorIndex][indexToDecrement]--;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_54 = __this->___mIteratorStates_2;
		U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2* L_55 = V_0;
		NullCheck(L_55);
		int32_t L_56 = L_55->___iteratorIndex_1;
		NullCheck(L_54);
		int32_t L_57 = L_56;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = V_3;
		NullCheck(L_58);
		int32_t* L_60 = ((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)));
		int32_t L_61 = *((int32_t*)L_60);
		*((int32_t*)L_60) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_61, 1));
		// }
		return;
	}
}
// System.Int32[] Phezu.Util.MinSubsetSum::GetNextSubsetIndicies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* MinSubsetSum_GetNextSubsetIndicies_m1C62F44225473E6381C85725B76D7FE967795189 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mAB1FC5832CB06EEF53C3A3E9C2A67258EAC6048E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinHeap_3_Add_m3FCA292AB75B02EACA9B1597DF7B819A96FF6448_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinHeap_3_ExtractMin_m8A1BA22BCC1F1F2DB35CBF122763876854A012C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Exception_t* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// minSubset = mSumsMinHeap.ExtractMin();
		MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB* L_0 = __this->___mSumsMinHeap_4;
		NullCheck(L_0);
		KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120 L_1;
		L_1 = MinHeap_3_ExtractMin_m8A1BA22BCC1F1F2DB35CBF122763876854A012C4(L_0, MinHeap_3_ExtractMin_m8A1BA22BCC1F1F2DB35CBF122763876854A012C4_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0018;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0011;
		}
		throw e;
	}

CATCH_0011:
	{// begin catch(System.Exception)
		// catch (Exception _) {
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// return null;
		V_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0079;
	}// end catch (depth: 1)

IL_0018:
	{
		// int iteratorIndex = minSubset.Value;
		int32_t L_2;
		L_2 = KeyValuePair_2_get_Value_mAB1FC5832CB06EEF53C3A3E9C2A67258EAC6048E_inline((&V_0), KeyValuePair_2_get_Value_mAB1FC5832CB06EEF53C3A3E9C2A67258EAC6048E_RuntimeMethod_var);
		V_1 = L_2;
		// int[] minSumSubsetIndicies = new int[mIteratorStates[iteratorIndex].Length];
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_3 = __this->___mIteratorStates_2;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		V_2 = L_7;
		// for (int i = 0; i < minSumSubsetIndicies.Length; i++)
		V_5 = 0;
		goto IL_004a;
	}

IL_0035:
	{
		// minSumSubsetIndicies[i] = mIteratorStates[iteratorIndex][i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_2;
		int32_t L_9 = V_5;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_10 = __this->___mIteratorStates_2;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = V_5;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_16);
		// for (int i = 0; i < minSumSubsetIndicies.Length; i++)
		int32_t L_17 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < minSumSubsetIndicies.Length; i++)
		int32_t L_18 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		NullCheck(L_19);
		V_6 = (bool)((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))? 1 : 0);
		bool L_20 = V_6;
		if (L_20)
		{
			goto IL_0035;
		}
	}
	{
		// IncrementIterator(iteratorIndex);
		int32_t L_21 = V_1;
		MinSubsetSum_IncrementIterator_m1201DF4E1C48EB5C9D97508D4CE7F1163A6B83E0(__this, L_21, NULL);
		// mSumsMinHeap.Add(mIteratorSums[iteratorIndex], iteratorIndex);
		MinHeap_3_t6DFACC56073031B3E910D9DC842611B0C60C93AB* L_22 = __this->___mSumsMinHeap_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = __this->___mIteratorSums_3;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = V_1;
		NullCheck(L_22);
		MinHeap_3_Add_m3FCA292AB75B02EACA9B1597DF7B819A96FF6448(L_22, L_26, L_27, MinHeap_3_Add_m3FCA292AB75B02EACA9B1597DF7B819A96FF6448_RuntimeMethod_var);
		// return minSumSubsetIndicies;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_2;
		V_4 = L_28;
		goto IL_0079;
	}

IL_0079:
	{
		// }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_4;
		return L_29;
	}
}
// System.Single Phezu.Util.MinSubsetSum::NextMinSum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinSubsetSum_NextMinSum_mA447BD3912CC56A968A5218F3C5BC1A17E6E8B2D (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	{
		// float[] minSumSubsetIndicies = NextMinSubset();
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0;
		L_0 = MinSubsetSum_NextMinSubset_m00C61A954D6822DDE36589167C13259D3B21EDC3(__this, NULL);
		V_0 = L_0;
		// if (minSumSubsetIndicies == null)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = V_0;
		V_2 = (bool)((((RuntimeObject*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return 0f;
		V_3 = (0.0f);
		goto IL_0045;
	}

IL_0018:
	{
		// float minSum = 0f;
		V_1 = (0.0f);
		// foreach (float value in minSumSubsetIndicies)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0039;
	}

IL_0027:
	{
		// foreach (float value in minSumSubsetIndicies)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		float L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_6 = L_7;
		// minSum += value;
		float L_8 = V_1;
		float L_9 = V_6;
		V_1 = ((float)il2cpp_codegen_add(L_8, L_9));
		int32_t L_10 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0039:
	{
		// foreach (float value in minSumSubsetIndicies)
		int32_t L_11 = V_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_4;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0027;
		}
	}
	{
		// return minSum;
		float L_13 = V_1;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		float L_14 = V_3;
		return L_14;
	}
}
// System.Single[] Phezu.Util.MinSubsetSum::NextMinSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* MinSubsetSum_NextMinSubset_m00C61A954D6822DDE36589167C13259D3B21EDC3 (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	bool V_2 = false;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		// int[] minSumSubsetIndicies = GetNextSubsetIndicies();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = MinSubsetSum_GetNextSubsetIndicies_m1C62F44225473E6381C85725B76D7FE967795189(__this, NULL);
		V_0 = L_0;
		// if (minSumSubsetIndicies == null)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_0;
		V_2 = (bool)((((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		V_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		goto IL_004a;
	}

IL_0014:
	{
		// float[] minSubset = new float[minSumSubsetIndicies.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		NullCheck(L_3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_1 = L_4;
		// for (int i = 0; i < minSubset.Length; i++)
		V_4 = 0;
		goto IL_0039;
	}

IL_0022:
	{
		// minSubset[i] = mArray[minSumSubsetIndicies[i]];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_1;
		int32_t L_6 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___mArray_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		int32_t L_12 = L_11;
		float L_13 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (float)L_13);
		// for (int i = 0; i < minSubset.Length; i++)
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < minSubset.Length; i++)
		int32_t L_15 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = V_1;
		NullCheck(L_16);
		V_5 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0);
		bool L_17 = V_5;
		if (L_17)
		{
			goto IL_0022;
		}
	}
	{
		// return minSubset;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = V_1;
		V_3 = L_18;
		goto IL_004a;
	}

IL_004a:
	{
		// }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = V_3;
		return L_19;
	}
}
// System.Int32[] Phezu.Util.MinSubsetSum::NextMinSubsetIndicies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* MinSubsetSum_NextMinSubsetIndicies_mFCA3026C3B2EE262E192F56474FCAAA112168D7A (MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		// return GetNextSubsetIndicies();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = MinSubsetSum_GetNextSubsetIndicies_m1C62F44225473E6381C85725B76D7FE967795189(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_0;
		return L_1;
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
// System.Void Phezu.Util.MinSubsetSum/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mEE526D2A8B5BE24EA567DA4F4276C97D4D2660DE (U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single Phezu.Util.MinSubsetSum/<>c__DisplayClass12_0::<IncrementFrontIterator>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass12_0_U3CIncrementFrontIteratorU3Eb__0_mFA9DD8EEED70B859E2AD1CB74C503B70BCEC61C6 (U3CU3Ec__DisplayClass12_0_t5CA0D2E44ED0A76B2D89C5ED32F239B9358F0FF3* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		// int indexToIncrement = options.OrderBy((x) => mArray[mIteratorStates[iteratorIndex][x + 1]])
		MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0->___mArray_0;
		MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_3 = L_2->___mIteratorStates_2;
		int32_t L_4 = __this->___iteratorIndex_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = ___x0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_1);
		int32_t L_10 = L_9;
		float L_11 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return L_11;
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
// System.Void Phezu.Util.MinSubsetSum/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mD73096581FF0A8E4DEEB787B81D22F7CDF0D29C9 (U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single Phezu.Util.MinSubsetSum/<>c__DisplayClass13_0::<IncrementInverseIterator>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass13_0_U3CIncrementInverseIteratorU3Eb__0_m82E400E550B6171831CAD1E651325F4CD8F1D6A7 (U3CU3Ec__DisplayClass13_0_t06C0245F138D54024DD81537C4B88993B61982E2* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		// int indexToDecrement = options.OrderBy((x) => mArray[mIteratorStates[iteratorIndex][x - 1]])
		MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0->___mArray_0;
		MinSubsetSum_tD11C5F64F57FBBA6C8237BE452ECED849F22200D* L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_3 = L_2->___mIteratorStates_2;
		int32_t L_4 = __this->___iteratorIndex_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = ___x0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_1);
		int32_t L_10 = L_9;
		float L_11 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return L_11;
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
// System.Type Phezu.Util.RequireInterfaceAttribute::get_requiredType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* RequireInterfaceAttribute_get_requiredType_m573100E5AA0C42ABFF0DC96947428E9F9AAFC6FE (RequireInterfaceAttribute_t01D46B1A2D89C10E6E31211FEFE24BEF69DD7C3E* __this, const RuntimeMethod* method) 
{
	{
		// public System.Type requiredType { get; private set; }
		Type_t* L_0 = __this->___U3CrequiredTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Phezu.Util.RequireInterfaceAttribute::set_requiredType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequireInterfaceAttribute_set_requiredType_m4C18A84ADA7FE01C58A20E76C881C1571D84B457 (RequireInterfaceAttribute_t01D46B1A2D89C10E6E31211FEFE24BEF69DD7C3E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public System.Type requiredType { get; private set; }
		Type_t* L_0 = ___value0;
		__this->___U3CrequiredTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequiredTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Phezu.Util.RequireInterfaceAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequireInterfaceAttribute__ctor_m4F3E3453572522535C7694FFD0830A21EBA394A5 (RequireInterfaceAttribute_t01D46B1A2D89C10E6E31211FEFE24BEF69DD7C3E* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		// public RequireInterfaceAttribute(System.Type type)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// requiredType = type;
		Type_t* L_0 = ___type0;
		RequireInterfaceAttribute_set_requiredType_m4C18A84ADA7FE01C58A20E76C881C1571D84B457_inline(__this, L_0, NULL);
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
// System.Void Phezu.Util.RuntimeAssetHandler::LoadRuntimeAssets(System.Collections.Generic.List`1<UnityEngine.ScriptableObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeAssetHandler_LoadRuntimeAssets_mDBFA4C9AD13CA9D9BC6AA76D097490ECDE5A369A (RuntimeAssetHandler_t5AC1A35E95ABDE260E5D77989296AA34B534DD51* __this, List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___assets0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9B6273E174B51EE2B6C10C92B3E13DE52CBABB90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m481909F42F34DB8BEE3021AA3876812492DE1EF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFE985985A6B127D91F611703FAA188B9E13C2705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRuntimeAsset_t21350255F2102EB17F46D75768F76AA206ED06A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBCE8506880A55D2AC0063B4B90EFDE57C0FBE60F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m84D5E21447A2DBAD10CCEEA7B9D6712EA85B8052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m613EB9AC2BEA1965B2B521EB77C019C888F5A991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tBD2A3CB7D686CFDC7DE4054EFB9DCCCB3B7ACF4E V_1;
	memset((&V_1), 0, sizeof(V_1));
	ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		// if (allRuntimeAssets == null)
		List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* L_0 = __this->___allRuntimeAssets_4;
		V_0 = (bool)((((RuntimeObject*)(List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// allRuntimeAssets = new();
		List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* L_2 = (List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828*)il2cpp_codegen_object_new(List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m613EB9AC2BEA1965B2B521EB77C019C888F5A991(L_2, List_1__ctor_m613EB9AC2BEA1965B2B521EB77C019C888F5A991_RuntimeMethod_var);
		__this->___allRuntimeAssets_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allRuntimeAssets_4), (void*)L_2);
	}

IL_0019:
	{
		// foreach (var asset in assets) {
		List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* L_3 = ___assets0;
		NullCheck(L_3);
		Enumerator_tBD2A3CB7D686CFDC7DE4054EFB9DCCCB3B7ACF4E L_4;
		L_4 = List_1_GetEnumerator_m84D5E21447A2DBAD10CCEEA7B9D6712EA85B8052(L_3, List_1_GetEnumerator_m84D5E21447A2DBAD10CCEEA7B9D6712EA85B8052_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9B6273E174B51EE2B6C10C92B3E13DE52CBABB90((&V_1), Enumerator_Dispose_m9B6273E174B51EE2B6C10C92B3E13DE52CBABB90_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004b_1;
			}

IL_0023_1:
			{
				// foreach (var asset in assets) {
				ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_5;
				L_5 = Enumerator_get_Current_mFE985985A6B127D91F611703FAA188B9E13C2705_inline((&V_1), Enumerator_get_Current_mFE985985A6B127D91F611703FAA188B9E13C2705_RuntimeMethod_var);
				V_2 = L_5;
				// IRuntimeAsset runtimeAsset = asset as IRuntimeAsset;
				ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_6 = V_2;
				V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IRuntimeAsset_t21350255F2102EB17F46D75768F76AA206ED06A1_il2cpp_TypeInfo_var));
				// if (runtimeAsset != null)
				RuntimeObject* L_7 = V_3;
				V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_8 = V_4;
				if (!L_8)
				{
					goto IL_004a_1;
				}
			}
			{
				// allRuntimeAssets.Add(asset);
				List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* L_9 = __this->___allRuntimeAssets_4;
				ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_10 = V_2;
				NullCheck(L_9);
				List_1_Add_mBCE8506880A55D2AC0063B4B90EFDE57C0FBE60F_inline(L_9, L_10, List_1_Add_mBCE8506880A55D2AC0063B4B90EFDE57C0FBE60F_RuntimeMethod_var);
			}

IL_004a_1:
			{
			}

IL_004b_1:
			{
				// foreach (var asset in assets) {
				bool L_11;
				L_11 = Enumerator_MoveNext_m481909F42F34DB8BEE3021AA3876812492DE1EF6((&V_1), Enumerator_MoveNext_m481909F42F34DB8BEE3021AA3876812492DE1EF6_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Phezu.Util.RuntimeAssetHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeAssetHandler_Awake_m0FD4CFCEB9CF71155DED17EA823BFADE42D7DB40 (RuntimeAssetHandler_t5AC1A35E95ABDE260E5D77989296AA34B534DD51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9B6273E174B51EE2B6C10C92B3E13DE52CBABB90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m481909F42F34DB8BEE3021AA3876812492DE1EF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFE985985A6B127D91F611703FAA188B9E13C2705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRuntimeAsset_t21350255F2102EB17F46D75768F76AA206ED06A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m84D5E21447A2DBAD10CCEEA7B9D6712EA85B8052_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBD2A3CB7D686CFDC7DE4054EFB9DCCCB3B7ACF4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* V_1 = NULL;
	{
		// foreach (var runtimeAsset in allRuntimeAssets) {
		List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* L_0 = __this->___allRuntimeAssets_4;
		NullCheck(L_0);
		Enumerator_tBD2A3CB7D686CFDC7DE4054EFB9DCCCB3B7ACF4E L_1;
		L_1 = List_1_GetEnumerator_m84D5E21447A2DBAD10CCEEA7B9D6712EA85B8052(L_0, List_1_GetEnumerator_m84D5E21447A2DBAD10CCEEA7B9D6712EA85B8052_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9B6273E174B51EE2B6C10C92B3E13DE52CBABB90((&V_0), Enumerator_Dispose_m9B6273E174B51EE2B6C10C92B3E13DE52CBABB90_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0010_1:
			{
				// foreach (var runtimeAsset in allRuntimeAssets) {
				ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
				L_2 = Enumerator_get_Current_mFE985985A6B127D91F611703FAA188B9E13C2705_inline((&V_0), Enumerator_get_Current_mFE985985A6B127D91F611703FAA188B9E13C2705_RuntimeMethod_var);
				V_1 = L_2;
				// (runtimeAsset as IRuntimeAsset).Reset();
				ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_3 = V_1;
				NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_3, IRuntimeAsset_t21350255F2102EB17F46D75768F76AA206ED06A1_il2cpp_TypeInfo_var)));
				InterfaceActionInvoker0::Invoke(0 /* System.Void Phezu.Util.IRuntimeAsset::Reset() */, IRuntimeAsset_t21350255F2102EB17F46D75768F76AA206ED06A1_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IRuntimeAsset_t21350255F2102EB17F46D75768F76AA206ED06A1_il2cpp_TypeInfo_var)));
			}

IL_0026_1:
			{
				// foreach (var runtimeAsset in allRuntimeAssets) {
				bool L_4;
				L_4 = Enumerator_MoveNext_m481909F42F34DB8BEE3021AA3876812492DE1EF6((&V_0), Enumerator_MoveNext_m481909F42F34DB8BEE3021AA3876812492DE1EF6_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Phezu.Util.RuntimeAssetHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeAssetHandler__ctor_mE71FFD18061F7DE709EC4F143508C82B313C145E (RuntimeAssetHandler_t5AC1A35E95ABDE260E5D77989296AA34B534DD51* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Phezu.Util.TimedSpawner::.ctor(UnityEngine.GameObject,System.Action`1<UnityEngine.GameObject>,System.Action`1<UnityEngine.GameObject>,System.Action`1<UnityEngine.GameObject>,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedSpawner__ctor_m4684CE43564A4A2887341D0C998EA2433B37AF10 (TimedSpawner_t23237D1051E78A2C341D803349E73B1A6A8CC9A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___onCreate1, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___onGet2, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___onRelease3, float ___activeDurationInSecs4, int32_t ___poolSize5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m45E195014CCFE6336B5E004D0737FF6D04E56534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2C71FBC561D6EB520D698CBC4D1FF81B6894C6D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_mFAEF592622C047291D959988E64185E20CB8CB1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m3794D59ADC9FAB1ECBAD798827036E9942390FD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__1_m18685D5F782F28A310824B36FAD36B938DF156E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__2_mF89A538B7C2A10E2D31798E7164352902A4B1C5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* L_0 = (U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m270A8439EA82FFC1913E3B53E455DD3CCD9F4EDF(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* L_1 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___prefab0;
		NullCheck(L_1);
		L_1->___prefab_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___prefab_0), (void*)L_2);
		U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* L_3 = V_0;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_4 = ___onCreate1;
		NullCheck(L_3);
		L_3->___onCreate_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onCreate_1), (void*)L_4);
		U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* L_5 = V_0;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_6 = ___onGet2;
		NullCheck(L_5);
		L_5->___onGet_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___onGet_2), (void*)L_6);
		U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* L_7 = V_0;
		float L_8 = ___activeDurationInSecs4;
		NullCheck(L_7);
		L_7->___activeDurationInSecs_4 = L_8;
		U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* L_9 = V_0;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_10 = ___onRelease3;
		NullCheck(L_9);
		L_9->___onRelease_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___onRelease_5), (void*)L_10);
		// public TimedSpawner(GameObject prefab, Action<GameObject> onCreate = null, Action<GameObject> onGet = null, Action<GameObject> onRelease = null, float activeDurationInSecs = 1f, int poolSize = 10)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* L_11 = V_0;
		NullCheck(L_11);
		L_11->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___U3CU3E4__this_3), (void*)__this);
		// prefab.SetActive(false);
		U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* L_12 = V_0;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___prefab_0;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// mTimers = new Dictionary<GameObject, float>();
		Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* L_14 = (Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE*)il2cpp_codegen_object_new(Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Dictionary_2__ctor_m45E195014CCFE6336B5E004D0737FF6D04E56534(L_14, Dictionary_2__ctor_m45E195014CCFE6336B5E004D0737FF6D04E56534_RuntimeMethod_var);
		__this->___mTimers_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTimers_1), (void*)L_14);
		// mObjectPool = new ObjectPool<GameObject>(
		//     () => //OnCreate
		//     {
		//         GameObject particlesObj = GameObject.Instantiate(prefab);
		//         onCreate?.Invoke(particlesObj);
		// 
		//         return particlesObj;
		//     },
		//     (x) => //OnGet
		//     {
		//         onGet?.Invoke(x);
		// 
		//         mTimers.Add(x, activeDurationInSecs);
		//         x.SetActive(true);
		//     },
		//     (x) => //OnRelease
		//     {
		//         onRelease?.Invoke(x);
		// 
		//         mTimers.Remove(x);
		//         x.SetActive(false);
		//     },
		//     null,
		//     true,
		//     poolSize
		//     );
		U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* L_15 = V_0;
		Func_1_t2C71FBC561D6EB520D698CBC4D1FF81B6894C6D4* L_16 = (Func_1_t2C71FBC561D6EB520D698CBC4D1FF81B6894C6D4*)il2cpp_codegen_object_new(Func_1_t2C71FBC561D6EB520D698CBC4D1FF81B6894C6D4_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Func_1__ctor_m046EB3E4ACB238B00990EE892BB74F2B30E6B996(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m3794D59ADC9FAB1ECBAD798827036E9942390FD3_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* L_17 = V_0;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_18 = (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)il2cpp_codegen_object_new(Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_1__ctor_m3FA37AFA5AAB09F49F9C00A7D5B2A5F3D83CBB01(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__1_m18685D5F782F28A310824B36FAD36B938DF156E6_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* L_19 = V_0;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_20 = (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)il2cpp_codegen_object_new(Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action_1__ctor_m3FA37AFA5AAB09F49F9C00A7D5B2A5F3D83CBB01(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__2_mF89A538B7C2A10E2D31798E7164352902A4B1C5E_RuntimeMethod_var), NULL);
		int32_t L_21 = ___poolSize5;
		ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528* L_22 = (ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528*)il2cpp_codegen_object_new(ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		ObjectPool_1__ctor_mFAEF592622C047291D959988E64185E20CB8CB1B(L_22, L_16, L_18, L_20, (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)NULL, (bool)1, L_21, ((int32_t)10000), ObjectPool_1__ctor_mFAEF592622C047291D959988E64185E20CB8CB1B_RuntimeMethod_var);
		__this->___mObjectPool_0 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mObjectPool_0), (void*)L_22);
		// }
		return;
	}
}
// System.Void Phezu.Util.TimedSpawner::SpawnerTick(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedSpawner_SpawnerTick_mB066695FECD29623B56A19C5038BA312379ADC64 (TimedSpawner_t23237D1051E78A2C341D803349E73B1A6A8CC9A2* __this, float ___deltaTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m5B05E568C9D13FA27E5E907BAD3E2E469E98DF02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m9FFDF5270202185F5F627314159D78314394EF3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mAA368612C7FCF7C385A5F6F9865ED8979F5E4B8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7A3360AF98140FF0B952B4ED7B5D6C4F7780E03B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9350D91CA5BD57E5A0FA8EE8BC7CA0E95B7E27C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC7E55286177BE34472F953FDC3D32601C328E750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m8FB37AE23EED40DB6F3B22118559ED8C4BC73C1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m9A1A4D5E7034DE77EB9FA3266E20B54960924E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mF445373A70498E9A9844DC2C04384E837F3444CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m6A47FE582CCFA96EC938D6374E2AE9FDF7BF7D4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_0 = NULL;
	KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD* V_1 = NULL;
	int32_t V_2 = 0;
	Enumerator_t95CD3BA1B2BBED4D5B3C77D724AA84659BD14D6D V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD* V_6 = NULL;
	int32_t V_7 = 0;
	KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_9;
	memset((&V_9), 0, sizeof(V_9));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_10 = NULL;
	{
		// List<GameObject> objectsToReturn = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_0 = L_0;
		// var kvpCopy = new KeyValuePair<GameObject, float>[mTimers.Count];
		Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* L_1 = __this->___mTimers_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_m9FFDF5270202185F5F627314159D78314394EF3C(L_1, Dictionary_2_get_Count_m9FFDF5270202185F5F627314159D78314394EF3C_RuntimeMethod_var);
		KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD* L_3 = (KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD*)(KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD*)SZArrayNew(KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		// int index = 0;
		V_2 = 0;
		// foreach (var kvp in mTimers)
		Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* L_4 = __this->___mTimers_1;
		NullCheck(L_4);
		Enumerator_t95CD3BA1B2BBED4D5B3C77D724AA84659BD14D6D L_5;
		L_5 = Dictionary_2_GetEnumerator_m5B05E568C9D13FA27E5E907BAD3E2E469E98DF02(L_4, Dictionary_2_GetEnumerator_m5B05E568C9D13FA27E5E907BAD3E2E469E98DF02_RuntimeMethod_var);
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0083:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7A3360AF98140FF0B952B4ED7B5D6C4F7780E03B((&V_3), Enumerator_Dispose_m7A3360AF98140FF0B952B4ED7B5D6C4F7780E03B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0078_1;
			}

IL_0029_1:
			{
				// foreach (var kvp in mTimers)
				KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 L_6;
				L_6 = Enumerator_get_Current_mC7E55286177BE34472F953FDC3D32601C328E750_inline((&V_3), Enumerator_get_Current_mC7E55286177BE34472F953FDC3D32601C328E750_RuntimeMethod_var);
				V_4 = L_6;
				// kvpCopy[index] = new KeyValuePair<GameObject, float>(kvp.Key, kvp.Value - deltaTime);
				KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD* L_7 = V_1;
				int32_t L_8 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
				L_9 = KeyValuePair_2_get_Key_m9A1A4D5E7034DE77EB9FA3266E20B54960924E7A_inline((&V_4), KeyValuePair_2_get_Key_m9A1A4D5E7034DE77EB9FA3266E20B54960924E7A_RuntimeMethod_var);
				float L_10;
				L_10 = KeyValuePair_2_get_Value_mF445373A70498E9A9844DC2C04384E837F3444CB_inline((&V_4), KeyValuePair_2_get_Value_mF445373A70498E9A9844DC2C04384E837F3444CB_RuntimeMethod_var);
				float L_11 = ___deltaTime0;
				KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 L_12;
				memset((&L_12), 0, sizeof(L_12));
				KeyValuePair_2__ctor_m8FB37AE23EED40DB6F3B22118559ED8C4BC73C1E((&L_12), L_9, ((float)il2cpp_codegen_subtract(L_10, L_11)), /*hidden argument*/KeyValuePair_2__ctor_m8FB37AE23EED40DB6F3B22118559ED8C4BC73C1E_RuntimeMethod_var);
				NullCheck(L_7);
				(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5)L_12);
				// if (kvp.Value - deltaTime < 0f)
				float L_13;
				L_13 = KeyValuePair_2_get_Value_mF445373A70498E9A9844DC2C04384E837F3444CB_inline((&V_4), KeyValuePair_2_get_Value_mF445373A70498E9A9844DC2C04384E837F3444CB_RuntimeMethod_var);
				float L_14 = ___deltaTime0;
				V_5 = (bool)((((float)((float)il2cpp_codegen_subtract(L_13, L_14))) < ((float)(0.0f)))? 1 : 0);
				bool L_15 = V_5;
				if (!L_15)
				{
					goto IL_0073_1;
				}
			}
			{
				// objectsToReturn.Add(kvp.Key);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_16 = V_0;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = KeyValuePair_2_get_Key_m9A1A4D5E7034DE77EB9FA3266E20B54960924E7A_inline((&V_4), KeyValuePair_2_get_Key_m9A1A4D5E7034DE77EB9FA3266E20B54960924E7A_RuntimeMethod_var);
				NullCheck(L_16);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_16, L_17, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
			}

IL_0073_1:
			{
				// index++;
				int32_t L_18 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
			}

IL_0078_1:
			{
				// foreach (var kvp in mTimers)
				bool L_19;
				L_19 = Enumerator_MoveNext_m9350D91CA5BD57E5A0FA8EE8BC7CA0E95B7E27C2((&V_3), Enumerator_MoveNext_m9350D91CA5BD57E5A0FA8EE8BC7CA0E95B7E27C2_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_0092;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0092:
	{
		// foreach (var kvp in kvpCopy)
		KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD* L_20 = V_1;
		V_6 = L_20;
		V_7 = 0;
		goto IL_00c8;
	}

IL_009b:
	{
		// foreach (var kvp in kvpCopy)
		KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD* L_21 = V_6;
		int32_t L_22 = V_7;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		KeyValuePair_2_t0A93200A81C23B809D7820DC1870FB7B02DD93B5 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_8 = L_24;
		// mTimers[kvp.Key] = kvp.Value;
		Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* L_25 = __this->___mTimers_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = KeyValuePair_2_get_Key_m9A1A4D5E7034DE77EB9FA3266E20B54960924E7A_inline((&V_8), KeyValuePair_2_get_Key_m9A1A4D5E7034DE77EB9FA3266E20B54960924E7A_RuntimeMethod_var);
		float L_27;
		L_27 = KeyValuePair_2_get_Value_mF445373A70498E9A9844DC2C04384E837F3444CB_inline((&V_8), KeyValuePair_2_get_Value_mF445373A70498E9A9844DC2C04384E837F3444CB_RuntimeMethod_var);
		NullCheck(L_25);
		Dictionary_2_set_Item_mAA368612C7FCF7C385A5F6F9865ED8979F5E4B8B(L_25, L_26, L_27, Dictionary_2_set_Item_mAA368612C7FCF7C385A5F6F9865ED8979F5E4B8B_RuntimeMethod_var);
		int32_t L_28 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c8:
	{
		// foreach (var kvp in kvpCopy)
		int32_t L_29 = V_7;
		KeyValuePair_2U5BU5D_t0F3A94B77423CD9693E685A6FDEDFFC1ECF65BAD* L_30 = V_6;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_009b;
		}
	}
	{
		// foreach (GameObject obj in objectsToReturn)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_31 = V_0;
		NullCheck(L_31);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_32;
		L_32 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_31, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_9 = L_32;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_9), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f2_1;
			}

IL_00db_1:
			{
				// foreach (GameObject obj in objectsToReturn)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
				L_33 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_9), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_10 = L_33;
				// mObjectPool.Release(obj);
				ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528* L_34 = __this->___mObjectPool_0;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_10;
				NullCheck(L_34);
				ObjectPool_1_Release_m6A47FE582CCFA96EC938D6374E2AE9FDF7BF7D4C(L_34, L_35, ObjectPool_1_Release_m6A47FE582CCFA96EC938D6374E2AE9FDF7BF7D4C_RuntimeMethod_var);
			}

IL_00f2_1:
			{
				// foreach (GameObject obj in objectsToReturn)
				bool L_36;
				L_36 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_9), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_36)
				{
					goto IL_00db_1;
				}
			}
			{
				goto IL_010c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010c:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject Phezu.Util.TimedSpawner::SpawnObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* TimedSpawner_SpawnObject_mC8B262412B6CDAB77E831061E58B58FCC15EC9DA (TimedSpawner_t23237D1051E78A2C341D803349E73B1A6A8CC9A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Get_mA672E936AACD458D3F9E41CFF8BA232F492137DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// return mObjectPool.Get();
		ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528* L_0 = __this->___mObjectPool_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = ObjectPool_1_Get_mA672E936AACD458D3F9E41CFF8BA232F492137DE(L_0, ObjectPool_1_Get_mA672E936AACD458D3F9E41CFF8BA232F492137DE_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		return L_2;
	}
}
// System.Void Phezu.Util.TimedSpawner::ReturnObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedSpawner_ReturnObject_m5C3200F55B645935367A1E8F74B318E7697DF8ED (TimedSpawner_t23237D1051E78A2C341D803349E73B1A6A8CC9A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m6A47FE582CCFA96EC938D6374E2AE9FDF7BF7D4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mObjectPool.Release(obj);
		ObjectPool_1_tF56FEF6B842DF715831F598CFFB14387C5BD9528* L_0 = __this->___mObjectPool_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___obj0;
		NullCheck(L_0);
		ObjectPool_1_Release_m6A47FE582CCFA96EC938D6374E2AE9FDF7BF7D4C(L_0, L_1, ObjectPool_1_Release_m6A47FE582CCFA96EC938D6374E2AE9FDF7BF7D4C_RuntimeMethod_var);
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
// System.Void Phezu.Util.TimedSpawner/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m270A8439EA82FFC1913E3B53E455DD3CCD9F4EDF (U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.GameObject Phezu.Util.TimedSpawner/<>c__DisplayClass2_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m3794D59ADC9FAB1ECBAD798827036E9942390FD3 (U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* G_B2_0 = NULL;
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* G_B1_0 = NULL;
	{
		// GameObject particlesObj = GameObject.Instantiate(prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___prefab_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_1;
		// onCreate?.Invoke(particlesObj);
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_2 = __this->___onCreate_1;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0019;
		}
	}
	{
		goto IL_0020;
	}

IL_0019:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mBF1852490A3A2C4508CEF22E3887E57A8E6C6E45_inline(G_B2_0, L_4, NULL);
	}

IL_0020:
	{
		// return particlesObj;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		V_1 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		// },
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
		return L_6;
	}
}
// System.Void Phezu.Util.TimedSpawner/<>c__DisplayClass2_0::<.ctor>b__1(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__1_m18685D5F782F28A310824B36FAD36B938DF156E6 (U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m725045BA11F200D1EFDD76E7C402E5FE68F21DE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* G_B2_0 = NULL;
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* G_B1_0 = NULL;
	{
		// onGet?.Invoke(x);
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_0 = __this->___onGet_2;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___x0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mBF1852490A3A2C4508CEF22E3887E57A8E6C6E45_inline(G_B2_0, L_2, NULL);
	}

IL_0014:
	{
		// mTimers.Add(x, activeDurationInSecs);
		TimedSpawner_t23237D1051E78A2C341D803349E73B1A6A8CC9A2* L_3 = __this->___U3CU3E4__this_3;
		NullCheck(L_3);
		Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* L_4 = L_3->___mTimers_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___x0;
		float L_6 = __this->___activeDurationInSecs_4;
		NullCheck(L_4);
		Dictionary_2_Add_m725045BA11F200D1EFDD76E7C402E5FE68F21DE7(L_4, L_5, L_6, Dictionary_2_Add_m725045BA11F200D1EFDD76E7C402E5FE68F21DE7_RuntimeMethod_var);
		// x.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___x0;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// },
		return;
	}
}
// System.Void Phezu.Util.TimedSpawner/<>c__DisplayClass2_0::<.ctor>b__2(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__2_mF89A538B7C2A10E2D31798E7164352902A4B1C5E (U3CU3Ec__DisplayClass2_0_t4F244A9E2FCFCDAC3D770D5C4438B14C457F6441* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m68FFA13B4F8B9B2E4C5F889EED11E60985B30C99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* G_B2_0 = NULL;
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* G_B1_0 = NULL;
	{
		// onRelease?.Invoke(x);
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_0 = __this->___onRelease_5;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___x0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mBF1852490A3A2C4508CEF22E3887E57A8E6C6E45_inline(G_B2_0, L_2, NULL);
	}

IL_0014:
	{
		// mTimers.Remove(x);
		TimedSpawner_t23237D1051E78A2C341D803349E73B1A6A8CC9A2* L_3 = __this->___U3CU3E4__this_3;
		NullCheck(L_3);
		Dictionary_2_t43D60EEB27D9EF61FD9EC2104B0A4BAB79DEF4EE* L_4 = L_3->___mTimers_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___x0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_m68FFA13B4F8B9B2E4C5F889EED11E60985B30C99(L_4, L_5, Dictionary_2_Remove_m68FFA13B4F8B9B2E4C5F889EED11E60985B30C99_RuntimeMethod_var);
		// x.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___x0;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// },
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
// System.Void Phezu.Util.Tokenizer::.ctor(System.Char[],System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer__ctor_mB1815E285CA6814C80492C8C21109AAF3C688158 (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___specialCharacters0, Il2CppChar ___seperator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB5300CE24346D869C7AC22CEFB9DA985BF30FCA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7B8D24C7D34D7A575A8E6E9EE9D3FB4DABB91AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// private bool m_IsBuildingToken = false;
		__this->___m_IsBuildingToken_4 = (bool)0;
		// public Tokenizer(char[] specialCharacters, char seperator) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (specialCharacters.Contains(seperator))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___specialCharacters0;
		Il2CppChar L_1 = ___seperator1;
		bool L_2;
		L_2 = Enumerable_Contains_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB5300CE24346D869C7AC22CEFB9DA985BF30FCA4((RuntimeObject*)L_0, L_1, Enumerable_Contains_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB5300CE24346D869C7AC22CEFB9DA985BF30FCA4_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// throw new System.Exception("specialCharacters cannot contain seperator");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B660B756FABC4B9ABC5F346B7D2B2942F6E372C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tokenizer__ctor_mB1815E285CA6814C80492C8C21109AAF3C688158_RuntimeMethod_var)));
	}

IL_0025:
	{
		// m_SpecialCharacters = new(specialCharacters);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___specialCharacters0;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_6 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)il2cpp_codegen_object_new(List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mF7B8D24C7D34D7A575A8E6E9EE9D3FB4DABB91AE(L_6, (RuntimeObject*)L_5, List_1__ctor_mF7B8D24C7D34D7A575A8E6E9EE9D3FB4DABB91AE_RuntimeMethod_var);
		__this->___m_SpecialCharacters_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SpecialCharacters_0), (void*)L_6);
		// m_Seperator = seperator;
		Il2CppChar L_7 = ___seperator1;
		__this->___m_Seperator_1 = L_7;
		// }
		return;
	}
}
// System.Void Phezu.Util.Tokenizer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Reset_m012FCED821F0FC27758F0B0C559A8405F4A0B1BE (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88EB510D961B109997B2C1C336B75791B631D3D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t678434BE3728D08672059C5165BFE76A332848B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_LineTokens = new();
		List_1_t678434BE3728D08672059C5165BFE76A332848B8* L_0 = (List_1_t678434BE3728D08672059C5165BFE76A332848B8*)il2cpp_codegen_object_new(List_1_t678434BE3728D08672059C5165BFE76A332848B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m88EB510D961B109997B2C1C336B75791B631D3D1(L_0, List_1__ctor_m88EB510D961B109997B2C1C336B75791B631D3D1_RuntimeMethod_var);
		__this->___m_LineTokens_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LineTokens_2), (void*)L_0);
		// m_CurrWord = new();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		__this->___m_CurrWord_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrWord_3), (void*)L_1);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Phezu.Util.Tokenizer/Token> Phezu.Util.Tokenizer::TokenizeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t678434BE3728D08672059C5165BFE76A332848B8* Tokenizer_TokenizeString_mB34594D678FCE904F0240C7C2B84CA5DB9759A46 (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88EB510D961B109997B2C1C336B75791B631D3D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t678434BE3728D08672059C5165BFE76A332848B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t678434BE3728D08672059C5165BFE76A332848B8* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// if (string.IsNullOrEmpty(text) || string.IsNullOrWhiteSpace(text))
		String_t* L_0 = ___text0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_2 = ___text0;
		bool L_3;
		L_3 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// return new();
		List_1_t678434BE3728D08672059C5165BFE76A332848B8* L_5 = (List_1_t678434BE3728D08672059C5165BFE76A332848B8*)il2cpp_codegen_object_new(List_1_t678434BE3728D08672059C5165BFE76A332848B8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m88EB510D961B109997B2C1C336B75791B631D3D1(L_5, List_1__ctor_m88EB510D961B109997B2C1C336B75791B631D3D1_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_0070;
	}

IL_001e:
	{
		// Reset();
		Tokenizer_Reset_m012FCED821F0FC27758F0B0C559A8405F4A0B1BE(__this, NULL);
		// for (int i = 0; i < text.Length; i++) {
		V_2 = 0;
		goto IL_004a;
	}

IL_0029:
	{
		// bool isLastCharacter = i == text.Length - 1;
		int32_t L_6 = V_2;
		String_t* L_7 = ___text0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, 1))))? 1 : 0);
		// ProcessCharacter(text[i], isLastCharacter);
		String_t* L_9 = ___text0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, L_10, NULL);
		bool L_12 = V_3;
		Tokenizer_ProcessCharacter_m9738640EFA4FF99D3276AC407B6506527BC0F1EE(__this, L_11, L_12, NULL);
		// for (int i = 0; i < text.Length; i++) {
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < text.Length; i++) {
		int32_t L_14 = V_2;
		String_t* L_15 = ___text0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0029;
		}
	}
	{
		// ProcessCharacter(m_Seperator, true);
		Il2CppChar L_18 = __this->___m_Seperator_1;
		Tokenizer_ProcessCharacter_m9738640EFA4FF99D3276AC407B6506527BC0F1EE(__this, L_18, (bool)1, NULL);
		// return m_LineTokens;
		List_1_t678434BE3728D08672059C5165BFE76A332848B8* L_19 = __this->___m_LineTokens_2;
		V_1 = L_19;
		goto IL_0070;
	}

IL_0070:
	{
		// }
		List_1_t678434BE3728D08672059C5165BFE76A332848B8* L_20 = V_1;
		return L_20;
	}
}
// System.Void Phezu.Util.Tokenizer::ProcessCharacter(System.Char,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_ProcessCharacter_m9738640EFA4FF99D3276AC407B6506527BC0F1EE (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, Il2CppChar ___character0, bool ___isLastCharacter1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (IsSpecialCharacter(character))
		Il2CppChar L_0 = ___character0;
		bool L_1;
		L_1 = Tokenizer_IsSpecialCharacter_m963732E96DBCF569BDC32656A32D9AA702D3A0FA(__this, L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// ProcessSpecialCharacter(character, isLastCharacter);
		Il2CppChar L_3 = ___character0;
		bool L_4 = ___isLastCharacter1;
		Tokenizer_ProcessSpecialCharacter_mDF0CFD96600C30D5BC60205D3021365B6FA1D93E(__this, L_3, L_4, NULL);
		goto IL_0044;
	}

IL_0017:
	{
		// else if (ReachedTokenEnd(character))
		Il2CppChar L_5 = ___character0;
		bool L_6;
		L_6 = Tokenizer_ReachedTokenEnd_mC2D299862C867A654EDA12DA2DA9A19CAD7694BA(__this, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		// ExtractTokenFromCurrWord(isLastCharacter);
		bool L_8 = ___isLastCharacter1;
		Tokenizer_ExtractTokenFromCurrWord_mDF76DF99FA1F93D609CA2E543FD6AAE2870FBB29(__this, L_8, NULL);
		goto IL_0044;
	}

IL_002c:
	{
		// else if (character != m_Seperator)
		Il2CppChar L_9 = ___character0;
		Il2CppChar L_10 = __this->___m_Seperator_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		// AppendCurrWord(character);
		Il2CppChar L_12 = ___character0;
		Tokenizer_AppendCurrWord_m650ED5AB956948AFFCE956B8198BE64398EA2D9E(__this, L_12, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Boolean Phezu.Util.Tokenizer::ReachedTokenEnd(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_ReachedTokenEnd_mC2D299862C867A654EDA12DA2DA9A19CAD7694BA (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, Il2CppChar ___character0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// bool isSeperator = character == m_Seperator;
		Il2CppChar L_0 = ___character0;
		Il2CppChar L_1 = __this->___m_Seperator_1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		// return isSeperator && m_IsBuildingToken;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		bool L_3 = __this->___m_IsBuildingToken_4;
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Phezu.Util.Tokenizer::IsSpecialCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_IsSpecialCharacter_m963732E96DBCF569BDC32656A32D9AA702D3A0FA (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, Il2CppChar ___character0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return m_SpecialCharacters.Contains(character);
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = __this->___m_SpecialCharacters_0;
		Il2CppChar L_1 = ___character0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92(L_0, L_1, List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Phezu.Util.Tokenizer::AppendCurrWord(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_AppendCurrWord_m650ED5AB956948AFFCE956B8198BE64398EA2D9E (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, Il2CppChar ___character0, const RuntimeMethod* method) 
{
	{
		// m_CurrWord.Append(character);
		StringBuilder_t* L_0 = __this->___m_CurrWord_3;
		Il2CppChar L_1 = ___character0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, L_1, NULL);
		// m_IsBuildingToken = true;
		__this->___m_IsBuildingToken_4 = (bool)1;
		// }
		return;
	}
}
// System.Void Phezu.Util.Tokenizer::ExtractTokenFromCurrWord(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_ExtractTokenFromCurrWord_mDF76DF99FA1F93D609CA2E543FD6AAE2870FBB29 (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, bool ___isEndOfLineToken0, const RuntimeMethod* method) 
{
	{
		// CreateTokenFromCurrWord(isEndOfLineToken);
		bool L_0 = ___isEndOfLineToken0;
		Tokenizer_CreateTokenFromCurrWord_m72BD204C6AD30B5221E378F722B5689739C98C78(__this, L_0, NULL);
		// m_IsBuildingToken = false;
		__this->___m_IsBuildingToken_4 = (bool)0;
		// m_CurrWord.Clear();
		StringBuilder_t* L_1 = __this->___m_CurrWord_3;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_1, NULL);
		// }
		return;
	}
}
// System.Void Phezu.Util.Tokenizer::CreateTokenFromCurrWord(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_CreateTokenFromCurrWord_m72BD204C6AD30B5221E378F722B5689739C98C78 (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, bool ___isEndOfLineToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC5C154F6C1E95005ECBA27FD59F5195010489904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool isSpecialToken = false;
		V_0 = (bool)0;
		// m_LineTokens.Add(new(m_CurrWord.ToString(), isSpecialToken, isEndOfLineToken));
		List_1_t678434BE3728D08672059C5165BFE76A332848B8* L_0 = __this->___m_LineTokens_2;
		StringBuilder_t* L_1 = __this->___m_CurrWord_3;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		bool L_3 = V_0;
		bool L_4 = ___isEndOfLineToken0;
		Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* L_5 = (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493*)il2cpp_codegen_object_new(Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Token__ctor_m3229717B808E049AB6EBF79F7489B41C287179CE(L_5, L_2, L_3, L_4, NULL);
		NullCheck(L_0);
		List_1_Add_mC5C154F6C1E95005ECBA27FD59F5195010489904_inline(L_0, L_5, List_1_Add_mC5C154F6C1E95005ECBA27FD59F5195010489904_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Phezu.Util.Tokenizer::ProcessSpecialCharacter(System.Char,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_ProcessSpecialCharacter_mDF0CFD96600C30D5BC60205D3021365B6FA1D93E (Tokenizer_tCC0B1F53C15911FEB09C6E226CC46481906924EB* __this, Il2CppChar ___character0, bool ___isEndOfLineToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC5C154F6C1E95005ECBA27FD59F5195010489904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* G_B4_0 = NULL;
	List_1_t678434BE3728D08672059C5165BFE76A332848B8* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	List_1_t678434BE3728D08672059C5165BFE76A332848B8* G_B3_1 = NULL;
	{
		// if (m_IsBuildingToken)
		bool L_0 = __this->___m_IsBuildingToken_4;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// ExtractTokenFromCurrWord(isEndOfLineToken);
		bool L_2 = ___isEndOfLineToken1;
		Tokenizer_ExtractTokenFromCurrWord_mDF76DF99FA1F93D609CA2E543FD6AAE2870FBB29(__this, L_2, NULL);
	}

IL_0013:
	{
		// bool isSpecialToken = true;
		V_0 = (bool)1;
		// m_LineTokens.Add(new(character + "", isSpecialToken, isEndOfLineToken));
		List_1_t678434BE3728D08672059C5165BFE76A332848B8* L_3 = __this->___m_LineTokens_2;
		String_t* L_4;
		L_4 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&___character0), NULL);
		String_t* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = L_3;
			goto IL_002b;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_002b:
	{
		bool L_6 = V_0;
		bool L_7 = ___isEndOfLineToken1;
		Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* L_8 = (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493*)il2cpp_codegen_object_new(Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Token__ctor_m3229717B808E049AB6EBF79F7489B41C287179CE(L_8, G_B4_0, L_6, L_7, NULL);
		NullCheck(G_B4_1);
		List_1_Add_mC5C154F6C1E95005ECBA27FD59F5195010489904_inline(G_B4_1, L_8, List_1_Add_mC5C154F6C1E95005ECBA27FD59F5195010489904_RuntimeMethod_var);
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
// System.String Phezu.Util.Tokenizer/Token::get_Word()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Token_get_Word_mF90F08192C1A1BE9230A63545406EFDE02E63699 (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, const RuntimeMethod* method) 
{
	{
		// public string Word { get; private set; }
		String_t* L_0 = __this->___U3CWordU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Phezu.Util.Tokenizer/Token::set_Word(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token_set_Word_m45E749A88EBA3D8D8CAE562D412B4374C847AA1F (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Word { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CWordU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWordU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean Phezu.Util.Tokenizer/Token::get_IsSpecial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Token_get_IsSpecial_m0C947214FFBA8DD995065FAE9A76998BD979636A (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSpecial { get; private set; }
		bool L_0 = __this->___U3CIsSpecialU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Phezu.Util.Tokenizer/Token::set_IsSpecial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token_set_IsSpecial_m0FF16480A94199BE876BD974722356A60A910942 (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsSpecial { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsSpecialU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean Phezu.Util.Tokenizer/Token::get_AtEndOfLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Token_get_AtEndOfLine_m06EC52D80C05CAF85C02D97794DEA9430E667FBB (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, const RuntimeMethod* method) 
{
	{
		// public bool AtEndOfLine { get; private set; }
		bool L_0 = __this->___U3CAtEndOfLineU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Phezu.Util.Tokenizer/Token::set_AtEndOfLine(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token_set_AtEndOfLine_mFBDEAF9AF97118DE922BBC0CD4D654E1F75D6608 (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool AtEndOfLine { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CAtEndOfLineU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Phezu.Util.Tokenizer/Token::.ctor(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_m3229717B808E049AB6EBF79F7489B41C287179CE (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, String_t* ___word0, bool ___isSpecial1, bool ___atEndOfLine2, const RuntimeMethod* method) 
{
	{
		// public Token(string word, bool isSpecial, bool atEndOfLine) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Word = word;
		String_t* L_0 = ___word0;
		Token_set_Word_m45E749A88EBA3D8D8CAE562D412B4374C847AA1F_inline(__this, L_0, NULL);
		// IsSpecial = isSpecial;
		bool L_1 = ___isSpecial1;
		Token_set_IsSpecial_m0FF16480A94199BE876BD974722356A60A910942_inline(__this, L_1, NULL);
		// AtEndOfLine = atEndOfLine;
		bool L_2 = ___atEndOfLine2;
		Token_set_AtEndOfLine_mFBDEAF9AF97118DE922BBC0CD4D654E1F75D6608_inline(__this, L_2, NULL);
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
// System.Boolean Phezu.Util.UserData::LoadMonoOrScriptable(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserData_LoadMonoOrScriptable_m8FA9AC4E8B587E816C71D133C01CAAFE3017A993 (String_t* ___path0, RuntimeObject* ___mono1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// string filePath = Application.persistentDataPath + "/" + path + ".json";
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1 = ___path0;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_1, _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742, NULL);
		V_0 = L_2;
		// if (!File.Exists(filePath))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_3, NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_003b;
	}

IL_0028:
	{
		// string jsonValue = File.ReadAllText(filePath);
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA(L_6, NULL);
		V_1 = L_7;
		// JsonUtility.FromJsonOverwrite(jsonValue, mono);
		String_t* L_8 = V_1;
		RuntimeObject* L_9 = ___mono1;
		JsonUtility_FromJsonOverwrite_mF60C8238431C1A42F7F482BB717757B281570D56(L_8, L_9, NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		bool L_10 = V_3;
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___value0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, /*hidden argument*/ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequireInterfaceAttribute_set_requiredType_m4C18A84ADA7FE01C58A20E76C881C1571D84B457_inline (RequireInterfaceAttribute_t01D46B1A2D89C10E6E31211FEFE24BEF69DD7C3E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public System.Type requiredType { get; private set; }
		Type_t* L_0 = ___value0;
		__this->___U3CrequiredTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequiredTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Token_set_Word_m45E749A88EBA3D8D8CAE562D412B4374C847AA1F_inline (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Word { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CWordU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWordU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Token_set_IsSpecial_m0FF16480A94199BE876BD974722356A60A910942_inline (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsSpecial { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsSpecialU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Token_set_AtEndOfLine_mFBDEAF9AF97118DE922BBC0CD4D654E1F75D6608_inline (Token_t602D86FECAF4D2CA46DB9A1B3E031F6FD7F44493* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool AtEndOfLine { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CAtEndOfLineU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// TValue
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
	const uint32_t SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___ptr0;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}

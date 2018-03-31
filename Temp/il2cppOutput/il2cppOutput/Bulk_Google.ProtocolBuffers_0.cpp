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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_t4116647657;
// Google.ProtocolBuffers.ByteString
struct ByteString_t35393593;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t1566866844;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2502120507;
// System.IO.Stream
struct Stream_t1273022909;
// Google.ProtocolBuffers.InvalidProtocolBufferException
struct InvalidProtocolBufferException_t2498581859;
// System.String
struct String_t;
// Google.ProtocolBuffers.IBuilderLite
struct IBuilderLite_t2966492016;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t4271428238;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t4225419008;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1293755103;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t1787628118;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t757992097;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t377119663;
// Google.ProtocolBuffers.CodedOutputStream/OutOfSpaceException
struct OutOfSpaceException_t1185332314;
// System.IO.IOException
struct IOException_t4088381929;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct Dictionary_2_t3107168633;
// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct Dictionary_2_t294577696;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>
struct Dictionary_2_t1400177810;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// Google.ProtocolBuffers.UninitializedMessageException
struct UninitializedMessageException_t3402409807;
// System.Type
struct Type_t;
// System.Exception
struct Exception_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>[]
struct Dictionary_2U5BU5D_t1951857408;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>,System.Collections.DictionaryEntry>
struct Transform_1_t3317057727;
// Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair[]
struct ExtensionIntPairU5BU5D_t4111571983;
// Google.ProtocolBuffers.IGeneratedExtensionLite[]
struct IGeneratedExtensionLiteU5BU5D_t1997464183;
// System.Collections.Generic.IEqualityComparer`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair>
struct IEqualityComparer_1_t3450891324;
// System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite,System.Collections.DictionaryEntry>
struct Transform_1_t1817293212;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t457913172;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t3662770472;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern RuntimeClass* IEnumerable_1_t114149265_il2cpp_TypeInfo_var;
extern const uint32_t ByteString_GetEnumerator_m3703723788_MetadataUsageId;
extern RuntimeClass* ByteString_t35393593_il2cpp_TypeInfo_var;
extern const uint32_t ByteString_Equals_m500704785_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const uint32_t ByteString__cctor_m2348286826_MetadataUsageId;
extern const uint32_t CodedInputStream__ctor_m2057008778_MetadataUsageId;
extern RuntimeClass* CodedInputStream_t2502120507_il2cpp_TypeInfo_var;
extern const uint32_t CodedInputStream_CreateInstance_m2264275690_MetadataUsageId;
extern const uint32_t CodedInputStream_CreateInstance_m1189590698_MetadataUsageId;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern const uint32_t CodedInputStream_ReadFloat_m2225975549_MetadataUsageId;
extern RuntimeClass* IBuilderLite_t2966492016_il2cpp_TypeInfo_var;
extern const uint32_t CodedInputStream_ReadMessage_m326501105_MetadataUsageId;
extern RuntimeClass* ICollection_1_t4225419008_il2cpp_TypeInfo_var;
extern const uint32_t CodedInputStream_ReadFloatArray_m2066301380_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2084153018;
extern String_t* _stringLiteral3835198932;
extern const uint32_t CodedInputStream_RefillBuffer_m1552953620_MetadataUsageId;
extern RuntimeClass* List_1_t1293755103_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2588888624_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m403195898_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m546097336_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2689264918_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1074123736_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m4103594724_RuntimeMethod_var;
extern const uint32_t CodedInputStream_ReadRawBytes_m2213130119_MetadataUsageId;
extern const uint32_t CodedInputStream_SkipImpl_m3770172997_MetadataUsageId;
extern String_t* _stringLiteral988225131;
extern const uint32_t CodedOutputStream_get_SpaceLeft_m2112861421_MetadataUsageId;
extern RuntimeClass* CodedOutputStream_t1787628118_il2cpp_TypeInfo_var;
extern const uint32_t CodedOutputStream_ComputeFloatSize_m3601108612_MetadataUsageId;
extern const uint32_t CodedOutputStream_ComputeInt64Size_m2929732330_MetadataUsageId;
extern const uint32_t CodedOutputStream_ComputeInt32Size_m1726852181_MetadataUsageId;
extern RuntimeClass* IMessageLite_t757992097_il2cpp_TypeInfo_var;
extern const uint32_t CodedOutputStream_ComputeMessageSize_m4104294790_MetadataUsageId;
extern const uint32_t CodedOutputStream_ComputeEnumSize_m1843994409_MetadataUsageId;
extern const uint32_t CodedOutputStream_ComputeInt32SizeNoTag_m1405344942_MetadataUsageId;
extern const uint32_t CodedOutputStream_ComputeEnumSizeNoTag_m4001655031_MetadataUsageId;
extern const uint32_t CodedOutputStream_ComputeTagSize_m884151256_MetadataUsageId;
extern const uint32_t CodedOutputStream_CreateInstance_m3273851521_MetadataUsageId;
extern const uint32_t CodedOutputStream_CreateInstance_m2942481731_MetadataUsageId;
extern const uint32_t CodedOutputStream_WriteMessage_m587327620_MetadataUsageId;
extern const uint32_t CodedOutputStream_WriteFloatNoTag_m882781006_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t377119663_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1829837242_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t CodedOutputStream_WritePackedFloatArray_m1546821466_MetadataUsageId;
extern RuntimeClass* OutOfSpaceException_t1185332314_il2cpp_TypeInfo_var;
extern const uint32_t CodedOutputStream_RefreshBuffer_m3657088584_MetadataUsageId;
extern String_t* _stringLiteral3129599196;
extern const uint32_t CodedOutputStream_CheckNoSpaceLeft_m2723306956_MetadataUsageId;
extern const uint32_t CodedOutputStream__cctor_m359340821_MetadataUsageId;
extern String_t* _stringLiteral3540590872;
extern const uint32_t OutOfSpaceException__ctor_m896107874_MetadataUsageId;
extern RuntimeClass* ExtensionRegistry_t4271428238_il2cpp_TypeInfo_var;
extern const uint32_t ExtensionRegistry_get_Empty_m3666683255_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3107168633_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t294577696_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3201578209_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3929548244_RuntimeMethod_var;
extern const uint32_t ExtensionRegistry_CreateInstance_m1374935712_MetadataUsageId;
extern const uint32_t ExtensionRegistry__cctor_m952489930_MetadataUsageId;
extern RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
extern const uint32_t ExtensionIntPair_t1343559306_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t ExtensionIntPair_t1343559306_com_FromNativeMethodDefinition_MetadataUsageId;
extern RuntimeClass* ExtensionIntPair_t1343559306_il2cpp_TypeInfo_var;
extern const uint32_t ExtensionIntPair_Equals_m2971923064_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern const uint32_t FrameworkPortability_get_InvariantCulture_m1505314247_MetadataUsageId;
extern RuntimeClass* FrameworkPortability_t3105963803_il2cpp_TypeInfo_var;
extern const uint32_t FrameworkPortability__cctor_m4127935117_MetadataUsageId;
extern RuntimeClass* InvalidProtocolBufferException_t2498581859_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1338050223;
extern const uint32_t InvalidProtocolBufferException_TruncatedMessage_m431651349_MetadataUsageId;
extern String_t* _stringLiteral3390586787;
extern const uint32_t InvalidProtocolBufferException_NegativeSize_m3877348444_MetadataUsageId;
extern String_t* _stringLiteral2964272305;
extern const uint32_t InvalidProtocolBufferException_MalformedVarint_m1872881085_MetadataUsageId;
extern String_t* _stringLiteral3694319134;
extern const uint32_t InvalidProtocolBufferException_InvalidTag_m4139780452_MetadataUsageId;
extern String_t* _stringLiteral2812682840;
extern const uint32_t InvalidProtocolBufferException_InvalidEndTag_m4069912906_MetadataUsageId;
extern String_t* _stringLiteral2580557683;
extern const uint32_t InvalidProtocolBufferException_InvalidWireType_m1791826912_MetadataUsageId;
extern String_t* _stringLiteral3757154943;
extern const uint32_t InvalidProtocolBufferException_RecursionLimitExceeded_m3019288901_MetadataUsageId;
extern String_t* _stringLiteral4016927489;
extern const uint32_t InvalidProtocolBufferException_SizeLimitExceeded_m4122733860_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern const uint32_t ThrowHelper_ThrowIfNull_m4026022381_MetadataUsageId;
extern const uint32_t ThrowHelper_ThrowIfNull_m3924373085_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern String_t* _stringLiteral1859288917;
extern const uint32_t UninitializedMessageException__ctor_m2212995308_MetadataUsageId;
extern const uint32_t UninitializedMessageException_AsInvalidProtocolBufferException_m2123326276_MetadataUsageId;

struct ByteU5BU5D_t4116647657;


#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef DICTIONARY_2_T3107168633_H
#define DICTIONARY_2_T3107168633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct  Dictionary_2_t3107168633  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ObjectU5BU5D_t2843939325* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Dictionary_2U5BU5D_t1951857408* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3107168633, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3107168633, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3107168633, ___keySlots_6)); }
	inline ObjectU5BU5D_t2843939325* get_keySlots_6() const { return ___keySlots_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ObjectU5BU5D_t2843939325* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3107168633, ___valueSlots_7)); }
	inline Dictionary_2U5BU5D_t1951857408* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Dictionary_2U5BU5D_t1951857408** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Dictionary_2U5BU5D_t1951857408* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3107168633, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3107168633, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3107168633, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3107168633, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3107168633, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3107168633, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3107168633, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3107168633_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3317057727 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3107168633_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3317057727 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3317057727 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3317057727 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3107168633_H
#ifndef DICTIONARY_2_T294577696_H
#define DICTIONARY_2_T294577696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct  Dictionary_2_t294577696  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ExtensionIntPairU5BU5D_t4111571983* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	IGeneratedExtensionLiteU5BU5D_t1997464183* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t294577696, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t294577696, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t294577696, ___keySlots_6)); }
	inline ExtensionIntPairU5BU5D_t4111571983* get_keySlots_6() const { return ___keySlots_6; }
	inline ExtensionIntPairU5BU5D_t4111571983** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ExtensionIntPairU5BU5D_t4111571983* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t294577696, ___valueSlots_7)); }
	inline IGeneratedExtensionLiteU5BU5D_t1997464183* get_valueSlots_7() const { return ___valueSlots_7; }
	inline IGeneratedExtensionLiteU5BU5D_t1997464183** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(IGeneratedExtensionLiteU5BU5D_t1997464183* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t294577696, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t294577696, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t294577696, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t294577696, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t294577696, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t294577696, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t294577696, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t294577696_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1817293212 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t294577696_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1817293212 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1817293212 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1817293212 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T294577696_H
#ifndef FRAMEWORKPORTABILITY_T3105963803_H
#define FRAMEWORKPORTABILITY_T3105963803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.FrameworkPortability
struct  FrameworkPortability_t3105963803  : public RuntimeObject
{
public:

public:
};

struct FrameworkPortability_t3105963803_StaticFields
{
public:
	// System.String Google.ProtocolBuffers.FrameworkPortability::NewLine
	String_t* ___NewLine_0;

public:
	inline static int32_t get_offset_of_NewLine_0() { return static_cast<int32_t>(offsetof(FrameworkPortability_t3105963803_StaticFields, ___NewLine_0)); }
	inline String_t* get_NewLine_0() const { return ___NewLine_0; }
	inline String_t** get_address_of_NewLine_0() { return &___NewLine_0; }
	inline void set_NewLine_0(String_t* value)
	{
		___NewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___NewLine_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEWORKPORTABILITY_T3105963803_H
#ifndef LISTS_T2963336001_H
#define LISTS_T2963336001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.Collections.Lists
struct  Lists_t2963336001  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTS_T2963336001_H
#ifndef EXTENSIONREGISTRY_T4271428238_H
#define EXTENSIONREGISTRY_T4271428238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.ExtensionRegistry
struct  ExtensionRegistry_t4271428238  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>> Google.ProtocolBuffers.ExtensionRegistry::extensionsByName
	Dictionary_2_t3107168633 * ___extensionsByName_1;
	// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite> Google.ProtocolBuffers.ExtensionRegistry::extensionsByNumber
	Dictionary_2_t294577696 * ___extensionsByNumber_2;
	// System.Boolean Google.ProtocolBuffers.ExtensionRegistry::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_extensionsByName_1() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t4271428238, ___extensionsByName_1)); }
	inline Dictionary_2_t3107168633 * get_extensionsByName_1() const { return ___extensionsByName_1; }
	inline Dictionary_2_t3107168633 ** get_address_of_extensionsByName_1() { return &___extensionsByName_1; }
	inline void set_extensionsByName_1(Dictionary_2_t3107168633 * value)
	{
		___extensionsByName_1 = value;
		Il2CppCodeGenWriteBarrier((&___extensionsByName_1), value);
	}

	inline static int32_t get_offset_of_extensionsByNumber_2() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t4271428238, ___extensionsByNumber_2)); }
	inline Dictionary_2_t294577696 * get_extensionsByNumber_2() const { return ___extensionsByNumber_2; }
	inline Dictionary_2_t294577696 ** get_address_of_extensionsByNumber_2() { return &___extensionsByNumber_2; }
	inline void set_extensionsByNumber_2(Dictionary_2_t294577696 * value)
	{
		___extensionsByNumber_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensionsByNumber_2), value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t4271428238, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct ExtensionRegistry_t4271428238_StaticFields
{
public:
	// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::empty
	ExtensionRegistry_t4271428238 * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t4271428238_StaticFields, ___empty_0)); }
	inline ExtensionRegistry_t4271428238 * get_empty_0() const { return ___empty_0; }
	inline ExtensionRegistry_t4271428238 ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ExtensionRegistry_t4271428238 * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONREGISTRY_T4271428238_H
#ifndef LIST_1_T1293755103_H
#define LIST_1_T1293755103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte[]>
struct  List_1_t1293755103  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t457913172* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____items_1)); }
	inline ByteU5BU5DU5BU5D_t457913172* get__items_1() const { return ____items_1; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5DU5BU5D_t457913172* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1293755103_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ByteU5BU5DU5BU5D_t457913172* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1293755103_StaticFields, ___EmptyArray_4)); }
	inline ByteU5BU5DU5BU5D_t457913172* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ByteU5BU5DU5BU5D_t457913172* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1293755103_H
#ifndef CODEDOUTPUTSTREAM_T1787628118_H
#define CODEDOUTPUTSTREAM_T1787628118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.CodedOutputStream
struct  CodedOutputStream_t1787628118  : public RuntimeObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.CodedOutputStream::buffer
	ByteU5BU5D_t4116647657* ___buffer_1;
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::limit
	int32_t ___limit_2;
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::position
	int32_t ___position_3;
	// System.IO.Stream Google.ProtocolBuffers.CodedOutputStream::output
	Stream_t1273022909 * ___output_4;

public:
	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(CodedOutputStream_t1787628118, ___buffer_1)); }
	inline ByteU5BU5D_t4116647657* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t4116647657* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(CodedOutputStream_t1787628118, ___limit_2)); }
	inline int32_t get_limit_2() const { return ___limit_2; }
	inline int32_t* get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(int32_t value)
	{
		___limit_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(CodedOutputStream_t1787628118, ___position_3)); }
	inline int32_t get_position_3() const { return ___position_3; }
	inline int32_t* get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(int32_t value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_output_4() { return static_cast<int32_t>(offsetof(CodedOutputStream_t1787628118, ___output_4)); }
	inline Stream_t1273022909 * get_output_4() const { return ___output_4; }
	inline Stream_t1273022909 ** get_address_of_output_4() { return &___output_4; }
	inline void set_output_4(Stream_t1273022909 * value)
	{
		___output_4 = value;
		Il2CppCodeGenWriteBarrier((&___output_4), value);
	}
};

struct CodedOutputStream_t1787628118_StaticFields
{
public:
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::DefaultBufferSize
	int32_t ___DefaultBufferSize_0;

public:
	inline static int32_t get_offset_of_DefaultBufferSize_0() { return static_cast<int32_t>(offsetof(CodedOutputStream_t1787628118_StaticFields, ___DefaultBufferSize_0)); }
	inline int32_t get_DefaultBufferSize_0() const { return ___DefaultBufferSize_0; }
	inline int32_t* get_address_of_DefaultBufferSize_0() { return &___DefaultBufferSize_0; }
	inline void set_DefaultBufferSize_0(int32_t value)
	{
		___DefaultBufferSize_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEDOUTPUTSTREAM_T1787628118_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef WIREFORMAT_T4196727973_H
#define WIREFORMAT_T4196727973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.WireFormat
struct  WireFormat_t4196727973  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIREFORMAT_T4196727973_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef THROWHELPER_T3137032741_H
#define THROWHELPER_T3137032741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.ThrowHelper
struct  ThrowHelper_t3137032741  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THROWHELPER_T3137032741_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef BYTEARRAY_T1708291894_H
#define BYTEARRAY_T1708291894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.ByteArray
struct  ByteArray_t1708291894  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEARRAY_T1708291894_H
#ifndef BYTESTRING_T35393593_H
#define BYTESTRING_T35393593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.ByteString
struct  ByteString_t35393593  : public RuntimeObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.ByteString::bytes
	ByteU5BU5D_t4116647657* ___bytes_1;

public:
	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(ByteString_t35393593, ___bytes_1)); }
	inline ByteU5BU5D_t4116647657* get_bytes_1() const { return ___bytes_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(ByteU5BU5D_t4116647657* value)
	{
		___bytes_1 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_1), value);
	}
};

struct ByteString_t35393593_StaticFields
{
public:
	// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.ByteString::empty
	ByteString_t35393593 * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ByteString_t35393593_StaticFields, ___empty_0)); }
	inline ByteString_t35393593 * get_empty_0() const { return ___empty_0; }
	inline ByteString_t35393593 ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ByteString_t35393593 * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTESTRING_T35393593_H
#ifndef CODEDINPUTSTREAM_T2502120507_H
#define CODEDINPUTSTREAM_T2502120507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.CodedInputStream
struct  CodedInputStream_t2502120507  : public RuntimeObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.CodedInputStream::buffer
	ByteU5BU5D_t4116647657* ___buffer_0;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::bufferSize
	int32_t ___bufferSize_1;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::bufferSizeAfterLimit
	int32_t ___bufferSizeAfterLimit_2;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::bufferPos
	int32_t ___bufferPos_3;
	// System.IO.Stream Google.ProtocolBuffers.CodedInputStream::input
	Stream_t1273022909 * ___input_4;
	// System.UInt32 Google.ProtocolBuffers.CodedInputStream::lastTag
	uint32_t ___lastTag_5;
	// System.UInt32 Google.ProtocolBuffers.CodedInputStream::nextTag
	uint32_t ___nextTag_6;
	// System.Boolean Google.ProtocolBuffers.CodedInputStream::hasNextTag
	bool ___hasNextTag_7;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::totalBytesRetired
	int32_t ___totalBytesRetired_8;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::currentLimit
	int32_t ___currentLimit_9;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::recursionDepth
	int32_t ___recursionDepth_10;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::recursionLimit
	int32_t ___recursionLimit_11;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::sizeLimit
	int32_t ___sizeLimit_12;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(CodedInputStream_t2502120507, ___buffer_0)); }
	inline ByteU5BU5D_t4116647657* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t4116647657* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_0), value);
	}

	inline static int32_t get_offset_of_bufferSize_1() { return static_cast<int32_t>(offsetof(CodedInputStream_t2502120507, ___bufferSize_1)); }
	inline int32_t get_bufferSize_1() const { return ___bufferSize_1; }
	inline int32_t* get_address_of_bufferSize_1() { return &___bufferSize_1; }
	inline void set_bufferSize_1(int32_t value)
	{
		___bufferSize_1 = value;
	}

	inline static int32_t get_offset_of_bufferSizeAfterLimit_2() { return static_cast<int32_t>(offsetof(CodedInputStream_t2502120507, ___bufferSizeAfterLimit_2)); }
	inline int32_t get_bufferSizeAfterLimit_2() const { return ___bufferSizeAfterLimit_2; }
	inline int32_t* get_address_of_bufferSizeAfterLimit_2() { return &___bufferSizeAfterLimit_2; }
	inline void set_bufferSizeAfterLimit_2(int32_t value)
	{
		___bufferSizeAfterLimit_2 = value;
	}

	inline static int32_t get_offset_of_bufferPos_3() { return static_cast<int32_t>(offsetof(CodedInputStream_t2502120507, ___bufferPos_3)); }
	inline int32_t get_bufferPos_3() const { return ___bufferPos_3; }
	inline int32_t* get_address_of_bufferPos_3() { return &___bufferPos_3; }
	inline void set_bufferPos_3(int32_t value)
	{
		___bufferPos_3 = value;
	}

	inline static int32_t get_offset_of_input_4() { return static_cast<int32_t>(offsetof(CodedInputStream_t2502120507, ___input_4)); }
	inline Stream_t1273022909 * get_input_4() const { return ___input_4; }
	inline Stream_t1273022909 ** get_address_of_input_4() { return &___input_4; }
	inline void set_input_4(Stream_t1273022909 * value)
	{
		___input_4 = value;
		Il2CppCodeGenWriteBarrier((&___input_4), value);
	}

	inline static int32_t get_offset_of_lastTag_5() { return static_cast<int32_t>(offsetof(CodedInputStream_t2502120507, ___lastTag_5)); }
	inline uint32_t get_lastTag_5() const { return ___lastTag_5; }
	inline uint32_t* get_address_of_lastTag_5() { return &___lastTag_5; }
	inline void set_lastTag_5(uint32_t value)
	{
		___lastTag_5 = value;
	}

	inline static int32_t get_offset_of_nextTag_6() { return static_cast<int32_t>(offsetof(CodedInputStream_t2502120507, ___nextTag_6)); }
	inline uint32_t get_nextTag_6() const { return ___nextTag_6; }
	inline uint32_t* get_address_of_nextTag_6() { return &___nextTag_6; }
	inline void set_nextTag_6(uint32_t value)
	{
		___nextTag_6 = value;
	}

	inline static int32_t get_offset_of_hasNextTag_7() { return static_cast<int32_t>(offsetof(CodedInputStream_t2502120507, ___hasNextTag_7)); }
	inline bool get_hasNextTag_7() const { return ___hasNextTag_7; }
	inline bool* get_address_of_hasNextTag_7() { return &___hasNextTag_7; }
	inline void set_hasNextTag_7(bool value)
	{
		___hasNextTag_7 = value;
	}

	inline static int32_t get_offset_of_totalBytesRetired_8() { return static_cast<int32_t>(offsetof(CodedInputStream_t2502120507, ___totalBytesRetired_8)); }
	inline int32_t get_totalBytesRetired_8() const { return ___totalBytesRetired_8; }
	inline int32_t* get_address_of_totalBytesRetired_8() { return &___totalBytesRetired_8; }
	inline void set_totalBytesRetired_8(int32_t value)
	{
		___totalBytesRetired_8 = value;
	}

	inline static int32_t get_offset_of_currentLimit_9() { return static_cast<int32_t>(offsetof(CodedInputStream_t2502120507, ___currentLimit_9)); }
	inline int32_t get_currentLimit_9() const { return ___currentLimit_9; }
	inline int32_t* get_address_of_currentLimit_9() { return &___currentLimit_9; }
	inline void set_currentLimit_9(int32_t value)
	{
		___currentLimit_9 = value;
	}

	inline static int32_t get_offset_of_recursionDepth_10() { return static_cast<int32_t>(offsetof(CodedInputStream_t2502120507, ___recursionDepth_10)); }
	inline int32_t get_recursionDepth_10() const { return ___recursionDepth_10; }
	inline int32_t* get_address_of_recursionDepth_10() { return &___recursionDepth_10; }
	inline void set_recursionDepth_10(int32_t value)
	{
		___recursionDepth_10 = value;
	}

	inline static int32_t get_offset_of_recursionLimit_11() { return static_cast<int32_t>(offsetof(CodedInputStream_t2502120507, ___recursionLimit_11)); }
	inline int32_t get_recursionLimit_11() const { return ___recursionLimit_11; }
	inline int32_t* get_address_of_recursionLimit_11() { return &___recursionLimit_11; }
	inline void set_recursionLimit_11(int32_t value)
	{
		___recursionLimit_11 = value;
	}

	inline static int32_t get_offset_of_sizeLimit_12() { return static_cast<int32_t>(offsetof(CodedInputStream_t2502120507, ___sizeLimit_12)); }
	inline int32_t get_sizeLimit_12() const { return ___sizeLimit_12; }
	inline int32_t* get_address_of_sizeLimit_12() { return &___sizeLimit_12; }
	inline void set_sizeLimit_12(int32_t value)
	{
		___sizeLimit_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEDINPUTSTREAM_T2502120507_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef BITCONVERTER_T3118986983_H
#define BITCONVERTER_T3118986983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t3118986983  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t3118986983_StaticFields
{
public:
	// System.Boolean System.BitConverter::SwappedWordsInDouble
	bool ___SwappedWordsInDouble_0;
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_1;

public:
	inline static int32_t get_offset_of_SwappedWordsInDouble_0() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___SwappedWordsInDouble_0)); }
	inline bool get_SwappedWordsInDouble_0() const { return ___SwappedWordsInDouble_0; }
	inline bool* get_address_of_SwappedWordsInDouble_0() { return &___SwappedWordsInDouble_0; }
	inline void set_SwappedWordsInDouble_0(bool value)
	{
		___SwappedWordsInDouble_0 = value;
	}

	inline static int32_t get_offset_of_IsLittleEndian_1() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___IsLittleEndian_1)); }
	inline bool get_IsLittleEndian_1() const { return ___IsLittleEndian_1; }
	inline bool* get_address_of_IsLittleEndian_1() { return &___IsLittleEndian_1; }
	inline void set_IsLittleEndian_1(bool value)
	{
		___IsLittleEndian_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T3118986983_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef UNINITIALIZEDMESSAGEEXCEPTION_T3402409807_H
#define UNINITIALIZEDMESSAGEEXCEPTION_T3402409807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.UninitializedMessageException
struct  UninitializedMessageException_t3402409807  : public Exception_t
{
public:
	// System.Collections.Generic.IList`1<System.String> Google.ProtocolBuffers.UninitializedMessageException::missingFields
	RuntimeObject* ___missingFields_11;

public:
	inline static int32_t get_offset_of_missingFields_11() { return static_cast<int32_t>(offsetof(UninitializedMessageException_t3402409807, ___missingFields_11)); }
	inline RuntimeObject* get_missingFields_11() const { return ___missingFields_11; }
	inline RuntimeObject** get_address_of_missingFields_11() { return &___missingFields_11; }
	inline void set_missingFields_11(RuntimeObject* value)
	{
		___missingFields_11 = value;
		Il2CppCodeGenWriteBarrier((&___missingFields_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNINITIALIZEDMESSAGEEXCEPTION_T3402409807_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef ENUMERATOR_T3182998980_H
#define ENUMERATOR_T3182998980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
struct  Enumerator_t3182998980 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1293755103 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ByteU5BU5D_t4116647657* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3182998980, ___l_0)); }
	inline List_1_t1293755103 * get_l_0() const { return ___l_0; }
	inline List_1_t1293755103 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1293755103 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3182998980, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3182998980, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3182998980, ___current_3)); }
	inline ByteU5BU5D_t4116647657* get_current_3() const { return ___current_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ByteU5BU5D_t4116647657* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3182998980_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef EXTENSIONINTPAIR_T1343559306_H
#define EXTENSIONINTPAIR_T1343559306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct  ExtensionIntPair_t1343559306 
{
public:
	// System.Object Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::msgType
	RuntimeObject * ___msgType_0;
	// System.Int32 Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::number
	int32_t ___number_1;

public:
	inline static int32_t get_offset_of_msgType_0() { return static_cast<int32_t>(offsetof(ExtensionIntPair_t1343559306, ___msgType_0)); }
	inline RuntimeObject * get_msgType_0() const { return ___msgType_0; }
	inline RuntimeObject ** get_address_of_msgType_0() { return &___msgType_0; }
	inline void set_msgType_0(RuntimeObject * value)
	{
		___msgType_0 = value;
		Il2CppCodeGenWriteBarrier((&___msgType_0), value);
	}

	inline static int32_t get_offset_of_number_1() { return static_cast<int32_t>(offsetof(ExtensionIntPair_t1343559306, ___number_1)); }
	inline int32_t get_number_1() const { return ___number_1; }
	inline int32_t* get_address_of_number_1() { return &___number_1; }
	inline void set_number_1(int32_t value)
	{
		___number_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct ExtensionIntPair_t1343559306_marshaled_pinvoke
{
	Il2CppIUnknown* ___msgType_0;
	int32_t ___number_1;
};
// Native definition for COM marshalling of Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct ExtensionIntPair_t1343559306_marshaled_com
{
	Il2CppIUnknown* ___msgType_0;
	int32_t ___number_1;
};
#endif // EXTENSIONINTPAIR_T1343559306_H
#ifndef WIRETYPE_T2332021402_H
#define WIRETYPE_T2332021402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.WireFormat/WireType
struct  WireType_t2332021402 
{
public:
	// System.UInt32 Google.ProtocolBuffers.WireFormat/WireType::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WireType_t2332021402, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIRETYPE_T2332021402_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef IOEXCEPTION_T4088381929_H
#define IOEXCEPTION_T4088381929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IOException
struct  IOException_t4088381929  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOEXCEPTION_T4088381929_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef OUTOFSPACEEXCEPTION_T1185332314_H
#define OUTOFSPACEEXCEPTION_T1185332314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.CodedOutputStream/OutOfSpaceException
struct  OutOfSpaceException_t1185332314  : public IOException_t4088381929
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFSPACEEXCEPTION_T1185332314_H
#ifndef INVALIDPROTOCOLBUFFEREXCEPTION_T2498581859_H
#define INVALIDPROTOCOLBUFFEREXCEPTION_T2498581859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.InvalidProtocolBufferException
struct  InvalidProtocolBufferException_t2498581859  : public IOException_t4088381929
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDPROTOCOLBUFFEREXCEPTION_T2498581859_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2246746601_gshared (Dictionary_2_t1400177810 * __this, const RuntimeMethod* method);

// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.ByteArray::ByteCopy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void ByteArray_ByteCopy_m3383142451 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___src0, int32_t ___srcOffset1, ByteU5BU5D_t4116647657* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Byte> Google.ProtocolBuffers.ByteString::GetEnumerator()
extern "C"  RuntimeObject* ByteString_GetEnumerator_m3703723788 (ByteString_t35393593 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.Byte[])
extern "C"  CodedInputStream_t2502120507 * CodedInputStream_CreateInstance_m1189590698 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buf0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(Google.ProtocolBuffers.ByteString)
extern "C"  bool ByteString_Equals_m3363214530 (ByteString_t35393593 * __this, ByteString_t35393593 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.ByteString::.ctor(System.Byte[])
extern "C"  void ByteString__ctor_m3931378155 (ByteString_t35393593 * __this, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::RefillBuffer(System.Boolean)
extern "C"  bool CodedInputStream_RefillBuffer_m1552953620 (CodedInputStream_t2502120507 * __this, bool ___mustSucceed0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.IO.Stream)
extern "C"  void CodedInputStream__ctor_m2057008778 (CodedInputStream_t2502120507 * __this, Stream_t1273022909 * ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void CodedInputStream__ctor_m1499434356 (CodedInputStream_t2502120507 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidEndTag()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_InvalidEndTag_m4069912906 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadTag(System.UInt32&,System.String&)
extern "C"  bool CodedInputStream_ReadTag_m4000905079 (CodedInputStream_t2502120507 * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_IsAtEnd()
extern "C"  bool CodedInputStream_get_IsAtEnd_m3022129809 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32()
extern "C"  uint32_t CodedInputStream_ReadRawVarint32_m2491433814 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidTag()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_InvalidTag_m4139780452 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
extern "C"  float BitConverter_ToSingle_m2597008633 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Google.ProtocolBuffers.CodedInputStream::ReadRawBytes(System.Int32)
extern "C"  ByteU5BU5D_t4116647657* CodedInputStream_ReadRawBytes_m2213130119 (CodedInputStream_t2502120507 * __this, int32_t ___size0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.ByteArray::Reverse(System.Byte[])
extern "C"  void ByteArray_Reverse_m4120234811 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint64()
extern "C"  uint64_t CodedInputStream_ReadRawVarint64_m833850785 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::RecursionLimitExceeded()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_RecursionLimitExceeded_m3019288901 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedInputStream::PushLimit(System.Int32)
extern "C"  int32_t CodedInputStream_PushLimit_m2130578355 (CodedInputStream_t2502120507 * __this, int32_t ___byteLimit0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::CheckLastTagWas(System.UInt32)
extern "C"  void CodedInputStream_CheckLastTagWas_m2160894000 (CodedInputStream_t2502120507 * __this, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::PopLimit(System.Int32)
extern "C"  void CodedInputStream_PopLimit_m729607487 (CodedInputStream_t2502120507 * __this, int32_t ___oldLimit0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.WireFormat/WireType Google.ProtocolBuffers.WireFormat::GetTagWireType(System.UInt32)
extern "C"  uint32_t WireFormat_GetTagWireType_m1784829716 (RuntimeObject * __this /* static, unused */, uint32_t ___tag0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::PeekNextTag(System.UInt32&,System.String&)
extern "C"  bool CodedInputStream_PeekNextTag_m4258580647 (CodedInputStream_t2502120507 * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_ReachedLimit()
extern "C"  bool CodedInputStream_get_ReachedLimit_m539955282 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::BeginArray(System.UInt32,System.Boolean&,System.Int32&)
extern "C"  bool CodedInputStream_BeginArray_m3587638847 (CodedInputStream_t2502120507 * __this, uint32_t ___fieldTag0, bool* ___isPacked1, int32_t* ___oldLimit2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadFloat(System.Single&)
extern "C"  bool CodedInputStream_ReadFloat_m2225975549 (CodedInputStream_t2502120507 * __this, float* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ContinueArray(System.UInt32,System.Boolean,System.Int32)
extern "C"  bool CodedInputStream_ContinueArray_m833210973 (CodedInputStream_t2502120507 * __this, uint32_t ___currentTag0, bool ___packed1, int32_t ___oldLimit2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte Google.ProtocolBuffers.CodedInputStream::ReadRawByte()
extern "C"  uint8_t CodedInputStream_ReadRawByte_m2959293679 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::MalformedVarint()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_MalformedVarint_m1872881085 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::SlowReadRawVarint32()
extern "C"  uint32_t CodedInputStream_SlowReadRawVarint32_m1315368278 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::TruncatedMessage()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_TruncatedMessage_m431651349 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::NegativeSize()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_NegativeSize_m3877348444 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::RecomputeBufferSizeAfterLimit()
extern "C"  void CodedInputStream_RecomputeBufferSizeAfterLimit_m2495409346 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::SizeLimitExceeded()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_SizeLimitExceeded_m4122733860 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipRawBytes(System.Int32)
extern "C"  void CodedInputStream_SkipRawBytes_m1198703808 (CodedInputStream_t2502120507 * __this, int32_t ___size0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.ByteArray::Copy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void ByteArray_Copy_m353681296 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___src0, int32_t ___srcOffset1, ByteU5BU5D_t4116647657* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
#define List_1__ctor_m2588888624(__this, method) ((  void (*) (List_1_t1293755103 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C"  int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0)
#define List_1_Add_m403195898(__this, p0, method) ((  void (*) (List_1_t1293755103 *, ByteU5BU5D_t4116647657*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m546097336(__this, method) ((  Enumerator_t3182998980  (*) (List_1_t1293755103 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.Byte[]>::get_Current()
#define Enumerator_get_Current_m2689264918(__this, method) ((  ByteU5BU5D_t4116647657* (*) (Enumerator_t3182998980 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte[]>::MoveNext()
#define Enumerator_MoveNext_m1074123736(__this, method) ((  bool (*) (Enumerator_t3182998980 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::Dispose()
#define Enumerator_Dispose_m4103594724(__this, method) ((  void (*) (Enumerator_t3182998980 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian64()
extern "C"  uint64_t CodedInputStream_ReadRawLittleEndian64_m1722220135 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipMessage()
extern "C"  void CodedInputStream_SkipMessage_m2810518322 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.WireFormat::GetTagFieldNumber(System.UInt32)
extern "C"  int32_t WireFormat_GetTagFieldNumber_m3577868076 (RuntimeObject * __this /* static, unused */, uint32_t ___tag0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.WireFormat::MakeTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
extern "C"  uint32_t WireFormat_MakeTag_m3849727317 (RuntimeObject * __this /* static, unused */, int32_t ___fieldNumber0, uint32_t ___wireType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian32()
extern "C"  uint32_t CodedInputStream_ReadRawLittleEndian32_m2825115295 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidWireType()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_InvalidWireType_m1791826912 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::SkipField()
extern "C"  bool CodedInputStream_SkipField_m3458488922 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipImpl(System.Int32)
extern "C"  void CodedInputStream_SkipImpl_m3770172997 (CodedInputStream_t2502120507 * __this, int32_t ___amountToSkip0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeTagSize(System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeTagSize_m884151256 (RuntimeObject * __this /* static, unused */, int32_t ___fieldNumber0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint64Size(System.UInt64)
extern "C"  int32_t CodedOutputStream_ComputeRawVarint64Size_m165941965 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint32Size(System.UInt32)
extern "C"  int32_t CodedOutputStream_ComputeRawVarint32Size_m296883321 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSizeNoTag(System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeEnumSizeNoTag_m4001655031 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32SizeNoTag(System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeInt32SizeNoTag_m1405344942 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[],System.Int32,System.Int32)
extern "C"  CodedOutputStream_t1787628118 * CodedOutputStream_CreateInstance_m2942481731 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___flatArray0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void CodedOutputStream__ctor_m327425152 (CodedOutputStream_t1787628118 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
extern "C"  void CodedOutputStream_WriteTag_m1986134109 (CodedOutputStream_t1787628118 * __this, int32_t ___fieldNumber0, uint32_t ___type1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloatNoTag(System.Single)
extern "C"  void CodedOutputStream_WriteFloatNoTag_m882781006 (CodedOutputStream_t1787628118 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint64(System.UInt64)
extern "C"  void CodedOutputStream_WriteRawVarint64_m3794261664 (CodedOutputStream_t1787628118 * __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint32(System.UInt32)
extern "C"  void CodedOutputStream_WriteRawVarint32_m570521165 (CodedOutputStream_t1787628118 * __this, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32NoTag(System.Int32)
extern "C"  void CodedOutputStream_WriteInt32NoTag_m3717998490 (CodedOutputStream_t1787628118 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Single)
extern "C"  ByteU5BU5D_t4116647657* BitConverter_GetBytes_m692533364 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void CodedOutputStream_WriteRawBytes_m1689167676 (CodedOutputStream_t1787628118 * __this, ByteU5BU5D_t4116647657* ___value0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawByte(System.Byte)
extern "C"  void CodedOutputStream_WriteRawByte_m308545699 (CodedOutputStream_t1787628118 * __this, uint8_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::RefreshBuffer()
extern "C"  void CodedOutputStream_RefreshBuffer_m3657088584 (CodedOutputStream_t1787628118 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream/OutOfSpaceException::.ctor()
extern "C"  void OutOfSpaceException__ctor_m896107874 (OutOfSpaceException_t1185332314 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::get_SpaceLeft()
extern "C"  int32_t CodedOutputStream_get_SpaceLeft_m2112861421 (CodedOutputStream_t1787628118 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String)
extern "C"  void IOException__ctor_m3662782713 (IOException_t4088381929 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>::.ctor()
#define Dictionary_2__ctor_m3201578209(__this, method) ((  void (*) (Dictionary_2_t3107168633 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>::.ctor()
#define Dictionary_2__ctor_m3929548244(__this, method) ((  void (*) (Dictionary_2_t294577696 *, const RuntimeMethod*))Dictionary_2__ctor_m2246746601_gshared)(__this, method)
// System.Void Google.ProtocolBuffers.ExtensionRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>,System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>,System.Boolean)
extern "C"  void ExtensionRegistry__ctor_m3867830969 (ExtensionRegistry_t4271428238 * __this, Dictionary_2_t3107168633 * ___byName0, Dictionary_2_t294577696 * ___byNumber1, bool ___readOnly2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::GetHashCode()
extern "C"  int32_t ExtensionIntPair_GetHashCode_m725731987 (ExtensionIntPair_t1343559306 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::Equals(Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair)
extern "C"  bool ExtensionIntPair_Equals_m852740732 (ExtensionIntPair_t1343559306 * __this, ExtensionIntPair_t1343559306  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::Equals(System.Object)
extern "C"  bool ExtensionIntPair_Equals_m2971923064 (ExtensionIntPair_t1343559306 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
extern "C"  String_t* Environment_get_NewLine_m3211016485 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.InvalidProtocolBufferException::.ctor(System.String)
extern "C"  void InvalidProtocolBufferException__ctor_m4106175372 (InvalidProtocolBufferException_t2498581859 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor()
extern "C"  void ArgumentNullException__ctor_m2751210921 (ArgumentNullException_t1615371798 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
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
// System.Void Google.ProtocolBuffers.ByteArray::Copy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void ByteArray_Copy_m353681296 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___src0, int32_t ___srcOffset1, ByteU5BU5D_t4116647657* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___count4;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___src0;
		int32_t L_2 = ___srcOffset1;
		ByteU5BU5D_t4116647657* L_3 = ___dst2;
		int32_t L_4 = ___dstOffset3;
		int32_t L_5 = ___count4;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, (RuntimeArray *)(RuntimeArray *)L_3, L_4, L_5, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_0019:
	{
		ByteU5BU5D_t4116647657* L_6 = ___src0;
		int32_t L_7 = ___srcOffset1;
		ByteU5BU5D_t4116647657* L_8 = ___dst2;
		int32_t L_9 = ___dstOffset3;
		int32_t L_10 = ___count4;
		ByteArray_ByteCopy_m3383142451(NULL /*static, unused*/, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.ByteArray::ByteCopy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void ByteArray_ByteCopy_m3383142451 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___src0, int32_t ___srcOffset1, ByteU5BU5D_t4116647657* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___srcOffset1;
		int32_t L_1 = ___count4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = ___srcOffset1;
		V_1 = L_2;
		goto IL_001b;
	}

IL_000c:
	{
		ByteU5BU5D_t4116647657* L_3 = ___dst2;
		int32_t L_4 = ___dstOffset3;
		int32_t L_5 = L_4;
		___dstOffset3 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		ByteU5BU5D_t4116647657* L_6 = ___src0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_001b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.ByteArray::Reverse(System.Byte[])
extern "C"  void ByteArray_Reverse_m4120234811 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_1 = 0;
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		NullCheck(L_0);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)1));
		goto IL_0023;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_1 = ___bytes0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___bytes0;
		int32_t L_6 = V_1;
		ByteU5BU5D_t4116647657* L_7 = ___bytes0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)L_10);
		ByteU5BU5D_t4116647657* L_11 = ___bytes0;
		int32_t L_12 = V_2;
		uint8_t L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)L_13);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000d;
		}
	}
	{
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
// System.Void Google.ProtocolBuffers.ByteString::.ctor(System.Byte[])
extern "C"  void ByteString__ctor_m3931378155 (ByteString_t35393593 * __this, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		__this->set_bytes_1(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Byte> Google.ProtocolBuffers.ByteString::GetEnumerator()
extern "C"  RuntimeObject* ByteString_GetEnumerator_m3703723788 (ByteString_t35393593 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteString_GetEnumerator_m3703723788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_bytes_1();
		NullCheck((RuntimeObject*)(RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Byte>::GetEnumerator() */, IEnumerable_1_t114149265_il2cpp_TypeInfo_var, (RuntimeObject*)(RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Google.ProtocolBuffers.ByteString::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* ByteString_System_Collections_IEnumerable_GetEnumerator_m294446894 (ByteString_t35393593 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ByteString_GetEnumerator_m3703723788(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.ByteString::CreateCodedInput()
extern "C"  CodedInputStream_t2502120507 * ByteString_CreateCodedInput_m287919229 (ByteString_t35393593 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_bytes_1();
		CodedInputStream_t2502120507 * L_1 = CodedInputStream_CreateInstance_m1189590698(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(System.Object)
extern "C"  bool ByteString_Equals_m500704785 (ByteString_t35393593 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteString_Equals_m500704785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteString_t35393593 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ByteString_t35393593 *)IsInstSealed((RuntimeObject*)L_0, ByteString_t35393593_il2cpp_TypeInfo_var));
		RuntimeObject * L_1 = ___obj0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		ByteString_t35393593 * L_2 = V_0;
		bool L_3 = ByteString_Equals_m3363214530(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Google.ProtocolBuffers.ByteString::GetHashCode()
extern "C"  int32_t ByteString_GetHashCode_m3233768498 (ByteString_t35393593 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = ((int32_t)23);
		ByteU5BU5D_t4116647657* L_0 = __this->get_bytes_1();
		V_2 = L_0;
		V_3 = 0;
		goto IL_001f;
	}

IL_0011:
	{
		ByteU5BU5D_t4116647657* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_0;
		uint8_t L_6 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5<<(int32_t)8))|(int32_t)L_6));
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_8 = V_3;
		ByteU5BU5D_t4116647657* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(Google.ProtocolBuffers.ByteString)
extern "C"  bool ByteString_Equals_m3363214530 (ByteString_t35393593 * __this, ByteString_t35393593 * ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteString_t35393593 * L_0 = ___other0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = L_0->get_bytes_1();
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = __this->get_bytes_1();
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		V_0 = 0;
		goto IL_0039;
	}

IL_001e:
	{
		ByteString_t35393593 * L_3 = ___other0;
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_4 = L_3->get_bytes_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_t4116647657* L_8 = __this->get_bytes_1();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_0;
		ByteU5BU5D_t4116647657* L_14 = __this->get_bytes_1();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void Google.ProtocolBuffers.ByteString::.cctor()
extern "C"  void ByteString__cctor_m2348286826 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteString__cctor_m2348286826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteString_t35393593 * L_0 = (ByteString_t35393593 *)il2cpp_codegen_object_new(ByteString_t35393593_il2cpp_TypeInfo_var);
		ByteString__ctor_m3931378155(L_0, ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		((ByteString_t35393593_StaticFields*)il2cpp_codegen_static_fields_for(ByteString_t35393593_il2cpp_TypeInfo_var))->set_empty_0(L_0);
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
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void CodedInputStream__ctor_m1499434356 (CodedInputStream_t2502120507 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		__this->set_bufferSizeAfterLimit_2(0);
		__this->set_bufferPos_3(0);
		__this->set_lastTag_5(0);
		__this->set_nextTag_6(0);
		__this->set_hasNextTag_7((bool)0);
		__this->set_totalBytesRetired_8(0);
		__this->set_currentLimit_9(((int32_t)2147483647LL));
		__this->set_recursionDepth_10(0);
		__this->set_recursionLimit_11(((int32_t)64));
		__this->set_sizeLimit_12(((int32_t)67108864));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		__this->set_buffer_0(L_0);
		int32_t L_1 = ___offset1;
		__this->set_bufferPos_3(L_1);
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		__this->set_bufferSize_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		__this->set_input_4((Stream_t1273022909 *)NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.IO.Stream)
extern "C"  void CodedInputStream__ctor_m2057008778 (CodedInputStream_t2502120507 * __this, Stream_t1273022909 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream__ctor_m2057008778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_bufferSizeAfterLimit_2(0);
		__this->set_bufferPos_3(0);
		__this->set_lastTag_5(0);
		__this->set_nextTag_6(0);
		__this->set_hasNextTag_7((bool)0);
		__this->set_totalBytesRetired_8(0);
		__this->set_currentLimit_9(((int32_t)2147483647LL));
		__this->set_recursionDepth_10(0);
		__this->set_recursionLimit_11(((int32_t)64));
		__this->set_sizeLimit_12(((int32_t)67108864));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_buffer_0(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096))));
		__this->set_bufferSize_1(0);
		Stream_t1273022909 * L_0 = ___input0;
		__this->set_input_4(L_0);
		return;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_ReachedLimit()
extern "C"  bool CodedInputStream_get_ReachedLimit_m539955282 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_currentLimit_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		int32_t L_1 = __this->get_totalBytesRetired_8();
		int32_t L_2 = __this->get_bufferPos_3();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_currentLimit_9();
		return (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_IsAtEnd()
extern "C"  bool CodedInputStream_get_IsAtEnd_m3022129809 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_bufferPos_3();
		int32_t L_1 = __this->get_bufferSize_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = CodedInputStream_RefillBuffer_m1552953620(__this, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.IO.Stream)
extern "C"  CodedInputStream_t2502120507 * CodedInputStream_CreateInstance_m2264275690 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_CreateInstance_m2264275690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_t1273022909 * L_0 = ___input0;
		CodedInputStream_t2502120507 * L_1 = (CodedInputStream_t2502120507 *)il2cpp_codegen_object_new(CodedInputStream_t2502120507_il2cpp_TypeInfo_var);
		CodedInputStream__ctor_m2057008778(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.Byte[])
extern "C"  CodedInputStream_t2502120507 * CodedInputStream_CreateInstance_m1189590698 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_CreateInstance_m1189590698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___buf0;
		ByteU5BU5D_t4116647657* L_1 = ___buf0;
		NullCheck(L_1);
		CodedInputStream_t2502120507 * L_2 = (CodedInputStream_t2502120507 *)il2cpp_codegen_object_new(CodedInputStream_t2502120507_il2cpp_TypeInfo_var);
		CodedInputStream__ctor_m1499434356(L_2, L_0, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::CheckLastTagWas(System.UInt32)
extern "C"  void CodedInputStream_CheckLastTagWas_m2160894000 (CodedInputStream_t2502120507 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_lastTag_5();
		uint32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_2 = InvalidProtocolBufferException_InvalidEndTag_m4069912906(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::PeekNextTag(System.UInt32&,System.String&)
extern "C"  bool CodedInputStream_PeekNextTag_m4258580647 (CodedInputStream_t2502120507 * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		bool L_0 = __this->get_hasNextTag_7();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t** L_1 = ___fieldName1;
		*((RuntimeObject **)(L_1)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_1), (RuntimeObject *)NULL);
		uint32_t* L_2 = ___fieldTag0;
		uint32_t L_3 = __this->get_nextTag_6();
		*((int32_t*)(L_2)) = (int32_t)L_3;
		return (bool)1;
	}

IL_0018:
	{
		uint32_t L_4 = __this->get_lastTag_5();
		V_0 = L_4;
		uint32_t* L_5 = __this->get_address_of_nextTag_6();
		String_t** L_6 = ___fieldName1;
		bool L_7 = CodedInputStream_ReadTag_m4000905079(__this, L_5, L_6, /*hidden argument*/NULL);
		__this->set_hasNextTag_7(L_7);
		uint32_t L_8 = V_0;
		__this->set_lastTag_5(L_8);
		uint32_t* L_9 = ___fieldTag0;
		uint32_t L_10 = __this->get_nextTag_6();
		*((int32_t*)(L_9)) = (int32_t)L_10;
		bool L_11 = __this->get_hasNextTag_7();
		return L_11;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadTag(System.UInt32&,System.String&)
extern "C"  bool CodedInputStream_ReadTag_m4000905079 (CodedInputStream_t2502120507 * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const RuntimeMethod* method)
{
	{
		String_t** L_0 = ___fieldName1;
		*((RuntimeObject **)(L_0)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_0), (RuntimeObject *)NULL);
		bool L_1 = __this->get_hasNextTag_7();
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		uint32_t* L_2 = ___fieldTag0;
		uint32_t L_3 = __this->get_nextTag_6();
		*((int32_t*)(L_2)) = (int32_t)L_3;
		uint32_t* L_4 = ___fieldTag0;
		__this->set_lastTag_5((*((uint32_t*)L_4)));
		__this->set_hasNextTag_7((bool)0);
		return (bool)1;
	}

IL_0027:
	{
		bool L_5 = CodedInputStream_get_IsAtEnd_m3022129809(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		uint32_t* L_6 = ___fieldTag0;
		*((int32_t*)(L_6)) = (int32_t)0;
		uint32_t* L_7 = ___fieldTag0;
		__this->set_lastTag_5((*((uint32_t*)L_7)));
		return (bool)0;
	}

IL_003f:
	{
		uint32_t* L_8 = ___fieldTag0;
		uint32_t L_9 = CodedInputStream_ReadRawVarint32_m2491433814(__this, /*hidden argument*/NULL);
		*((int32_t*)(L_8)) = (int32_t)L_9;
		uint32_t* L_10 = ___fieldTag0;
		__this->set_lastTag_5((*((uint32_t*)L_10)));
		uint32_t L_11 = __this->get_lastTag_5();
		if (L_11)
		{
			goto IL_0060;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_12 = InvalidProtocolBufferException_InvalidTag_m4139780452(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12);
	}

IL_0060:
	{
		return (bool)1;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadFloat(System.Single&)
extern "C"  bool CodedInputStream_ReadFloat_m2225975549 (CodedInputStream_t2502120507 * __this, float* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_ReadFloat_m2225975549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_1 = __this->get_bufferSize_1();
		int32_t L_2 = __this->get_bufferPos_3();
		if ((((int32_t)4) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)))))
		{
			goto IL_0043;
		}
	}
	{
		float* L_3 = ___value0;
		ByteU5BU5D_t4116647657* L_4 = __this->get_buffer_0();
		int32_t L_5 = __this->get_bufferPos_3();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_6 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		*((float*)(L_3)) = (float)L_6;
		int32_t L_7 = __this->get_bufferPos_3();
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)4)));
		goto IL_0064;
	}

IL_0043:
	{
		ByteU5BU5D_t4116647657* L_8 = CodedInputStream_ReadRawBytes_m2213130119(__this, 4, /*hidden argument*/NULL);
		V_0 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_9 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_10 = V_0;
		ByteArray_Reverse_m4120234811(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_005b:
	{
		float* L_11 = ___value0;
		ByteU5BU5D_t4116647657* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_13 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_12, 0, /*hidden argument*/NULL);
		*((float*)(L_11)) = (float)L_13;
	}

IL_0064:
	{
		return (bool)1;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadInt64(System.Int64&)
extern "C"  bool CodedInputStream_ReadInt64_m3899910568 (CodedInputStream_t2502120507 * __this, int64_t* ___value0, const RuntimeMethod* method)
{
	{
		int64_t* L_0 = ___value0;
		uint64_t L_1 = CodedInputStream_ReadRawVarint64_m833850785(__this, /*hidden argument*/NULL);
		*((int64_t*)(L_0)) = (int64_t)L_1;
		return (bool)1;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadInt32(System.Int32&)
extern "C"  bool CodedInputStream_ReadInt32_m1254380512 (CodedInputStream_t2502120507 * __this, int32_t* ___value0, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___value0;
		uint32_t L_1 = CodedInputStream_ReadRawVarint32_m2491433814(__this, /*hidden argument*/NULL);
		*((int32_t*)(L_0)) = (int32_t)L_1;
		return (bool)1;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::ReadMessage(Google.ProtocolBuffers.IBuilderLite,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  void CodedInputStream_ReadMessage_m326501105 (CodedInputStream_t2502120507 * __this, RuntimeObject* ___builder0, ExtensionRegistry_t4271428238 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_ReadMessage_m326501105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = CodedInputStream_ReadRawVarint32_m2491433814(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = __this->get_recursionDepth_10();
		int32_t L_2 = __this->get_recursionLimit_11();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_3 = InvalidProtocolBufferException_RecursionLimitExceeded_m3019288901(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001e:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = CodedInputStream_PushLimit_m2130578355(__this, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = __this->get_recursionDepth_10();
		__this->set_recursionDepth_10(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		RuntimeObject* L_7 = ___builder0;
		ExtensionRegistry_t4271428238 * L_8 = ___extensionRegistry1;
		NullCheck(L_7);
		InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, ExtensionRegistry_t4271428238 * >::Invoke(0 /* Google.ProtocolBuffers.IBuilderLite Google.ProtocolBuffers.IBuilderLite::WeakMergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, IBuilderLite_t2966492016_il2cpp_TypeInfo_var, L_7, __this, L_8);
		CodedInputStream_CheckLastTagWas_m2160894000(__this, 0, /*hidden argument*/NULL);
		int32_t L_9 = __this->get_recursionDepth_10();
		__this->set_recursionDepth_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)));
		int32_t L_10 = V_1;
		CodedInputStream_PopLimit_m729607487(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::BeginArray(System.UInt32,System.Boolean&,System.Int32&)
extern "C"  bool CodedInputStream_BeginArray_m3587638847 (CodedInputStream_t2502120507 * __this, uint32_t ___fieldTag0, bool* ___isPacked1, int32_t* ___oldLimit2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool* L_0 = ___isPacked1;
		uint32_t L_1 = ___fieldTag0;
		uint32_t L_2 = WireFormat_GetTagWireType_m1784829716(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		*((int8_t*)(L_0)) = (int8_t)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		bool* L_3 = ___isPacked1;
		if (!(*((int8_t*)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		uint32_t L_4 = CodedInputStream_ReadRawVarint32_m2491433814(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_4&(int32_t)((int32_t)2147483647LL)));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t* L_6 = ___oldLimit2;
		int32_t L_7 = V_0;
		int32_t L_8 = CodedInputStream_PushLimit_m2130578355(__this, L_7, /*hidden argument*/NULL);
		*((int32_t*)(L_6)) = (int32_t)L_8;
		return (bool)1;
	}

IL_0031:
	{
		int32_t* L_9 = ___oldLimit2;
		*((int32_t*)(L_9)) = (int32_t)(-1);
		return (bool)0;
	}

IL_0036:
	{
		int32_t* L_10 = ___oldLimit2;
		*((int32_t*)(L_10)) = (int32_t)(-1);
		return (bool)1;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ContinueArray(System.UInt32)
extern "C"  bool CodedInputStream_ContinueArray_m1826566152 (CodedInputStream_t2502120507 * __this, uint32_t ___currentTag0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		bool L_0 = CodedInputStream_PeekNextTag_m4258580647(__this, (&V_1), (&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_1 = V_1;
		uint32_t L_2 = ___currentTag0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		__this->set_hasNextTag_7((bool)0);
		return (bool)1;
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ContinueArray(System.UInt32,System.Boolean,System.Int32)
extern "C"  bool CodedInputStream_ContinueArray_m833210973 (CodedInputStream_t2502120507 * __this, uint32_t ___currentTag0, bool ___packed1, int32_t ___oldLimit2, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		bool L_0 = ___packed1;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = CodedInputStream_get_ReachedLimit_m539955282(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___oldLimit2;
		CodedInputStream_PopLimit_m729607487(__this, L_2, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_001a:
	{
		return (bool)1;
	}

IL_001c:
	{
		bool L_3 = CodedInputStream_PeekNextTag_m4258580647(__this, (&V_1), (&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_4 = V_1;
		uint32_t L_5 = ___currentTag0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		__this->set_hasNextTag_7((bool)0);
		return (bool)1;
	}

IL_003b:
	{
		return (bool)0;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::ReadFloatArray(System.UInt32,System.String,System.Collections.Generic.ICollection`1<System.Single>)
extern "C"  void CodedInputStream_ReadFloatArray_m2066301380 (CodedInputStream_t2502120507 * __this, uint32_t ___fieldTag0, String_t* ___fieldName1, RuntimeObject* ___list2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_ReadFloatArray_m2066301380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		uint32_t L_0 = ___fieldTag0;
		bool L_1 = CodedInputStream_BeginArray_m3587638847(__this, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		V_2 = (0.0f);
	}

IL_0016:
	{
		CodedInputStream_ReadFloat_m2225975549(__this, (&V_2), /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___list2;
		float L_3 = V_2;
		NullCheck(L_2);
		InterfaceActionInvoker1< float >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Single>::Add(!0) */, ICollection_1_t4225419008_il2cpp_TypeInfo_var, L_2, L_3);
		uint32_t L_4 = ___fieldTag0;
		bool L_5 = V_0;
		int32_t L_6 = V_1;
		bool L_7 = CodedInputStream_ContinueArray_m833210973(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0016;
		}
	}

IL_0034:
	{
		return;
	}
}
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::SlowReadRawVarint32()
extern "C"  uint32_t CodedInputStream_SlowReadRawVarint32_m1315368278 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint8_t L_0 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		V_1 = ((int32_t)((int32_t)L_3&(int32_t)((int32_t)127)));
		uint8_t L_4 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		uint8_t L_5 = L_4;
		V_0 = L_5;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		V_1 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)7))));
		goto IL_00d2;
	}

IL_0036:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		V_1 = ((int32_t)((int32_t)L_8|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)127)))<<(int32_t)7))));
		uint8_t L_10 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		uint8_t L_11 = L_10;
		V_0 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)128))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		V_1 = ((int32_t)((int32_t)L_12|(int32_t)((int32_t)((int32_t)L_13<<(int32_t)((int32_t)14)))));
		goto IL_00d2;
	}

IL_005d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		V_1 = ((int32_t)((int32_t)L_14|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)14)))));
		uint8_t L_16 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		uint8_t L_17 = L_16;
		V_0 = L_17;
		if ((((int32_t)L_17) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		V_1 = ((int32_t)((int32_t)L_18|(int32_t)((int32_t)((int32_t)L_19<<(int32_t)((int32_t)21)))));
		goto IL_00d2;
	}

IL_0085:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		V_1 = ((int32_t)((int32_t)L_20|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)21)))));
		int32_t L_22 = V_1;
		uint8_t L_23 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		uint8_t L_24 = L_23;
		V_0 = L_24;
		V_1 = ((int32_t)((int32_t)L_22|(int32_t)((int32_t)((int32_t)L_24<<(int32_t)((int32_t)28)))));
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)128))))
		{
			goto IL_00d2;
		}
	}
	{
		V_2 = 0;
		goto IL_00c5;
	}

IL_00af:
	{
		uint8_t L_26 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_27 = V_1;
		return L_27;
	}

IL_00c1:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00c5:
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) < ((int32_t)5)))
		{
			goto IL_00af;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_30 = InvalidProtocolBufferException_MalformedVarint_m1872881085(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30);
	}

IL_00d2:
	{
		int32_t L_31 = V_1;
		return L_31;
	}
}
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32()
extern "C"  uint32_t CodedInputStream_ReadRawVarint32_m2491433814 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_bufferPos_3();
		int32_t L_1 = __this->get_bufferSize_1();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)5))) <= ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_2 = CodedInputStream_SlowReadRawVarint32_m1315368278(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_001a:
	{
		ByteU5BU5D_t4116647657* L_3 = __this->get_buffer_0();
		int32_t L_4 = __this->get_bufferPos_3();
		int32_t L_5 = L_4;
		V_1 = L_5;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		int32_t L_6 = V_1;
		NullCheck(L_3);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		V_2 = ((int32_t)((int32_t)L_11&(int32_t)((int32_t)127)));
		ByteU5BU5D_t4116647657* L_12 = __this->get_buffer_0();
		int32_t L_13 = __this->get_bufferPos_3();
		int32_t L_14 = L_13;
		V_1 = L_14;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		int32_t L_15 = V_1;
		NullCheck(L_12);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		uint8_t L_18 = L_17;
		V_0 = L_18;
		if ((((int32_t)L_18) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_0;
		V_2 = ((int32_t)((int32_t)L_19|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)7))));
		goto IL_0146;
	}

IL_0074:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		V_2 = ((int32_t)((int32_t)L_21|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)127)))<<(int32_t)7))));
		ByteU5BU5D_t4116647657* L_23 = __this->get_buffer_0();
		int32_t L_24 = __this->get_bufferPos_3();
		int32_t L_25 = L_24;
		V_1 = L_25;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)));
		int32_t L_26 = V_1;
		NullCheck(L_23);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		uint8_t L_29 = L_28;
		V_0 = L_29;
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_30 = V_2;
		int32_t L_31 = V_0;
		V_2 = ((int32_t)((int32_t)L_30|(int32_t)((int32_t)((int32_t)L_31<<(int32_t)((int32_t)14)))));
		goto IL_0146;
	}

IL_00ad:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = V_0;
		V_2 = ((int32_t)((int32_t)L_32|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)14)))));
		ByteU5BU5D_t4116647657* L_34 = __this->get_buffer_0();
		int32_t L_35 = __this->get_bufferPos_3();
		int32_t L_36 = L_35;
		V_1 = L_36;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
		int32_t L_37 = V_1;
		NullCheck(L_34);
		int32_t L_38 = L_37;
		uint8_t L_39 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		uint8_t L_40 = L_39;
		V_0 = L_40;
		if ((((int32_t)L_40) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_0;
		V_2 = ((int32_t)((int32_t)L_41|(int32_t)((int32_t)((int32_t)L_42<<(int32_t)((int32_t)21)))));
		goto IL_0146;
	}

IL_00e7:
	{
		int32_t L_43 = V_2;
		int32_t L_44 = V_0;
		V_2 = ((int32_t)((int32_t)L_43|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_44&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)21)))));
		int32_t L_45 = V_2;
		ByteU5BU5D_t4116647657* L_46 = __this->get_buffer_0();
		int32_t L_47 = __this->get_bufferPos_3();
		int32_t L_48 = L_47;
		V_1 = L_48;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1)));
		int32_t L_49 = V_1;
		NullCheck(L_46);
		int32_t L_50 = L_49;
		uint8_t L_51 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		uint8_t L_52 = L_51;
		V_0 = L_52;
		V_2 = ((int32_t)((int32_t)L_45|(int32_t)((int32_t)((int32_t)L_52<<(int32_t)((int32_t)28)))));
		int32_t L_53 = V_0;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)128))))
		{
			goto IL_0146;
		}
	}
	{
		V_3 = 0;
		goto IL_0139;
	}

IL_0123:
	{
		uint8_t L_54 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_54) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_55 = V_2;
		return L_55;
	}

IL_0135:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_0139:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) < ((int32_t)5)))
		{
			goto IL_0123;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_58 = InvalidProtocolBufferException_MalformedVarint_m1872881085(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_58);
	}

IL_0146:
	{
		int32_t L_59 = V_2;
		return L_59;
	}
}
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32(System.IO.Stream)
extern "C"  uint32_t CodedInputStream_ReadRawVarint32_m2699989160 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___input0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_003b;
	}

IL_0009:
	{
		Stream_t1273022909 * L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_2 = L_1;
		int32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_3 = InvalidProtocolBufferException_TruncatedMessage_m431651349(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = V_2;
		int32_t L_6 = V_1;
		V_0 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))))));
		int32_t L_7 = V_2;
		if (((int32_t)((int32_t)L_7&(int32_t)((int32_t)128))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_0037:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)7));
	}

IL_003b:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)32))))
		{
			goto IL_0009;
		}
	}
	{
		goto IL_006e;
	}

IL_0048:
	{
		Stream_t1273022909 * L_11 = ___input0;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::ReadByte() */, L_11);
		V_3 = L_12;
		int32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_005c;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_14 = InvalidProtocolBufferException_TruncatedMessage_m431651349(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14);
	}

IL_005c:
	{
		int32_t L_15 = V_3;
		if (((int32_t)((int32_t)L_15&(int32_t)((int32_t)128))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_006a:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)7));
	}

IL_006e:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)64))))
		{
			goto IL_0048;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_19 = InvalidProtocolBufferException_MalformedVarint_m1872881085(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19);
	}
}
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint64()
extern "C"  uint64_t CodedInputStream_ReadRawVarint64_m833850785 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		V_0 = 0;
		V_1 = (((int64_t)((int64_t)0)));
		goto IL_0030;
	}

IL_000a:
	{
		uint8_t L_0 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		uint64_t L_1 = V_1;
		uint8_t L_2 = V_2;
		int32_t L_3 = V_0;
		V_1 = ((int64_t)((int64_t)L_1|(int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)127))))))<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)63)))))));
		uint8_t L_4 = V_2;
		if (((int32_t)((int32_t)L_4&(int32_t)((int32_t)128))))
		{
			goto IL_002c;
		}
	}
	{
		uint64_t L_5 = V_1;
		return L_5;
	}

IL_002c:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)7));
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)64))))
		{
			goto IL_000a;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_8 = InvalidProtocolBufferException_MalformedVarint_m1872881085(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}
}
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian32()
extern "C"  uint32_t CodedInputStream_ReadRawLittleEndian32_m2825115295 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint8_t L_0 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		uint8_t L_1 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		uint8_t L_2 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		uint8_t L_3 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_3 = L_3;
		uint32_t L_4 = V_0;
		uint32_t L_5 = V_1;
		uint32_t L_6 = V_2;
		uint32_t L_7 = V_3;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_6<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)((int32_t)24)))));
	}
}
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian64()
extern "C"  uint64_t CodedInputStream_ReadRawLittleEndian64_m1722220135 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	{
		uint8_t L_0 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_0 = (((int64_t)((uint64_t)L_0)));
		uint8_t L_1 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_1 = (((int64_t)((uint64_t)L_1)));
		uint8_t L_2 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_2 = (((int64_t)((uint64_t)L_2)));
		uint8_t L_3 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_3 = (((int64_t)((uint64_t)L_3)));
		uint8_t L_4 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_4 = (((int64_t)((uint64_t)L_4)));
		uint8_t L_5 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_5 = (((int64_t)((uint64_t)L_5)));
		uint8_t L_6 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_6 = (((int64_t)((uint64_t)L_6)));
		uint8_t L_7 = CodedInputStream_ReadRawByte_m2959293679(__this, /*hidden argument*/NULL);
		V_7 = (((int64_t)((uint64_t)L_7)));
		uint64_t L_8 = V_0;
		uint64_t L_9 = V_1;
		uint64_t L_10 = V_2;
		uint64_t L_11 = V_3;
		uint64_t L_12 = V_4;
		uint64_t L_13 = V_5;
		uint64_t L_14 = V_6;
		uint64_t L_15 = V_7;
		return ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_8|(int64_t)((int64_t)((int64_t)L_9<<(int32_t)8))))|(int64_t)((int64_t)((int64_t)L_10<<(int32_t)((int32_t)16)))))|(int64_t)((int64_t)((int64_t)L_11<<(int32_t)((int32_t)24)))))|(int64_t)((int64_t)((int64_t)L_12<<(int32_t)((int32_t)32)))))|(int64_t)((int64_t)((int64_t)L_13<<(int32_t)((int32_t)40)))))|(int64_t)((int64_t)((int64_t)L_14<<(int32_t)((int32_t)48)))))|(int64_t)((int64_t)((int64_t)L_15<<(int32_t)((int32_t)56)))));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedInputStream::PushLimit(System.Int32)
extern "C"  int32_t CodedInputStream_PushLimit_m2130578355 (CodedInputStream_t2502120507 * __this, int32_t ___byteLimit0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___byteLimit0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_1 = InvalidProtocolBufferException_NegativeSize_m3877348444(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000d:
	{
		int32_t L_2 = ___byteLimit0;
		int32_t L_3 = __this->get_totalBytesRetired_8();
		int32_t L_4 = __this->get_bufferPos_3();
		___byteLimit0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))));
		int32_t L_5 = __this->get_currentLimit_9();
		V_0 = L_5;
		int32_t L_6 = ___byteLimit0;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0032;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_8 = InvalidProtocolBufferException_TruncatedMessage_m431651349(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_0032:
	{
		int32_t L_9 = ___byteLimit0;
		__this->set_currentLimit_9(L_9);
		CodedInputStream_RecomputeBufferSizeAfterLimit_m2495409346(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::RecomputeBufferSizeAfterLimit()
extern "C"  void CodedInputStream_RecomputeBufferSizeAfterLimit_m2495409346 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bufferSize_1();
		int32_t L_1 = __this->get_bufferSizeAfterLimit_2();
		__this->set_bufferSize_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		int32_t L_2 = __this->get_totalBytesRetired_8();
		int32_t L_3 = __this->get_bufferSize_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_currentLimit_9();
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_currentLimit_9();
		__this->set_bufferSizeAfterLimit_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)));
		int32_t L_8 = __this->get_bufferSize_1();
		int32_t L_9 = __this->get_bufferSizeAfterLimit_2();
		__this->set_bufferSize_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)));
		goto IL_005a;
	}

IL_0053:
	{
		__this->set_bufferSizeAfterLimit_2(0);
	}

IL_005a:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::PopLimit(System.Int32)
extern "C"  void CodedInputStream_PopLimit_m729607487 (CodedInputStream_t2502120507 * __this, int32_t ___oldLimit0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___oldLimit0;
		__this->set_currentLimit_9(L_0);
		CodedInputStream_RecomputeBufferSizeAfterLimit_m2495409346(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::RefillBuffer(System.Boolean)
extern "C"  bool CodedInputStream_RefillBuffer_m1552953620 (CodedInputStream_t2502120507 * __this, bool ___mustSucceed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_RefillBuffer_m1552953620_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CodedInputStream_t2502120507 * G_B8_0 = NULL;
	CodedInputStream_t2502120507 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	CodedInputStream_t2502120507 * G_B9_1 = NULL;
	{
		int32_t L_0 = __this->get_bufferPos_3();
		int32_t L_1 = __this->get_bufferSize_1();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_2, _stringLiteral2084153018, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_001c:
	{
		int32_t L_3 = __this->get_totalBytesRetired_8();
		int32_t L_4 = __this->get_bufferSize_1();
		int32_t L_5 = __this->get_currentLimit_9();
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))) == ((uint32_t)L_5))))
		{
			goto IL_0042;
		}
	}
	{
		bool L_6 = ___mustSucceed0;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_7 = InvalidProtocolBufferException_TruncatedMessage_m431651349(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0040:
	{
		return (bool)0;
	}

IL_0042:
	{
		int32_t L_8 = __this->get_totalBytesRetired_8();
		int32_t L_9 = __this->get_bufferSize_1();
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)));
		__this->set_bufferPos_3(0);
		Stream_t1273022909 * L_10 = __this->get_input_4();
		G_B7_0 = __this;
		if (L_10)
		{
			G_B8_0 = __this;
			goto IL_006e;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0088;
	}

IL_006e:
	{
		Stream_t1273022909 * L_11 = __this->get_input_4();
		ByteU5BU5D_t4116647657* L_12 = __this->get_buffer_0();
		ByteU5BU5D_t4116647657* L_13 = __this->get_buffer_0();
		NullCheck(L_13);
		NullCheck(L_11);
		int32_t L_14 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))));
		G_B9_0 = L_14;
		G_B9_1 = G_B8_0;
	}

IL_0088:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_bufferSize_1(G_B9_0);
		int32_t L_15 = __this->get_bufferSize_1();
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		InvalidOperationException_t56020091 * L_16 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_16, _stringLiteral3835198932, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16);
	}

IL_00a4:
	{
		int32_t L_17 = __this->get_bufferSize_1();
		if (L_17)
		{
			goto IL_00bd;
		}
	}
	{
		bool L_18 = ___mustSucceed0;
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_19 = InvalidProtocolBufferException_TruncatedMessage_m431651349(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19);
	}

IL_00bb:
	{
		return (bool)0;
	}

IL_00bd:
	{
		CodedInputStream_RecomputeBufferSizeAfterLimit_m2495409346(__this, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_totalBytesRetired_8();
		int32_t L_21 = __this->get_bufferSize_1();
		int32_t L_22 = __this->get_bufferSizeAfterLimit_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), (int32_t)L_22));
		int32_t L_23 = V_0;
		int32_t L_24 = __this->get_sizeLimit_12();
		if ((((int32_t)L_23) > ((int32_t)L_24)))
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_00f1;
		}
	}

IL_00eb:
	{
		InvalidProtocolBufferException_t2498581859 * L_26 = InvalidProtocolBufferException_SizeLimitExceeded_m4122733860(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26);
	}

IL_00f1:
	{
		return (bool)1;
	}
}
// System.Byte Google.ProtocolBuffers.CodedInputStream::ReadRawByte()
extern "C"  uint8_t CodedInputStream_ReadRawByte_m2959293679 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bufferPos_3();
		int32_t L_1 = __this->get_bufferSize_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		CodedInputStream_RefillBuffer_m1552953620(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		ByteU5BU5D_t4116647657* L_2 = __this->get_buffer_0();
		int32_t L_3 = __this->get_bufferPos_3();
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
// System.Byte[] Google.ProtocolBuffers.CodedInputStream::ReadRawBytes(System.Int32)
extern "C"  ByteU5BU5D_t4116647657* CodedInputStream_ReadRawBytes_m2213130119 (CodedInputStream_t2502120507 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_ReadRawBytes_m2213130119_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	List_1_t1293755103 * V_6 = NULL;
	ByteU5BU5D_t4116647657* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ByteU5BU5D_t4116647657* V_10 = NULL;
	int32_t V_11 = 0;
	ByteU5BU5D_t4116647657* V_12 = NULL;
	Enumerator_t3182998980  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B16_0 = 0;
	{
		int32_t L_0 = ___size0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_1 = InvalidProtocolBufferException_NegativeSize_m3877348444(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000d:
	{
		int32_t L_2 = __this->get_totalBytesRetired_8();
		int32_t L_3 = __this->get_bufferPos_3();
		int32_t L_4 = ___size0;
		int32_t L_5 = __this->get_currentLimit_9();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), (int32_t)L_4))) <= ((int32_t)L_5)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = __this->get_currentLimit_9();
		int32_t L_7 = __this->get_totalBytesRetired_8();
		int32_t L_8 = __this->get_bufferPos_3();
		CodedInputStream_SkipRawBytes_m1198703808(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), (int32_t)L_8)), /*hidden argument*/NULL);
		InvalidProtocolBufferException_t2498581859 * L_9 = InvalidProtocolBufferException_TruncatedMessage_m431651349(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_0047:
	{
		int32_t L_10 = ___size0;
		int32_t L_11 = __this->get_bufferSize_1();
		int32_t L_12 = __this->get_bufferPos_3();
		if ((((int32_t)L_10) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_13 = ___size0;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_13));
		ByteU5BU5D_t4116647657* L_14 = __this->get_buffer_0();
		int32_t L_15 = __this->get_bufferPos_3();
		ByteU5BU5D_t4116647657* L_16 = V_0;
		int32_t L_17 = ___size0;
		ByteArray_Copy_m353681296(NULL /*static, unused*/, L_14, L_15, L_16, 0, L_17, /*hidden argument*/NULL);
		int32_t L_18 = __this->get_bufferPos_3();
		int32_t L_19 = ___size0;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19)));
		ByteU5BU5D_t4116647657* L_20 = V_0;
		return L_20;
	}

IL_0085:
	{
		int32_t L_21 = ___size0;
		ByteU5BU5D_t4116647657* L_22 = __this->get_buffer_0();
		NullCheck(L_22);
		if ((((int32_t)L_21) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_23 = ___size0;
		V_1 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_23));
		int32_t L_24 = __this->get_bufferSize_1();
		int32_t L_25 = __this->get_bufferPos_3();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25));
		ByteU5BU5D_t4116647657* L_26 = __this->get_buffer_0();
		int32_t L_27 = __this->get_bufferPos_3();
		ByteU5BU5D_t4116647657* L_28 = V_1;
		int32_t L_29 = V_2;
		ByteArray_Copy_m353681296(NULL /*static, unused*/, L_26, L_27, L_28, 0, L_29, /*hidden argument*/NULL);
		int32_t L_30 = __this->get_bufferSize_1();
		__this->set_bufferPos_3(L_30);
		CodedInputStream_RefillBuffer_m1552953620(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_0106;
	}

IL_00d5:
	{
		ByteU5BU5D_t4116647657* L_31 = __this->get_buffer_0();
		ByteU5BU5D_t4116647657* L_32 = V_1;
		int32_t L_33 = V_2;
		int32_t L_34 = __this->get_bufferSize_1();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_31, 0, (RuntimeArray *)(RuntimeArray *)L_32, L_33, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_2;
		int32_t L_36 = __this->get_bufferSize_1();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36));
		int32_t L_37 = __this->get_bufferSize_1();
		__this->set_bufferPos_3(L_37);
		CodedInputStream_RefillBuffer_m1552953620(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0106:
	{
		int32_t L_38 = ___size0;
		int32_t L_39 = V_2;
		int32_t L_40 = __this->get_bufferSize_1();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)L_39))) > ((int32_t)L_40)))
		{
			goto IL_00d5;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_41 = __this->get_buffer_0();
		ByteU5BU5D_t4116647657* L_42 = V_1;
		int32_t L_43 = V_2;
		int32_t L_44 = ___size0;
		int32_t L_45 = V_2;
		ByteArray_Copy_m353681296(NULL /*static, unused*/, L_41, 0, L_42, L_43, ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)L_45)), /*hidden argument*/NULL);
		int32_t L_46 = ___size0;
		int32_t L_47 = V_2;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47)));
		ByteU5BU5D_t4116647657* L_48 = V_1;
		return L_48;
	}

IL_0130:
	{
		int32_t L_49 = __this->get_bufferPos_3();
		V_3 = L_49;
		int32_t L_50 = __this->get_bufferSize_1();
		V_4 = L_50;
		int32_t L_51 = __this->get_totalBytesRetired_8();
		int32_t L_52 = __this->get_bufferSize_1();
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)L_52)));
		__this->set_bufferPos_3(0);
		__this->set_bufferSize_1(0);
		int32_t L_53 = ___size0;
		int32_t L_54 = V_4;
		int32_t L_55 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_55))));
		List_1_t1293755103 * L_56 = (List_1_t1293755103 *)il2cpp_codegen_object_new(List_1_t1293755103_il2cpp_TypeInfo_var);
		List_1__ctor_m2588888624(L_56, /*hidden argument*/List_1__ctor_m2588888624_RuntimeMethod_var);
		V_6 = L_56;
		goto IL_01fc;
	}

IL_0174:
	{
		int32_t L_57 = V_5;
		ByteU5BU5D_t4116647657* L_58 = __this->get_buffer_0();
		NullCheck(L_58);
		int32_t L_59 = Math_Min_m3468062251(NULL /*static, unused*/, L_57, (((int32_t)((int32_t)(((RuntimeArray *)L_58)->max_length)))), /*hidden argument*/NULL);
		V_7 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_59));
		V_8 = 0;
		goto IL_01df;
	}

IL_0192:
	{
		Stream_t1273022909 * L_60 = __this->get_input_4();
		if (L_60)
		{
			goto IL_01a3;
		}
	}
	{
		G_B16_0 = (-1);
		goto IL_01b9;
	}

IL_01a3:
	{
		Stream_t1273022909 * L_61 = __this->get_input_4();
		ByteU5BU5D_t4116647657* L_62 = V_7;
		int32_t L_63 = V_8;
		ByteU5BU5D_t4116647657* L_64 = V_7;
		NullCheck(L_64);
		int32_t L_65 = V_8;
		NullCheck(L_61);
		int32_t L_66 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_61, L_62, L_63, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_64)->max_length)))), (int32_t)L_65)));
		G_B16_0 = L_66;
	}

IL_01b9:
	{
		V_9 = G_B16_0;
		int32_t L_67 = V_9;
		if ((((int32_t)L_67) > ((int32_t)0)))
		{
			goto IL_01c9;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_68 = InvalidProtocolBufferException_TruncatedMessage_m431651349(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_68);
	}

IL_01c9:
	{
		int32_t L_69 = __this->get_totalBytesRetired_8();
		int32_t L_70 = V_9;
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)L_70)));
		int32_t L_71 = V_8;
		int32_t L_72 = V_9;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)L_72));
	}

IL_01df:
	{
		int32_t L_73 = V_8;
		ByteU5BU5D_t4116647657* L_74 = V_7;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_74)->max_length)))))))
		{
			goto IL_0192;
		}
	}
	{
		int32_t L_75 = V_5;
		ByteU5BU5D_t4116647657* L_76 = V_7;
		NullCheck(L_76);
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_76)->max_length))))));
		List_1_t1293755103 * L_77 = V_6;
		ByteU5BU5D_t4116647657* L_78 = V_7;
		NullCheck(L_77);
		List_1_Add_m403195898(L_77, L_78, /*hidden argument*/List_1_Add_m403195898_RuntimeMethod_var);
	}

IL_01fc:
	{
		int32_t L_79 = V_5;
		if ((((int32_t)L_79) > ((int32_t)0)))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_80 = ___size0;
		V_10 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_80));
		int32_t L_81 = V_4;
		int32_t L_82 = V_3;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)L_82));
		ByteU5BU5D_t4116647657* L_83 = __this->get_buffer_0();
		int32_t L_84 = V_3;
		ByteU5BU5D_t4116647657* L_85 = V_10;
		int32_t L_86 = V_11;
		ByteArray_Copy_m353681296(NULL /*static, unused*/, L_83, L_84, L_85, 0, L_86, /*hidden argument*/NULL);
		List_1_t1293755103 * L_87 = V_6;
		NullCheck(L_87);
		Enumerator_t3182998980  L_88 = List_1_GetEnumerator_m546097336(L_87, /*hidden argument*/List_1_GetEnumerator_m546097336_RuntimeMethod_var);
		V_13 = L_88;
	}

IL_022c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0253;
		}

IL_0231:
		{
			ByteU5BU5D_t4116647657* L_89 = Enumerator_get_Current_m2689264918((&V_13), /*hidden argument*/Enumerator_get_Current_m2689264918_RuntimeMethod_var);
			V_12 = L_89;
			ByteU5BU5D_t4116647657* L_90 = V_12;
			ByteU5BU5D_t4116647657* L_91 = V_10;
			int32_t L_92 = V_11;
			ByteU5BU5D_t4116647657* L_93 = V_12;
			NullCheck(L_93);
			Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_90, 0, (RuntimeArray *)(RuntimeArray *)L_91, L_92, (((int32_t)((int32_t)(((RuntimeArray *)L_93)->max_length)))), /*hidden argument*/NULL);
			int32_t L_94 = V_11;
			ByteU5BU5D_t4116647657* L_95 = V_12;
			NullCheck(L_95);
			V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_95)->max_length))))));
		}

IL_0253:
		{
			bool L_96 = Enumerator_MoveNext_m1074123736((&V_13), /*hidden argument*/Enumerator_MoveNext_m1074123736_RuntimeMethod_var);
			if (L_96)
			{
				goto IL_0231;
			}
		}

IL_025f:
		{
			IL2CPP_LEAVE(0x272, FINALLY_0264);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0264;
	}

FINALLY_0264:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4103594724((&V_13), /*hidden argument*/Enumerator_Dispose_m4103594724_RuntimeMethod_var);
		IL2CPP_END_FINALLY(612)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(612)
	{
		IL2CPP_JUMP_TBL(0x272, IL_0272)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0272:
	{
		ByteU5BU5D_t4116647657* L_97 = V_10;
		return L_97;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::SkipField()
extern "C"  bool CodedInputStream_SkipField_m3458488922 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = __this->get_lastTag_5();
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint32_t L_2 = WireFormat_GetTagWireType_m1784829716(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		uint32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0043;
			}
			case 3:
			{
				goto IL_0051;
			}
			case 4:
			{
				goto IL_006b;
			}
			case 5:
			{
				goto IL_006d;
			}
		}
	}
	{
		goto IL_0076;
	}

IL_0031:
	{
		CodedInputStream_ReadRawVarint64_m833850785(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_003a:
	{
		CodedInputStream_ReadRawLittleEndian64_m1722220135(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0043:
	{
		uint32_t L_4 = CodedInputStream_ReadRawVarint32_m2491433814(__this, /*hidden argument*/NULL);
		CodedInputStream_SkipRawBytes_m1198703808(__this, L_4, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0051:
	{
		CodedInputStream_SkipMessage_m2810518322(__this, /*hidden argument*/NULL);
		uint32_t L_5 = V_0;
		int32_t L_6 = WireFormat_GetTagFieldNumber_m3577868076(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		uint32_t L_7 = WireFormat_MakeTag_m3849727317(NULL /*static, unused*/, L_6, 4, /*hidden argument*/NULL);
		CodedInputStream_CheckLastTagWas_m2160894000(__this, L_7, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_006b:
	{
		return (bool)0;
	}

IL_006d:
	{
		CodedInputStream_ReadRawLittleEndian32_m2825115295(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0076:
	{
		InvalidProtocolBufferException_t2498581859 * L_8 = InvalidProtocolBufferException_InvalidWireType_m1791826912(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipMessage()
extern "C"  void CodedInputStream_SkipMessage_m2810518322 (CodedInputStream_t2502120507 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		goto IL_0011;
	}

IL_0005:
	{
		bool L_0 = CodedInputStream_SkipField_m3458488922(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		bool L_1 = CodedInputStream_ReadTag_m4000905079(__this, (&V_0), (&V_1), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipRawBytes(System.Int32)
extern "C"  void CodedInputStream_SkipRawBytes_m1198703808 (CodedInputStream_t2502120507 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___size0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_1 = InvalidProtocolBufferException_NegativeSize_m3877348444(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000d:
	{
		int32_t L_2 = __this->get_totalBytesRetired_8();
		int32_t L_3 = __this->get_bufferPos_3();
		int32_t L_4 = ___size0;
		int32_t L_5 = __this->get_currentLimit_9();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), (int32_t)L_4))) <= ((int32_t)L_5)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = __this->get_currentLimit_9();
		int32_t L_7 = __this->get_totalBytesRetired_8();
		int32_t L_8 = __this->get_bufferPos_3();
		CodedInputStream_SkipRawBytes_m1198703808(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), (int32_t)L_8)), /*hidden argument*/NULL);
		InvalidProtocolBufferException_t2498581859 * L_9 = InvalidProtocolBufferException_TruncatedMessage_m431651349(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_0047:
	{
		int32_t L_10 = ___size0;
		int32_t L_11 = __this->get_bufferSize_1();
		int32_t L_12 = __this->get_bufferPos_3();
		if ((((int32_t)L_10) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_13 = __this->get_bufferPos_3();
		int32_t L_14 = ___size0;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)));
		goto IL_00cd;
	}

IL_006d:
	{
		int32_t L_15 = __this->get_bufferSize_1();
		int32_t L_16 = __this->get_bufferPos_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16));
		int32_t L_17 = __this->get_totalBytesRetired_8();
		int32_t L_18 = __this->get_bufferSize_1();
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)));
		__this->set_bufferPos_3(0);
		__this->set_bufferSize_1(0);
		int32_t L_19 = V_0;
		int32_t L_20 = ___size0;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_00cd;
		}
	}
	{
		Stream_t1273022909 * L_21 = __this->get_input_4();
		if (L_21)
		{
			goto IL_00b4;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_22 = InvalidProtocolBufferException_TruncatedMessage_m431651349(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22);
	}

IL_00b4:
	{
		int32_t L_23 = ___size0;
		int32_t L_24 = V_0;
		CodedInputStream_SkipImpl_m3770172997(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), /*hidden argument*/NULL);
		int32_t L_25 = __this->get_totalBytesRetired_8();
		int32_t L_26 = ___size0;
		int32_t L_27 = V_0;
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_27)))));
	}

IL_00cd:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipImpl(System.Int32)
extern "C"  void CodedInputStream_SkipImpl_m3770172997 (CodedInputStream_t2502120507 * __this, int32_t ___amountToSkip0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_SkipImpl_m3770172997_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Stream_t1273022909 * L_0 = __this->get_input_4();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Stream_t1273022909 * L_2 = __this->get_input_4();
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Position() */, L_2);
		V_0 = L_3;
		Stream_t1273022909 * L_4 = __this->get_input_4();
		Stream_t1273022909 * L_5 = L_4;
		NullCheck(L_5);
		int64_t L_6 = VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Position() */, L_5);
		int32_t L_7 = ___amountToSkip0;
		NullCheck(L_5);
		VirtActionInvoker1< int64_t >::Invoke(10 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_5, ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)(((int64_t)((int64_t)L_7))))));
		Stream_t1273022909 * L_8 = __this->get_input_4();
		NullCheck(L_8);
		int64_t L_9 = VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Position() */, L_8);
		int64_t L_10 = V_0;
		int32_t L_11 = ___amountToSkip0;
		if ((((int64_t)L_9) == ((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)(((int64_t)((int64_t)L_11))))))))
		{
			goto IL_004a;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_12 = InvalidProtocolBufferException_TruncatedMessage_m431651349(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12);
	}

IL_004a:
	{
		goto IL_008f;
	}

IL_004f:
	{
		V_1 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024)));
		goto IL_0088;
	}

IL_005f:
	{
		Stream_t1273022909 * L_13 = __this->get_input_4();
		ByteU5BU5D_t4116647657* L_14 = V_1;
		ByteU5BU5D_t4116647657* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = ___amountToSkip0;
		int32_t L_17 = Math_Min_m3468062251(NULL /*static, unused*/, (((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))), L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_18 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, L_17);
		V_2 = L_18;
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_0083;
		}
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_20 = InvalidProtocolBufferException_TruncatedMessage_m431651349(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20);
	}

IL_0083:
	{
		int32_t L_21 = ___amountToSkip0;
		int32_t L_22 = V_2;
		___amountToSkip0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22));
	}

IL_0088:
	{
		int32_t L_23 = ___amountToSkip0;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_005f;
		}
	}

IL_008f:
	{
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
// System.Void Google.ProtocolBuffers.CodedOutputStream::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void CodedOutputStream__ctor_m327425152 (CodedOutputStream_t1787628118 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_output_4((Stream_t1273022909 *)NULL);
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		__this->set_buffer_1(L_0);
		int32_t L_1 = ___offset1;
		__this->set_position_3(L_1);
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		__this->set_limit_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		return;
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::get_SpaceLeft()
extern "C"  int32_t CodedOutputStream_get_SpaceLeft_m2112861421 (CodedOutputStream_t1787628118 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_get_SpaceLeft_m2112861421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_t1273022909 * L_0 = __this->get_output_4();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->get_limit_2();
		int32_t L_2 = __this->get_position_3();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
	}

IL_0019:
	{
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_3, _stringLiteral988225131, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeFloatSize(System.Int32,System.Single)
extern "C"  int32_t CodedOutputStream_ComputeFloatSize_m3601108612 (RuntimeObject * __this /* static, unused */, int32_t ___fieldNumber0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeFloatSize_m3601108612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t1787628118_il2cpp_TypeInfo_var);
		int32_t L_1 = CodedOutputStream_ComputeTagSize_m884151256(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)4));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt64Size(System.Int32,System.Int64)
extern "C"  int32_t CodedOutputStream_ComputeInt64Size_m2929732330 (RuntimeObject * __this /* static, unused */, int32_t ___fieldNumber0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeInt64Size_m2929732330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t1787628118_il2cpp_TypeInfo_var);
		int32_t L_1 = CodedOutputStream_ComputeTagSize_m884151256(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int64_t L_2 = ___value1;
		int32_t L_3 = CodedOutputStream_ComputeRawVarint64Size_m165941965(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32Size(System.Int32,System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeInt32Size_m1726852181 (RuntimeObject * __this /* static, unused */, int32_t ___fieldNumber0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeInt32Size_m1726852181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t1787628118_il2cpp_TypeInfo_var);
		int32_t L_2 = CodedOutputStream_ComputeTagSize_m884151256(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___value1;
		int32_t L_4 = CodedOutputStream_ComputeRawVarint32Size_m296883321(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_4));
	}

IL_0015:
	{
		int32_t L_5 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t1787628118_il2cpp_TypeInfo_var);
		int32_t L_6 = CodedOutputStream_ComputeTagSize_m884151256(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)10)));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeMessageSize(System.Int32,Google.ProtocolBuffers.IMessageLite)
extern "C"  int32_t CodedOutputStream_ComputeMessageSize_m4104294790 (RuntimeObject * __this /* static, unused */, int32_t ___fieldNumber0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeMessageSize_m4104294790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___value1;
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Google.ProtocolBuffers.IMessageLite::get_SerializedSize() */, IMessageLite_t757992097_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t1787628118_il2cpp_TypeInfo_var);
		int32_t L_3 = CodedOutputStream_ComputeTagSize_m884151256(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = CodedOutputStream_ComputeRawVarint32Size_m296883321(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_5)), (int32_t)L_6));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSize(System.Int32,System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeEnumSize_m1843994409 (RuntimeObject * __this /* static, unused */, int32_t ___fieldNumber0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeEnumSize_m1843994409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t1787628118_il2cpp_TypeInfo_var);
		int32_t L_1 = CodedOutputStream_ComputeTagSize_m884151256(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		int32_t L_3 = CodedOutputStream_ComputeEnumSizeNoTag_m4001655031(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32SizeNoTag(System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeInt32SizeNoTag_m1405344942 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeInt32SizeNoTag_m1405344942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t1787628118_il2cpp_TypeInfo_var);
		int32_t L_2 = CodedOutputStream_ComputeRawVarint32Size_m296883321(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		return ((int32_t)10);
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSizeNoTag(System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeEnumSizeNoTag_m4001655031 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeEnumSizeNoTag_m4001655031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t1787628118_il2cpp_TypeInfo_var);
		int32_t L_1 = CodedOutputStream_ComputeInt32SizeNoTag_m1405344942(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint32Size(System.UInt32)
extern "C"  int32_t CodedOutputStream_ComputeRawVarint32Size_m296883321 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		if (((int32_t)((int32_t)L_0&(int32_t)((int32_t)-128))))
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		uint32_t L_1 = ___value0;
		if (((int32_t)((int32_t)L_1&(int32_t)((int32_t)-16384))))
		{
			goto IL_0019;
		}
	}
	{
		return 2;
	}

IL_0019:
	{
		uint32_t L_2 = ___value0;
		if (((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2097152))))
		{
			goto IL_0027;
		}
	}
	{
		return 3;
	}

IL_0027:
	{
		uint32_t L_3 = ___value0;
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)-268435456))))
		{
			goto IL_0035;
		}
	}
	{
		return 4;
	}

IL_0035:
	{
		return 5;
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint64Size(System.UInt64)
extern "C"  int32_t CodedOutputStream_ComputeRawVarint64Size_m165941965 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_0&(int64_t)(((int64_t)((int64_t)((int32_t)-128))))))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		uint64_t L_1 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_1&(int64_t)(((int64_t)((int64_t)((int32_t)-16384))))))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_001f;
		}
	}
	{
		return 2;
	}

IL_001f:
	{
		uint64_t L_2 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_2&(int64_t)(((int64_t)((int64_t)((int32_t)-2097152))))))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_0030;
		}
	}
	{
		return 3;
	}

IL_0030:
	{
		uint64_t L_3 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_3&(int64_t)(((int64_t)((int64_t)((int32_t)-268435456))))))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_0041;
		}
	}
	{
		return 4;
	}

IL_0041:
	{
		uint64_t L_4 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_4&(int64_t)((int64_t)-34359738368LL)))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_0055;
		}
	}
	{
		return 5;
	}

IL_0055:
	{
		uint64_t L_5 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_5&(int64_t)((int64_t)-4398046511104LL)))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_0069;
		}
	}
	{
		return 6;
	}

IL_0069:
	{
		uint64_t L_6 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_6&(int64_t)((int64_t)-562949953421312LL)))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_007d;
		}
	}
	{
		return 7;
	}

IL_007d:
	{
		uint64_t L_7 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_7&(int64_t)((int64_t)-72057594037927936LL)))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_0091;
		}
	}
	{
		return 8;
	}

IL_0091:
	{
		uint64_t L_8 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_8&(int64_t)((int64_t)std::numeric_limits<int64_t>::min())))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_00a6;
		}
	}
	{
		return ((int32_t)9);
	}

IL_00a6:
	{
		return ((int32_t)10);
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeTagSize(System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeTagSize_m884151256 (RuntimeObject * __this /* static, unused */, int32_t ___fieldNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeTagSize_m884151256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		uint32_t L_1 = WireFormat_MakeTag_m3849727317(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t1787628118_il2cpp_TypeInfo_var);
		int32_t L_2 = CodedOutputStream_ComputeRawVarint32Size_m296883321(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[])
extern "C"  CodedOutputStream_t1787628118 * CodedOutputStream_CreateInstance_m3273851521 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___flatArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_CreateInstance_m3273851521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___flatArray0;
		ByteU5BU5D_t4116647657* L_1 = ___flatArray0;
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t1787628118_il2cpp_TypeInfo_var);
		CodedOutputStream_t1787628118 * L_2 = CodedOutputStream_CreateInstance_m2942481731(NULL /*static, unused*/, L_0, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		return L_2;
	}
}
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[],System.Int32,System.Int32)
extern "C"  CodedOutputStream_t1787628118 * CodedOutputStream_CreateInstance_m2942481731 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___flatArray0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_CreateInstance_m2942481731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___flatArray0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___length2;
		CodedOutputStream_t1787628118 * L_3 = (CodedOutputStream_t1787628118 *)il2cpp_codegen_object_new(CodedOutputStream_t1787628118_il2cpp_TypeInfo_var);
		CodedOutputStream__ctor_m327425152(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloat(System.Int32,System.String,System.Single)
extern "C"  void CodedOutputStream_WriteFloat_m542306618 (CodedOutputStream_t1787628118 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, float ___value2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_m1986134109(__this, L_0, 5, /*hidden argument*/NULL);
		float L_1 = ___value2;
		CodedOutputStream_WriteFloatNoTag_m882781006(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt64(System.Int32,System.String,System.Int64)
extern "C"  void CodedOutputStream_WriteInt64_m2492714695 (CodedOutputStream_t1787628118 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int64_t ___value2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_m1986134109(__this, L_0, 0, /*hidden argument*/NULL);
		int64_t L_1 = ___value2;
		CodedOutputStream_WriteRawVarint64_m3794261664(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32(System.Int32,System.String,System.Int32)
extern "C"  void CodedOutputStream_WriteInt32_m3059714536 (CodedOutputStream_t1787628118 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_m1986134109(__this, L_0, 0, /*hidden argument*/NULL);
		int32_t L_1 = ___value2;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___value2;
		CodedOutputStream_WriteRawVarint32_m570521165(__this, L_2, /*hidden argument*/NULL);
		goto IL_0023;
	}

IL_001b:
	{
		int32_t L_3 = ___value2;
		CodedOutputStream_WriteRawVarint64_m3794261664(__this, (((int64_t)((int64_t)L_3))), /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteMessage(System.Int32,System.String,Google.ProtocolBuffers.IMessageLite)
extern "C"  void CodedOutputStream_WriteMessage_m587327620 (CodedOutputStream_t1787628118 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, RuntimeObject* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_WriteMessage_m587327620_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_m1986134109(__this, L_0, 2, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___value2;
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Google.ProtocolBuffers.IMessageLite::get_SerializedSize() */, IMessageLite_t757992097_il2cpp_TypeInfo_var, L_1);
		CodedOutputStream_WriteRawVarint32_m570521165(__this, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___value2;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Google.ProtocolBuffers.IMessageLite::WriteTo(Google.ProtocolBuffers.ICodedOutputStream) */, IMessageLite_t757992097_il2cpp_TypeInfo_var, L_3, __this);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteEnum(System.Int32,System.String,System.Int32,System.Object)
extern "C"  void CodedOutputStream_WriteEnum_m1882500503 (CodedOutputStream_t1787628118 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int32_t ___value2, RuntimeObject * ___rawValue3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_m1986134109(__this, L_0, 0, /*hidden argument*/NULL);
		int32_t L_1 = ___value2;
		CodedOutputStream_WriteInt32NoTag_m3717998490(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloatNoTag(System.Single)
extern "C"  void CodedOutputStream_WriteFloatNoTag_m882781006 (CodedOutputStream_t1787628118 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_WriteFloatNoTag_m882781006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_3 = V_0;
		ByteArray_Reverse_m4120234811(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		int32_t L_4 = __this->get_limit_2();
		int32_t L_5 = __this->get_position_3();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))) < ((int32_t)4)))
		{
			goto IL_009b;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_6 = __this->get_buffer_1();
		int32_t L_7 = __this->get_position_3();
		int32_t L_8 = L_7;
		V_1 = L_8;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_1;
		ByteU5BU5D_t4116647657* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_12);
		ByteU5BU5D_t4116647657* L_13 = __this->get_buffer_1();
		int32_t L_14 = __this->get_position_3();
		int32_t L_15 = L_14;
		V_1 = L_15;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
		int32_t L_16 = V_1;
		ByteU5BU5D_t4116647657* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)L_19);
		ByteU5BU5D_t4116647657* L_20 = __this->get_buffer_1();
		int32_t L_21 = __this->get_position_3();
		int32_t L_22 = L_21;
		V_1 = L_22;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		int32_t L_23 = V_1;
		ByteU5BU5D_t4116647657* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)L_26);
		ByteU5BU5D_t4116647657* L_27 = __this->get_buffer_1();
		int32_t L_28 = __this->get_position_3();
		int32_t L_29 = L_28;
		V_1 = L_29;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)));
		int32_t L_30 = V_1;
		ByteU5BU5D_t4116647657* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint8_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint8_t)L_33);
		goto IL_00a4;
	}

IL_009b:
	{
		ByteU5BU5D_t4116647657* L_34 = V_0;
		CodedOutputStream_WriteRawBytes_m1689167676(__this, L_34, 0, 4, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32NoTag(System.Int32)
extern "C"  void CodedOutputStream_WriteInt32NoTag_m3717998490 (CodedOutputStream_t1787628118 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___value0;
		CodedOutputStream_WriteRawVarint32_m570521165(__this, L_1, /*hidden argument*/NULL);
		goto IL_001b;
	}

IL_0013:
	{
		int32_t L_2 = ___value0;
		CodedOutputStream_WriteRawVarint64_m3794261664(__this, (((int64_t)((int64_t)L_2))), /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WritePackedFloatArray(System.Int32,System.String,System.Int32,System.Collections.Generic.IEnumerable`1<System.Single>)
extern "C"  void CodedOutputStream_WritePackedFloatArray_m1546821466 (CodedOutputStream_t1787628118 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int32_t ___calculatedSize2, RuntimeObject* ___list3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_WritePackedFloatArray_m1546821466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_m1986134109(__this, L_0, 2, /*hidden argument*/NULL);
		int32_t L_1 = ___calculatedSize2;
		CodedOutputStream_WriteRawVarint32_m570521165(__this, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___list3;
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IEnumerable_1_t377119663_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_001c:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			float L_5 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t1829837242_il2cpp_TypeInfo_var, L_4);
			V_0 = L_5;
			float L_6 = V_0;
			CodedOutputStream_WriteFloatNoTag_m882781006(__this, L_6, /*hidden argument*/NULL);
		}

IL_002a:
		{
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_001c;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x47, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_1;
			if (!L_9)
			{
				goto IL_0046;
			}
		}

IL_0040:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_10);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(58)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0047:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
extern "C"  void CodedOutputStream_WriteTag_m1986134109 (CodedOutputStream_t1787628118 * __this, int32_t ___fieldNumber0, uint32_t ___type1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		uint32_t L_1 = ___type1;
		uint32_t L_2 = WireFormat_MakeTag_m3849727317(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		CodedOutputStream_WriteRawVarint32_m570521165(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint32(System.UInt32)
extern "C"  void CodedOutputStream_WriteRawVarint32_m570521165 (CodedOutputStream_t1787628118 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_002d;
	}

IL_0005:
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_buffer_1();
		int32_t L_1 = __this->get_position_3();
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = V_0;
		uint32_t L_4 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)127)))|(int32_t)((int32_t)128)))))));
		uint32_t L_5 = ___value0;
		___value0 = ((int32_t)((uint32_t)L_5>>7));
	}

IL_002d:
	{
		uint32_t L_6 = ___value0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)127)))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_7 = __this->get_position_3();
		int32_t L_8 = __this->get_limit_2();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0005;
		}
	}

IL_0046:
	{
		goto IL_0061;
	}

IL_004b:
	{
		uint32_t L_9 = ___value0;
		CodedOutputStream_WriteRawByte_m308545699(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)127)))|(int32_t)((int32_t)128)))))), /*hidden argument*/NULL);
		uint32_t L_10 = ___value0;
		___value0 = ((int32_t)((uint32_t)L_10>>7));
	}

IL_0061:
	{
		uint32_t L_11 = ___value0;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)127)))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_12 = __this->get_position_3();
		int32_t L_13 = __this->get_limit_2();
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0099;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_14 = __this->get_buffer_1();
		int32_t L_15 = __this->get_position_3();
		int32_t L_16 = L_15;
		V_0 = L_16;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		int32_t L_17 = V_0;
		uint32_t L_18 = ___value0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)(((int32_t)((uint8_t)L_18))));
		goto IL_00a1;
	}

IL_0099:
	{
		uint32_t L_19 = ___value0;
		CodedOutputStream_WriteRawByte_m308545699(__this, (uint8_t)(((int32_t)((uint8_t)L_19))), /*hidden argument*/NULL);
	}

IL_00a1:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint64(System.UInt64)
extern "C"  void CodedOutputStream_WriteRawVarint64_m3794261664 (CodedOutputStream_t1787628118 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_002f;
	}

IL_0005:
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_buffer_1();
		int32_t L_1 = __this->get_position_3();
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = V_0;
		uint64_t L_4 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_4&(int64_t)(((int64_t)((int64_t)((int32_t)127))))))|(int64_t)(((int64_t)((int64_t)((int32_t)128))))))))));
		uint64_t L_5 = ___value0;
		___value0 = ((int64_t)((uint64_t)L_5>>7));
	}

IL_002f:
	{
		uint64_t L_6 = ___value0;
		if ((!(((uint64_t)L_6) > ((uint64_t)(((int64_t)((int64_t)((int32_t)127))))))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_7 = __this->get_position_3();
		int32_t L_8 = __this->get_limit_2();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0005;
		}
	}

IL_0049:
	{
		goto IL_0066;
	}

IL_004e:
	{
		uint64_t L_9 = ___value0;
		CodedOutputStream_WriteRawByte_m308545699(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_9&(int64_t)(((int64_t)((int64_t)((int32_t)127))))))|(int64_t)(((int64_t)((int64_t)((int32_t)128))))))))), /*hidden argument*/NULL);
		uint64_t L_10 = ___value0;
		___value0 = ((int64_t)((uint64_t)L_10>>7));
	}

IL_0066:
	{
		uint64_t L_11 = ___value0;
		if ((!(((uint64_t)L_11) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)127))))))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_12 = __this->get_position_3();
		int32_t L_13 = __this->get_limit_2();
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_009f;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_14 = __this->get_buffer_1();
		int32_t L_15 = __this->get_position_3();
		int32_t L_16 = L_15;
		V_0 = L_16;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		int32_t L_17 = V_0;
		uint64_t L_18 = ___value0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)(((int32_t)((uint8_t)L_18))));
		goto IL_00a7;
	}

IL_009f:
	{
		uint64_t L_19 = ___value0;
		CodedOutputStream_WriteRawByte_m308545699(__this, (uint8_t)(((int32_t)((uint8_t)L_19))), /*hidden argument*/NULL);
	}

IL_00a7:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawByte(System.Byte)
extern "C"  void CodedOutputStream_WriteRawByte_m308545699 (CodedOutputStream_t1787628118 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_position_3();
		int32_t L_1 = __this->get_limit_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		CodedOutputStream_RefreshBuffer_m3657088584(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		ByteU5BU5D_t4116647657* L_2 = __this->get_buffer_1();
		int32_t L_3 = __this->get_position_3();
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		int32_t L_5 = V_0;
		uint8_t L_6 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)L_6);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void CodedOutputStream_WriteRawBytes_m1689167676 (CodedOutputStream_t1787628118 * __this, ByteU5BU5D_t4116647657* ___value0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_limit_2();
		int32_t L_1 = __this->get_position_3();
		int32_t L_2 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) < ((int32_t)L_2)))
		{
			goto IL_003a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_3 = ___value0;
		int32_t L_4 = ___offset1;
		ByteU5BU5D_t4116647657* L_5 = __this->get_buffer_1();
		int32_t L_6 = __this->get_position_3();
		int32_t L_7 = ___length2;
		ByteArray_Copy_m353681296(NULL /*static, unused*/, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_position_3();
		int32_t L_9 = ___length2;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)));
		goto IL_00ad;
	}

IL_003a:
	{
		int32_t L_10 = __this->get_limit_2();
		int32_t L_11 = __this->get_position_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11));
		ByteU5BU5D_t4116647657* L_12 = ___value0;
		int32_t L_13 = ___offset1;
		ByteU5BU5D_t4116647657* L_14 = __this->get_buffer_1();
		int32_t L_15 = __this->get_position_3();
		int32_t L_16 = V_0;
		ByteArray_Copy_m353681296(NULL /*static, unused*/, L_12, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___offset1;
		int32_t L_18 = V_0;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18));
		int32_t L_19 = ___length2;
		int32_t L_20 = V_0;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20));
		int32_t L_21 = __this->get_limit_2();
		__this->set_position_3(L_21);
		CodedOutputStream_RefreshBuffer_m3657088584(__this, /*hidden argument*/NULL);
		int32_t L_22 = ___length2;
		int32_t L_23 = __this->get_limit_2();
		if ((((int32_t)L_22) > ((int32_t)L_23)))
		{
			goto IL_009f;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_24 = ___value0;
		int32_t L_25 = ___offset1;
		ByteU5BU5D_t4116647657* L_26 = __this->get_buffer_1();
		int32_t L_27 = ___length2;
		ByteArray_Copy_m353681296(NULL /*static, unused*/, L_24, L_25, L_26, 0, L_27, /*hidden argument*/NULL);
		int32_t L_28 = ___length2;
		__this->set_position_3(L_28);
		goto IL_00ad;
	}

IL_009f:
	{
		Stream_t1273022909 * L_29 = __this->get_output_4();
		ByteU5BU5D_t4116647657* L_30 = ___value0;
		int32_t L_31 = ___offset1;
		int32_t L_32 = ___length2;
		NullCheck(L_29);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_29, L_30, L_31, L_32);
	}

IL_00ad:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::RefreshBuffer()
extern "C"  void CodedOutputStream_RefreshBuffer_m3657088584 (CodedOutputStream_t1787628118 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_RefreshBuffer_m3657088584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_t1273022909 * L_0 = __this->get_output_4();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		OutOfSpaceException_t1185332314 * L_1 = (OutOfSpaceException_t1185332314 *)il2cpp_codegen_object_new(OutOfSpaceException_t1185332314_il2cpp_TypeInfo_var);
		OutOfSpaceException__ctor_m896107874(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		Stream_t1273022909 * L_2 = __this->get_output_4();
		ByteU5BU5D_t4116647657* L_3 = __this->get_buffer_1();
		int32_t L_4 = __this->get_position_3();
		NullCheck(L_2);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, L_4);
		__this->set_position_3(0);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::CheckNoSpaceLeft()
extern "C"  void CodedOutputStream_CheckNoSpaceLeft_m2723306956 (CodedOutputStream_t1787628118 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_CheckNoSpaceLeft_m2723306956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = CodedOutputStream_get_SpaceLeft_m2112861421(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral3129599196, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::.cctor()
extern "C"  void CodedOutputStream__cctor_m359340821 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream__cctor_m359340821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((CodedOutputStream_t1787628118_StaticFields*)il2cpp_codegen_static_fields_for(CodedOutputStream_t1787628118_il2cpp_TypeInfo_var))->set_DefaultBufferSize_0(((int32_t)4096));
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
// System.Void Google.ProtocolBuffers.CodedOutputStream/OutOfSpaceException::.ctor()
extern "C"  void OutOfSpaceException__ctor_m896107874 (OutOfSpaceException_t1185332314 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OutOfSpaceException__ctor_m896107874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IOException__ctor_m3662782713(__this, _stringLiteral3540590872, /*hidden argument*/NULL);
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
// System.Void Google.ProtocolBuffers.ExtensionRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>,System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>,System.Boolean)
extern "C"  void ExtensionRegistry__ctor_m3867830969 (ExtensionRegistry_t4271428238 * __this, Dictionary_2_t3107168633 * ___byName0, Dictionary_2_t294577696 * ___byNumber1, bool ___readOnly2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Dictionary_2_t3107168633 * L_0 = ___byName0;
		__this->set_extensionsByName_1(L_0);
		Dictionary_2_t294577696 * L_1 = ___byNumber1;
		__this->set_extensionsByNumber_2(L_1);
		bool L_2 = ___readOnly2;
		__this->set_readOnly_3(L_2);
		return;
	}
}
// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::get_Empty()
extern "C"  ExtensionRegistry_t4271428238 * ExtensionRegistry_get_Empty_m3666683255 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionRegistry_get_Empty_m3666683255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_t4271428238_il2cpp_TypeInfo_var);
		ExtensionRegistry_t4271428238 * L_0 = ((ExtensionRegistry_t4271428238_StaticFields*)il2cpp_codegen_static_fields_for(ExtensionRegistry_t4271428238_il2cpp_TypeInfo_var))->get_empty_0();
		return L_0;
	}
}
// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::CreateInstance()
extern "C"  ExtensionRegistry_t4271428238 * ExtensionRegistry_CreateInstance_m1374935712 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionRegistry_CreateInstance_m1374935712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3107168633 * L_0 = (Dictionary_2_t3107168633 *)il2cpp_codegen_object_new(Dictionary_2_t3107168633_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3201578209(L_0, /*hidden argument*/Dictionary_2__ctor_m3201578209_RuntimeMethod_var);
		Dictionary_2_t294577696 * L_1 = (Dictionary_2_t294577696 *)il2cpp_codegen_object_new(Dictionary_2_t294577696_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3929548244(L_1, /*hidden argument*/Dictionary_2__ctor_m3929548244_RuntimeMethod_var);
		ExtensionRegistry_t4271428238 * L_2 = (ExtensionRegistry_t4271428238 *)il2cpp_codegen_object_new(ExtensionRegistry_t4271428238_il2cpp_TypeInfo_var);
		ExtensionRegistry__ctor_m3867830969(L_2, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Google.ProtocolBuffers.ExtensionRegistry::.cctor()
extern "C"  void ExtensionRegistry__cctor_m952489930 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionRegistry__cctor_m952489930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3107168633 * L_0 = (Dictionary_2_t3107168633 *)il2cpp_codegen_object_new(Dictionary_2_t3107168633_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3201578209(L_0, /*hidden argument*/Dictionary_2__ctor_m3201578209_RuntimeMethod_var);
		Dictionary_2_t294577696 * L_1 = (Dictionary_2_t294577696 *)il2cpp_codegen_object_new(Dictionary_2_t294577696_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3929548244(L_1, /*hidden argument*/Dictionary_2__ctor_m3929548244_RuntimeMethod_var);
		ExtensionRegistry_t4271428238 * L_2 = (ExtensionRegistry_t4271428238 *)il2cpp_codegen_object_new(ExtensionRegistry_t4271428238_il2cpp_TypeInfo_var);
		ExtensionRegistry__ctor_m3867830969(L_2, L_0, L_1, (bool)1, /*hidden argument*/NULL);
		((ExtensionRegistry_t4271428238_StaticFields*)il2cpp_codegen_static_fields_for(ExtensionRegistry_t4271428238_il2cpp_TypeInfo_var))->set_empty_0(L_2);
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
// Conversion methods for marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
extern "C" void ExtensionIntPair_t1343559306_marshal_pinvoke(const ExtensionIntPair_t1343559306& unmarshaled, ExtensionIntPair_t1343559306_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_msgType_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_msgType_0()))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)unmarshaled.get_msgType_0())->identity->QueryInterface(Il2CppIUnknown::IID, reinterpret_cast<void**>(&marshaled.___msgType_0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			marshaled.___msgType_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_msgType_0());
		}
	}
	else
	{
		marshaled.___msgType_0 = NULL;
	}
	marshaled.___number_1 = unmarshaled.get_number_1();
}
extern "C" void ExtensionIntPair_t1343559306_marshal_pinvoke_back(const ExtensionIntPair_t1343559306_marshaled_pinvoke& marshaled, ExtensionIntPair_t1343559306& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionIntPair_t1343559306_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___msgType_0 != NULL)
	{
		unmarshaled.set_msgType_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___msgType_0, Il2CppComObject_il2cpp_TypeInfo_var));
	}
	else
	{
		unmarshaled.set_msgType_0(NULL);
	}
	int32_t unmarshaled_number_temp_1 = 0;
	unmarshaled_number_temp_1 = marshaled.___number_1;
	unmarshaled.set_number_1(unmarshaled_number_temp_1);
}
// Conversion method for clean up from marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
extern "C" void ExtensionIntPair_t1343559306_marshal_pinvoke_cleanup(ExtensionIntPair_t1343559306_marshaled_pinvoke& marshaled)
{
	if (marshaled.___msgType_0 != NULL)
	{
		(marshaled.___msgType_0)->Release();
		marshaled.___msgType_0 = NULL;
	}
}
// Conversion methods for marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
extern "C" void ExtensionIntPair_t1343559306_marshal_com(const ExtensionIntPair_t1343559306& unmarshaled, ExtensionIntPair_t1343559306_marshaled_com& marshaled)
{
	if (unmarshaled.get_msgType_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_msgType_0()))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)unmarshaled.get_msgType_0())->identity->QueryInterface(Il2CppIUnknown::IID, reinterpret_cast<void**>(&marshaled.___msgType_0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, true);
		}
		else
		{
			marshaled.___msgType_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_msgType_0());
		}
	}
	else
	{
		marshaled.___msgType_0 = NULL;
	}
	marshaled.___number_1 = unmarshaled.get_number_1();
}
extern "C" void ExtensionIntPair_t1343559306_marshal_com_back(const ExtensionIntPair_t1343559306_marshaled_com& marshaled, ExtensionIntPair_t1343559306& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionIntPair_t1343559306_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___msgType_0 != NULL)
	{
		unmarshaled.set_msgType_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___msgType_0, Il2CppComObject_il2cpp_TypeInfo_var));
	}
	else
	{
		unmarshaled.set_msgType_0(NULL);
	}
	int32_t unmarshaled_number_temp_1 = 0;
	unmarshaled_number_temp_1 = marshaled.___number_1;
	unmarshaled.set_number_1(unmarshaled_number_temp_1);
}
// Conversion method for clean up from marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
extern "C" void ExtensionIntPair_t1343559306_marshal_com_cleanup(ExtensionIntPair_t1343559306_marshaled_com& marshaled)
{
	if (marshaled.___msgType_0 != NULL)
	{
		(marshaled.___msgType_0)->Release();
		marshaled.___msgType_0 = NULL;
	}
}
// System.Int32 Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::GetHashCode()
extern "C"  int32_t ExtensionIntPair_GetHashCode_m725731987 (ExtensionIntPair_t1343559306 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_msgType_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		int32_t L_2 = __this->get_number_1();
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)65535))), (int32_t)L_2));
	}
}
extern "C"  int32_t ExtensionIntPair_GetHashCode_m725731987_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ExtensionIntPair_t1343559306 * _thisAdjusted = reinterpret_cast<ExtensionIntPair_t1343559306 *>(__this + 1);
	return ExtensionIntPair_GetHashCode_m725731987(_thisAdjusted, method);
}
// System.Boolean Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::Equals(System.Object)
extern "C"  bool ExtensionIntPair_Equals_m2971923064 (ExtensionIntPair_t1343559306 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionIntPair_Equals_m2971923064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ExtensionIntPair_t1343559306_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = ExtensionIntPair_Equals_m852740732(__this, ((*(ExtensionIntPair_t1343559306 *)((ExtensionIntPair_t1343559306 *)UnBox(L_1, ExtensionIntPair_t1343559306_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool ExtensionIntPair_Equals_m2971923064_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	ExtensionIntPair_t1343559306 * _thisAdjusted = reinterpret_cast<ExtensionIntPair_t1343559306 *>(__this + 1);
	return ExtensionIntPair_Equals_m2971923064(_thisAdjusted, ___obj0, method);
}
// System.Boolean Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::Equals(Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair)
extern "C"  bool ExtensionIntPair_Equals_m852740732 (ExtensionIntPair_t1343559306 * __this, ExtensionIntPair_t1343559306  ___other0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = __this->get_msgType_0();
		RuntimeObject * L_1 = (&___other0)->get_msgType_0();
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = __this->get_number_1();
		int32_t L_4 = (&___other0)->get_number_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		return (bool)G_B3_0;
	}
}
extern "C"  bool ExtensionIntPair_Equals_m852740732_AdjustorThunk (RuntimeObject * __this, ExtensionIntPair_t1343559306  ___other0, const RuntimeMethod* method)
{
	ExtensionIntPair_t1343559306 * _thisAdjusted = reinterpret_cast<ExtensionIntPair_t1343559306 *>(__this + 1);
	return ExtensionIntPair_Equals_m852740732(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Globalization.CultureInfo Google.ProtocolBuffers.FrameworkPortability::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * FrameworkPortability_get_InvariantCulture_m1505314247 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameworkPortability_get_InvariantCulture_m1505314247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Google.ProtocolBuffers.FrameworkPortability::.cctor()
extern "C"  void FrameworkPortability__cctor_m4127935117 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameworkPortability__cctor_m4127935117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		((FrameworkPortability_t3105963803_StaticFields*)il2cpp_codegen_static_fields_for(FrameworkPortability_t3105963803_il2cpp_TypeInfo_var))->set_NewLine_0(L_0);
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
// System.Void Google.ProtocolBuffers.InvalidProtocolBufferException::.ctor(System.String)
extern "C"  void InvalidProtocolBufferException__ctor_m4106175372 (InvalidProtocolBufferException_t2498581859 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		IOException__ctor_m3662782713(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::TruncatedMessage()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_TruncatedMessage_m431651349 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_TruncatedMessage_m431651349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_0 = (InvalidProtocolBufferException_t2498581859 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t2498581859_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m4106175372(L_0, _stringLiteral1338050223, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::NegativeSize()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_NegativeSize_m3877348444 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_NegativeSize_m3877348444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_0 = (InvalidProtocolBufferException_t2498581859 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t2498581859_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m4106175372(L_0, _stringLiteral3390586787, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::MalformedVarint()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_MalformedVarint_m1872881085 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_MalformedVarint_m1872881085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_0 = (InvalidProtocolBufferException_t2498581859 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t2498581859_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m4106175372(L_0, _stringLiteral2964272305, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidTag()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_InvalidTag_m4139780452 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_InvalidTag_m4139780452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_0 = (InvalidProtocolBufferException_t2498581859 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t2498581859_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m4106175372(L_0, _stringLiteral3694319134, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidEndTag()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_InvalidEndTag_m4069912906 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_InvalidEndTag_m4069912906_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_0 = (InvalidProtocolBufferException_t2498581859 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t2498581859_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m4106175372(L_0, _stringLiteral2812682840, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidWireType()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_InvalidWireType_m1791826912 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_InvalidWireType_m1791826912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_0 = (InvalidProtocolBufferException_t2498581859 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t2498581859_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m4106175372(L_0, _stringLiteral2580557683, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::RecursionLimitExceeded()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_RecursionLimitExceeded_m3019288901 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_RecursionLimitExceeded_m3019288901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_0 = (InvalidProtocolBufferException_t2498581859 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t2498581859_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m4106175372(L_0, _stringLiteral3757154943, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::SizeLimitExceeded()
extern "C"  InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_SizeLimitExceeded_m4122733860 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_SizeLimitExceeded_m4122733860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t2498581859 * L_0 = (InvalidProtocolBufferException_t2498581859 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t2498581859_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m4106175372(L_0, _stringLiteral4016927489, /*hidden argument*/NULL);
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
// System.Void Google.ProtocolBuffers.ThrowHelper::ThrowIfNull(System.Object,System.String)
extern "C"  void ThrowHelper_ThrowIfNull_m4026022381 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_ThrowIfNull_m4026022381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___name1;
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_000d:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.ThrowHelper::ThrowIfNull(System.Object)
extern "C"  void ThrowHelper_ThrowIfNull_m3924373085 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_ThrowIfNull_m3924373085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2751210921(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000c:
	{
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
// System.Void Google.ProtocolBuffers.UninitializedMessageException::.ctor(Google.ProtocolBuffers.IMessageLite)
extern "C"  void UninitializedMessageException__ctor_m2212995308 (UninitializedMessageException_t3402409807 * __this, RuntimeObject* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UninitializedMessageException__ctor_m2212995308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___message0;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m88164663(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1859288917, L_1, /*hidden argument*/NULL);
		Exception__ctor_m1152696503(__this, L_2, /*hidden argument*/NULL);
		List_1_t3319525431 * L_3 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_3, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_missingFields_11(L_3);
		return;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.UninitializedMessageException::AsInvalidProtocolBufferException()
extern "C"  InvalidProtocolBufferException_t2498581859 * UninitializedMessageException_AsInvalidProtocolBufferException_m2123326276 (UninitializedMessageException_t3402409807 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UninitializedMessageException_AsInvalidProtocolBufferException_m2123326276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, __this);
		InvalidProtocolBufferException_t2498581859 * L_1 = (InvalidProtocolBufferException_t2498581859 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t2498581859_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m4106175372(L_1, L_0, /*hidden argument*/NULL);
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
// Google.ProtocolBuffers.WireFormat/WireType Google.ProtocolBuffers.WireFormat::GetTagWireType(System.UInt32)
extern "C"  uint32_t WireFormat_GetTagWireType_m1784829716 (RuntimeObject * __this /* static, unused */, uint32_t ___tag0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___tag0;
		return (uint32_t)(((int32_t)((int32_t)L_0&(int32_t)7)));
	}
}
// System.Boolean Google.ProtocolBuffers.WireFormat::IsEndGroupTag(System.UInt32)
extern "C"  bool WireFormat_IsEndGroupTag_m2504732292 (RuntimeObject * __this /* static, unused */, uint32_t ___tag0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___tag0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)4))? 1 : 0);
	}
}
// System.Int32 Google.ProtocolBuffers.WireFormat::GetTagFieldNumber(System.UInt32)
extern "C"  int32_t WireFormat_GetTagFieldNumber_m3577868076 (RuntimeObject * __this /* static, unused */, uint32_t ___tag0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___tag0;
		return ((int32_t)((int32_t)L_0>>(int32_t)3));
	}
}
// System.UInt32 Google.ProtocolBuffers.WireFormat::MakeTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
extern "C"  uint32_t WireFormat_MakeTag_m3849727317 (RuntimeObject * __this /* static, unused */, int32_t ___fieldNumber0, uint32_t ___wireType1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		uint32_t L_1 = ___wireType1;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)3))|(int32_t)L_1));
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

#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_11.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo ShimEnumerator_t3160_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_11MethodDeclarations.h"

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Enumerator_t3157_il2cpp_TypeInfo;
extern TypeInfo IDictionaryEnumerator_t964_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t967_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3153_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Byte_t517_il2cpp_TypeInfo;
extern TypeInfo Boolean_t90_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
extern Il2CppType Enumerator_t3157_0_0_0;
extern Il2CppType ShimEnumerator_t3160_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m11379_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m18779_MethodInfo;
extern MethodInfo Object__ctor_m373_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m18759_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m18724_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m18726_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m18779_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m18720_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m18758_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ShimEnumerator__ctor_m18777_GenericMethod;
extern "C" void ShimEnumerator__ctor_m18777_gshared (ShimEnumerator_t3160 * __this, Dictionary_2_t3152 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		Dictionary_2_t3152 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3157  L_1 = (( Enumerator_t3157  (*) (Dictionary_2_t3152 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m18778_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m18778_gshared (ShimEnumerator_t3160 * __this, MethodInfo* method)
{
	{
		Enumerator_t3157 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t967  ShimEnumerator_get_Entry_m18779_gshared (ShimEnumerator_t3160 * __this, MethodInfo* method)
{
	{
		Enumerator_t3157  L_0 = (__this->___host_enumerator_0);
		Enumerator_t3157  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t967  L_3 = (DictionaryEntry_t967 )InterfaceFuncInvoker0< DictionaryEntry_t967  >::Invoke(&IDictionaryEnumerator_get_Entry_m11379_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m18780_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m18780_gshared (ShimEnumerator_t3160 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3153  V_0 = {0};
	{
		Enumerator_t3157 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3153  L_1 = (( KeyValuePair_2_t3153  (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m18781_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m18781_gshared (ShimEnumerator_t3160 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3153  V_0 = {0};
	{
		Enumerator_t3157 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3153  L_1 = (( KeyValuePair_2_t3153  (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m18782_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m18782_gshared (ShimEnumerator_t3160 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t967  L_0 = (DictionaryEntry_t967 )VirtFuncInvoker0< DictionaryEntry_t967  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		DictionaryEntry_t967  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DictionaryEntry_t967_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4125_il2cpp_TypeInfo;

// System.Int32
#include "mscorlib_System_Int32.h"


// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Byte>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Byte>::GetHashCode(T)
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_38.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3161_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_38MethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_38.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t97_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3163_il2cpp_TypeInfo;
extern TypeInfo Int32_t92_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_38MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3161_0_0_0;
extern Il2CppType IEquatable_1_t2036_0_0_0;
extern Il2CppType Byte_t517_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2333_0_0_0;
extern Il2CppType TypeU5BU5D_t97_0_0_0;
extern Il2CppType DefaultComparer_t3163_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m298_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m3955_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3953_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10477_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m18791_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23510_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23509_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18791_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23510_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23509_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m18783_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m18783_gshared (EqualityComparer_1_t3161 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m18784_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m18784_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3163 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3163 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t3161_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Byte>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m18785_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m18785_gshared (EqualityComparer_1_t3161 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(uint8_t*)((uint8_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m18786_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m18786_gshared (EqualityComparer_1_t3161 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(uint8_t*)((uint8_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(uint8_t*)((uint8_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Byte>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Byte>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m18787_GenericMethod;
extern "C" EqualityComparer_1_t3161 * EqualityComparer_1_get_Default_m18787_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3161 * L_0 = ((EqualityComparer_1_t3161_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t3162_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6MethodDeclarations.h"

extern TypeInfo IEquatable_1_t2036_il2cpp_TypeInfo;
extern MethodInfo Object_GetHashCode_m441_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m23511_MethodInfo;
extern Il2CppGenericMethod IEquatable_1_Equals_m23511_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Byte>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m18788_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m18788_gshared (GenericEqualityComparer_1_t3162 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3161 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Byte>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m18789_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m18789_gshared (GenericEqualityComparer_1_t3162 * __this, uint8_t ___obj, MethodInfo* method)
{
	{
		uint8_t L_0 = ___obj;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m441_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Byte>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m18790_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m18790_gshared (GenericEqualityComparer_1_t3162 * __this, uint8_t ___x, uint8_t ___y, MethodInfo* method)
{
	{
		uint8_t L_0 = ___x;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_3 = ___y;
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint8_t L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_Equals_m440_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::.ctor()
extern "C" void DefaultComparer__ctor_m18791_gshared (DefaultComparer_t3163 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3161 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m18792_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m18792_gshared (DefaultComparer_t3163 * __this, uint8_t ___obj, MethodInfo* method)
{
	{
		uint8_t L_0 = ___obj;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m441_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m18793_GenericMethod;
extern "C" bool DefaultComparer_Equals_m18793_gshared (DefaultComparer_t3163 * __this, uint8_t ___x, uint8_t ___y, MethodInfo* method)
{
	{
		uint8_t L_0 = ___x;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_3 = ___y;
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint8_t L_6 = ___y;
		uint8_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m440_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4130_il2cpp_TypeInfo;

// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4131_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3424_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyValuePair_2_t3164_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12MethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
extern TypeInfo StringU5BU5D_t104_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t104_0_0_0;
extern MethodInfo Object_ToString_m442_MethodInfo;
extern MethodInfo String_Concat_m386_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m18796_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m18798_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m18795_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m18797_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_152.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3165_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_152MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo InvalidOperationException_t1143_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3165_0_0_0;
extern Il2CppType KeyValuePair_2_t3164_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4997_MethodInfo;
extern MethodInfo Array_get_Length_m5002_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Int32)
extern "C" KeyValuePair_2_t3164  Array_InternalArray__get_Item_TisKeyValuePair_2_t3164_m22004_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3164_m22004(__this, p0, method) (( KeyValuePair_2_t3164  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3164_m22004_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18804_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3164_m22004_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18800_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m18800_gshared (InternalEnumerator_1_t3165 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18801_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18801_gshared (InternalEnumerator_1_t3165 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3164  L_0 = (( KeyValuePair_2_t3164  (*) (InternalEnumerator_1_t3165 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3164  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18802_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m18802_gshared (InternalEnumerator_1_t3165 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18803_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m18803_gshared (InternalEnumerator_1_t3165 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5002(L_1, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t3164  InternalEnumerator_1_get_Current_m18804_gshared (InternalEnumerator_1_t3165 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1143 * L_1 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_1, (String_t*) &_stringLiteral1269, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1143 * L_3 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_3, (String_t*) &_stringLiteral1270, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5002(L_5, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t3164  L_8 = (( KeyValuePair_2_t3164  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4132_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t4133_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::Remove(TKey)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_25.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t3166_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_25MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_47.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern TypeInfo ICollection_t913_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t1009_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t820_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t229_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3167_il2cpp_TypeInfo;
extern TypeInfo BooleanU5BU5D_t184_il2cpp_TypeInfo;
extern TypeInfo Void_t103_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3169_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_47MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26MethodDeclarations.h"
extern Il2CppType Dictionary_2_t1009_0_0_0;
extern Il2CppType Enumerator_t3167_0_0_0;
extern Il2CppType BooleanU5BU5D_t184_0_0_0;
extern Il2CppType ValueCollection_t3166_0_0_0;
extern Il2CppType Transform_1_t3169_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m11376_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m18676_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3942_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m5021_MethodInfo;
extern MethodInfo ValueCollection_CopyTo_m18816_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m18690_MethodInfo;
extern MethodInfo Transform_1__ctor_m18836_MethodInfo;
extern MethodInfo Enumerator__ctor_m18819_MethodInfo;
struct Dictionary_2_t1009;
// System.Exception
#include "mscorlib_System_Exception.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
struct Dictionary_2_t3152;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_44.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisByte_t517_m21997_gshared (Dictionary_2_t3152 * __this, Array_t * p0, int32_t p1, Transform_1_t3158 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisByte_t517_m21997(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3152 *, Array_t *, int32_t, Transform_1_t3158 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisByte_t517_m21997_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_ICollectionCopyTo<System.Boolean>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_ICollectionCopyTo<System.Boolean>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t90_m22015(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1009 *, Array_t *, int32_t, Transform_1_t3169 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisByte_t517_m21997_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t1009;
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.Boolean,System.Boolean>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.Boolean,System.Boolean>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisBoolean_t90_TisBoolean_t90_m22016 (Dictionary_2_t1009 * __this, BooleanU5BU5D_t184* p0, int32_t p1, Transform_1_t3169 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m18676_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m18701_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m18817_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m18816_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m18686_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m18690_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18836_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t90_m22015_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisBoolean_t90_TisBoolean_t90_m22016_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18819_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::get_Count()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
extern TypeInfo Enumerator_t3168_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12MethodDeclarations.h"
extern Il2CppType Enumerator_t3168_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m18832_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m18719_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m18835_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m18829_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo Link_t1463_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1323_il2cpp_TypeInfo;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo DictionaryEntry__ctor_m4998_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m18794_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m6181_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m18834_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m18831_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m18833_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m18794_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::Dispose()
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_48.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3150_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_48MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3170_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_50.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3171_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_50MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m18845_GenericMethod;
extern "C" void Transform_1__ctor_m18845_gshared (Transform_1_t3171 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18847_GenericMethod;
extern "C" KeyValuePair_2_t3164  Transform_1_Invoke_m18847_gshared (Transform_1_t3171 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18847((Transform_1_t3171 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3164  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3164  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3164  (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18849_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18849_gshared (Transform_1_t3171 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t517_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18851_GenericMethod;
extern "C" KeyValuePair_2_t3164  Transform_1_EndInvoke_m18851_gshared (Transform_1_t3171 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3164 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t3172_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_12MethodDeclarations.h"

extern Il2CppType ShimEnumerator_t3172_0_0_0;
extern MethodInfo ShimEnumerator_get_Entry_m18854_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m18830_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m18854_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4124_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Boolean>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Boolean>::GetHashCode(T)
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_39.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3173_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_39MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_39.h"
extern TypeInfo DefaultComparer_t3175_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_39MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3173_0_0_0;
extern Il2CppType IEquatable_1_t2072_0_0_0;
extern Il2CppType Boolean_t90_0_0_0;
extern Il2CppType DefaultComparer_t3175_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18866_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23512_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23507_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18866_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23512_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23507_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Boolean>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<System.Boolean>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Boolean>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Boolean>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Boolean>::get_Default()
// System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t3174_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__7MethodDeclarations.h"

extern TypeInfo IEquatable_1_t2072_il2cpp_TypeInfo;
extern MethodInfo IEquatable_1_Equals_m23513_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m18858_GenericMethod;
extern Il2CppGenericMethod IEquatable_1_Equals_m23513_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>::.ctor()
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>::GetHashCode(T)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4134_il2cpp_TypeInfo;

// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Current()
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_153.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3176_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_153MethodDeclarations.h"

extern TypeInfo X509Certificate_t985_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3176_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m19712_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19712(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509Certificate>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509Certificate>(System.Int32)
#define Array_InternalArray__get_Item_TisX509Certificate_t985_m22024(__this, p0, method) (( X509Certificate_t985 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18873_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisX509Certificate_t985_m22024_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4135_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4136_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Certificate>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4137_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4138_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4139_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.IDeserializationCallback>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4140_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_154.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3177_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_154MethodDeclarations.h"

extern TypeInfo IDeserializationCallback_t1183_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3177_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.IDeserializationCallback>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.IDeserializationCallback>(System.Int32)
#define Array_InternalArray__get_Item_TisIDeserializationCallback_t1183_m22035(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18878_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIDeserializationCallback_t1183_m22035_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4141_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.IDeserializationCallback>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.IDeserializationCallback>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.IDeserializationCallback>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.IDeserializationCallback>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.IDeserializationCallback>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4142_il2cpp_TypeInfo;

// System.Security.Cryptography.X509Certificates.X509ChainStatus
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_5.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_155.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3178_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_155MethodDeclarations.h"

extern TypeInfo X509ChainStatus_t1039_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3178_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
extern "C" X509ChainStatus_t1039  Array_InternalArray__get_Item_TisX509ChainStatus_t1039_m22046_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisX509ChainStatus_t1039_m22046(__this, p0, method) (( X509ChainStatus_t1039  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisX509ChainStatus_t1039_m22046_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18883_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisX509ChainStatus_t1039_m22046_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18879_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m18879_gshared (InternalEnumerator_1_t3178 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18880_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18880_gshared (InternalEnumerator_1_t3178 * __this, MethodInfo* method)
{
	{
		X509ChainStatus_t1039  L_0 = (( X509ChainStatus_t1039  (*) (InternalEnumerator_1_t3178 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		X509ChainStatus_t1039  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18881_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m18881_gshared (InternalEnumerator_1_t3178 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18882_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m18882_gshared (InternalEnumerator_1_t3178 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5002(L_1, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
extern "C" X509ChainStatus_t1039  InternalEnumerator_1_get_Current_m18883_gshared (InternalEnumerator_1_t3178 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1143 * L_1 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_1, (String_t*) &_stringLiteral1269, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1143 * L_3 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_3, (String_t*) &_stringLiteral1270, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5002(L_5, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		X509ChainStatus_t1039  L_8 = (( X509ChainStatus_t1039  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4143_il2cpp_TypeInfo;

#include "System_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4144_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4145_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4146_il2cpp_TypeInfo;

// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Capture>::get_Current()
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_156.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3179_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_156MethodDeclarations.h"

extern TypeInfo Capture_t1067_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3179_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Capture>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Capture>(System.Int32)
#define Array_InternalArray__get_Item_TisCapture_t1067_m22057(__this, p0, method) (( Capture_t1067 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18888_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisCapture_t1067_m22057_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4147_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4148_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Capture>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4149_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4150_il2cpp_TypeInfo;

// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Group>::get_Current()
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_157.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3180_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_157MethodDeclarations.h"

extern TypeInfo Group_t1070_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3180_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Group>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Group>(System.Int32)
#define Array_InternalArray__get_Item_TisGroup_t1070_m22068(__this, p0, method) (( Group_t1070 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18893_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisGroup_t1070_m22068_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4151_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4152_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Group>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4153_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t2451_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Int32>::Compare(T,T)
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_28.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t3181_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_28MethodDeclarations.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_28.h"
extern TypeInfo DefaultComparer_t3182_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t514_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_28MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType Comparer_1_t3181_0_0_0;
extern Il2CppType IComparable_1_t2020_0_0_0;
extern Il2CppType Int32_t92_0_0_0;
extern Il2CppType GenericComparer_1_t2263_0_0_0;
extern Il2CppType DefaultComparer_t3182_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18898_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23514_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10503_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18898_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23514_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m18894_GenericMethod;
extern "C" void Comparer_1__ctor_m18894_gshared (Comparer_1_t3181 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m18895_GenericMethod;
extern "C" void Comparer_1__cctor_m18895_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3182 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3182 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3182 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t3181_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m18896_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m18896_gshared (Comparer_1_t3181 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(int32_t*)((int32_t*)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(int32_t*)((int32_t*)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t514 * L_8 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m10503(L_8, /*hidden argument*/&ArgumentException__ctor_m10503_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Int32>::get_Default()
extern Il2CppGenericMethod Comparer_1_get_Default_m18897_GenericMethod;
extern "C" Comparer_1_t3181 * Comparer_1_get_Default_m18897_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t3181 * L_0 = ((Comparer_1_t3181_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_1_t2020_il2cpp_TypeInfo;
extern TypeInfo IComparable_t108_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m23515_MethodInfo;
extern MethodInfo IComparable_CompareTo_m11342_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2604_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m23515_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m18898_gshared (DefaultComparer_t3182 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t3181 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m18899_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m18899_gshared (DefaultComparer_t3182 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___x;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___y;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		int32_t L_6 = ___y;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		int32_t L_9 = ___x;
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = ___x;
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		int32_t L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		int32_t L_17 = ___x;
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t108_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_20 = ___x;
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		int32_t L_23 = ___y;
		int32_t L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck(((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t108_il2cpp_TypeInfo))));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m11342_MethodInfo, ((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t108_il2cpp_TypeInfo))), L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t514 * L_27 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_27, (String_t*) &_stringLiteral1428, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4154_il2cpp_TypeInfo;

// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_158.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3183_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_158MethodDeclarations.h"

extern TypeInfo Mark_t1094_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3183_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
extern "C" Mark_t1094  Array_InternalArray__get_Item_TisMark_t1094_m22081_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisMark_t1094_m22081(__this, p0, method) (( Mark_t1094  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisMark_t1094_m22081_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18904_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMark_t1094_m22081_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18900_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m18900_gshared (InternalEnumerator_1_t3183 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18901_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18901_gshared (InternalEnumerator_1_t3183 * __this, MethodInfo* method)
{
	{
		Mark_t1094  L_0 = (( Mark_t1094  (*) (InternalEnumerator_1_t3183 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Mark_t1094  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18902_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m18902_gshared (InternalEnumerator_1_t3183 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18903_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m18903_gshared (InternalEnumerator_1_t3183 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5002(L_1, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
extern "C" Mark_t1094  InternalEnumerator_1_get_Current_m18904_gshared (InternalEnumerator_1_t3183 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1143 * L_1 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_1, (String_t*) &_stringLiteral1269, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1143 * L_3 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_3, (String_t*) &_stringLiteral1270, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5002(L_5, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		Mark_t1094  L_8 = (( Mark_t1094  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4155_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4156_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Mark>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4157_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4158_il2cpp_TypeInfo;

// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"


// T System.Collections.Generic.IEnumerator`1<System.Uri/UriScheme>::get_Current()
// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_159.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3184_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_159MethodDeclarations.h"

extern TypeInfo UriScheme_t1130_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3184_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
extern "C" UriScheme_t1130  Array_InternalArray__get_Item_TisUriScheme_t1130_m22092_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisUriScheme_t1130_m22092(__this, p0, method) (( UriScheme_t1130  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisUriScheme_t1130_m22092_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18909_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisUriScheme_t1130_m22092_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18905_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m18905_gshared (InternalEnumerator_1_t3184 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Uri/UriScheme>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18906_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18906_gshared (InternalEnumerator_1_t3184 * __this, MethodInfo* method)
{
	{
		UriScheme_t1130  L_0 = (( UriScheme_t1130  (*) (InternalEnumerator_1_t3184 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UriScheme_t1130  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18907_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m18907_gshared (InternalEnumerator_1_t3184 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Uri/UriScheme>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18908_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m18908_gshared (InternalEnumerator_1_t3184 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5002(L_1, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Uri/UriScheme>::get_Current()
extern "C" UriScheme_t1130  InternalEnumerator_1_get_Current_m18909_gshared (InternalEnumerator_1_t3184 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1143 * L_1 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_1, (String_t*) &_stringLiteral1269, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1143 * L_3 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_3, (String_t*) &_stringLiteral1270, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5002(L_5, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		UriScheme_t1130  L_8 = (( UriScheme_t1130  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4159_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4160_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Uri/UriScheme>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4161_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Uri/UriScheme>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Uri/UriScheme>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4162_il2cpp_TypeInfo;

// System.UInt32
#include "mscorlib_System_UInt32.h"


// T System.Collections.Generic.IEnumerator`1<System.UInt32>::get_Current()
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_160.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3185_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_160MethodDeclarations.h"

extern TypeInfo UInt32_t815_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3185_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
extern "C" uint32_t Array_InternalArray__get_Item_TisUInt32_t815_m22103_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt32_t815_m22103(__this, p0, method) (( uint32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisUInt32_t815_m22103_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18914_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisUInt32_t815_m22103_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.UInt32>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18910_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m18910_gshared (InternalEnumerator_1_t3185 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18911_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18911_gshared (InternalEnumerator_1_t3185 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (( uint32_t (*) (InternalEnumerator_1_t3185 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt32>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18912_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m18912_gshared (InternalEnumerator_1_t3185 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt32>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18913_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m18913_gshared (InternalEnumerator_1_t3185 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5002(L_1, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.UInt32>::get_Current()
extern "C" uint32_t InternalEnumerator_1_get_Current_m18914_gshared (InternalEnumerator_1_t3185 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1143 * L_1 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_1, (String_t*) &_stringLiteral1269, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1143 * L_3 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_3, (String_t*) &_stringLiteral1270, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5002(L_5, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		uint32_t L_8 = (( uint32_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4163_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UInt32>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UInt32>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt32>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt32>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4164_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt32>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4165_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UInt32>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UInt32>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UInt32>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UInt32>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UInt32>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4166_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4167_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4168_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2030_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.UInt32>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_161.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3186_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_161MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3186_0_0_0;
extern Il2CppType IComparable_1_t2030_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt32>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2030_m22114(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18919_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2030_m22114_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4169_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.UInt32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.UInt32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4170_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4171_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.UInt32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4172_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.UInt32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2031_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.UInt32>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_162.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3187_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_162MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3187_0_0_0;
extern Il2CppType IEquatable_1_t2031_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt32>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2031_m22125(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18924_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2031_m22125_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4173_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4174_il2cpp_TypeInfo;

// Mono.Math.BigInteger
#include "Mono_Security_Mono_Math_BigInteger.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_163.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3188_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_163MethodDeclarations.h"

extern TypeInfo BigInteger_t1200_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3188_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
#define Array_InternalArray__get_Item_TisBigInteger_t1200_m22136(__this, p0, method) (( BigInteger_t1200 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18929_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBigInteger_t1200_m22136_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4175_il2cpp_TypeInfo;

#include "Mono.Security_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4176_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4177_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4178_il2cpp_TypeInfo;

// System.Security.Cryptography.KeySizes
#include "mscorlib_System_Security_Cryptography_KeySizes.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.KeySizes>::get_Current()
// System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_164.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3189_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_164MethodDeclarations.h"

extern TypeInfo KeySizes_t1322_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3189_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.KeySizes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.KeySizes>(System.Int32)
#define Array_InternalArray__get_Item_TisKeySizes_t1322_m22147(__this, p0, method) (( KeySizes_t1322 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18934_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeySizes_t1322_m22147_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4179_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4180_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.KeySizes>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4181_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4182_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Byte[]>::get_Current()
// System.Array/InternalEnumerator`1<System.Byte[]>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_165.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3190_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Byte[]>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_165MethodDeclarations.h"

extern TypeInfo ByteU5BU5D_t1019_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3190_0_0_0;
extern Il2CppType ByteU5BU5D_t1019_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte[]>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte[]>(System.Int32)
#define Array_InternalArray__get_Item_TisByteU5BU5D_t1019_m22158(__this, p0, method) (( ByteU5BU5D_t1019* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18939_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisByteU5BU5D_t1019_m22158_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Byte[]>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Byte[]>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Byte[]>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4183_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Byte[]>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4184_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Byte[]>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4185_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Byte[]>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Byte[]>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4186_il2cpp_TypeInfo;

// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_166.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3191_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_166MethodDeclarations.h"

extern TypeInfo ClientCertificateType_t1296_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3191_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisInt32_t92_m19856_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt32_t92_m19856(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt32_t92_m19856_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
#define Array_InternalArray__get_Item_TisClientCertificateType_t1296_m22169(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt32_t92_m19856_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18944_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisClientCertificateType_t1296_m22169_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4187_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4188_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4189_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2027_il2cpp_TypeInfo;

// System.Int64
#include "mscorlib_System_Int64.h"


// System.Int32 System.IComparable`1<System.Int64>::CompareTo(T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif

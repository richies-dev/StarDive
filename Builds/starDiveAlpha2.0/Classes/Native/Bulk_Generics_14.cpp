#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_146.h"
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
extern TypeInfo InternalEnumerator_1_t3100_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_146MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Array
#include "mscorlib_System_Array.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo KeyValuePair_2_t3099_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1143_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3100_0_0_0;
extern Il2CppType KeyValuePair_2_t3099_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4997_MethodInfo;
extern MethodInfo Array_get_Length_m5002_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>(System.Int32)
extern "C" KeyValuePair_2_t3099  Array_InternalArray__get_Item_TisKeyValuePair_2_t3099_m21891_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3099_m21891(__this, p0, method) (( KeyValuePair_2_t3099  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3099_m21891_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18226_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3099_m21891_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18222_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m18222_gshared (InternalEnumerator_1_t3100 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18223_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18223_gshared (InternalEnumerator_1_t3100 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3099  L_0 = (( KeyValuePair_2_t3099  (*) (InternalEnumerator_1_t3100 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3099  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18224_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m18224_gshared (InternalEnumerator_1_t3100 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18225_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m18225_gshared (InternalEnumerator_1_t3100 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::get_Current()
extern "C" KeyValuePair_2_t3099  InternalEnumerator_1_get_Current_m18226_gshared (InternalEnumerator_1_t3100 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3099  L_8 = (( KeyValuePair_2_t3099  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4109_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t4110_il2cpp_TypeInfo;

// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"


// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3097_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Event>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Event>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4111_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Event>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Event>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_147.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3101_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Event>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_147MethodDeclarations.h"

extern TypeInfo Event_t391_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3101_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m19712_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19712(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Event>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Event>(System.Int32)
#define Array_InternalArray__get_Item_TisEvent_t391_m21902(__this, p0, method) (( Event_t391 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18231_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisEvent_t391_m21902_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Event>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Event>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Event>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Event>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Event>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4112_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Event>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Event>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Event>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Event>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Event>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Event>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Event>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4113_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Event>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4114_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Event>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Event>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Event>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Event>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Event>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3416_il2cpp_TypeInfo;

// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.TextEditor/TextEditOp>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_148.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3102_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_148MethodDeclarations.h"

extern TypeInfo TextEditOp_t771_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3102_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisInt32_t92_m19856_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt32_t92_m19856(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt32_t92_m19856_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.TextEditor/TextEditOp>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.TextEditor/TextEditOp>(System.Int32)
#define Array_InternalArray__get_Item_TisTextEditOp_t771_m21913(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt32_t92_m19856_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18236_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTextEditOp_t771_m21913_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4115_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.TextEditor/TextEditOp>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.TextEditor/TextEditOp>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.TextEditor/TextEditOp>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.TextEditor/TextEditOp>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.TextEditor/TextEditOp>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.TextEditor/TextEditOp>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.TextEditor/TextEditOp>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4116_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4117_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.TextEditor/TextEditOp>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.TextEditor/TextEditOp>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.TextEditor/TextEditOp>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.TextEditor/TextEditOp>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.TextEditor/TextEditOp>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_21.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t3103_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_21MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_22.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_40.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern TypeInfo ICollection_t913_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t772_il2cpp_TypeInfo;
extern TypeInfo Int32_t92_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t820_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t229_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3104_il2cpp_TypeInfo;
extern TypeInfo TextEditOpU5BU5D_t3096_il2cpp_TypeInfo;
extern TypeInfo Void_t103_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3106_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_40MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_22MethodDeclarations.h"
extern Il2CppType Dictionary_2_t772_0_0_0;
extern Il2CppType Enumerator_t3104_0_0_0;
extern Il2CppType TextEditOpU5BU5D_t3096_0_0_0;
extern Il2CppType ValueCollection_t3103_0_0_0;
extern Il2CppType Transform_1_t3106_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m11376_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m18192_MethodInfo;
extern MethodInfo Object__ctor_m373_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3942_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m5021_MethodInfo;
extern MethodInfo ValueCollection_CopyTo_m18248_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m18199_MethodInfo;
extern MethodInfo Transform_1__ctor_m18268_MethodInfo;
extern MethodInfo Enumerator__ctor_m18251_MethodInfo;
struct Dictionary_2_t772;
// System.Type
#include "mscorlib_System_Type.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
struct Dictionary_2_t2720;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t92_m20752_gshared (Dictionary_2_t2720 * __this, Array_t * p0, int32_t p1, Transform_1_t2729 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t92_m20752(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2720 *, Array_t *, int32_t, Transform_1_t2729 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t92_m20752_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<UnityEngine.TextEditor/TextEditOp>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<UnityEngine.TextEditor/TextEditOp>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisTextEditOp_t771_m21924(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t772 *, Array_t *, int32_t, Transform_1_t3106 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t92_m20752_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t772;
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisTextEditOp_t771_TisTextEditOp_t771_m21925 (Dictionary_2_t772 * __this, TextEditOpU5BU5D_t3096* p0, int32_t p1, Transform_1_t3106 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m18192_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m18205_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m18249_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m18248_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m18197_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m18199_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18268_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisTextEditOp_t771_m21924_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisTextEditOp_t771_TisTextEditOp_t771_m21925_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18251_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Count()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
extern TypeInfo Enumerator_t3105_il2cpp_TypeInfo;
extern TypeInfo Boolean_t90_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10MethodDeclarations.h"
extern Il2CppType Enumerator_t3105_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m18264_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m18219_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m18214_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m18267_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m18261_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo DictionaryEntry_t967_il2cpp_TypeInfo;
extern TypeInfo Link_t1463_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1323_il2cpp_TypeInfo;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo DictionaryEntry__ctor_m4998_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m18216_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m6181_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m18266_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m18217_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m18263_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m18265_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m18216_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Dispose()
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_41.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3098_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_41MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_42.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3107_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_42MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_43.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3108_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_43MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m18277_GenericMethod;
extern "C" void Transform_1__ctor_m18277_gshared (Transform_1_t3108 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18279_GenericMethod;
extern "C" KeyValuePair_2_t3099  Transform_1_Invoke_m18279_gshared (Transform_1_t3108 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18279((Transform_1_t3108 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3099  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3099  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3099  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18281_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18281_gshared (Transform_1_t3108 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18283_GenericMethod;
extern "C" KeyValuePair_2_t3099  Transform_1_EndInvoke_m18283_gshared (Transform_1_t3108 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3099 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t3109_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_10MethodDeclarations.h"

extern TypeInfo IDictionaryEnumerator_t964_il2cpp_TypeInfo;
extern Il2CppType ShimEnumerator_t3109_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m11379_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m18286_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m18262_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m18286_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Current()
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Event>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_34.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3110_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Event>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_34MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Event>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_34.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t97_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3111_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Event>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_34MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3110_0_0_0;
extern Il2CppType IEquatable_1_t4118_0_0_0;
extern Il2CppType Event_t391_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2333_0_0_0;
extern Il2CppType TypeU5BU5D_t97_0_0_0;
extern Il2CppType DefaultComparer_t3111_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m298_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m3955_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3953_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10477_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m18295_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23475_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23476_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18295_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23475_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23476_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Event>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Event>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Event>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Event>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Event>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Event>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Event>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4118_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Event>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m441_MethodInfo;
extern MethodInfo Object_Equals_m440_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m18290_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Event>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Event>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Event>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4106_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::GetHashCode(T)
// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_35.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3112_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_35MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_35.h"
extern TypeInfo DefaultComparer_t3113_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_35MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3112_0_0_0;
extern Il2CppType IEquatable_1_t4119_0_0_0;
extern Il2CppType TextEditOp_t771_0_0_0;
extern Il2CppType DefaultComparer_t3113_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18303_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23477_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23474_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18303_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23477_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23474_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4119_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.TextEditor/TextEditOp>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m18298_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>::Equals(T,T)
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_2_t3115_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_2_genMethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_2_gen.h"
extern TypeInfo UnityAction_2_t3114_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t514_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_2_genMethodDeclarations.h"
extern Il2CppType UnityAction_2_t3114_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m3783_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m3946_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2604_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m3784_MethodInfo;
extern MethodInfo UnityAction_2_Invoke_m18310_MethodInfo;
extern MethodInfo Delegate_get_Target_m3945_MethodInfo;
extern MethodInfo Delegate_get_Method_m3943_MethodInfo;
struct BaseInvokableCall_t775;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20552_gshared (Object_t * __this /* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20552(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20552_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20552_GenericMethod;
extern Il2CppGenericMethod UnityAction_2_Invoke_m18310_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_2__ctor_m18306_GenericMethod;
extern "C" void InvokableCall_2__ctor_m18306_gshared (InvokableCall_2_t3115 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3783(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m3783_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		Object_t * L_3 = ___target;
		MethodInfo_t * L_4 = ___theFunction;
		Delegate_t493 * L_5 = Delegate_CreateDelegate_m3946(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/&Delegate_CreateDelegate_m3946_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_2_t3114 *)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern Il2CppGenericMethod InvokableCall_2_Invoke_m18307_GenericMethod;
extern "C" void InvokableCall_2_Invoke_m18307_gshared (InvokableCall_2_t3115 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t219* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t514 * L_1 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_1, (String_t*) &_stringLiteral424, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t219* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		ObjectU5BU5D_t219* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		UnityAction_2_t3114 * L_6 = (__this->___Delegate_0);
		bool L_7 = BaseInvokableCall_AllowInvoke_m3784(NULL /*static, unused*/, L_6, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m3784_MethodInfo);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		UnityAction_2_t3114 * L_8 = (__this->___Delegate_0);
		ObjectU5BU5D_t219* L_9 = ___args;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		ObjectU5BU5D_t219* L_11 = ___args;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		int32_t L_12 = 1;
		NullCheck(L_8);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_8, ((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_10)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))), ((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_11, L_12)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))));
	}

IL_004f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_2_Find_m18308_GenericMethod;
extern "C" bool InvokableCall_2_Find_m18308_gshared (InvokableCall_2_t3115 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_2_t3114 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3945(L_0, /*hidden argument*/&Delegate_get_Target_m3945_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_2_t3114 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m3943(L_3, /*hidden argument*/&Delegate_get_Method_m3943_MethodInfo);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_2__ctor_m18309_GenericMethod;
extern "C" void UnityAction_2__ctor_m18309_gshared (UnityAction_2_t3114 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" void UnityAction_2_Invoke_m18310_gshared (UnityAction_2_t3114 * __this, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_2_Invoke_m18310((UnityAction_2_t3114 *)__this->___prev_9,___arg0, ___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0, ___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0, ___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0, ___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_2_BeginInvoke_m18311_GenericMethod;
extern "C" Object_t * UnityAction_2_BeginInvoke_m18311_gshared (UnityAction_2_t3114 * __this, Object_t * ___arg0, Object_t * ___arg1, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_2_EndInvoke_m18312_GenericMethod;
extern "C" void UnityAction_2_EndInvoke_m18312_gshared (UnityAction_2_t3114 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_3_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_3_t3117_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_3_genMethodDeclarations.h"

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_3_gen.h"
extern TypeInfo UnityAction_3_t3116_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_3_genMethodDeclarations.h"
extern Il2CppType UnityAction_3_t3116_0_0_0;
extern MethodInfo Delegate_Combine_m2321_MethodInfo;
extern MethodInfo UnityAction_3_Invoke_m18317_MethodInfo;
extern Il2CppGenericMethod UnityAction_3_Invoke_m18317_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_3__ctor_m18313_GenericMethod;
extern "C" void InvokableCall_3__ctor_m18313_gshared (InvokableCall_3_t3117 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3783(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m3783_MethodInfo);
		UnityAction_3_t3116 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t493 * L_6 = Delegate_CreateDelegate_m3946(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m3946_MethodInfo);
		Delegate_t493 * L_7 = Delegate_Combine_m2321(NULL /*static, unused*/, L_2, ((UnityAction_3_t3116 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/&Delegate_Combine_m2321_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_3_t3116 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern Il2CppGenericMethod InvokableCall_3_Invoke_m18314_GenericMethod;
extern "C" void InvokableCall_3_Invoke_m18314_gshared (InvokableCall_3_t3117 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t219* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t514 * L_1 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_1, (String_t*) &_stringLiteral424, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t219* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		ObjectU5BU5D_t219* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		ObjectU5BU5D_t219* L_6 = ___args;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		int32_t L_7 = 2;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		UnityAction_3_t3116 * L_8 = (__this->___Delegate_0);
		bool L_9 = BaseInvokableCall_AllowInvoke_m3784(NULL /*static, unused*/, L_8, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m3784_MethodInfo);
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		UnityAction_3_t3116 * L_10 = (__this->___Delegate_0);
		ObjectU5BU5D_t219* L_11 = ___args;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		int32_t L_12 = 0;
		ObjectU5BU5D_t219* L_13 = ___args;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		int32_t L_14 = 1;
		ObjectU5BU5D_t219* L_15 = ___args;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		int32_t L_16 = 2;
		NullCheck(L_10);
		VirtActionInvoker3< Object_t *, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_10, ((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_11, L_12)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))), ((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), ((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_16)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))));
	}

IL_005f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_3_Find_m18315_GenericMethod;
extern "C" bool InvokableCall_3_Find_m18315_gshared (InvokableCall_3_t3117 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_3_t3116 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3945(L_0, /*hidden argument*/&Delegate_get_Target_m3945_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_3_t3116 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m3943(L_3, /*hidden argument*/&Delegate_get_Method_m3943_MethodInfo);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_3__ctor_m18316_GenericMethod;
extern "C" void UnityAction_3__ctor_m18316_gshared (UnityAction_3_t3116 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" void UnityAction_3_Invoke_m18317_gshared (UnityAction_3_t3116 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_3_Invoke_m18317((UnityAction_3_t3116 *)__this->___prev_9,___arg0, ___arg1, ___arg2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0, ___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0, ___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0, ___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_3_BeginInvoke_m18318_GenericMethod;
extern "C" Object_t * UnityAction_3_BeginInvoke_m18318_gshared (UnityAction_3_t3116 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	__d_args[2] = ___arg2;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_3_EndInvoke_m18319_GenericMethod;
extern "C" void UnityAction_3_EndInvoke_m18319_gshared (UnityAction_3_t3116 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_4_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_4_t3119_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_4_genMethodDeclarations.h"

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_4_gen.h"
extern TypeInfo UnityAction_4_t3118_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_4_genMethodDeclarations.h"
extern Il2CppType UnityAction_4_t3118_0_0_0;
extern MethodInfo UnityAction_4_Invoke_m18324_MethodInfo;
extern Il2CppGenericMethod UnityAction_4_Invoke_m18324_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_4__ctor_m18320_GenericMethod;
extern "C" void InvokableCall_4__ctor_m18320_gshared (InvokableCall_4_t3119 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3783(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m3783_MethodInfo);
		UnityAction_4_t3118 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t493 * L_6 = Delegate_CreateDelegate_m3946(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m3946_MethodInfo);
		Delegate_t493 * L_7 = Delegate_Combine_m2321(NULL /*static, unused*/, L_2, ((UnityAction_4_t3118 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/&Delegate_Combine_m2321_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_4_t3118 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern Il2CppGenericMethod InvokableCall_4_Invoke_m18321_GenericMethod;
extern "C" void InvokableCall_4_Invoke_m18321_gshared (InvokableCall_4_t3119 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t219* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t514 * L_1 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_1, (String_t*) &_stringLiteral424, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t219* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		ObjectU5BU5D_t219* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		ObjectU5BU5D_t219* L_6 = ___args;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		int32_t L_7 = 2;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		ObjectU5BU5D_t219* L_8 = ___args;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		int32_t L_9 = 3;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_8, L_9)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		UnityAction_4_t3118 * L_10 = (__this->___Delegate_0);
		bool L_11 = BaseInvokableCall_AllowInvoke_m3784(NULL /*static, unused*/, L_10, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m3784_MethodInfo);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		UnityAction_4_t3118 * L_12 = (__this->___Delegate_0);
		ObjectU5BU5D_t219* L_13 = ___args;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		int32_t L_14 = 0;
		ObjectU5BU5D_t219* L_15 = ___args;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		int32_t L_16 = 1;
		ObjectU5BU5D_t219* L_17 = ___args;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		int32_t L_18 = 2;
		ObjectU5BU5D_t219* L_19 = ___args;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		int32_t L_20 = 3;
		NullCheck(L_12);
		VirtActionInvoker4< Object_t *, Object_t *, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_12, ((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), ((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_16)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))), ((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_18)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))), ((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_20)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
	}

IL_006f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_4_Find_m18322_GenericMethod;
extern "C" bool InvokableCall_4_Find_m18322_gshared (InvokableCall_4_t3119 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_4_t3118 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3945(L_0, /*hidden argument*/&Delegate_get_Target_m3945_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_4_t3118 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m3943(L_3, /*hidden argument*/&Delegate_get_Method_m3943_MethodInfo);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_4__ctor_m18323_GenericMethod;
extern "C" void UnityAction_4__ctor_m18323_gshared (UnityAction_4_t3118 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" void UnityAction_4_Invoke_m18324_gshared (UnityAction_4_t3118 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_4_Invoke_m18324((UnityAction_4_t3118 *)__this->___prev_9,___arg0, ___arg1, ___arg2, ___arg3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_4_BeginInvoke_m18325_GenericMethod;
extern "C" Object_t * UnityAction_4_BeginInvoke_m18325_gshared (UnityAction_4_t3118 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	__d_args[2] = ___arg2;
	__d_args[3] = ___arg3;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_4_EndInvoke_m18326_GenericMethod;
extern "C" void UnityAction_4_EndInvoke_m18326_gshared (UnityAction_4_t3118 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t3120_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_3MethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen.h"
extern TypeInfo ObjectU5BU5D_t219_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t2663_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t219_0_0_0;
extern Il2CppType InvokableCall_1_t2663_0_0_0;
extern Il2CppGenericMethod InvokableCall_1__ctor_m13797_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1_Invoke_m13799_GenericMethod;


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m18327_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m18327_gshared (CachedInvokableCall_1_t3120 * __this, Object_t93 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, MethodInfo* method)
{
	static bool CachedInvokableCall_1__ctor_m18327_init;
	if (!CachedInvokableCall_1__ctor_m18327_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		CachedInvokableCall_1__ctor_m18327_init = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 1));
		Object_t93 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		(( void (*) (InvokableCall_1_t2663 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t219* L_2 = (__this->___m_Arg1_1);
		Object_t * L_3 = ___argument;
		Object_t * L_4 = L_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, ((Object_t *)L_4));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)((Object_t *)L_4);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m18328_GenericMethod;
extern "C" void CachedInvokableCall_1_Invoke_m18328_gshared (CachedInvokableCall_1_t3120 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t219* L_0 = (__this->___m_Arg1_1);
		(( void (*) (InvokableCall_1_t2663 *, ObjectU5BU5D_t219*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t821_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3.h"
extern TypeInfo Single_t110_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t2870_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3MethodDeclarations.h"
extern Il2CppType InvokableCall_1_t2870_0_0_0;
extern Il2CppGenericMethod InvokableCall_1__ctor_m15907_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1_Invoke_m15909_GenericMethod;


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m3948_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m3948_gshared (CachedInvokableCall_1_t821 * __this, Object_t93 * ___target, MethodInfo_t * ___theFunction, float ___argument, MethodInfo* method)
{
	static bool CachedInvokableCall_1__ctor_m3948_init;
	if (!CachedInvokableCall_1__ctor_m3948_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		CachedInvokableCall_1__ctor_m3948_init = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 1));
		Object_t93 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		(( void (*) (InvokableCall_1_t2870 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t219* L_2 = (__this->___m_Arg1_1);
		float L_3 = ___argument;
		float L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m18329_GenericMethod;
extern "C" void CachedInvokableCall_1_Invoke_m18329_gshared (CachedInvokableCall_1_t821 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t219* L_0 = (__this->___m_Arg1_1);
		(( void (*) (InvokableCall_1_t2870 *, ObjectU5BU5D_t219*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t822_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_7.h"
extern TypeInfo InvokableCall_1_t3121_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_7MethodDeclarations.h"
extern Il2CppType InvokableCall_1_t3121_0_0_0;
extern Il2CppGenericMethod InvokableCall_1__ctor_m18331_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1_Invoke_m18333_GenericMethod;


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m3949_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m3949_gshared (CachedInvokableCall_1_t822 * __this, Object_t93 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, MethodInfo* method)
{
	static bool CachedInvokableCall_1__ctor_m3949_init;
	if (!CachedInvokableCall_1__ctor_m3949_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		CachedInvokableCall_1__ctor_m3949_init = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 1));
		Object_t93 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		(( void (*) (InvokableCall_1_t3121 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t219* L_2 = (__this->___m_Arg1_1);
		int32_t L_3 = ___argument;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m18330_GenericMethod;
extern "C" void CachedInvokableCall_1_Invoke_m18330_gshared (CachedInvokableCall_1_t822 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t219* L_0 = (__this->___m_Arg1_1);
		(( void (*) (InvokableCall_1_t3121 *, ObjectU5BU5D_t219*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_12.h"
extern TypeInfo UnityAction_1_t3122_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_12MethodDeclarations.h"
extern Il2CppType UnityAction_1_t3122_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m3782_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m18336_MethodInfo;
struct BaseInvokableCall_t775;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t92_m21932_gshared (Object_t * __this /* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t92_m21932(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t92_m21932_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t92_m21932_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m18336_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m18331_gshared (InvokableCall_1_t3121 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3783(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m3783_MethodInfo);
		UnityAction_1_t3122 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t493 * L_6 = Delegate_CreateDelegate_m3946(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m3946_MethodInfo);
		Delegate_t493 * L_7 = Delegate_Combine_m2321(NULL /*static, unused*/, L_2, ((UnityAction_1_t3122 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/&Delegate_Combine_m2321_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t3122 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern Il2CppGenericMethod InvokableCall_1__ctor_m18332_GenericMethod;
extern "C" void InvokableCall_1__ctor_m18332_gshared (InvokableCall_1_t3121 * __this, UnityAction_1_t3122 * ___callback, MethodInfo* method)
{
	{
		BaseInvokableCall__ctor_m3782(__this, /*hidden argument*/&BaseInvokableCall__ctor_m3782_MethodInfo);
		UnityAction_1_t3122 * L_0 = (__this->___Delegate_0);
		UnityAction_1_t3122 * L_1 = ___callback;
		Delegate_t493 * L_2 = Delegate_Combine_m2321(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m2321_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t3122 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m18333_gshared (InvokableCall_1_t3121 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t219* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t514 * L_1 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_1, (String_t*) &_stringLiteral424, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t219* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t3122 * L_4 = (__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3784(NULL /*static, unused*/, L_4, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m3784_MethodInfo);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t3122 * L_6 = (__this->___Delegate_0);
		ObjectU5BU5D_t219* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6, ((*(int32_t*)((int32_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_1_Find_m18334_GenericMethod;
extern "C" bool InvokableCall_1_Find_m18334_gshared (InvokableCall_1_t3121 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t3122 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3945(L_0, /*hidden argument*/&Delegate_get_Target_m3945_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t3122 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m3943(L_3, /*hidden argument*/&Delegate_get_Method_m3943_MethodInfo);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_1__ctor_m18335_GenericMethod;
extern "C" void UnityAction_1__ctor_m18335_gshared (UnityAction_1_t3122 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m18336_gshared (UnityAction_1_t3122 * __this, int32_t ___arg0, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m18336((UnityAction_1_t3122 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___arg0, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___arg0, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m18337_GenericMethod;
extern "C" Object_t * UnityAction_1_BeginInvoke_m18337_gshared (UnityAction_1_t3122 * __this, int32_t ___arg0, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m18338_GenericMethod;
extern "C" void UnityAction_1_EndInvoke_m18338_gshared (UnityAction_1_t3122 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t823_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_2.h"
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t2869_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_2MethodDeclarations.h"
extern Il2CppType InvokableCall_1_t2869_0_0_0;
extern Il2CppGenericMethod InvokableCall_1__ctor_m15899_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1_Invoke_m15901_GenericMethod;


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.String>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.String>::Invoke(System.Object[])
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t824_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_6.h"
extern TypeInfo InvokableCall_1_t2924_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_6MethodDeclarations.h"
extern Il2CppType InvokableCall_1_t2924_0_0_0;
extern Il2CppGenericMethod InvokableCall_1__ctor_m16415_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16417_GenericMethod;


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t3123_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_4MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Events.InvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_5.h"
extern TypeInfo Byte_t517_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t2922_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_5MethodDeclarations.h"
extern Il2CppType InvokableCall_1_t2922_0_0_0;
extern Il2CppGenericMethod InvokableCall_1__ctor_m16407_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16409_GenericMethod;


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m18340_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m18340_gshared (CachedInvokableCall_1_t3123 * __this, Object_t93 * ___target, MethodInfo_t * ___theFunction, uint8_t ___argument, MethodInfo* method)
{
	static bool CachedInvokableCall_1__ctor_m18340_init;
	if (!CachedInvokableCall_1__ctor_m18340_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		CachedInvokableCall_1__ctor_m18340_init = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 1));
		Object_t93 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		(( void (*) (InvokableCall_1_t2922 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t219* L_2 = (__this->___m_Arg1_1);
		uint8_t L_3 = ___argument;
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::Invoke(System.Object[])
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m18342_GenericMethod;
extern "C" void CachedInvokableCall_1_Invoke_m18342_gshared (CachedInvokableCall_1_t3123 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t219* L_0 = (__this->___m_Arg1_1);
		(( void (*) (InvokableCall_1_t2922 *, ObjectU5BU5D_t219*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t780_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"

// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_26.h"
// System.Predicate`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Predicate_1_gen_27.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_26.h"
// System.Comparison`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Comparison_1_gen_27.h"
extern TypeInfo PersistentCall_t778_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t790_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1934_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1144_il2cpp_TypeInfo;
extern TypeInfo PersistentCallU5BU5D_t3124_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t827_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3418_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3419_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3417_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t169_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t231_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3127_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3131_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3132_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_26MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Predicate_1_gen_27MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_26MethodDeclarations.h"
extern Il2CppType List_1_t780_0_0_0;
extern Il2CppType PersistentCallU5BU5D_t3124_0_0_0;
extern Il2CppType Enumerator_t827_0_0_0;
extern Il2CppType ICollection_1_t3418_0_0_0;
extern Il2CppType IEnumerable_1_t3419_0_0_0;
extern Il2CppType IEnumerator_1_t3417_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3127_0_0_0;
extern Il2CppType Predicate_1_t3131_0_0_0;
extern Il2CppType Comparer_1_t3132_0_0_0;
extern MethodInfo List_1_get_Item_m18388_MethodInfo;
extern MethodInfo List_1_set_Item_m18389_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5195_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5008_MethodInfo;
extern MethodInfo Array_Copy_m7003_MethodInfo;
extern MethodInfo List_1_Add_m18360_MethodInfo;
extern MethodInfo List_1_Contains_m18367_MethodInfo;
extern MethodInfo List_1_IndexOf_m18372_MethodInfo;
extern MethodInfo List_1_Insert_m18375_MethodInfo;
extern MethodInfo List_1_Remove_m18377_MethodInfo;
extern MethodInfo Math_Max_m6173_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m23478_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m23479_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m23480_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m23481_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m5005_MethodInfo;
extern MethodInfo IDisposable_Dispose_m861_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m18399_MethodInfo;
extern MethodInfo Array_Clear_m6165_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m18474_MethodInfo;
extern MethodInfo Enumerator__ctor_m18395_MethodInfo;
extern MethodInfo List_1_RemoveAt_m18379_MethodInfo;
extern MethodInfo Array_Reverse_m6206_MethodInfo;
extern MethodInfo Array_Copy_m7002_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m20076_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m20076(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.Events.PersistentCall>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Events.PersistentCall>(!!0[]&,System.Int32)
#define Array_Resize_TisPersistentCall_t778_m21945(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, PersistentCallU5BU5D_t3124**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_36.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m11377_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m11377(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11377_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Events.PersistentCall>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Events.PersistentCall>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisPersistentCall_t778_m21947(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, PersistentCallU5BU5D_t3124*, PersistentCall_t778 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11377_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m20079_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m20079(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20079_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Events.PersistentCall>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Events.PersistentCall>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisPersistentCall_t778_m21949(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, PersistentCallU5BU5D_t3124*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20079_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m20186_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219* p0, int32_t p1, Comparison_1_t2545 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m20186(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219*, int32_t, Comparison_1_t2545 *, MethodInfo*))Array_Sort_TisObject_t_m20186_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Events.PersistentCall>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Events.PersistentCall>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisPersistentCall_t778_m21957(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, PersistentCallU5BU5D_t3124*, int32_t, Comparison_1_t3134 *, MethodInfo*))Array_Sort_TisObject_t_m20186_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m18388_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m18389_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisPersistentCall_t778_m21945_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m18374_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m3958_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m18360_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m18367_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m18372_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m18375_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m18377_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m18361_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m18385_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m18386_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m23478_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m23479_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m23480_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m23481_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m18376_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m18362_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m18363_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m18399_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisPersistentCall_t778_m21947_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m18370_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m18371_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m18474_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18395_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m18373_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m18379_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m18480_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisPersistentCall_t778_m21949_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisPersistentCall_t778_m21957_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_149.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3125_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_149MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3125_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Events.PersistentCall>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Events.PersistentCall>(System.Int32)
#define Array_InternalArray__get_Item_TisPersistentCall_t778_m21934(__this, p0, method) (( PersistentCall_t778 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18394_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisPersistentCall_t778_m21934_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3126_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo InvalidOperationException__ctor_m5007_MethodInfo;
extern MethodInfo Object_GetType_m2196_MethodInfo;
extern MethodInfo Type_get_FullName_m3974_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m18398_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t579_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_26MethodDeclarations.h"
extern Il2CppType IList_1_t3126_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m18428_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m829_MethodInfo;
extern MethodInfo IList_1_get_Item_m23482_MethodInfo;
extern MethodInfo ICollection_CopyTo_m4993_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m5149_MethodInfo;
extern MethodInfo ICollection_1_Contains_m23483_MethodInfo;
extern MethodInfo IList_1_IndexOf_m23484_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m18428_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m23482_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m18460_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m23483_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m23484_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3128_il2cpp_TypeInfo;

extern TypeInfo IList_t1102_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t3128_0_0_0;
extern Il2CppType PersistentCall_t778_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m23485_MethodInfo;
extern MethodInfo Collection_1_SetItem_m18459_MethodInfo;
extern MethodInfo List_1__ctor_m3957_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m18452_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m18450_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m18455_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m18446_MethodInfo;
extern MethodInfo ICollection_1_Clear_m23486_MethodInfo;
extern MethodInfo IList_1_Insert_m23487_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m23488_MethodInfo;
extern MethodInfo IList_1_set_Item_m23489_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7055_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m11686_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m11687_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m23485_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m18463_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m18464_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m18461_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m18459_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3957_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m18452_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m18462_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m18450_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m18455_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m18446_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m23486_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m23487_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m23488_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m23489_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3129_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_36MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_36.h"
extern TypeInfo DefaultComparer_t3130_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_36MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3129_0_0_0;
extern Il2CppType IEquatable_1_t4120_0_0_0;
extern Il2CppType DefaultComparer_t3130_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18470_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23490_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m21946_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18470_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23490_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m21946_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4121_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Events.PersistentCall>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Events.PersistentCall>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4120_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Events.PersistentCall>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m18465_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.Events.PersistentCall>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_26.h"
extern TypeInfo DefaultComparer_t3133_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_26MethodDeclarations.h"
extern Il2CppType IComparable_1_t3578_0_0_0;
extern Il2CppType GenericComparer_1_t2263_0_0_0;
extern Il2CppType DefaultComparer_t3133_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18481_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23491_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10503_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18481_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23491_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3577_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Events.PersistentCall>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3578_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.Events.PersistentCall>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t108_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m21955_MethodInfo;
extern MethodInfo IComparable_CompareTo_m11342_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m18477_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m21955_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t3134_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Comparison_1_gen_27MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t783_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_27.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_27.h"
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Comparison_1_gen_28.h"
extern TypeInfo BaseInvokableCall_t775_il2cpp_TypeInfo;
extern TypeInfo BaseInvokableCallU5BU5D_t3135_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3137_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3421_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3422_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3420_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3139_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t828_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3143_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_27MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_27MethodDeclarations.h"
extern Il2CppType List_1_t783_0_0_0;
extern Il2CppType BaseInvokableCallU5BU5D_t3135_0_0_0;
extern Il2CppType Enumerator_t3137_0_0_0;
extern Il2CppType ICollection_1_t3421_0_0_0;
extern Il2CppType IEnumerable_1_t3422_0_0_0;
extern Il2CppType IEnumerator_1_t3420_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3139_0_0_0;
extern Il2CppType Predicate_1_t828_0_0_0;
extern Il2CppType Comparer_1_t3143_0_0_0;
extern MethodInfo List_1_get_Item_m3963_MethodInfo;
extern MethodInfo List_1_set_Item_m18527_MethodInfo;
extern MethodInfo List_1_Add_m3962_MethodInfo;
extern MethodInfo List_1_Contains_m3966_MethodInfo;
extern MethodInfo List_1_IndexOf_m18513_MethodInfo;
extern MethodInfo List_1_Insert_m18516_MethodInfo;
extern MethodInfo List_1_Remove_m18518_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m23492_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m23493_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m23494_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m23495_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m18539_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m18613_MethodInfo;
extern MethodInfo Enumerator__ctor_m18533_MethodInfo;
extern MethodInfo List_1_RemoveAt_m18519_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.Events.BaseInvokableCall>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Events.BaseInvokableCall>(!!0[]&,System.Int32)
#define Array_Resize_TisBaseInvokableCall_t775_m21971(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, BaseInvokableCallU5BU5D_t3135**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_37.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Events.BaseInvokableCall>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Events.BaseInvokableCall>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisBaseInvokableCall_t775_m21973(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, BaseInvokableCallU5BU5D_t3135*, BaseInvokableCall_t775 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11377_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Events.BaseInvokableCall>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Events.BaseInvokableCall>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisBaseInvokableCall_t775_m21975(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, BaseInvokableCallU5BU5D_t3135*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20079_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Events.BaseInvokableCall>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Events.BaseInvokableCall>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisBaseInvokableCall_t775_m21983(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, BaseInvokableCallU5BU5D_t3135*, int32_t, Comparison_1_t3145 *, MethodInfo*))Array_Sort_TisObject_t_m20186_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m3963_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m18527_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisBaseInvokableCall_t775_m21971_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m18515_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m18512_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3962_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m3966_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m18513_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m18516_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m18518_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m18504_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m18525_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m18526_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m23492_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m23493_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m23494_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m23495_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m18517_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m18505_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m18506_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m18539_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisBaseInvokableCall_t775_m21973_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m18510_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m18511_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m18613_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18533_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m18514_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m18519_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m18619_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisBaseInvokableCall_t775_m21975_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisBaseInvokableCall_t775_m21983_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_150.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3136_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_150MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3136_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Events.BaseInvokableCall>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Events.BaseInvokableCall>(System.Int32)
#define Array_InternalArray__get_Item_TisBaseInvokableCall_t775_m21960(__this, p0, method) (( BaseInvokableCall_t775 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18532_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBaseInvokableCall_t775_m21960_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3138_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m18536_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_27MethodDeclarations.h"
extern Il2CppType IList_1_t3138_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m18568_MethodInfo;
extern MethodInfo IList_1_get_Item_m23496_MethodInfo;
extern MethodInfo ICollection_1_Contains_m23497_MethodInfo;
extern MethodInfo IList_1_IndexOf_m23498_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m18568_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m23496_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m18600_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m23497_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m23498_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_27.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3140_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t3140_0_0_0;
extern Il2CppType BaseInvokableCall_t775_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m23499_MethodInfo;
extern MethodInfo Collection_1_SetItem_m18599_MethodInfo;
extern MethodInfo List_1__ctor_m3961_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m18592_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m18590_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m18595_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m18586_MethodInfo;
extern MethodInfo ICollection_1_Clear_m23500_MethodInfo;
extern MethodInfo IList_1_Insert_m23501_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m23502_MethodInfo;
extern MethodInfo IList_1_set_Item_m23503_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m23499_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m18603_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m18604_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m18601_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m18599_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3961_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m18592_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m18602_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m18590_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m18595_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m18586_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m23500_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m23501_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m23502_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m23503_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3141_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_37MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_37.h"
extern TypeInfo DefaultComparer_t3142_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_37MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3141_0_0_0;
extern Il2CppType IEquatable_1_t4122_0_0_0;
extern Il2CppType DefaultComparer_t3142_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18610_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23504_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m21972_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18610_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23504_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m21972_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4123_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4122_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Events.BaseInvokableCall>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m18605_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_27.h"
extern TypeInfo DefaultComparer_t3144_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_27MethodDeclarations.h"
extern Il2CppType IComparable_1_t3580_0_0_0;
extern Il2CppType DefaultComparer_t3144_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18620_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23505_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18620_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23505_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3579_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Events.BaseInvokableCall>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3580_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.Events.BaseInvokableCall>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m21981_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m18616_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m21981_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t3145_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Comparison_1_gen_28MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_2_t3146_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_genMethodDeclarations.h"

// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType InvokableCall_2_t3115_0_0_0;
extern MethodInfo UnityEventBase__ctor_m3804_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m3812_MethodInfo;
extern MethodInfo InvokableCall_2__ctor_m18306_MethodInfo;


// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern Il2CppGenericMethod UnityEvent_2__ctor_m18626_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_2__ctor_m18626_gshared (UnityEvent_2_t3146 * __this, MethodInfo* method)
{
	static bool UnityEvent_2__ctor_m18626_init;
	if (!UnityEvent_2__ctor_m18626_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		UnityEvent_2__ctor_m18626_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 2));
		UnityEventBase__ctor_m3804(__this, /*hidden argument*/&UnityEventBase__ctor_m3804_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern Il2CppGenericMethod UnityEvent_2_FindMethod_Impl_m18627_GenericMethod;
extern TypeInfo* TypeU5BU5D_t97_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_2_FindMethod_Impl_m18627_gshared (UnityEvent_2_t3146 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_2_FindMethod_Impl_m18627_init;
	if (!UnityEvent_2_FindMethod_Impl_m18627_init)
	{
		TypeU5BU5D_t97_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t97_0_0_0);
		UnityEvent_2_FindMethod_Impl_m18627_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t97* L_2 = ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		TypeU5BU5D_t97* L_4 = L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1)) = (Type_t *)L_5;
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3812(NULL /*static, unused*/, L_0, L_1, L_4, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3812_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod UnityEvent_2_GetDelegate_m18628_GenericMethod;
extern "C" BaseInvokableCall_t775 * UnityEvent_2_GetDelegate_m18628_gshared (UnityEvent_2_t3146 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_2_t3115 * L_2 = (InvokableCall_2_t3115 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_2_t3115 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_3_t3147_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_genMethodDeclarations.h"

extern Il2CppType InvokableCall_3_t3117_0_0_0;
extern MethodInfo InvokableCall_3__ctor_m18313_MethodInfo;


// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern Il2CppGenericMethod UnityEvent_3__ctor_m18629_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_3__ctor_m18629_gshared (UnityEvent_3_t3147 * __this, MethodInfo* method)
{
	static bool UnityEvent_3__ctor_m18629_init;
	if (!UnityEvent_3__ctor_m18629_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		UnityEvent_3__ctor_m18629_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 3));
		UnityEventBase__ctor_m3804(__this, /*hidden argument*/&UnityEventBase__ctor_m3804_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern Il2CppGenericMethod UnityEvent_3_FindMethod_Impl_m18630_GenericMethod;
extern TypeInfo* TypeU5BU5D_t97_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_3_FindMethod_Impl_m18630_gshared (UnityEvent_3_t3147 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_3_FindMethod_Impl_m18630_init;
	if (!UnityEvent_3_FindMethod_Impl_m18630_init)
	{
		TypeU5BU5D_t97_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t97_0_0_0);
		UnityEvent_3_FindMethod_Impl_m18630_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t97* L_2 = ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 3));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		TypeU5BU5D_t97* L_4 = L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1)) = (Type_t *)L_5;
		TypeU5BU5D_t97* L_6 = L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 2)) = (Type_t *)L_7;
		MethodInfo_t * L_8 = UnityEventBase_GetValidMethodInfo_m3812(NULL /*static, unused*/, L_0, L_1, L_6, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3812_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod UnityEvent_3_GetDelegate_m18631_GenericMethod;
extern "C" BaseInvokableCall_t775 * UnityEvent_3_GetDelegate_m18631_gshared (UnityEvent_3_t3147 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_3_t3117 * L_2 = (InvokableCall_3_t3117 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_3_t3117 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_4_t3148_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_genMethodDeclarations.h"

extern Il2CppType InvokableCall_4_t3119_0_0_0;
extern MethodInfo InvokableCall_4__ctor_m18320_MethodInfo;


// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern Il2CppGenericMethod UnityEvent_4__ctor_m18632_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_4__ctor_m18632_gshared (UnityEvent_4_t3148 * __this, MethodInfo* method)
{
	static bool UnityEvent_4__ctor_m18632_init;
	if (!UnityEvent_4__ctor_m18632_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		UnityEvent_4__ctor_m18632_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 4));
		UnityEventBase__ctor_m3804(__this, /*hidden argument*/&UnityEventBase__ctor_m3804_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern Il2CppGenericMethod UnityEvent_4_FindMethod_Impl_m18633_GenericMethod;
extern TypeInfo* TypeU5BU5D_t97_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_4_FindMethod_Impl_m18633_gshared (UnityEvent_4_t3148 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_4_FindMethod_Impl_m18633_init;
	if (!UnityEvent_4_FindMethod_Impl_m18633_init)
	{
		TypeU5BU5D_t97_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t97_0_0_0);
		UnityEvent_4_FindMethod_Impl_m18633_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t97* L_2 = ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 4));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		TypeU5BU5D_t97* L_4 = L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1)) = (Type_t *)L_5;
		TypeU5BU5D_t97* L_6 = L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 2)) = (Type_t *)L_7;
		TypeU5BU5D_t97* L_8 = L_6;
		Type_t * L_9 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_8, 3)) = (Type_t *)L_9;
		MethodInfo_t * L_10 = UnityEventBase_GetValidMethodInfo_m3812(NULL /*static, unused*/, L_0, L_1, L_8, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3812_MethodInfo);
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod UnityEvent_4_GetDelegate_m18634_GenericMethod;
extern "C" BaseInvokableCall_t775 * UnityEvent_4_GetDelegate_m18634_gshared (UnityEvent_4_t3148 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_4_t3119 * L_2 = (InvokableCall_4_t3119 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (InvokableCall_4_t3119 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t3149_il2cpp_TypeInfo;
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_4MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Func_2__ctor_m18635_GenericMethod;
extern "C" void Func_2__ctor_m18635_gshared (Func_2_t3149 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern Il2CppGenericMethod Func_2_Invoke_m18636_GenericMethod;
extern "C" Object_t * Func_2_Invoke_m18636_gshared (Func_2_t3149 * __this, Object_t * ___arg1, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m18636((Func_2_t3149 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Func_2_BeginInvoke_m18637_GenericMethod;
extern "C" Object_t * Func_2_BeginInvoke_m18637_gshared (Func_2_t3149 * __this, Object_t * ___arg1, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Func_2_EndInvoke_m18638_GenericMethod;
extern "C" Object_t * Func_2_EndInvoke_m18638_gshared (Func_2_t3149 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t1009_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"

// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_25.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_48.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_12.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_28.h"
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_39.h"
extern TypeInfo IEqualityComparer_1_t2463_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t1464_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3166_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3423_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3164_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t3465_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3150_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3170_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3168_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3172_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3021_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t102_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2313_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t104_il2cpp_TypeInfo;
extern TypeInfo BooleanU5BU5D_t184_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t960_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3173_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t4124_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_25MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_48MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_12MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_28MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_39MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType Dictionary_2_t1009_0_0_0;
extern Il2CppType IEqualityComparer_1_t2463_0_0_0;
extern Il2CppType ValueCollection_t3166_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3423_0_0_0;
extern Il2CppType KeyValuePair_2_t3164_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t3465_0_0_0;
extern Il2CppType Transform_1_t3150_0_0_0;
extern Il2CppType Transform_1_t3170_0_0_0;
extern Il2CppType Enumerator_t3168_0_0_0;
extern Il2CppType ShimEnumerator_t3172_0_0_0;
extern Il2CppType EqualityComparer_1_t3021_0_0_0;
extern Il2CppType Int32U5BU5D_t102_0_0_0;
extern Il2CppType LinkU5BU5D_t2313_0_0_0;
extern Il2CppType StringU5BU5D_t104_0_0_0;
extern Il2CppType BooleanU5BU5D_t184_0_0_0;
extern Il2CppType EqualityComparer_1_t3173_0_0_0;
extern Il2CppType IEqualityComparer_1_t4124_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t90_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m18699_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m18678_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m18680_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m23410_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m23411_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m7714_MethodInfo;
extern MethodInfo ValueCollection__ctor_m18805_MethodInfo;
extern MethodInfo Dictionary_2_Add_m5059_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m18707_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m18721_MethodInfo;
extern MethodInfo Transform_1__ctor_m18840_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m18688_MethodInfo;
extern MethodInfo Transform_1__ctor_m18844_MethodInfo;
extern MethodInfo Enumerator__ctor_m18824_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m18852_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m18676_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m18794_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m7893_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m23506_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m5017_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m5030_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m5029_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m5018_MethodInfo;
extern MethodInfo Type_ToString_m7092_MethodInfo;
extern MethodInfo String_Concat_m385_MethodInfo;
extern MethodInfo ArgumentException__ctor_m5006_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m18709_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23507_MethodInfo;
struct Dictionary_2_t1009;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t967_TisDictionaryEntry_t967_m22017 (Dictionary_2_t1009 * __this, DictionaryEntryU5BU5D_t3465* p0, int32_t p1, Transform_1_t3150 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t1009;
struct Dictionary_2_t3152;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_50.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3164_m22020_gshared (Dictionary_2_t3152 * __this, Array_t * p0, int32_t p1, Transform_1_t3171 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3164_m22020(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3152 *, Array_t *, int32_t, Transform_1_t3171 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3164_m22020_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3164_m22019(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1009 *, Array_t *, int32_t, Transform_1_t3170 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3164_m22020_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t1009;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3164_TisKeyValuePair_2_t3164_m22022 (Dictionary_2_t1009 * __this, KeyValuePair_2U5BU5D_t3423* p0, int32_t p1, Transform_1_t3170 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m18699_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m18713_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m18678_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m18715_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m18680_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m23410_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m23411_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m18694_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m18805_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m18682_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m5059_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m18707_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m18795_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m18797_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m18717_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m18692_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m18686_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m18721_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18840_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t967_TisDictionaryEntry_t967_m22017_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m18688_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18844_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3164_m22019_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18824_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m18852_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m17388_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m18684_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m18676_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m18794_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3164_TisKeyValuePair_2_t3164_m22022_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m18862_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m23506_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m18709_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23507_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::make_pair(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t3152_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_23.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_45.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_46.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_11.h"
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_38.h"
extern TypeInfo IEqualityComparer_1_t2722_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3155_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3425_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3153_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3151_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3159_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3157_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3160_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2531_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t1019_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3161_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t4125_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_23MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_45MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_46MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_11MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_38MethodDeclarations.h"
extern Il2CppType Dictionary_2_t3152_0_0_0;
extern Il2CppType IEqualityComparer_1_t2722_0_0_0;
extern Il2CppType ValueCollection_t3155_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3425_0_0_0;
extern Il2CppType KeyValuePair_2_t3153_0_0_0;
extern Il2CppType Transform_1_t3151_0_0_0;
extern Il2CppType Transform_1_t3159_0_0_0;
extern Il2CppType Enumerator_t3157_0_0_0;
extern Il2CppType ShimEnumerator_t3160_0_0_0;
extern Il2CppType EqualityComparer_1_t2531_0_0_0;
extern Il2CppType ByteU5BU5D_t1019_0_0_0;
extern Il2CppType EqualityComparer_1_t3161_0_0_0;
extern Il2CppType IEqualityComparer_1_t4125_0_0_0;
extern Il2CppType Byte_t517_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m18700_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m18679_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m18681_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m23226_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m23207_MethodInfo;
extern MethodInfo ValueCollection__ctor_m18734_MethodInfo;
extern MethodInfo Dictionary_2_Add_m18696_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m18708_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m18722_MethodInfo;
extern MethodInfo Transform_1__ctor_m18769_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m18689_MethodInfo;
extern MethodInfo Transform_1__ctor_m18773_MethodInfo;
extern MethodInfo Enumerator__ctor_m18753_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m18777_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m18677_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m18723_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m23508_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m18710_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23509_MethodInfo;
struct Dictionary_2_t3152;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t967_TisDictionaryEntry_t967_m21999 (Dictionary_2_t3152 * __this, DictionaryEntryU5BU5D_t3465* p0, int32_t p1, Transform_1_t3151 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t3152;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3153_m22001_gshared (Dictionary_2_t3152 * __this, Array_t * p0, int32_t p1, Transform_1_t3159 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3153_m22001(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3152 *, Array_t *, int32_t, Transform_1_t3159 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3153_m22001_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3152;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3153_TisKeyValuePair_2_t3153_m22002 (Dictionary_2_t3152 * __this, KeyValuePair_2U5BU5D_t3425* p0, int32_t p1, Transform_1_t3159 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m18700_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m18714_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m18679_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m18716_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m18681_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m23226_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m23207_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m18695_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m18734_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m18683_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m18696_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m18708_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m18724_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m18726_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m18718_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m18693_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m18687_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m18722_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18769_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t967_TisDictionaryEntry_t967_m21999_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m18689_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18773_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3153_m22001_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18753_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m18777_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m12492_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m18685_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m18677_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m18723_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3153_TisKeyValuePair_2_t3153_m22002_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m18787_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m23508_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m18710_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23509_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern Il2CppGenericMethod Dictionary_2__ctor_m18640_GenericMethod;
extern "C" void Dictionary_2__ctor_m18640_gshared (Dictionary_2_t3152 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		(( void (*) (Dictionary_2_t3152 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m18641_GenericMethod;
extern "C" void Dictionary_2__ctor_m18641_gshared (Dictionary_2_t3152 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		Object_t* L_0 = ___comparer;
		(( void (*) (Dictionary_2_t3152 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m18643_GenericMethod;
extern "C" void Dictionary_2__ctor_m18643_gshared (Dictionary_2_t3152 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		int32_t L_0 = ___capacity;
		(( void (*) (Dictionary_2_t3152 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m18645_GenericMethod;
extern "C" void Dictionary_2__ctor_m18645_gshared (Dictionary_2_t3152 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		SerializationInfo_t766 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m18647_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18647_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), __this, ((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t3152 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		uint8_t L_5 = (uint8_t)VirtFuncInvoker1< uint8_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_4);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m18649_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18649_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3152 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = ___value;
		uint8_t L_3 = (( uint8_t (*) (Dictionary_2_t3152 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m18651_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18651_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3152 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = ___value;
		uint8_t L_3 = (( uint8_t (*) (Dictionary_2_t3152 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m18653_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18653_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t820 * L_1 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_1, (String_t*) &_stringLiteral427, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), __this, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18655_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18655_gshared (Dictionary_2_t3152 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18657_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18657_gshared (Dictionary_2_t3152 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18659_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18659_gshared (Dictionary_2_t3152 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18661_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18661_gshared (Dictionary_2_t3152 * __this, KeyValuePair_2_t3153  ___keyValuePair, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		uint8_t L_1 = (( uint8_t (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18663_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18663_gshared (Dictionary_2_t3152 * __this, KeyValuePair_2_t3153  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t3153  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t3152 *, KeyValuePair_2_t3153 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18665_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18665_gshared (Dictionary_2_t3152 * __this, KeyValuePair_2U5BU5D_t3425* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3425* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t3152 *, KeyValuePair_2U5BU5D_t3425*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18667_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18667_gshared (Dictionary_2_t3152 * __this, KeyValuePair_2_t3153  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t3153  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t3152 *, KeyValuePair_2_t3153 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), __this, L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m18669_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t3465_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18669_gshared (Dictionary_2_t3152 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m18669_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m18669_init)
	{
		DictionaryEntryU5BU5D_t3465_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t3465_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m18669_init = true;
	}
	KeyValuePair_2U5BU5D_t3425* V_0 = {0};
	DictionaryEntryU5BU5D_t3465* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t3465* G_B5_1 = {0};
	Dictionary_2_t3152 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t3465* G_B4_1 = {0};
	Dictionary_2_t3152 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((KeyValuePair_2U5BU5D_t3425*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		KeyValuePair_2U5BU5D_t3425* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t3425* L_2 = V_0;
		int32_t L_3 = ___index;
		(( void (*) (Dictionary_2_t3152 *, KeyValuePair_2U5BU5D_t3425*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		(( void (*) (Dictionary_2_t3152 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		Array_t * L_6 = ___array;
		V_1 = ((DictionaryEntryU5BU5D_t3465*)IsInst(L_6, DictionaryEntryU5BU5D_t3465_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t3465* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t3465* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t3151 * L_10 = ((Dictionary_2_t3152_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__am$cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t3152 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t3152 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17) };
		Transform_1_t3151 * L_12 = (Transform_1_t3151 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		(( void (*) (Transform_1_t3151 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(L_12, NULL, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		((Dictionary_2_t3152_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t3152 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t3151 * L_13 = ((Dictionary_2_t3152_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__am$cacheB_15;
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t3152 *, DictionaryEntryU5BU5D_t3465*, int32_t, Transform_1_t3151 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t3159 * L_17 = (Transform_1_t3159 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t3159 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_17, NULL, L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		(( void (*) (Dictionary_2_t3152 *, Array_t *, int32_t, Transform_1_t3159 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(__this, L_14, L_15, L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18671_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18671_gshared (Dictionary_2_t3152 * __this, MethodInfo* method)
{
	{
		Enumerator_t3157  L_0 = {0};
		(( void (*) (Enumerator_t3157 *, Dictionary_2_t3152 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t3157  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18673_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18673_gshared (Dictionary_2_t3152 * __this, MethodInfo* method)
{
	{
		Enumerator_t3157  L_0 = {0};
		(( void (*) (Enumerator_t3157 *, Dictionary_2_t3152 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t3157  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18675_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18675_gshared (Dictionary_2_t3152 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t3160 * L_0 = (ShimEnumerator_t3160 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		(( void (*) (ShimEnumerator_t3160 *, Dictionary_2_t3152 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18677_gshared (Dictionary_2_t3152 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m18679_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t820 * L_2 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_2, (String_t*) &_stringLiteral427, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t102* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t102* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t2313* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t219* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		ByteU5BU5D_t1019* L_20 = (__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		LinkU5BU5D_t2313* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t1464 * L_27 = (KeyNotFoundException_t1464 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyNotFoundException_t1464_il2cpp_TypeInfo));
		KeyNotFoundException__ctor_m7714(L_27, /*hidden argument*/&KeyNotFoundException__ctor_m7714_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18681_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t820 * L_2 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_2, (String_t*) &_stringLiteral427, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t102* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t102* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t2313* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		ObjectU5BU5D_t219* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = L_22;
		LinkU5BU5D_t2313* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (__this->___count_10);
		int32_t L_29 = ((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = L_29;
		__this->___count_10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (__this->___threshold_11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (Dictionary_2_t3152 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		int32_t L_32 = V_0;
		Int32U5BU5D_t102* L_33 = (__this->___table_4);
		NullCheck(L_33);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (__this->___emptySlot_9);
		V_2 = L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (__this->___touchedSlots_8);
		int32_t L_37 = L_36;
		V_4 = L_37;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t2313* L_39 = (__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		__this->___emptySlot_9 = L_41;
	}

IL_0101:
	{
		LinkU5BU5D_t2313* L_42 = (__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t102* L_44 = (__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t102* L_47 = (__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		LinkU5BU5D_t2313* L_50 = (__this->___linkSlots_5);
		int32_t L_51 = V_2;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = V_0;
		((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_50, L_51))->___HashCode_0 = L_52;
		ObjectU5BU5D_t219* L_53 = (__this->___keySlots_6);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___key;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t2313* L_57 = (__this->___linkSlots_5);
		int32_t L_58 = V_3;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		LinkU5BU5D_t2313* L_59 = (__this->___linkSlots_5);
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_59, L_60))->___Next_1);
		((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_57, L_58))->___Next_1 = L_61;
		LinkU5BU5D_t2313* L_62 = (__this->___linkSlots_5);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		Int32U5BU5D_t102* L_64 = (__this->___table_4);
		int32_t L_65 = V_1;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		int32_t L_66 = L_65;
		((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_62, L_63))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		Int32U5BU5D_t102* L_67 = (__this->___table_4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		ByteU5BU5D_t1019* L_70 = (__this->___valueSlots_7);
		int32_t L_71 = V_2;
		uint8_t L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_70, L_71)) = (uint8_t)L_72;
		int32_t L_73 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t2531_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m18683_gshared (Dictionary_2_t3152 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m18683_init;
	if (!Dictionary_2_Init_m18683_init)
	{
		EqualityComparer_1_t2531_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2531_0_0_0);
		Dictionary_2_Init_m18683_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t3152 * G_B4_0 = {0};
	Dictionary_2_t3152 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t3152 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1144 * L_1 = (ArgumentOutOfRangeException_t1144 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1144_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5008(L_1, (String_t*) &_stringLiteral1429, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5008_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t3152 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t3152 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t3152 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2531_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2531 * L_5 = (( EqualityComparer_1_t2531 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t3152 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = ((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = ((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		(( void (*) (Dictionary_2_t3152 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(__this, L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t102_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2313_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m18685_gshared (Dictionary_2_t3152 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m18685_init;
	if (!Dictionary_2_InitArrays_m18685_init)
	{
		Int32U5BU5D_t102_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t102_0_0_0);
		LinkU5BU5D_t2313_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2313_0_0_0);
		Dictionary_2_InitArrays_m18685_init = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t102*)SZArrayNew(Int32U5BU5D_t102_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2313*)SZArrayNew(LinkU5BU5D_t2313_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t219*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ByteU5BU5D_t1019*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t102* L_4 = (__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t102* L_6 = (__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18687_gshared (Dictionary_2_t3152 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t820 * L_1 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_1, (String_t*) &_stringLiteral429, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t1144 * L_3 = (ArgumentOutOfRangeException_t1144 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1144_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5008(L_3, (String_t*) &_stringLiteral431, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5008_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5002(L_5, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t514 * L_7 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_7, (String_t*) &_stringLiteral1430, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck(L_8);
		int32_t L_9 = Array_get_Length_m5002(L_8, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		int32_t L_10 = ___index;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), __this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t514 * L_12 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_12, (String_t*) &_stringLiteral1431, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3153  Dictionary_2_make_pair_m18689_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		uint8_t L_1 = ___value;
		KeyValuePair_2_t3153  L_2 = {0};
		(( void (*) (KeyValuePair_2_t3153 *, Object_t *, uint8_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(&L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m18691_GenericMethod;
extern "C" uint8_t Dictionary_2_pick_value_m18691_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18693_gshared (Dictionary_2_t3152 * __this, KeyValuePair_2U5BU5D_t3425* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3425* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t3152 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, (Array_t *)(Array_t *)L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		KeyValuePair_2U5BU5D_t3425* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t3159 * L_5 = (Transform_1_t3159 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t3159 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_5, NULL, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		(( void (*) (Dictionary_2_t3152 *, KeyValuePair_2U5BU5D_t3425*, int32_t, Transform_1_t3159 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_2, L_3, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern TypeInfo* Int32U5BU5D_t102_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2313_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m18695_gshared (Dictionary_2_t3152 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m18695_init;
	if (!Dictionary_2_Resize_m18695_init)
	{
		Int32U5BU5D_t102_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t102_0_0_0);
		LinkU5BU5D_t2313_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2313_0_0_0);
		Dictionary_2_Resize_m18695_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t102* V_1 = {0};
	LinkU5BU5D_t2313* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t219* V_7 = {0};
	ByteU5BU5D_t1019* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t102* L_0 = (__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t960_il2cpp_TypeInfo));
		int32_t L_1 = Hashtable_ToPrime_m7893(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/&Hashtable_ToPrime_m7893_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((Int32U5BU5D_t102*)SZArrayNew(Int32U5BU5D_t102_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = ((LinkU5BU5D_t2313*)SZArrayNew(LinkU5BU5D_t2313_il2cpp_TypeInfo_var, L_3));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t102* L_4 = (__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t2313* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t219* L_10 = (__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck(L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = ((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = L_14;
		((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t2313* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t102* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t102* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t2313* L_26 = (__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t102* L_32 = (__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t102* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t2313* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = ((ObjectU5BU5D_t219*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), L_35));
		int32_t L_36 = V_0;
		V_8 = ((ByteU5BU5D_t1019*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_36));
		ObjectU5BU5D_t219* L_37 = (__this->___keySlots_6);
		ObjectU5BU5D_t219* L_38 = V_7;
		int32_t L_39 = (__this->___touchedSlots_8);
		Array_Copy_m7003(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, 0, (Array_t *)(Array_t *)L_38, 0, L_39, /*hidden argument*/&Array_Copy_m7003_MethodInfo);
		ByteU5BU5D_t1019* L_40 = (__this->___valueSlots_7);
		ByteU5BU5D_t1019* L_41 = V_8;
		int32_t L_42 = (__this->___touchedSlots_8);
		Array_Copy_m7003(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, 0, (Array_t *)(Array_t *)L_41, 0, L_42, /*hidden argument*/&Array_Copy_m7003_MethodInfo);
		ObjectU5BU5D_t219* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ByteU5BU5D_t1019* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18696_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t820 * L_2 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_2, (String_t*) &_stringLiteral427, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t102* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t102* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t2313* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (__this->___hcp_12);
		ObjectU5BU5D_t219* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_15, (*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t514 * L_21 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_21, (String_t*) &_stringLiteral1433, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		LinkU5BU5D_t2313* L_22 = (__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (__this->___count_10);
		int32_t L_27 = ((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = L_27;
		__this->___count_10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (__this->___threshold_11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (Dictionary_2_t3152 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		int32_t L_30 = V_0;
		Int32U5BU5D_t102* L_31 = (__this->___table_4);
		NullCheck(L_31);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (__this->___emptySlot_9);
		V_2 = L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (__this->___touchedSlots_8);
		int32_t L_35 = L_34;
		V_3 = L_35;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t2313* L_37 = (__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		__this->___emptySlot_9 = L_39;
	}

IL_00f9:
	{
		LinkU5BU5D_t2313* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = V_0;
		((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_40, L_41))->___HashCode_0 = L_42;
		LinkU5BU5D_t2313* L_43 = (__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t102* L_45 = (__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t102* L_48 = (__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		ObjectU5BU5D_t219* L_51 = (__this->___keySlots_6);
		int32_t L_52 = V_2;
		Object_t * L_53 = ___key;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, L_52)) = (Object_t *)L_53;
		ByteU5BU5D_t1019* L_54 = (__this->___valueSlots_7);
		int32_t L_55 = V_2;
		uint8_t L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_55)) = (uint8_t)L_56;
		int32_t L_57 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern Il2CppGenericMethod Dictionary_2_Clear_m18698_GenericMethod;
extern "C" void Dictionary_2_Clear_m18698_gshared (Dictionary_2_t3152 * __this, MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t102* L_0 = (__this->___table_4);
		Int32U5BU5D_t102* L_1 = (__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m6165(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m6165_MethodInfo);
		ObjectU5BU5D_t219* L_2 = (__this->___keySlots_6);
		ObjectU5BU5D_t219* L_3 = (__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m6165(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/&Array_Clear_m6165_MethodInfo);
		ByteU5BU5D_t1019* L_4 = (__this->___valueSlots_7);
		ByteU5BU5D_t1019* L_5 = (__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m6165(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/&Array_Clear_m6165_MethodInfo);
		LinkU5BU5D_t2313* L_6 = (__this->___linkSlots_5);
		LinkU5BU5D_t2313* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m6165(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, 0, (((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/&Array_Clear_m6165_MethodInfo);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18700_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t820 * L_2 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_2, (String_t*) &_stringLiteral427, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t102* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t102* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t2313* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t219* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t2313* L_20 = (__this->___linkSlots_5);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_20, L_21))->___Next_1);
		V_1 = L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m18702_GenericMethod;
extern TypeInfo* EqualityComparer_1_t3161_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m18702_gshared (Dictionary_2_t3152 * __this, uint8_t ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m18702_init;
	if (!Dictionary_2_ContainsValue_m18702_init)
	{
		EqualityComparer_1_t3161_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3161_0_0_0);
		Dictionary_2_ContainsValue_m18702_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3161_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3161 * L_0 = (( EqualityComparer_1_t3161 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t102* L_1 = (__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		ByteU5BU5D_t1019* L_5 = (__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		uint8_t L_8 = ___value;
		NullCheck(L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_4, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7)), L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t2313* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t102* L_16 = (__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m18704_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m18704_gshared (Dictionary_2_t3152 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t3425* V_0 = {0};
	{
		SerializationInfo_t766 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t820 * L_1 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_1, (String_t*) &_stringLiteral438, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t766 * L_2 = ___info;
		int32_t L_3 = (__this->___generation_14);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5017(L_2, (String_t*) &_stringLiteral440, L_3, /*hidden argument*/&SerializationInfo_AddValue_m5017_MethodInfo);
		SerializationInfo_t766 * L_4 = ___info;
		Object_t* L_5 = (__this->___hcp_12);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5030(L_4, (String_t*) &_stringLiteral442, L_5, /*hidden argument*/&SerializationInfo_AddValue_m5030_MethodInfo);
		V_0 = (KeyValuePair_2U5BU5D_t3425*)NULL;
		int32_t L_6 = (__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t3425*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42), L_7));
		KeyValuePair_2U5BU5D_t3425* L_8 = V_0;
		(( void (*) (Dictionary_2_t3152 *, KeyValuePair_2U5BU5D_t3425*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_8, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_004f:
	{
		SerializationInfo_t766 * L_9 = ___info;
		Int32U5BU5D_t102* L_10 = (__this->___table_4);
		NullCheck(L_10);
		NullCheck(L_9);
		SerializationInfo_AddValue_m5017(L_9, (String_t*) &_stringLiteral1434, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m5017_MethodInfo);
		SerializationInfo_t766 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t3425* L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m5030(L_11, (String_t*) &_stringLiteral1435, (Object_t *)(Object_t *)L_12, /*hidden argument*/&SerializationInfo_AddValue_m5030_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m18706_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m18706_gshared (Dictionary_2_t3152 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t3425* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t766 * L_0 = (__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t766 * L_1 = (__this->___serialization_info_13);
		NullCheck(L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m5029(L_1, (String_t*) &_stringLiteral440, /*hidden argument*/&SerializationInfo_GetInt32_m5029_MethodInfo);
		__this->___generation_14 = L_2;
		SerializationInfo_t766 * L_3 = (__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m5018(L_3, (String_t*) &_stringLiteral442, L_4, /*hidden argument*/&SerializationInfo_GetValue_m5018_MethodInfo);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)));
		SerializationInfo_t766 * L_6 = (__this->___serialization_info_13);
		NullCheck(L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m5029(L_6, (String_t*) &_stringLiteral1434, /*hidden argument*/&SerializationInfo_GetInt32_m5029_MethodInfo);
		V_0 = L_7;
		SerializationInfo_t766 * L_8 = (__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m5018(L_8, (String_t*) &_stringLiteral1435, L_9, /*hidden argument*/&SerializationInfo_GetValue_m5018_MethodInfo);
		V_1 = ((KeyValuePair_2U5BU5D_t3425*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		(( void (*) (Dictionary_2_t3152 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(__this, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t3425* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t3425* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(((KeyValuePair_2_t3153 *)(KeyValuePair_2_t3153 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		KeyValuePair_2U5BU5D_t3425* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		uint8_t L_19 = (( uint8_t (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(((KeyValuePair_2_t3153 *)(KeyValuePair_2_t3153 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t3425* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t766 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18708_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	uint8_t V_5 = 0x0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t820 * L_2 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_2, (String_t*) &_stringLiteral427, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t102* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t102* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		LinkU5BU5D_t2313* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		ObjectU5BU5D_t219* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = L_22;
		LinkU5BU5D_t2313* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t102* L_30 = (__this->___table_4);
		int32_t L_31 = V_1;
		LinkU5BU5D_t2313* L_32 = (__this->___linkSlots_5);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_32, L_33))->___Next_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t2313* L_35 = (__this->___linkSlots_5);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		LinkU5BU5D_t2313* L_37 = (__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_35, L_36))->___Next_1 = L_39;
	}

IL_00e9:
	{
		LinkU5BU5D_t2313* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (__this->___emptySlot_9);
		((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_40, L_41))->___Next_1 = L_42;
		int32_t L_43 = V_2;
		__this->___emptySlot_9 = L_43;
		LinkU5BU5D_t2313* L_44 = (__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_44, L_45))->___HashCode_0 = 0;
		ObjectU5BU5D_t219* L_46 = (__this->___keySlots_6);
		int32_t L_47 = V_2;
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_4));
		Object_t * L_48 = V_4;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, L_47)) = (Object_t *)L_48;
		ByteU5BU5D_t1019* L_49 = (__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (InitializedTypeInfo(&Byte_t517_il2cpp_TypeInfo), (&V_5));
		uint8_t L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_49, L_50)) = (uint8_t)L_51;
		int32_t L_52 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18710_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, uint8_t* ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t820 * L_2 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_2, (String_t*) &_stringLiteral427, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t102* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t102* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t2313* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t219* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		uint8_t* L_20 = ___value;
		ByteU5BU5D_t1019* L_21 = (__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t2313* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		uint8_t* L_28 = ___value;
		Initobj (InitializedTypeInfo(&Byte_t517_il2cpp_TypeInfo), (&V_2));
		uint8_t L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern Il2CppGenericMethod Dictionary_2_get_Values_m18712_GenericMethod;
extern "C" ValueCollection_t3155 * Dictionary_2_get_Values_m18712_gshared (Dictionary_2_t3152 * __this, MethodInfo* method)
{
	{
		ValueCollection_t3155 * L_0 = (ValueCollection_t3155 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		(( void (*) (ValueCollection_t3155 *, Dictionary_2_t3152 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18714_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t820 * L_1 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_1, (String_t*) &_stringLiteral427, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m7092_MethodInfo, L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Concat_m385(NULL /*static, unused*/, (String_t*) &_stringLiteral1436, L_4, /*hidden argument*/&String_Concat_m385_MethodInfo);
		ArgumentException_t514 * L_6 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m5006(L_6, L_5, (String_t*) &_stringLiteral427, /*hidden argument*/&ArgumentException__ctor_m5006_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m18716_gshared (Dictionary_2_t3152 * __this, Object_t * ___value, MethodInfo* method)
{
	uint8_t V_0 = 0x0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m7055_MethodInfo, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Byte_t517_il2cpp_TypeInfo), (&V_0));
		uint8_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m7092_MethodInfo, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = String_Concat_m385(NULL /*static, unused*/, (String_t*) &_stringLiteral1436, L_6, /*hidden argument*/&String_Concat_m385_MethodInfo);
		ArgumentException_t514 * L_8 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m5006(L_8, L_7, (String_t*) &_stringLiteral633, /*hidden argument*/&ArgumentException__ctor_m5006_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(uint8_t*)((uint8_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t3161_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18718_gshared (Dictionary_2_t3152 * __this, KeyValuePair_2_t3153  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m18718_init;
	if (!Dictionary_2_ContainsKeyValuePair_m18718_init)
	{
		EqualityComparer_1_t3161_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3161_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m18718_init = true;
	}
	uint8_t V_0 = 0x0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, uint8_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50), __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3161_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3161 * L_2 = (( EqualityComparer_1_t3161 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		uint8_t L_3 = (( uint8_t (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		uint8_t L_4 = V_0;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m18720_GenericMethod;
extern "C" Enumerator_t3157  Dictionary_2_GetEnumerator_m18720_gshared (Dictionary_2_t3152 * __this, MethodInfo* method)
{
	{
		Enumerator_t3157  L_0 = {0};
		(( void (*) (Enumerator_t3157 *, Dictionary_2_t3152 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t967  Dictionary_2_U3CCopyToU3Em__0_m18722_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		uint8_t L_2 = ___value;
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		DictionaryEntry_t967  L_5 = {0};
		DictionaryEntry__ctor_m4998(&L_5, ((Object_t *)L_1), L_4, /*hidden argument*/&DictionaryEntry__ctor_m4998_MethodInfo);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4126_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4127_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3426_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_ToString_m442_MethodInfo;
extern MethodInfo String_Concat_m386_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m18725_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m18727_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m18723_gshared (KeyValuePair_2_t3153 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t3153 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t3153 *, uint8_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m18724_gshared (KeyValuePair_2_t3153 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m18725_gshared (KeyValuePair_2_t3153 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::get_Value()
extern "C" uint8_t KeyValuePair_2_get_Value_m18726_gshared (KeyValuePair_2_t3153 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m18727_gshared (KeyValuePair_2_t3153 * __this, uint8_t ___value, MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m18728_GenericMethod;
extern TypeInfo* StringU5BU5D_t104_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m18728_gshared (KeyValuePair_2_t3153 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m18728_init;
	if (!KeyValuePair_2_ToString_m18728_init)
	{
		StringU5BU5D_t104_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t104_0_0_0);
		KeyValuePair_2_ToString_m18728_init = true;
	}
	Object_t * V_0 = {0};
	uint8_t V_1 = 0x0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t104* G_B2_1 = {0};
	StringU5BU5D_t104* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t104* G_B1_1 = {0};
	StringU5BU5D_t104* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t104* G_B3_2 = {0};
	StringU5BU5D_t104* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t104* G_B5_1 = {0};
	StringU5BU5D_t104* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t104* G_B4_1 = {0};
	StringU5BU5D_t104* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t104* G_B6_2 = {0};
	StringU5BU5D_t104* G_B6_3 = {0};
	{
		StringU5BU5D_t104* L_0 = ((StringU5BU5D_t104*)SZArrayNew(StringU5BU5D_t104_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral407);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral407;
		StringU5BU5D_t104* L_1 = L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = L_4;
		NullCheck((*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m442_MethodInfo, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t104* L_7 = G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral416);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral416;
		StringU5BU5D_t104* L_8 = L_7;
		uint8_t L_9 = (( uint8_t (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_10);
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_11)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		uint8_t L_12 = (( uint8_t (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_12;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m442_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t104* L_15 = G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral408);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral408;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_16 = String_Concat_m386(NULL /*static, unused*/, L_15, /*hidden argument*/&String_Concat_m386_MethodInfo);
		return L_16;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_151.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3154_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_151MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3154_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Int32)
extern "C" KeyValuePair_2_t3153  Array_InternalArray__get_Item_TisKeyValuePair_2_t3153_m21986_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3153_m21986(__this, p0, method) (( KeyValuePair_2_t3153  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3153_m21986_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18733_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3153_m21986_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18729_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m18729_gshared (InternalEnumerator_1_t3154 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18730_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18730_gshared (InternalEnumerator_1_t3154 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3153  L_0 = (( KeyValuePair_2_t3153  (*) (InternalEnumerator_1_t3154 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3153  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18731_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m18731_gshared (InternalEnumerator_1_t3154 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18732_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m18732_gshared (InternalEnumerator_1_t3154 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
extern "C" KeyValuePair_2_t3153  InternalEnumerator_1_get_Current_m18733_gshared (InternalEnumerator_1_t3154 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3153  L_8 = (( KeyValuePair_2_t3153  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4128_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t4129_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::Remove(TKey)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_24.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_44.h"
extern TypeInfo Enumerator_t3156_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3158_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_44MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_24MethodDeclarations.h"
extern Il2CppType Enumerator_t3156_0_0_0;
extern Il2CppType Transform_1_t3158_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m18745_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m18691_MethodInfo;
extern MethodInfo Transform_1__ctor_m18765_MethodInfo;
extern MethodInfo Enumerator__ctor_m18748_MethodInfo;
struct Dictionary_2_t3152;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisByte_t517_m21997_gshared (Dictionary_2_t3152 * __this, Array_t * p0, int32_t p1, Transform_1_t3158 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisByte_t517_m21997(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3152 *, Array_t *, int32_t, Transform_1_t3158 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisByte_t517_m21997_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3152;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisByte_t517_TisByte_t517_m21998 (Dictionary_2_t3152 * __this, ByteU5BU5D_t1019* p0, int32_t p1, Transform_1_t3158 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m18746_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m18745_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18765_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisByte_t517_m21997_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisByte_t517_TisByte_t517_m21998_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18748_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m18734_gshared (ValueCollection_t3155 * __this, Dictionary_2_t3152 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		Dictionary_2_t3152 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t820 * L_1 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_1, (String_t*) &_stringLiteral1439, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3152 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18735_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18735_gshared (ValueCollection_t3155 * __this, uint8_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5021(L_0, (String_t*) &_stringLiteral1440, /*hidden argument*/&NotSupportedException__ctor_m5021_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18736_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18736_gshared (ValueCollection_t3155 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5021(L_0, (String_t*) &_stringLiteral1440, /*hidden argument*/&NotSupportedException__ctor_m5021_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18737_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18737_gshared (ValueCollection_t3155 * __this, uint8_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3152 * L_0 = (__this->___dictionary_0);
		uint8_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t3152 *, uint8_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18738_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18738_gshared (ValueCollection_t3155 * __this, uint8_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5021(L_0, (String_t*) &_stringLiteral1440, /*hidden argument*/&NotSupportedException__ctor_m5021_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18739_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18739_gshared (ValueCollection_t3155 * __this, MethodInfo* method)
{
	{
		Enumerator_t3156  L_0 = (( Enumerator_t3156  (*) (ValueCollection_t3155 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3156  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m18740_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18740_gshared (ValueCollection_t3155 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	ByteU5BU5D_t1019* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((ByteU5BU5D_t1019*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ByteU5BU5D_t1019* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_t1019* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< ByteU5BU5D_t1019*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3152 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3152 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3152 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3158 * L_11 = (Transform_1_t3158 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3158 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3152 *, Array_t *, int32_t, Transform_1_t3158 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18741_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18741_gshared (ValueCollection_t3155 * __this, MethodInfo* method)
{
	{
		Enumerator_t3156  L_0 = (( Enumerator_t3156  (*) (ValueCollection_t3155 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3156  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18742_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18742_gshared (ValueCollection_t3155 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18743_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18743_gshared (ValueCollection_t3155 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m18744_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18744_gshared (ValueCollection_t3155 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3152 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m11376_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m18745_gshared (ValueCollection_t3155 * __this, ByteU5BU5D_t1019* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3152 * L_0 = (__this->___dictionary_0);
		ByteU5BU5D_t1019* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3152 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3152 * L_3 = (__this->___dictionary_0);
		ByteU5BU5D_t1019* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3158 * L_7 = (Transform_1_t3158 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3158 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3152 *, ByteU5BU5D_t1019*, int32_t, Transform_1_t3158 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t3156  ValueCollection_GetEnumerator_m18746_gshared (ValueCollection_t3155 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3152 * L_0 = (__this->___dictionary_0);
		Enumerator_t3156  L_1 = {0};
		(( void (*) (Enumerator_t3156 *, Dictionary_2_t3152 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m18747_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m18747_gshared (ValueCollection_t3155 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3152 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentValue_m18761_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m18764_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m18758_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18748_gshared (Enumerator_t3156 * __this, Dictionary_2_t3152 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3152 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3157  L_1 = (( Enumerator_t3157  (*) (Dictionary_2_t3152 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m18749_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18749_gshared (Enumerator_t3156 * __this, MethodInfo* method)
{
	{
		Enumerator_t3157 * L_0 = &(__this->___host_enumerator_0);
		uint8_t L_1 = (( uint8_t (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m18750_GenericMethod;
extern "C" void Enumerator_Dispose_m18750_gshared (Enumerator_t3156 * __this, MethodInfo* method)
{
	{
		Enumerator_t3157 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m18751_GenericMethod;
extern "C" bool Enumerator_MoveNext_m18751_gshared (Enumerator_t3156 * __this, MethodInfo* method)
{
	{
		Enumerator_t3157 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m18752_GenericMethod;
extern "C" uint8_t Enumerator_get_Current_m18752_gshared (Enumerator_t3156 * __this, MethodInfo* method)
{
	{
		Enumerator_t3157 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3153 * L_1 = &(L_0->___current_3);
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m18763_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m18760_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m18762_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18753_gshared (Enumerator_t3157 * __this, Dictionary_2_t3152 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t3152 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t3152 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m18754_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18754_gshared (Enumerator_t3157 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3153  L_0 = (__this->___current_3);
		KeyValuePair_2_t3153  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18755_GenericMethod;
extern "C" DictionaryEntry_t967  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18755_gshared (Enumerator_t3157 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3153 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t3153 * L_3 = &(__this->___current_3);
		uint8_t L_4 = (( uint8_t (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t967  L_7 = {0};
		DictionaryEntry__ctor_m4998(&L_7, ((Object_t *)L_2), L_6, /*hidden argument*/&DictionaryEntry__ctor_m4998_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18756_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18756_gshared (Enumerator_t3157 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18757_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18757_gshared (Enumerator_t3157 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18758_gshared (Enumerator_t3157 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->___next_1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = L_3;
		Dictionary_2_t3152 * L_4 = (__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t2313* L_5 = (L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (((Link_t1463 *)(Link_t1463 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t3152 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t219* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t3152 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		ByteU5BU5D_t1019* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3153  L_16 = {0};
		(( void (*) (KeyValuePair_2_t3153 *, Object_t *, uint8_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t3152 * L_18 = (__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m18759_GenericMethod;
extern "C" KeyValuePair_2_t3153  Enumerator_get_Current_m18759_gshared (Enumerator_t3157 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3153  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18760_gshared (Enumerator_t3157 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3153 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m18761_gshared (Enumerator_t3157 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3153 * L_0 = &(__this->___current_3);
		uint8_t L_1 = (( uint8_t (*) (KeyValuePair_2_t3153 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m18762_gshared (Enumerator_t3157 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3152 * L_0 = (__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1323 * L_1 = (ObjectDisposedException_t1323 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1323_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m6181(L_1, (String_t*)NULL, /*hidden argument*/&ObjectDisposedException__ctor_m6181_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t3152 * L_2 = (__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___generation_14);
		int32_t L_4 = (__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1143 * L_5 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_5, (String_t*) &_stringLiteral1437, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18763_gshared (Enumerator_t3157 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3157 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1143 * L_1 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_1, (String_t*) &_stringLiteral1438, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m18764_gshared (Enumerator_t3157 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t3152 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18765_gshared (Transform_1_t3158 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18766_GenericMethod;
extern "C" uint8_t Transform_1_Invoke_m18766_gshared (Transform_1_t3158 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18766((Transform_1_t3158 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18767_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18767_gshared (Transform_1_t3158 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t517_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18768_GenericMethod;
extern "C" uint8_t Transform_1_EndInvoke_m18768_gshared (Transform_1_t3158 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18769_gshared (Transform_1_t3151 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18770_GenericMethod;
extern "C" DictionaryEntry_t967  Transform_1_Invoke_m18770_gshared (Transform_1_t3151 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18770((Transform_1_t3151 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t967  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t967  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t967  (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18771_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18771_gshared (Transform_1_t3151 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t517_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18772_GenericMethod;
extern "C" DictionaryEntry_t967  Transform_1_EndInvoke_m18772_gshared (Transform_1_t3151 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t967 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18773_gshared (Transform_1_t3159 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18774_GenericMethod;
extern "C" KeyValuePair_2_t3153  Transform_1_Invoke_m18774_gshared (Transform_1_t3159 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18774((Transform_1_t3159 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3153  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3153  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3153  (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18775_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18775_gshared (Transform_1_t3159 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t517_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18776_GenericMethod;
extern "C" KeyValuePair_2_t3153  Transform_1_EndInvoke_m18776_gshared (Transform_1_t3159 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3153 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

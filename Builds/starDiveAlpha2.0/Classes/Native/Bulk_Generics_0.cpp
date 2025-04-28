#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
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
extern TypeInfo CastHelper_1_t2479_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0MethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.CastHelper`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_CastHelper_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2480_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_CastHelper_1_genMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3583_il2cpp_TypeInfo;

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2481_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_genMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Vector2_t62_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1143_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2481_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4997_MethodInfo;
extern MethodInfo Array_get_Length_m5002_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
extern "C" Vector2_t62  Array_InternalArray__get_Item_TisVector2_t62_m19702_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector2_t62_m19702(__this, p0, method) (( Vector2_t62  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisVector2_t62_m19702_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12153_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisVector2_t62_m19702_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12149_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12149_gshared (InternalEnumerator_1_t2481 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12150_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12150_gshared (InternalEnumerator_1_t2481 * __this, MethodInfo* method)
{
	{
		Vector2_t62  L_0 = (( Vector2_t62  (*) (InternalEnumerator_1_t2481 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector2_t62  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12151_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12151_gshared (InternalEnumerator_1_t2481 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector2>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12152_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12152_gshared (InternalEnumerator_1_t2481 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Vector2>::get_Current()
extern "C" Vector2_t62  InternalEnumerator_1_get_Current_m12153_gshared (InternalEnumerator_1_t2481 * __this, MethodInfo* method)
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
		Vector2_t62  L_8 = (( Vector2_t62  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t238_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current()
// System.Array/InternalEnumerator`1<System.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2482_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_0MethodDeclarations.h"

extern TypeInfo Object_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2482_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m19712_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19712(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12158_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisObject_t_m19712_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Object>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12154_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12154_gshared (InternalEnumerator_1_t2482 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12155_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12155_gshared (InternalEnumerator_1_t2482 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (InternalEnumerator_1_t2482 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Object>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12156_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12156_gshared (InternalEnumerator_1_t2482 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Object>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12157_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12157_gshared (InternalEnumerator_1_t2482 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Object>::get_Current()
extern "C" Object_t * InternalEnumerator_1_get_Current_m12158_gshared (InternalEnumerator_1_t2482 * __this, MethodInfo* method)
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
		Object_t * L_8 = (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3312_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Object>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Object>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Object>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t2939_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2528_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Object>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Object>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Object>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3584_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3585_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3586_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector2>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Vector2>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3587_il2cpp_TypeInfo;

// System.ValueType
#include "mscorlib_System_ValueType.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.ValueType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ValueType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ValueType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ValueType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ValueType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ValueType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ValueType>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3588_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ValueType>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3589_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.ValueType>::get_Current()
// System.Array/InternalEnumerator`1<System.ValueType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2483_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ValueType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1MethodDeclarations.h"

extern TypeInfo ValueType_t243_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2483_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ValueType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ValueType>(System.Int32)
#define Array_InternalArray__get_Item_TisValueType_t243_m19724(__this, p0, method) (( ValueType_t243 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12163_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisValueType_t243_m19724_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.ValueType>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.ValueType>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ValueType>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ValueType>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ValueType>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3590_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ValueType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ValueType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ValueType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ValueType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ValueType>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3411_il2cpp_TypeInfo;

// System.Type
#include "mscorlib_System_Type.h"


// T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current()
// System.Array/InternalEnumerator`1<System.Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2484_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2MethodDeclarations.h"

extern TypeInfo Type_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2484_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Type>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Type>(System.Int32)
#define Array_InternalArray__get_Item_TisType_t_m19735(__this, p0, method) (( Type_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12168_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisType_t_m19735_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Type>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Type>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Type>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Type>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Type>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3412_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Type>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Type>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Type>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Type>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Type>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Type>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Type>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3413_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3081_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Type>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Type>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Type>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Type>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Type>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3591_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3592_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.IReflect>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3593_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.IReflect>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.IReflect>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2485_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.IReflect>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3MethodDeclarations.h"

extern TypeInfo IReflect_t2236_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2485_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.IReflect>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.IReflect>(System.Int32)
#define Array_InternalArray__get_Item_TisIReflect_t2236_m19746(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12173_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIReflect_t2236_m19746_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.IReflect>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.IReflect>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.IReflect>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.IReflect>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.IReflect>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3594_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.IReflect>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.IReflect>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.IReflect>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.IReflect>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.IReflect>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3595_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3596_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._Type>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3597_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._Type>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2486_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_4MethodDeclarations.h"

extern TypeInfo _Type_t2237_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2486_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Type>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Type>(System.Int32)
#define Array_InternalArray__get_Item_Tis_Type_t2237_m19757(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12178_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_Type_t2237_m19757_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3598_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3599_il2cpp_TypeInfo;

// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3600_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3601_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2487_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5MethodDeclarations.h"

extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2487_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MemberInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MemberInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisMemberInfo_t_m19768(__this, p0, method) (( MemberInfo_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12183_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMemberInfo_t_m19768_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3602_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3603_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3604_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ICustomAttributeProvider>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3605_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.ICustomAttributeProvider>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2488_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_6MethodDeclarations.h"

extern TypeInfo ICustomAttributeProvider_t1944_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2488_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ICustomAttributeProvider>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ICustomAttributeProvider>(System.Int32)
#define Array_InternalArray__get_Item_TisICustomAttributeProvider_t1944_m19779(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12188_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisICustomAttributeProvider_t1944_m19779_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3606_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3607_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3608_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MemberInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3609_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MemberInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2489_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_7MethodDeclarations.h"

extern TypeInfo _MemberInfo_t2238_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2489_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MemberInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MemberInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MemberInfo_t2238_m19790(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12193_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_MemberInfo_t2238_m19790_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3610_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3611_il2cpp_TypeInfo;

// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Keyframe>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2490_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_8MethodDeclarations.h"

extern TypeInfo Keyframe_t100_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2490_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
extern "C" Keyframe_t100  Array_InternalArray__get_Item_TisKeyframe_t100_m19801_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyframe_t100_m19801(__this, p0, method) (( Keyframe_t100  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyframe_t100_m19801_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12198_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyframe_t100_m19801_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12194_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12194_gshared (InternalEnumerator_1_t2490 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12195_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12195_gshared (InternalEnumerator_1_t2490 * __this, MethodInfo* method)
{
	{
		Keyframe_t100  L_0 = (( Keyframe_t100  (*) (InternalEnumerator_1_t2490 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Keyframe_t100  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12196_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12196_gshared (InternalEnumerator_1_t2490 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12197_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12197_gshared (InternalEnumerator_1_t2490 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::get_Current()
extern "C" Keyframe_t100  InternalEnumerator_1_get_Current_m12198_gshared (InternalEnumerator_1_t2490 * __this, MethodInfo* method)
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
		Keyframe_t100  L_8 = (( Keyframe_t100  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3612_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3613_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Keyframe>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3614_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Keyframe>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Keyframe>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3615_il2cpp_TypeInfo;

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Color>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Color>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2491_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Color>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9MethodDeclarations.h"

extern TypeInfo Color_t17_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2491_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Color>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Color>(System.Int32)
extern "C" Color_t17  Array_InternalArray__get_Item_TisColor_t17_m19812_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisColor_t17_m19812(__this, p0, method) (( Color_t17  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisColor_t17_m19812_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12203_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisColor_t17_m19812_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12199_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12199_gshared (InternalEnumerator_1_t2491 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Color>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12200_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12200_gshared (InternalEnumerator_1_t2491 * __this, MethodInfo* method)
{
	{
		Color_t17  L_0 = (( Color_t17  (*) (InternalEnumerator_1_t2491 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Color_t17  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12201_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12201_gshared (InternalEnumerator_1_t2491 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Color>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12202_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12202_gshared (InternalEnumerator_1_t2491 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Color>::get_Current()
extern "C" Color_t17  InternalEnumerator_1_get_Current_m12203_gshared (InternalEnumerator_1_t2491 * __this, MethodInfo* method)
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
		Color_t17  L_8 = (( Color_t17  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3616_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Color>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Color>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Color>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3617_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Color>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3618_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Color>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Color>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Color>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Color>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Color>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3619_il2cpp_TypeInfo;

// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.RenderTexture>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.RenderTexture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2492_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.RenderTexture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_10MethodDeclarations.h"

extern TypeInfo RenderTexture_t7_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2492_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RenderTexture>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RenderTexture>(System.Int32)
#define Array_InternalArray__get_Item_TisRenderTexture_t7_m19823(__this, p0, method) (( RenderTexture_t7 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12208_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRenderTexture_t7_m19823_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RenderTexture>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RenderTexture>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RenderTexture>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RenderTexture>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.RenderTexture>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3620_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RenderTexture>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RenderTexture>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RenderTexture>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RenderTexture>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RenderTexture>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RenderTexture>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RenderTexture>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3621_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RenderTexture>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3622_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RenderTexture>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RenderTexture>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RenderTexture>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RenderTexture>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RenderTexture>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3623_il2cpp_TypeInfo;

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Texture>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Texture>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Texture>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Texture>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Texture>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Texture>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Texture>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3624_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Texture>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3625_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Texture>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Texture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2493_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Texture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_11MethodDeclarations.h"

extern TypeInfo Texture_t39_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2493_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Texture>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Texture>(System.Int32)
#define Array_InternalArray__get_Item_TisTexture_t39_m19834(__this, p0, method) (( Texture_t39 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12213_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTexture_t39_m19834_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Texture>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Texture>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Texture>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Texture>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Texture>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3626_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Texture>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Texture>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Texture>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Texture>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Texture>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3627_il2cpp_TypeInfo;

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Object>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Object>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Object>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Object>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Object>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Object>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Object>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3628_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Object>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3629_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Object>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2494_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12MethodDeclarations.h"

extern TypeInfo Object_t93_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2494_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Object>(System.Int32)
#define Array_InternalArray__get_Item_TisObject_t93_m19845(__this, p0, method) (( Object_t93 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12218_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisObject_t93_m19845_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Object>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Object>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Object>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Object>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Object>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3630_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Object>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Object>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Object>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Object>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Object>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3348_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current()
// System.Array/InternalEnumerator`1<System.Int32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2495_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Int32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13MethodDeclarations.h"

extern TypeInfo Int32_t92_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2495_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisInt32_t92_m19856_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt32_t92_m19856(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt32_t92_m19856_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12223_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisInt32_t92_m19856_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Int32>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12219_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12219_gshared (InternalEnumerator_1_t2495 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12220_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12220_gshared (InternalEnumerator_1_t2495 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (InternalEnumerator_1_t2495 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int32>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12221_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12221_gshared (InternalEnumerator_1_t2495 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int32>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12222_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12222_gshared (InternalEnumerator_1_t2495 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Int32>::get_Current()
extern "C" int32_t InternalEnumerator_1_get_Current_m12223_gshared (InternalEnumerator_1_t2495 * __this, MethodInfo* method)
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
		int32_t L_8 = (( int32_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3631_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int32>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int32>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3632_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3633_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int32>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int32>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int32>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3634_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IFormattable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IFormattable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IFormattable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IFormattable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IFormattable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IFormattable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IFormattable>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3635_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IFormattable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3636_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IFormattable>::get_Current()
// System.Array/InternalEnumerator`1<System.IFormattable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2496_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IFormattable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14MethodDeclarations.h"

extern TypeInfo IFormattable_t106_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2496_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IFormattable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IFormattable>(System.Int32)
#define Array_InternalArray__get_Item_TisIFormattable_t106_m19867(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12228_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIFormattable_t106_m19867_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IFormattable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IFormattable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IFormattable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IFormattable>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IFormattable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3637_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IFormattable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IFormattable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IFormattable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IFormattable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IFormattable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3638_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IConvertible>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IConvertible>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IConvertible>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IConvertible>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IConvertible>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IConvertible>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IConvertible>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3639_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IConvertible>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3640_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IConvertible>::get_Current()
// System.Array/InternalEnumerator`1<System.IConvertible>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2497_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IConvertible>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15MethodDeclarations.h"

extern TypeInfo IConvertible_t107_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2497_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IConvertible>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IConvertible>(System.Int32)
#define Array_InternalArray__get_Item_TisIConvertible_t107_m19878(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12233_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIConvertible_t107_m19878_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IConvertible>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IConvertible>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IConvertible>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IConvertible>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IConvertible>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3641_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IConvertible>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IConvertible>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IConvertible>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IConvertible>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IConvertible>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3642_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3643_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3644_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable>::get_Current()
// System.Array/InternalEnumerator`1<System.IComparable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2498_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16MethodDeclarations.h"

extern TypeInfo IComparable_t108_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2498_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_t108_m19889(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12238_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_t108_m19889_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3645_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3646_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3647_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3648_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2020_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Int32>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_17.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2499_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_17MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2499_0_0_0;
extern Il2CppType IComparable_1_t2020_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int32>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2020_m19900(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12243_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2020_m19900_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3649_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3650_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3651_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int32>>::GetEnumerator()
#ifdef __clang__
#pragma clang diagnostic pop
#endif

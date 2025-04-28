#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo IList_1_t4266_il2cpp_TypeInfo;

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4267_il2cpp_TypeInfo;

// System.Reflection.Emit.MonoResource
#include "mscorlib_System_Reflection_Emit_MonoResource.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.MonoResource>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Emit.MonoResource>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_202.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3177_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.MonoResource>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_202MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo MonoResource_t1476_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1076_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3177_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4760_MethodInfo;
extern MethodInfo Array_get_Length_m4765_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.MonoResource>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.MonoResource>(System.Int32)
extern "C" MonoResource_t1476  Array_InternalArray__get_Item_TisMonoResource_t1476_m22378_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisMonoResource_t1476_m22378(__this, p0, method) (( MonoResource_t1476  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisMonoResource_t1476_m22378_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19047_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMonoResource_t1476_m22378_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.MonoResource>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19043_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m19043_gshared (InternalEnumerator_1_t3177 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.MonoResource>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19044_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19044_gshared (InternalEnumerator_1_t3177 * __this, MethodInfo* method)
{
	{
		MonoResource_t1476  L_0 = (( MonoResource_t1476  (*) (InternalEnumerator_1_t3177 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		MonoResource_t1476  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.MonoResource>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19045_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m19045_gshared (InternalEnumerator_1_t3177 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.MonoResource>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19046_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m19046_gshared (InternalEnumerator_1_t3177 * __this, MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m4765(L_1, /*hidden argument*/&Array_get_Length_m4765_MethodInfo);
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
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.MonoResource>::get_Current()
extern "C" MonoResource_t1476  InternalEnumerator_1_get_Current_m19047_gshared (InternalEnumerator_1_t3177 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1076 * L_1 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4760(L_1, (String_t*) &_stringLiteral1149, /*hidden argument*/&InvalidOperationException__ctor_m4760_MethodInfo);
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
		InvalidOperationException_t1076 * L_3 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4760(L_3, (String_t*) &_stringLiteral1150, /*hidden argument*/&InvalidOperationException__ctor_m4760_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4765(L_5, /*hidden argument*/&Array_get_Length_m4765_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		MonoResource_t1476  L_8 = (( MonoResource_t1476  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4268_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.MonoResource>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.MonoResource>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.MonoResource>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.MonoResource>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.MonoResource>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.MonoResource>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.MonoResource>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4269_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.MonoResource>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4270_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.MonoResource>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.MonoResource>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.MonoResource>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.MonoResource>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.MonoResource>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4271_il2cpp_TypeInfo;

// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ParameterBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_203.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3178_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_203MethodDeclarations.h"

extern TypeInfo ParameterBuilder_t1518_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3178_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m19472_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19472(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisParameterBuilder_t1518_m22389(__this, p0, method) (( ParameterBuilder_t1518 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19052_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisParameterBuilder_t1518_m22389_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4272_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4273_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ParameterBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4274_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4275_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4276_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ParameterBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4277_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_204.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3179_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_204MethodDeclarations.h"

extern TypeInfo _ParameterBuilder_t2333_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3179_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ParameterBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ParameterBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_ParameterBuilder_t2333_m22400(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19057_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_ParameterBuilder_t2333_m22400_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4278_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4279_il2cpp_TypeInfo;

// System.Type
#include "mscorlib_System_Type.h"


// T System.Collections.Generic.IEnumerator`1<System.Type[]>::get_Current()
// System.Array/InternalEnumerator`1<System.Type[]>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_205.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3180_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Type[]>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_205MethodDeclarations.h"

extern TypeInfo TypeU5BU5D_t670_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3180_0_0_0;
extern Il2CppType TypeU5BU5D_t670_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Type[]>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Type[]>(System.Int32)
#define Array_InternalArray__get_Item_TisTypeU5BU5D_t670_m22411(__this, p0, method) (( TypeU5BU5D_t670* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19062_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTypeU5BU5D_t670_m22411_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Type[]>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Type[]>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Type[]>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Type[]>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Type[]>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4280_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Type[]>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Type[]>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Type[]>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Type[]>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Type[]>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Type[]>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Type[]>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4281_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type[]>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4282_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Type[]>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Type[]>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Type[]>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Type[]>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Type[]>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4283_il2cpp_TypeInfo;

// System.Reflection.Emit.LocalBuilder
#include "mscorlib_System_Reflection_Emit_LocalBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.LocalBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Emit.LocalBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_206.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3181_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.LocalBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_206MethodDeclarations.h"

extern TypeInfo LocalBuilder_t1505_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3181_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.LocalBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.LocalBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisLocalBuilder_t1505_m22422(__this, p0, method) (( LocalBuilder_t1505 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19067_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisLocalBuilder_t1505_m22422_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.LocalBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.LocalBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.LocalBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.LocalBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.LocalBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4284_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.LocalBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.LocalBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.LocalBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.LocalBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.LocalBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.LocalBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.LocalBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4285_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.LocalBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4286_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.LocalBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.LocalBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.LocalBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.LocalBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.LocalBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4287_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._LocalBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._LocalBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._LocalBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._LocalBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._LocalBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._LocalBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._LocalBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4288_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._LocalBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4289_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._LocalBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._LocalBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_207.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3182_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._LocalBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_207MethodDeclarations.h"

extern TypeInfo _LocalBuilder_t2329_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3182_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._LocalBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._LocalBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_LocalBuilder_t2329_m22433(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19072_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_LocalBuilder_t2329_m22433_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._LocalBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._LocalBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._LocalBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._LocalBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._LocalBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4290_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._LocalBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._LocalBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._LocalBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._LocalBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._LocalBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4291_il2cpp_TypeInfo;

// System.Reflection.LocalVariableInfo
#include "mscorlib_System_Reflection_LocalVariableInfo.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.LocalVariableInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.LocalVariableInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.LocalVariableInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.LocalVariableInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.LocalVariableInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.LocalVariableInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.LocalVariableInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4292_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.LocalVariableInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4293_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.LocalVariableInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.LocalVariableInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_208.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3183_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.LocalVariableInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_208MethodDeclarations.h"

extern TypeInfo LocalVariableInfo_t1508_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3183_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.LocalVariableInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.LocalVariableInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisLocalVariableInfo_t1508_m22444(__this, p0, method) (( LocalVariableInfo_t1508 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19077_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisLocalVariableInfo_t1508_m22444_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.LocalVariableInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.LocalVariableInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.LocalVariableInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.LocalVariableInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.LocalVariableInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4294_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.LocalVariableInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.LocalVariableInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.LocalVariableInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.LocalVariableInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.LocalVariableInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4295_il2cpp_TypeInfo;

// System.Reflection.Emit.ILTokenInfo
#include "mscorlib_System_Reflection_Emit_ILTokenInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ILTokenInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_209.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3184_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_209MethodDeclarations.h"

extern TypeInfo ILTokenInfo_t1497_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3184_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ILTokenInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ILTokenInfo>(System.Int32)
extern "C" ILTokenInfo_t1497  Array_InternalArray__get_Item_TisILTokenInfo_t1497_m22455_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisILTokenInfo_t1497_m22455(__this, p0, method) (( ILTokenInfo_t1497  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisILTokenInfo_t1497_m22455_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19082_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisILTokenInfo_t1497_m22455_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19078_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m19078_gshared (InternalEnumerator_1_t3184 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19079_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19079_gshared (InternalEnumerator_1_t3184 * __this, MethodInfo* method)
{
	{
		ILTokenInfo_t1497  L_0 = (( ILTokenInfo_t1497  (*) (InternalEnumerator_1_t3184 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ILTokenInfo_t1497  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19080_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m19080_gshared (InternalEnumerator_1_t3184 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19081_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m19081_gshared (InternalEnumerator_1_t3184 * __this, MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m4765(L_1, /*hidden argument*/&Array_get_Length_m4765_MethodInfo);
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
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::get_Current()
extern "C" ILTokenInfo_t1497  InternalEnumerator_1_get_Current_m19082_gshared (InternalEnumerator_1_t3184 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1076 * L_1 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4760(L_1, (String_t*) &_stringLiteral1149, /*hidden argument*/&InvalidOperationException__ctor_m4760_MethodInfo);
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
		InvalidOperationException_t1076 * L_3 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4760(L_3, (String_t*) &_stringLiteral1150, /*hidden argument*/&InvalidOperationException__ctor_m4760_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4765(L_5, /*hidden argument*/&Array_get_Length_m4765_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		ILTokenInfo_t1497  L_8 = (( ILTokenInfo_t1497  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4296_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILTokenInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILTokenInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILTokenInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILTokenInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILTokenInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILTokenInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILTokenInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4297_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ILTokenInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4298_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.ILTokenInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ILTokenInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ILTokenInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.ILTokenInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ILTokenInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4299_il2cpp_TypeInfo;

// System.Reflection.Emit.ILGenerator/LabelData
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelData.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_210.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3185_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_210MethodDeclarations.h"

extern TypeInfo LabelData_t1499_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3185_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelData>(System.Int32)
extern "C" LabelData_t1499  Array_InternalArray__get_Item_TisLabelData_t1499_m22466_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisLabelData_t1499_m22466(__this, p0, method) (( LabelData_t1499  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisLabelData_t1499_m22466_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19087_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisLabelData_t1499_m22466_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19083_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m19083_gshared (InternalEnumerator_1_t3185 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19084_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19084_gshared (InternalEnumerator_1_t3185 * __this, MethodInfo* method)
{
	{
		LabelData_t1499  L_0 = (( LabelData_t1499  (*) (InternalEnumerator_1_t3185 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		LabelData_t1499  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19085_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m19085_gshared (InternalEnumerator_1_t3185 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19086_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m19086_gshared (InternalEnumerator_1_t3185 * __this, MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m4765(L_1, /*hidden argument*/&Array_get_Length_m4765_MethodInfo);
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
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::get_Current()
extern "C" LabelData_t1499  InternalEnumerator_1_get_Current_m19087_gshared (InternalEnumerator_1_t3185 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1076 * L_1 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4760(L_1, (String_t*) &_stringLiteral1149, /*hidden argument*/&InvalidOperationException__ctor_m4760_MethodInfo);
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
		InvalidOperationException_t1076 * L_3 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4760(L_3, (String_t*) &_stringLiteral1150, /*hidden argument*/&InvalidOperationException__ctor_m4760_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4765(L_5, /*hidden argument*/&Array_get_Length_m4765_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		LabelData_t1499  L_8 = (( LabelData_t1499  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4300_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelData>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelData>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelData>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelData>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelData>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelData>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelData>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4301_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ILGenerator/LabelData>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4302_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.ILGenerator/LabelData>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ILGenerator/LabelData>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ILGenerator/LabelData>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.ILGenerator/LabelData>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ILGenerator/LabelData>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4303_il2cpp_TypeInfo;

// System.Reflection.Emit.ILGenerator/LabelFixup
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixup.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_211.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3186_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_211MethodDeclarations.h"

extern TypeInfo LabelFixup_t1498_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3186_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32)
extern "C" LabelFixup_t1498  Array_InternalArray__get_Item_TisLabelFixup_t1498_m22477_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisLabelFixup_t1498_m22477(__this, p0, method) (( LabelFixup_t1498  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisLabelFixup_t1498_m22477_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19092_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisLabelFixup_t1498_m22477_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19088_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m19088_gshared (InternalEnumerator_1_t3186 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19089_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19089_gshared (InternalEnumerator_1_t3186 * __this, MethodInfo* method)
{
	{
		LabelFixup_t1498  L_0 = (( LabelFixup_t1498  (*) (InternalEnumerator_1_t3186 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		LabelFixup_t1498  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19090_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m19090_gshared (InternalEnumerator_1_t3186 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19091_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m19091_gshared (InternalEnumerator_1_t3186 * __this, MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m4765(L_1, /*hidden argument*/&Array_get_Length_m4765_MethodInfo);
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
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_Current()
extern "C" LabelFixup_t1498  InternalEnumerator_1_get_Current_m19092_gshared (InternalEnumerator_1_t3186 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1076 * L_1 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4760(L_1, (String_t*) &_stringLiteral1149, /*hidden argument*/&InvalidOperationException__ctor_m4760_MethodInfo);
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
		InvalidOperationException_t1076 * L_3 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4760(L_3, (String_t*) &_stringLiteral1150, /*hidden argument*/&InvalidOperationException__ctor_m4760_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4765(L_5, /*hidden argument*/&Array_get_Length_m4765_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		LabelFixup_t1498  L_8 = (( LabelFixup_t1498  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4304_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelFixup>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4305_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ILGenerator/LabelFixup>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4306_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.ILGenerator/LabelFixup>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ILGenerator/LabelFixup>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ILGenerator/LabelFixup>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4307_il2cpp_TypeInfo;

// System.Reflection.Emit.GenericTypeParameterBuilder
#include "mscorlib_System_Reflection_Emit_GenericTypeParameterBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_212.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3187_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_212MethodDeclarations.h"

extern TypeInfo GenericTypeParameterBuilder_t1496_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3187_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisGenericTypeParameterBuilder_t1496_m22488(__this, p0, method) (( GenericTypeParameterBuilder_t1496 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19097_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisGenericTypeParameterBuilder_t1496_m22488_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4308_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4309_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.GenericTypeParameterBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4310_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4311_il2cpp_TypeInfo;

// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.TypeBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_213.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3188_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_213MethodDeclarations.h"

extern TypeInfo TypeBuilder_t1485_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3188_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.TypeBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.TypeBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisTypeBuilder_t1485_m22499(__this, p0, method) (( TypeBuilder_t1485 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19102_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTypeBuilder_t1485_m22499_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4312_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4313_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.TypeBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4314_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4315_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4316_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._TypeBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4317_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_214.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3189_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_214MethodDeclarations.h"

extern TypeInfo _TypeBuilder_t2334_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3189_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._TypeBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._TypeBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_TypeBuilder_t2334_m22510(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19107_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_TypeBuilder_t2334_m22510_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4318_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4319_il2cpp_TypeInfo;

// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.MethodBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_215.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3190_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_215MethodDeclarations.h"

extern TypeInfo MethodBuilder_t1495_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3190_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.MethodBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.MethodBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisMethodBuilder_t1495_m22521(__this, p0, method) (( MethodBuilder_t1495 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19112_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMethodBuilder_t1495_m22521_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4320_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4321_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.MethodBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4322_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4323_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4324_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4325_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_216.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3191_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_216MethodDeclarations.h"

extern TypeInfo _MethodBuilder_t2330_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3191_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MethodBuilder_t2330_m22532(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19117_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_MethodBuilder_t2330_m22532_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4326_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4327_il2cpp_TypeInfo;

// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_217.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3192_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_217MethodDeclarations.h"

extern TypeInfo ConstructorBuilder_t1488_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3192_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ConstructorBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ConstructorBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisConstructorBuilder_t1488_m22543(__this, p0, method) (( ConstructorBuilder_t1488 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19122_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisConstructorBuilder_t1488_m22543_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4328_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4329_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ConstructorBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4330_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4331_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4332_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4333_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_218.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3193_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_218MethodDeclarations.h"

extern TypeInfo _ConstructorBuilder_t2321_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3193_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_ConstructorBuilder_t2321_m22554(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19127_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_ConstructorBuilder_t2321_m22554_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4334_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4335_il2cpp_TypeInfo;

// System.Reflection.Emit.FieldBuilder
#include "mscorlib_System_Reflection_Emit_FieldBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.FieldBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_219.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3194_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_219MethodDeclarations.h"

extern TypeInfo FieldBuilder_t1494_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3194_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.FieldBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.FieldBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisFieldBuilder_t1494_m22565(__this, p0, method) (( FieldBuilder_t1494 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19132_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisFieldBuilder_t1494_m22565_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4336_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4337_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.FieldBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4338_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4339_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4340_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._FieldBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4341_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_220.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3195_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_220MethodDeclarations.h"

extern TypeInfo _FieldBuilder_t2326_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3195_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._FieldBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._FieldBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_FieldBuilder_t2326_m22576(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19137_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_FieldBuilder_t2326_m22576_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4342_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4343_il2cpp_TypeInfo;

// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_221.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3196_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_221MethodDeclarations.h"

extern TypeInfo PropertyInfo_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3196_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.PropertyInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.PropertyInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisPropertyInfo_t_m22587(__this, p0, method) (( PropertyInfo_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19142_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisPropertyInfo_t_m22587_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4344_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4345_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator()
#ifdef __clang__
#pragma clang diagnostic pop
#endif

#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_gen.h"
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
extern TypeInfo StaticGetter_1_t3262_il2cpp_TypeInfo;
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_genMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod StaticGetter_1__ctor_m19382_GenericMethod;
extern "C" void StaticGetter_1__ctor_m19382_gshared (StaticGetter_1_t3262 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern Il2CppGenericMethod StaticGetter_1_Invoke_m19383_GenericMethod;
extern "C" Object_t * StaticGetter_1_Invoke_m19383_gshared (StaticGetter_1_t3262 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		StaticGetter_1_Invoke_m19383((StaticGetter_1_t3262 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern Il2CppGenericMethod StaticGetter_1_BeginInvoke_m19384_GenericMethod;
extern "C" Object_t * StaticGetter_1_BeginInvoke_m19384_gshared (StaticGetter_1_t3262 * __this, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod StaticGetter_1_EndInvoke_m19385_GenericMethod;
extern "C" Object_t * StaticGetter_1_EndInvoke_m19385_gshared (StaticGetter_1_t3262 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4410_il2cpp_TypeInfo;

// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.Header>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_222.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3263_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_222MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Header_t1692_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1143_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3263_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4997_MethodInfo;
extern MethodInfo Array_get_Length_m5002_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m19712_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19712(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Messaging.Header>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Messaging.Header>(System.Int32)
#define Array_InternalArray__get_Item_TisHeader_t1692_m22830(__this, p0, method) (( Header_t1692 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19390_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisHeader_t1692_m22830_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4411_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4412_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.Header>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4413_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4414_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_223.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3264_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_223MethodDeclarations.h"

extern TypeInfo ITrackingHandler_t2002_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3264_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisITrackingHandler_t2002_m22841(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19395_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisITrackingHandler_t2002_m22841_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4415_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4416_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Services.ITrackingHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4417_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4418_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_224.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3265_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_224MethodDeclarations.h"

extern TypeInfo IContextAttribute_t1996_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3265_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisIContextAttribute_t1996_m22852(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19400_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIContextAttribute_t1996_m22852_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4419_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4420_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextAttribute>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4421_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4422_il2cpp_TypeInfo;

// System.DateTime
#include "mscorlib_System_DateTime.h"


// T System.Collections.Generic.IEnumerator`1<System.DateTime>::get_Current()
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_225.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3266_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_225MethodDeclarations.h"

extern TypeInfo DateTime_t650_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3266_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
extern "C" DateTime_t650  Array_InternalArray__get_Item_TisDateTime_t650_m22863_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisDateTime_t650_m22863(__this, p0, method) (( DateTime_t650  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisDateTime_t650_m22863_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19405_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDateTime_t650_m22863_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19401_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m19401_gshared (InternalEnumerator_1_t3266 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19402_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19402_gshared (InternalEnumerator_1_t3266 * __this, MethodInfo* method)
{
	{
		DateTime_t650  L_0 = (( DateTime_t650  (*) (InternalEnumerator_1_t3266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DateTime_t650  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19403_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m19403_gshared (InternalEnumerator_1_t3266 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19404_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m19404_gshared (InternalEnumerator_1_t3266 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t650  InternalEnumerator_1_get_Current_m19405_gshared (InternalEnumerator_1_t3266 * __this, MethodInfo* method)
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
		DateTime_t650  L_8 = (( DateTime_t650  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4423_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.DateTime>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4424_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTime>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4425_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.DateTime>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.DateTime>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.DateTime>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.DateTime>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.DateTime>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4426_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4427_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.DateTime>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4428_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.DateTime>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2445_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.DateTime>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_226.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3267_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_226MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3267_0_0_0;
extern Il2CppType IComparable_1_t2445_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.DateTime>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.DateTime>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2445_m22874(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19410_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2445_m22874_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4429_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4430_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4431_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.DateTime>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4432_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.DateTime>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2446_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.DateTime>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_227.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3268_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_227MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3268_0_0_0;
extern Il2CppType IEquatable_1_t2446_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.DateTime>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.DateTime>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2446_m22885(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19415_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2446_m22885_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4433_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4434_il2cpp_TypeInfo;

// System.Decimal
#include "mscorlib_System_Decimal.h"


// T System.Collections.Generic.IEnumerator`1<System.Decimal>::get_Current()
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_228.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3269_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_228MethodDeclarations.h"

extern TypeInfo Decimal_t1347_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3269_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern "C" Decimal_t1347  Array_InternalArray__get_Item_TisDecimal_t1347_m22896_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisDecimal_t1347_m22896(__this, p0, method) (( Decimal_t1347  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisDecimal_t1347_m22896_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19420_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDecimal_t1347_m22896_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19416_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m19416_gshared (InternalEnumerator_1_t3269 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19417_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19417_gshared (InternalEnumerator_1_t3269 * __this, MethodInfo* method)
{
	{
		Decimal_t1347  L_0 = (( Decimal_t1347  (*) (InternalEnumerator_1_t3269 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Decimal_t1347  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19418_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m19418_gshared (InternalEnumerator_1_t3269 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19419_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m19419_gshared (InternalEnumerator_1_t3269 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t1347  InternalEnumerator_1_get_Current_m19420_gshared (InternalEnumerator_1_t3269 * __this, MethodInfo* method)
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
		Decimal_t1347  L_8 = (( Decimal_t1347  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4435_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Decimal>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4436_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Decimal>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4437_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Decimal>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Decimal>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4438_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4439_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Decimal>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4440_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Decimal>>::get_Current()
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_229.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3270_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_229MethodDeclarations.h"

extern TypeInfo IComparable_1_t2069_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3270_0_0_0;
extern Il2CppType IComparable_1_t2069_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Decimal>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Decimal>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2069_m22907(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19425_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2069_m22907_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4441_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4442_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4443_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Decimal>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4444_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Decimal>>::get_Current()
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_230.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3271_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_230MethodDeclarations.h"

extern TypeInfo IEquatable_1_t2070_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3271_0_0_0;
extern Il2CppType IEquatable_1_t2070_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Decimal>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Decimal>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2070_m22918(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19430_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2070_m22918_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4445_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4446_il2cpp_TypeInfo;

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"


// T System.Collections.Generic.IEnumerator`1<System.TimeSpan>::get_Current()
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_231.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3272_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_231MethodDeclarations.h"

extern TypeInfo TimeSpan_t1047_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3272_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern "C" TimeSpan_t1047  Array_InternalArray__get_Item_TisTimeSpan_t1047_m22929_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisTimeSpan_t1047_m22929(__this, p0, method) (( TimeSpan_t1047  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisTimeSpan_t1047_m22929_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19435_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTimeSpan_t1047_m22929_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19431_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m19431_gshared (InternalEnumerator_1_t3272 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19432_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19432_gshared (InternalEnumerator_1_t3272 * __this, MethodInfo* method)
{
	{
		TimeSpan_t1047  L_0 = (( TimeSpan_t1047  (*) (InternalEnumerator_1_t3272 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TimeSpan_t1047  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19433_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m19433_gshared (InternalEnumerator_1_t3272 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19434_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m19434_gshared (InternalEnumerator_1_t3272 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t1047  InternalEnumerator_1_get_Current_m19435_gshared (InternalEnumerator_1_t3272 * __this, MethodInfo* method)
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
		TimeSpan_t1047  L_8 = (( TimeSpan_t1047  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4447_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.TimeSpan>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4448_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TimeSpan>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4449_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.TimeSpan>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.TimeSpan>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4450_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4451_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.TimeSpan>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4452_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.TimeSpan>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2464_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_232.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3273_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_232MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3273_0_0_0;
extern Il2CppType IComparable_1_t2464_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.TimeSpan>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.TimeSpan>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2464_m22940(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19440_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2464_m22940_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4453_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4454_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4455_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.TimeSpan>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4456_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.TimeSpan>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2465_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.TimeSpan>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_233.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3274_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_233MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3274_0_0_0;
extern Il2CppType IEquatable_1_t2465_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2465_m22951(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19445_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2465_m22951_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4457_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4458_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_234.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3275_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_234MethodDeclarations.h"

extern TypeInfo TypeTag_t1735_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3275_0_0_0;
struct Array_t;
struct Array_t;
// System.Byte
#include "mscorlib_System_Byte.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
extern "C" uint8_t Array_InternalArray__get_Item_TisByte_t517_m20204_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisByte_t517_m20204(__this, p0, method) (( uint8_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t517_m20204_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
#define Array_InternalArray__get_Item_TisTypeTag_t1735_m22962(__this, p0, method) (( uint8_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t517_m20204_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19450_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTypeTag_t1735_m22962_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4459_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4460_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4461_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4462_il2cpp_TypeInfo;

// System.MonoType
#include "mscorlib_System_MonoType.h"


// T System.Collections.Generic.IEnumerator`1<System.MonoType>::get_Current()
// System.Array/InternalEnumerator`1<System.MonoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_235.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3276_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.MonoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_235MethodDeclarations.h"

extern TypeInfo MonoType_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3276_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoType_t_m22973(__this, p0, method) (( MonoType_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19455_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMonoType_t_m22973_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.MonoType>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.MonoType>::MoveNext()
// T System.Array/InternalEnumerator`1<System.MonoType>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4463_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.MonoType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4464_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoType>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4465_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.MonoType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.MonoType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t1823_il2cpp_TypeInfo;

// System.Security.Policy.StrongName
#include "mscorlib_System_Security_Policy_StrongName.h"


// System.Int32 System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3433_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3434_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Policy.StrongName>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3432_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>::get_Current()
// System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_236.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3277_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_236MethodDeclarations.h"

extern TypeInfo StrongName_t1827_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3277_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Policy.StrongName>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Policy.StrongName>(System.Int32)
#define Array_InternalArray__get_Item_TisStrongName_t1827_m22984(__this, p0, method) (( StrongName_t1827 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19460_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisStrongName_t1827_m22984_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4466_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4467_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Policy.IBuiltInEvidence>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4468_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Policy.IBuiltInEvidence>::get_Current()
// System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_237.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3278_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_237MethodDeclarations.h"

extern TypeInfo IBuiltInEvidence_t2435_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3278_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32)
#define Array_InternalArray__get_Item_TisIBuiltInEvidence_t2435_m22995(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19465_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIBuiltInEvidence_t2435_m22995_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4469_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Policy.IBuiltInEvidence>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.IBuiltInEvidence>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.IBuiltInEvidence>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Policy.IBuiltInEvidence>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.IBuiltInEvidence>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4470_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4471_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Policy.IIdentityPermissionFactory>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4472_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>::get_Current()
// System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_238.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3279_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_238MethodDeclarations.h"

extern TypeInfo IIdentityPermissionFactory_t2436_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3279_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32)
#define Array_InternalArray__get_Item_TisIIdentityPermissionFactory_t2436_m23006(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19470_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIIdentityPermissionFactory_t2436_m23006_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4473_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Policy.IIdentityPermissionFactory>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.IIdentityPermissionFactory>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.IIdentityPermissionFactory>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Policy.IIdentityPermissionFactory>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.IIdentityPermissionFactory>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_gen_28.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t2009_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_gen_28MethodDeclarations.h"

// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_29.h"
// System.Predicate`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Predicate_1_gen_29.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_30.h"
// System.Comparison`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Comparison_1_gen_30.h"
extern TypeInfo Int32_t92_il2cpp_TypeInfo;
extern TypeInfo Void_t103_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t514_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t790_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1934_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1144_il2cpp_TypeInfo;
extern TypeInfo StrongNameU5BU5D_t3280_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3281_il2cpp_TypeInfo;
extern TypeInfo Boolean_t90_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t169_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t231_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3282_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t820_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3286_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3287_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_29MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Predicate_1_gen_29MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_30MethodDeclarations.h"
extern Il2CppType List_1_t2009_0_0_0;
extern Il2CppType StrongNameU5BU5D_t3280_0_0_0;
extern Il2CppType Enumerator_t3281_0_0_0;
extern Il2CppType ICollection_1_t3433_0_0_0;
extern Il2CppType IEnumerable_1_t3434_0_0_0;
extern Il2CppType IEnumerator_1_t3432_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3282_0_0_0;
extern Il2CppType Predicate_1_t3286_0_0_0;
extern Il2CppType Comparer_1_t3287_0_0_0;
extern MethodInfo List_1_get_Item_m19517_MethodInfo;
extern MethodInfo List_1_set_Item_m19518_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2604_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5195_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5008_MethodInfo;
extern MethodInfo Object__ctor_m373_MethodInfo;
extern MethodInfo Array_Copy_m7003_MethodInfo;
extern MethodInfo List_1_Add_m19488_MethodInfo;
extern MethodInfo List_1_Contains_m19495_MethodInfo;
extern MethodInfo List_1_IndexOf_m19501_MethodInfo;
extern MethodInfo List_1_Insert_m19504_MethodInfo;
extern MethodInfo List_1_Remove_m19506_MethodInfo;
extern MethodInfo Math_Max_m6173_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m23529_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m23530_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m23531_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m23532_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m5005_MethodInfo;
extern MethodInfo IDisposable_Dispose_m861_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m19525_MethodInfo;
extern MethodInfo Array_Clear_m6165_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3942_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m19600_MethodInfo;
extern MethodInfo Enumerator__ctor_m19519_MethodInfo;
extern MethodInfo List_1_RemoveAt_m19508_MethodInfo;
extern MethodInfo Array_Reverse_m6206_MethodInfo;
extern MethodInfo Array_Copy_m7002_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m20076_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m20076(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<System.Security.Policy.StrongName>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Security.Policy.StrongName>(!!0[]&,System.Int32)
#define Array_Resize_TisStrongName_t1827_m23017(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3280**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_40.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m11377_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m11377(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11377_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<System.Security.Policy.StrongName>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Security.Policy.StrongName>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisStrongName_t1827_m23019(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3280*, StrongName_t1827 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11377_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m20079_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m20079(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20079_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<System.Security.Policy.StrongName>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Security.Policy.StrongName>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisStrongName_t1827_m23021(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3280*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20079_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// System.Exception
#include "mscorlib_System_Exception.h"
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m20186_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219* p0, int32_t p1, Comparison_1_t2545 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m20186(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219*, int32_t, Comparison_1_t2545 *, MethodInfo*))Array_Sort_TisObject_t_m20186_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<System.Security.Policy.StrongName>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Security.Policy.StrongName>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisStrongName_t1827_m23029(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3280*, int32_t, Comparison_1_t3289 *, MethodInfo*))Array_Sort_TisObject_t_m20186_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m19517_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m19518_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisStrongName_t1827_m23017_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m19503_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m19500_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m19488_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m19495_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m19501_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m19504_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m19506_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m19489_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m19514_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m19515_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m23529_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m23530_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m23531_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m23532_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m19505_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m19490_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m19491_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m19525_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisStrongName_t1827_m23019_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m19498_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m19499_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m19600_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m19519_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m19502_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m19508_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m19606_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisStrongName_t1827_m23021_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisStrongName_t1827_m23029_GenericMethod;


// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Reverse()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Type
#include "mscorlib_System_Type.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1323_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m5007_MethodInfo;
extern MethodInfo Object_GetType_m2196_MethodInfo;
extern MethodInfo Type_get_FullName_m3974_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m6181_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m19522_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo NotSupportedException_t229_il2cpp_TypeInfo;
extern TypeInfo ICollection_t913_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t579_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_29MethodDeclarations.h"
extern Il2CppType IList_1_t1823_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m19554_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m829_MethodInfo;
extern MethodInfo IList_1_get_Item_m23533_MethodInfo;
extern MethodInfo ICollection_CopyTo_m4993_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m5149_MethodInfo;
extern MethodInfo ICollection_1_Contains_m23534_MethodInfo;
extern MethodInfo IList_1_IndexOf_m23535_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m19554_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m23533_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m19586_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m23534_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m23535_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_29.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3283_il2cpp_TypeInfo;

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo IList_t1102_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t3283_0_0_0;
extern Il2CppType StrongName_t1827_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m23536_MethodInfo;
extern MethodInfo Collection_1_SetItem_m19585_MethodInfo;
extern MethodInfo List_1__ctor_m19471_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m11376_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m19578_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m19576_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m19581_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m19572_MethodInfo;
extern MethodInfo ICollection_1_Clear_m23537_MethodInfo;
extern MethodInfo IList_1_Insert_m23538_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m23539_MethodInfo;
extern MethodInfo IList_1_set_Item_m23540_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m298_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7055_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m11686_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m11687_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m23536_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m19589_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m19590_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m19587_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m19585_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m19471_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m19578_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m19588_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m19576_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m19581_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m19572_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m23537_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m23538_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m23539_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m23540_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Count()
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3284_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_40MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_40.h"
extern TypeInfo TypeU5BU5D_t97_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3285_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_40MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3284_0_0_0;
extern Il2CppType IEquatable_1_t4474_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2333_0_0_0;
extern Il2CppType TypeU5BU5D_t97_0_0_0;
extern Il2CppType DefaultComparer_t3285_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m3955_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3953_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10477_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m19596_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23541_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23018_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m19596_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23541_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23018_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4475_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Security.Policy.StrongName>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Security.Policy.StrongName>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4474_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Security.Policy.StrongName>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m441_MethodInfo;
extern MethodInfo Object_Equals_m440_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m19591_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Security.Policy.StrongName>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Security.Policy.StrongName>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Security.Policy.StrongName>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<System.Security.Policy.StrongName>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<System.Security.Policy.StrongName>::Invoke(T)
// System.IAsyncResult System.Predicate`1<System.Security.Policy.StrongName>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<System.Security.Policy.StrongName>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_30.h"
extern TypeInfo DefaultComparer_t3288_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_30MethodDeclarations.h"
extern Il2CppType IComparable_1_t3582_0_0_0;
extern Il2CppType GenericComparer_1_t2263_0_0_0;
extern Il2CppType DefaultComparer_t3288_0_0_0;
extern MethodInfo DefaultComparer__ctor_m19607_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23542_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10503_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m19607_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23542_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>::get_Default()
#ifdef __clang__
#pragma clang diagnostic pop
#endif

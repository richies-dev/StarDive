#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"
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
extern TypeInfo Enumerator_t2611_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_genMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_0.h"
#include "mscorlib_ArrayTypes.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1143_il2cpp_TypeInfo;
extern TypeInfo Stack_1_t2608_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern Il2CppType Enumerator_t2611_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m5007_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m13181_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Stack`1<T>)
extern Il2CppGenericMethod Enumerator__ctor_m13177_GenericMethod;
extern "C" void Enumerator__ctor_m13177_gshared (Enumerator_t2611 * __this, Stack_1_t2608 * ___t, MethodInfo* method)
{
	{
		Stack_1_t2608 * L_0 = ___t;
		__this->___parent_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		Stack_1_t2608 * L_1 = ___t;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->____version_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m13178_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13178_gshared (Enumerator_t2611 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m13179_GenericMethod;
extern "C" void Enumerator_Dispose_m13179_gshared (Enumerator_t2611 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m13180_GenericMethod;
extern "C" bool Enumerator_MoveNext_m13180_gshared (Enumerator_t2611 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (__this->____version_2);
		Stack_1_t2608 * L_1 = (__this->___parent_0);
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t1143 * L_3 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5007(L_3, /*hidden argument*/&InvalidOperationException__ctor_m5007_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = (__this->___idx_1);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_003a;
		}
	}
	{
		Stack_1_t2608 * L_5 = (__this->___parent_0);
		NullCheck(L_5);
		int32_t L_6 = (L_5->____size_2);
		__this->___idx_1 = L_6;
	}

IL_003a:
	{
		int32_t L_7 = (__this->___idx_1);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = (__this->___idx_1);
		int32_t L_9 = ((int32_t)((int32_t)L_8-(int32_t)1));
		V_0 = L_9;
		__this->___idx_1 = L_9;
		int32_t L_10 = V_0;
		G_B7_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 0;
	}

IL_0060:
	{
		return G_B7_0;
	}
}
// T System.Collections.Generic.Stack`1/Enumerator<System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m13181_gshared (Enumerator_t2611 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t1143 * L_1 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5007(L_1, /*hidden argument*/&InvalidOperationException__ctor_m5007_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Stack_1_t2608 * L_2 = (__this->___parent_0);
		NullCheck(L_2);
		ObjectU5BU5D_t219* L_3 = (L_2->____array_1);
		int32_t L_4 = (__this->___idx_1);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
	}
}
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t2609_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_1__ctor_m13182_GenericMethod;
extern "C" void UnityAction_1__ctor_m13182_gshared (UnityAction_1_t2609 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern Il2CppGenericMethod UnityAction_1_Invoke_m13183_GenericMethod;
extern "C" void UnityAction_1_Invoke_m13183_gshared (UnityAction_1_t2609 * __this, Object_t * ___arg0, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m13183((UnityAction_1_t2609 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m13184_GenericMethod;
extern "C" Object_t * UnityAction_1_BeginInvoke_m13184_gshared (UnityAction_1_t2609 * __this, Object_t * ___arg0, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg0;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m13185_GenericMethod;
extern "C" void UnityAction_1_EndInvoke_m13185_gshared (UnityAction_1_t2609 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Stack_1_t2607_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_0.h"
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Void_t103_il2cpp_TypeInfo;
extern TypeInfo Int32_t92_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t514_il2cpp_TypeInfo;
extern TypeInfo ArrayTypeMismatchException_t1901_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2616_il2cpp_TypeInfo;
extern TypeInfo List_1_t301_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_0MethodDeclarations.h"
extern Il2CppType Enumerator_t2616_0_0_0;
extern Il2CppType List_1_t301_0_0_0;
extern MethodInfo Object__ctor_m373_MethodInfo;
extern MethodInfo Array_CopyTo_m5196_MethodInfo;
extern MethodInfo Array_Reverse_m6206_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10503_MethodInfo;
extern MethodInfo Enumerator__ctor_m13212_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m20076_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m20076(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(!!0[]&,System.Int32)
#define Array_Resize_TisList_1_t301_m20450(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, List_1U5BU5D_t2612**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Stack_1_GetEnumerator_m13196_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisList_1_t301_m20450_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13212_GenericMethod;


// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor()
// System.Boolean System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.IEnumerable.GetEnumerator()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Peek()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Pop()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Push(T)
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Count()
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3783_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3322_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_57.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2613_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_57MethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
extern Il2CppType InternalEnumerator_1_t2613_0_0_0;
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
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(System.Int32)
#define Array_InternalArray__get_Item_TisList_1_t301_m20417(__this, p0, method) (( List_1_t301 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13201_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisList_1_t301_m20417_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3784_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3785_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3786_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.ICollection>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.ICollection>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.ICollection>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.ICollection>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.ICollection>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.ICollection>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.ICollection>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3787_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.ICollection>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3788_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.ICollection>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.ICollection>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_58.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2614_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.ICollection>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_58MethodDeclarations.h"

extern TypeInfo ICollection_t913_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2614_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.ICollection>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.ICollection>(System.Int32)
#define Array_InternalArray__get_Item_TisICollection_t913_m20428(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13206_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisICollection_t913_m20428_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.ICollection>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.ICollection>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.ICollection>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.ICollection>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.ICollection>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3789_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.ICollection>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.ICollection>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.ICollection>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.ICollection>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.ICollection>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3790_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.IList>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.IList>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.IList>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.IList>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.IList>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.IList>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.IList>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3791_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.IList>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3792_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.IList>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.IList>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2615_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.IList>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59MethodDeclarations.h"

extern TypeInfo IList_t1102_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2615_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.IList>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.IList>(System.Int32)
#define Array_InternalArray__get_Item_TisIList_t1102_m20439(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13211_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIList_t1102_m20439_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.IList>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.IList>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.IList>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.IList>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.IList>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3793_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.IList>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.IList>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.IList>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.IList>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.IList>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_Current_m13216_GenericMethod;


// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Collections.Generic.Stack`1<T>)
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Dispose()
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::MoveNext()
// T System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Current()
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t281_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_genMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t454_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_10MethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_4.h"
// System.Predicate`1<UnityEngine.Component>
#include "mscorlib_System_Predicate_1_gen_1.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_4.h"
// System.Comparison`1<UnityEngine.Component>
#include "mscorlib_System_Comparison_1_gen_8.h"
extern TypeInfo Component_t95_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t790_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1934_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1144_il2cpp_TypeInfo;
extern TypeInfo ComponentU5BU5D_t2617_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2618_il2cpp_TypeInfo;
extern TypeInfo Boolean_t90_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3324_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3325_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3323_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t169_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t231_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2620_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t820_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t452_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2624_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_4MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.Component>
#include "mscorlib_System_Predicate_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_4MethodDeclarations.h"
extern Il2CppType List_1_t454_0_0_0;
extern Il2CppType ComponentU5BU5D_t2617_0_0_0;
extern Il2CppType Enumerator_t2618_0_0_0;
extern Il2CppType ICollection_1_t3324_0_0_0;
extern Il2CppType IEnumerable_1_t3325_0_0_0;
extern Il2CppType IEnumerator_1_t3323_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2620_0_0_0;
extern Il2CppType Predicate_1_t452_0_0_0;
extern Il2CppType Comparer_1_t2624_0_0_0;
extern MethodInfo List_1_get_Item_m2293_MethodInfo;
extern MethodInfo List_1_set_Item_m13264_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2604_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5195_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5008_MethodInfo;
extern MethodInfo Array_Copy_m7003_MethodInfo;
extern MethodInfo List_1_Add_m13238_MethodInfo;
extern MethodInfo List_1_Contains_m13244_MethodInfo;
extern MethodInfo List_1_IndexOf_m13250_MethodInfo;
extern MethodInfo List_1_Insert_m13253_MethodInfo;
extern MethodInfo List_1_Remove_m13255_MethodInfo;
extern MethodInfo Math_Max_m6173_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m23134_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m23135_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m23136_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m23137_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m5005_MethodInfo;
extern MethodInfo IDisposable_Dispose_m861_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m13271_MethodInfo;
extern MethodInfo Array_Clear_m6165_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3942_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m13345_MethodInfo;
extern MethodInfo Enumerator__ctor_m13265_MethodInfo;
extern MethodInfo List_1_RemoveAt_m13256_MethodInfo;
extern MethodInfo Array_Copy_m7002_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.Component>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Component>(!!0[]&,System.Int32)
#define Array_Resize_TisComponent_t95_m20457(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2617**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m11377_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m11377(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11377_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Component>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Component>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisComponent_t95_m20459(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2617*, Component_t95 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11377_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m20079_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m20079(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20079_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisComponent_t95_m20461(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2617*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20079_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
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
// Declaration System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisComponent_t95_m20469(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2617*, int32_t, Comparison_1_t2626 *, MethodInfo*))Array_Sort_TisObject_t_m20186_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2293_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m13264_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisComponent_t95_m20457_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m13252_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m13249_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m13238_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m13244_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m13250_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m13253_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m13255_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m13239_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m13262_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m13263_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m23134_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m23135_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m23136_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m23137_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m13254_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m13240_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m13241_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m13271_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisComponent_t95_m20459_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m13247_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m13248_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m13345_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13265_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m13251_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m13256_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m13351_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisComponent_t95_m20461_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisComponent_t95_m20469_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Component>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Component>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Component>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Item(System.Int32,T)
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
extern MethodInfo Object_GetType_m2196_MethodInfo;
extern MethodInfo Type_get_FullName_m3974_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m6181_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m13268_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo NotSupportedException_t229_il2cpp_TypeInfo;
extern TypeInfo IList_1_t2619_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t579_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<UnityEngine.Component>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_4MethodDeclarations.h"
extern Il2CppType IList_1_t2619_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m13300_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m829_MethodInfo;
extern MethodInfo IList_1_get_Item_m23138_MethodInfo;
extern MethodInfo ICollection_CopyTo_m4993_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m5149_MethodInfo;
extern MethodInfo ICollection_1_Contains_m23139_MethodInfo;
extern MethodInfo IList_1_IndexOf_m23140_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m13300_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m23138_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m13332_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m23139_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m23140_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Component>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2621_il2cpp_TypeInfo;

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
extern Il2CppType Collection_1_t2621_0_0_0;
extern Il2CppType Component_t95_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m23141_MethodInfo;
extern MethodInfo Collection_1_SetItem_m13331_MethodInfo;
extern MethodInfo List_1__ctor_m13220_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m11376_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m13324_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m13322_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m13327_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m13318_MethodInfo;
extern MethodInfo ICollection_1_Clear_m23142_MethodInfo;
extern MethodInfo IList_1_Insert_m23143_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m23144_MethodInfo;
extern MethodInfo IList_1_set_Item_m23145_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m298_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7055_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m11686_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m11687_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m23141_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m13335_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m13336_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m13333_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m13331_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m13220_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m13324_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m13334_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m13322_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m13327_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m13318_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m23142_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m23143_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m23144_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m23145_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2622_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4.h"
extern TypeInfo TypeU5BU5D_t97_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2623_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2622_0_0_0;
extern Il2CppType IEquatable_1_t3794_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2333_0_0_0;
extern Il2CppType TypeU5BU5D_t97_0_0_0;
extern Il2CppType DefaultComparer_t2623_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m3955_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3953_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10477_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m13342_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23146_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m20458_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13342_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23146_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m20458_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3795_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3794_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Component>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m441_MethodInfo;
extern MethodInfo Object_Equals_m440_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m13337_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.Component>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.Component>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_4.h"
extern TypeInfo DefaultComparer_t2625_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_4MethodDeclarations.h"
extern Il2CppType IComparable_1_t3534_0_0_0;
extern Il2CppType GenericComparer_1_t2263_0_0_0;
extern Il2CppType DefaultComparer_t2625_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13352_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23147_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13352_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23147_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Component>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Component>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Component>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Component>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Component>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3533_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Component>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3534_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.Component>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t108_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m20467_MethodInfo;
extern MethodInfo IComparable_CompareTo_m11342_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m13348_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m20467_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Component>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Component>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2626_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.Component>
#include "mscorlib_System_Comparison_1_gen_8MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.Component>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.Component>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t274_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_0MethodDeclarations.h"

// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"


// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t253_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"

// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
#include "UnityEngine.UI_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_5.h"
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Predicate_1_gen_8.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_5.h"
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Comparison_1_gen.h"
extern TypeInfo RaycastResult_t254_il2cpp_TypeInfo;
extern TypeInfo RaycastResultU5BU5D_t2627_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2629_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3327_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3328_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3326_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2631_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2635_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2636_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_5MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Predicate_1_gen_8MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_5MethodDeclarations.h"
extern Il2CppType List_1_t253_0_0_0;
extern Il2CppType RaycastResultU5BU5D_t2627_0_0_0;
extern Il2CppType Enumerator_t2629_0_0_0;
extern Il2CppType ICollection_1_t3327_0_0_0;
extern Il2CppType IEnumerable_1_t3328_0_0_0;
extern Il2CppType IEnumerator_1_t3326_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2631_0_0_0;
extern Il2CppType Predicate_1_t2635_0_0_0;
extern Il2CppType Comparer_1_t2636_0_0_0;
extern MethodInfo List_1_get_Item_m2176_MethodInfo;
extern MethodInfo List_1_set_Item_m13403_MethodInfo;
extern MethodInfo List_1_Add_m2246_MethodInfo;
extern MethodInfo List_1_Contains_m13383_MethodInfo;
extern MethodInfo List_1_IndexOf_m13389_MethodInfo;
extern MethodInfo List_1_Insert_m13392_MethodInfo;
extern MethodInfo List_1_Remove_m13394_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m23148_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m23149_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m23150_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m23151_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m13415_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m13490_MethodInfo;
extern MethodInfo Enumerator__ctor_m13409_MethodInfo;
extern MethodInfo List_1_RemoveAt_m13396_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisRaycastResult_t254_m20486_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2627** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisRaycastResult_t254_m20486(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2627**, int32_t, MethodInfo*))Array_Resize_TisRaycastResult_t254_m20486_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.RaycastResult>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.RaycastResult>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisRaycastResult_t254_m20488_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2627* p0, RaycastResult_t254  p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisRaycastResult_t254_m20488(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2627*, RaycastResult_t254 , int32_t, int32_t, MethodInfo*))Array_IndexOf_TisRaycastResult_t254_m20488_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisRaycastResult_t254_m20490_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2627* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisRaycastResult_t254_m20490(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2627*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisRaycastResult_t254_m20490_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisRaycastResult_t254_m20498_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2627* p0, int32_t p1, Comparison_1_t249 * p2, MethodInfo* method);
#define Array_Sort_TisRaycastResult_t254_m20498(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2627*, int32_t, Comparison_1_t249 *, MethodInfo*))Array_Sort_TisRaycastResult_t254_m20498_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2176_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m13403_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisRaycastResult_t254_m20486_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m13391_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m13388_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m2246_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m13383_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m13389_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m13392_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m13394_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m13378_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m13401_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m13402_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m23148_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m23149_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m23150_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m23151_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m13393_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m13379_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m13380_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m13415_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisRaycastResult_t254_m20488_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m13386_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m13387_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m13490_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13409_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m13390_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m13396_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m13496_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRaycastResult_t254_m20490_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRaycastResult_t254_m20498_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod List_1__ctor_m2175_GenericMethod;
extern "C" void List_1__ctor_m2175_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResultU5BU5D_t2627* L_0 = ((List_1_t253_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern Il2CppGenericMethod List_1__ctor_m13361_GenericMethod;
extern "C" void List_1__ctor_m13361_gshared (List_1_t253 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1144 * L_1 = (ArgumentOutOfRangeException_t1144 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1144_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5008(L_1, (String_t*) &_stringLiteral1429, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5008_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((RaycastResultU5BU5D_t2627*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern Il2CppGenericMethod List_1__cctor_m13362_GenericMethod;
extern "C" void List_1__cctor_m13362_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((List_1_t253_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((RaycastResultU5BU5D_t2627*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13363_GenericMethod;
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13363_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		Enumerator_t2629  L_0 = (( Enumerator_t2629  (*) (List_1_t253 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2629  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_ICollection_CopyTo_m13364_GenericMethod;
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13364_gshared (List_1_t253 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2627* L_0 = (__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m7003(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m7003_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_IEnumerable_GetEnumerator_m13365_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13365_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		Enumerator_t2629  L_0 = (( Enumerator_t2629  (*) (List_1_t253 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2629  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Add_m13366_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_Add_m13366_gshared (List_1_t253 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			VirtActionInvoker1< RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), __this, ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			int32_t L_1 = (__this->____size_2);
			V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t234 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t790_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1934_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t514 * L_2 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_2, (String_t*) &_stringLiteral1442, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Contains_m13367_GenericMethod;
extern "C" bool List_1_System_Collections_IList_Contains_m13367_gshared (List_1_t253 * __this, Object_t * ___item, MethodInfo* method)
{
	bool V_0 = false;
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			bool L_1 = (bool)VirtFuncInvoker1< bool, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t234 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t790_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1934_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_IndexOf_m13368_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13368_gshared (List_1_t253 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t234 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t790_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1934_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Insert_m13369_GenericMethod;
extern "C" void List_1_System_Collections_IList_Insert_m13369_gshared (List_1_t253 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t253 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			VirtActionInvoker2< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), __this, L_1, ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t234 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t790_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1934_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t514 * L_3 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_3, (String_t*) &_stringLiteral1442, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Remove_m13370_GenericMethod;
extern "C" void List_1_System_Collections_IList_Remove_m13370_gshared (List_1_t253 * __this, Object_t * ___item, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			VirtFuncInvoker1< bool, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t234 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t790_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1934_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13371_GenericMethod;
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13371_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_IsSynchronized_m13372_GenericMethod;
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13372_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_SyncRoot_m13373_GenericMethod;
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13373_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsFixedSize_m13374_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13374_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsReadOnly_m13375_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13375_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_IList_get_Item_m13376_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13376_gshared (List_1_t253 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t254  L_1 = (RaycastResult_t254 )VirtFuncInvoker1< RaycastResult_t254 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, L_0);
		RaycastResult_t254  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_set_Item_m13377_GenericMethod;
extern "C" void List_1_System_Collections_IList_set_Item_m13377_gshared (List_1_t253 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			VirtActionInvoker2< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0, ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t234 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t790_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1934_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t514 * L_2 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_2, (String_t*) &_stringLiteral633, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m2246_gshared (List_1_t253 * __this, RaycastResult_t254  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		RaycastResultU5BU5D_t2627* L_1 = (__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		(( void (*) (List_1_t253 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0017:
	{
		RaycastResultU5BU5D_t2627* L_2 = (__this->____items_1);
		int32_t L_3 = (__this->____size_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		RaycastResult_t254  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((RaycastResult_t254 *)(RaycastResult_t254 *)SZArrayLdElema(L_2, L_5)) = (RaycastResult_t254 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13378_gshared (List_1_t253 * __this, int32_t ___newCount, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		RaycastResultU5BU5D_t2627* L_3 = (__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = (( int32_t (*) (List_1_t253 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		int32_t L_5 = Math_Max_m6173(NULL /*static, unused*/, ((int32_t)((int32_t)L_4*(int32_t)2)), 4, /*hidden argument*/&Math_Max_m6173_MethodInfo);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m6173(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Math_Max_m6173_MethodInfo);
		(( void (*) (List_1_t253 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13379_gshared (List_1_t253 * __this, Object_t* ___collection, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		(( void (*) (List_1_t253 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		Object_t* L_4 = ___collection;
		RaycastResultU5BU5D_t2627* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		NullCheck(L_4);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2627*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), L_4, L_5, L_6);
		int32_t L_7 = (__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13380_gshared (List_1_t253 * __this, Object_t* ___enumerable, MethodInfo* method)
{
	RaycastResult_t254  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck(L_2);
			RaycastResult_t254  L_3 = (RaycastResult_t254 )InterfaceFuncInvoker0< RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_2);
			V_0 = L_3;
			RaycastResult_t254  L_4 = V_0;
			VirtActionInvoker1< RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), __this, L_4);
		}

IL_0017:
		{
			Object_t* L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m5005_MethodInfo, L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(33)
		}

IL_0025:
		{
			Object_t* L_8 = V_1;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1_AddRange_m13381_GenericMethod;
extern "C" void List_1_AddRange_m13381_gshared (List_1_t253 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t253 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		Object_t* L_1 = ___collection;
		V_0 = ((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_3 = V_0;
		(( void (*) (List_1_t253 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t253 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
	}

IL_0021:
	{
		int32_t L_5 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern Il2CppGenericMethod List_1_AsReadOnly_m13382_GenericMethod;
extern "C" ReadOnlyCollection_1_t2631 * List_1_AsReadOnly_m13382_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2631 * L_0 = (ReadOnlyCollection_1_t2631 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (ReadOnlyCollection_1_t2631 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern Il2CppGenericMethod List_1_Clear_m2104_GenericMethod;
extern "C" void List_1_Clear_m2104_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2627* L_0 = (__this->____items_1);
		RaycastResultU5BU5D_t2627* L_1 = (__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m6165(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m6165_MethodInfo);
		__this->____size_2 = 0;
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m13383_gshared (List_1_t253 * __this, RaycastResult_t254  ___item, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2627* L_0 = (__this->____items_1);
		RaycastResult_t254  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2627*, RaycastResult_t254 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod List_1_CopyTo_m13384_GenericMethod;
extern "C" void List_1_CopyTo_m13384_gshared (List_1_t253 * __this, RaycastResultU5BU5D_t2627* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2627* L_0 = (__this->____items_1);
		RaycastResultU5BU5D_t2627* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m7003(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (Array_t *)(Array_t *)L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m7003_MethodInfo);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_Find_m13385_GenericMethod;
extern TypeInfo* List_1_t253_il2cpp_TypeInfo_var;
extern "C" RaycastResult_t254  List_1_Find_m13385_gshared (List_1_t253 * __this, Predicate_1_t2635 * ___match, MethodInfo* method)
{
	static bool List_1_Find_m13385_init;
	if (!List_1_Find_m13385_init)
	{
		List_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t253_0_0_0);
		List_1_Find_m13385_init = true;
	}
	int32_t V_0 = 0;
	RaycastResult_t254  V_1 = {0};
	RaycastResult_t254  G_B3_0 = {0};
	{
		Predicate_1_t2635 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t253_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2635 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		int32_t L_1 = (__this->____size_2);
		Predicate_1_t2635 * L_2 = ___match;
		int32_t L_3 = (( int32_t (*) (List_1_t253 *, int32_t, int32_t, Predicate_1_t2635 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(__this, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		RaycastResultU5BU5D_t2627* L_5 = (__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(RaycastResult_t254 *)(RaycastResult_t254 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (InitializedTypeInfo(&RaycastResult_t254_il2cpp_TypeInfo), (&V_1));
		RaycastResult_t254  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13386_gshared (Object_t * __this /* static, unused */, Predicate_1_t2635 * ___match, MethodInfo* method)
{
	{
		Predicate_1_t2635 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t820 * L_1 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_1, (String_t*) &_stringLiteral1266, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13387_gshared (List_1_t253 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2635 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = L_2;
		goto IL_0022;
	}

IL_0008:
	{
		Predicate_1_t2635 * L_3 = ___match;
		RaycastResultU5BU5D_t2627* L_4 = (__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, (*(RaycastResult_t254 *)(RaycastResult_t254 *)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t2629  List_1_GetEnumerator_m13388_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		Enumerator_t2629  L_0 = {0};
		(( void (*) (Enumerator_t2629 *, List_1_t253 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13389_gshared (List_1_t253 * __this, RaycastResult_t254  ___item, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2627* L_0 = (__this->____items_1);
		RaycastResult_t254  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2627*, RaycastResult_t254 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13390_gshared (List_1_t253 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = ((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		RaycastResultU5BU5D_t2627* L_5 = (__this->____items_1);
		int32_t L_6 = ___start;
		RaycastResultU5BU5D_t2627* L_7 = (__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m7003(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, (Array_t *)(Array_t *)L_7, ((int32_t)((int32_t)L_8+(int32_t)L_9)), ((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/&Array_Copy_m7003_MethodInfo);
	}

IL_0031:
	{
		int32_t L_12 = (__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		RaycastResultU5BU5D_t2627* L_15 = (__this->____items_1);
		int32_t L_16 = (__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m6165(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, ((-L_17)), /*hidden argument*/&Array_Clear_m6165_MethodInfo);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13391_gshared (List_1_t253 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1144 * L_3 = (ArgumentOutOfRangeException_t1144 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1144_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5008(L_3, (String_t*) &_stringLiteral431, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5008_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13392_gshared (List_1_t253 * __this, int32_t ___index, RaycastResult_t254  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t253 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = (__this->____size_2);
		RaycastResultU5BU5D_t2627* L_2 = (__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		(( void (*) (List_1_t253 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		(( void (*) (List_1_t253 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_3, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		RaycastResultU5BU5D_t2627* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		RaycastResult_t254  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((RaycastResult_t254 *)(RaycastResult_t254 *)SZArrayLdElema(L_4, L_5)) = (RaycastResult_t254 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13393_gshared (List_1_t253 * __this, Object_t* ___collection, MethodInfo* method)
{
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t820 * L_1 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_1, (String_t*) &_stringLiteral1443, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m13394_gshared (List_1_t253 * __this, RaycastResult_t254  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		RaycastResult_t254  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32), __this, L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_RemoveAll_m13395_GenericMethod;
extern TypeInfo* List_1_t253_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m13395_gshared (List_1_t253 * __this, Predicate_1_t2635 * ___match, MethodInfo* method)
{
	static bool List_1_RemoveAll_m13395_init;
	if (!List_1_RemoveAll_m13395_init)
	{
		List_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t253_0_0_0);
		List_1_RemoveAll_m13395_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2635 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t253_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2635 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t2635 * L_1 = ___match;
		RaycastResultU5BU5D_t2627* L_2 = (__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_1, (*(RaycastResult_t254 *)(RaycastResult_t254 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_11 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0084;
	}

IL_0050:
	{
		Predicate_1_t2635 * L_13 = ___match;
		RaycastResultU5BU5D_t2627* L_14 = (__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck(L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_13, (*(RaycastResult_t254 *)(RaycastResult_t254 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		RaycastResultU5BU5D_t2627* L_18 = (__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		RaycastResultU5BU5D_t2627* L_21 = (__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((RaycastResult_t254 *)(RaycastResult_t254 *)SZArrayLdElema(L_18, L_20)) = (RaycastResult_t254 )(*(RaycastResult_t254 *)(RaycastResult_t254 *)SZArrayLdElema(L_21, L_23));
	}

IL_0080:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		RaycastResultU5BU5D_t2627* L_29 = (__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m6165(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, L_30, ((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/&Array_Clear_m6165_MethodInfo);
	}

IL_00a2:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13396_gshared (List_1_t253 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1144 * L_3 = (ArgumentOutOfRangeException_t1144 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1144_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5008(L_3, (String_t*) &_stringLiteral431, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5008_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		(( void (*) (List_1_t253 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_4, (-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		RaycastResultU5BU5D_t2627* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		Array_Clear_m6165(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, 1, /*hidden argument*/&Array_Clear_m6165_MethodInfo);
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern Il2CppGenericMethod List_1_Reverse_m13397_GenericMethod;
extern "C" void List_1_Reverse_m13397_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2627* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Array_Reverse_m6206(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, /*hidden argument*/&Array_Reverse_m6206_MethodInfo);
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern Il2CppGenericMethod List_1_Sort_m13398_GenericMethod;
extern TypeInfo* Comparer_1_t2636_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m13398_gshared (List_1_t253 * __this, MethodInfo* method)
{
	static bool List_1_Sort_m13398_init;
	if (!List_1_Sort_m13398_init)
	{
		Comparer_1_t2636_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Comparer_1_t2636_0_0_0);
		List_1_Sort_m13398_init = true;
	}
	{
		RaycastResultU5BU5D_t2627* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2636_il2cpp_TypeInfo_var);
		Comparer_1_t2636 * L_2 = (( Comparer_1_t2636 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2627*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, L_0, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern Il2CppGenericMethod List_1_Sort_m2118_GenericMethod;
extern "C" void List_1_Sort_m2118_gshared (List_1_t253 * __this, Comparison_1_t249 * ___comparison, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2627* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Comparison_1_t249 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2627*, int32_t, Comparison_1_t249 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern Il2CppGenericMethod List_1_ToArray_m13399_GenericMethod;
extern "C" RaycastResultU5BU5D_t2627* List_1_ToArray_m13399_gshared (List_1_t253 * __this, MethodInfo* method)
{
	RaycastResultU5BU5D_t2627* V_0 = {0};
	{
		int32_t L_0 = (__this->____size_2);
		V_0 = ((RaycastResultU5BU5D_t2627*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_0));
		RaycastResultU5BU5D_t2627* L_1 = (__this->____items_1);
		RaycastResultU5BU5D_t2627* L_2 = V_0;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m7002(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/&Array_Copy_m7002_MethodInfo);
		RaycastResultU5BU5D_t2627* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern Il2CppGenericMethod List_1_TrimExcess_m13400_GenericMethod;
extern "C" void List_1_TrimExcess_m13400_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		(( void (*) (List_1_t253 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13401_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2627* L_0 = (__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13402_gshared (List_1_t253 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1144 * L_2 = (ArgumentOutOfRangeException_t1144 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1144_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5195(L_2, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5195_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		RaycastResultU5BU5D_t2627** L_3 = &(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2627**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern Il2CppGenericMethod List_1_get_Count_m2177_GenericMethod;
extern "C" int32_t List_1_get_Count_m2177_gshared (List_1_t253 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t254  List_1_get_Item_m2176_gshared (List_1_t253 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1144 * L_2 = (ArgumentOutOfRangeException_t1144 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1144_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5008(L_2, (String_t*) &_stringLiteral431, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5008_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		RaycastResultU5BU5D_t2627* L_3 = (__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(RaycastResult_t254 *)(RaycastResult_t254 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13403_gshared (List_1_t253 * __this, int32_t ___index, RaycastResult_t254  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t253 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t1144 * L_3 = (ArgumentOutOfRangeException_t1144 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1144_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5008(L_3, (String_t*) &_stringLiteral431, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5008_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		RaycastResultU5BU5D_t2627* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		RaycastResult_t254  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((RaycastResult_t254 *)(RaycastResult_t254 *)SZArrayLdElema(L_4, L_5)) = (RaycastResult_t254 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_60.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2628_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_60MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2628_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
extern "C" RaycastResult_t254  Array_InternalArray__get_Item_TisRaycastResult_t254_m20475_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastResult_t254_m20475(__this, p0, method) (( RaycastResult_t254  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisRaycastResult_t254_m20475_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13408_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRaycastResult_t254_m20475_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m13404_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m13404_gshared (InternalEnumerator_1_t2628 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13405_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13405_gshared (InternalEnumerator_1_t2628 * __this, MethodInfo* method)
{
	{
		RaycastResult_t254  L_0 = (( RaycastResult_t254  (*) (InternalEnumerator_1_t2628 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResult_t254  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m13406_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m13406_gshared (InternalEnumerator_1_t2628 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m13407_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m13407_gshared (InternalEnumerator_1_t2628 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern "C" RaycastResult_t254  InternalEnumerator_1_get_Current_m13408_gshared (InternalEnumerator_1_t2628 * __this, MethodInfo* method)
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
		RaycastResult_t254  L_8 = (( RaycastResult_t254  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2630_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m13412_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m13409_gshared (Enumerator_t2629 * __this, List_1_t253 * ___l, MethodInfo* method)
{
	{
		List_1_t253 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t253 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m13410_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13410_gshared (Enumerator_t2629 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2629 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1143 * L_1 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5007(L_1, /*hidden argument*/&InvalidOperationException__ctor_m5007_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		RaycastResult_t254  L_2 = (__this->___current_3);
		RaycastResult_t254  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m13411_GenericMethod;
extern "C" void Enumerator_Dispose_m13411_gshared (Enumerator_t2629 * __this, MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t253 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::VerifyState()
extern "C" void Enumerator_VerifyState_m13412_gshared (Enumerator_t2629 * __this, MethodInfo* method)
{
	{
		List_1_t253 * L_0 = (__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t2629  L_1 = (*(Enumerator_t2629 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m2196(L_2, /*hidden argument*/&Object_GetType_m2196_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3974_MethodInfo, L_3);
		ObjectDisposedException_t1323 * L_5 = (ObjectDisposedException_t1323 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1323_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m6181(L_5, L_4, /*hidden argument*/&ObjectDisposedException__ctor_m6181_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (__this->___ver_2);
		List_1_t253 * L_7 = (__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1143 * L_9 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_9, (String_t*) &_stringLiteral1444, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m13413_GenericMethod;
extern "C" bool Enumerator_MoveNext_m13413_gshared (Enumerator_t2629 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2629 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		int32_t L_1 = (__this->___next_1);
		List_1_t253 * L_2 = (__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t253 * L_4 = (__this->___l_0);
		NullCheck(L_4);
		RaycastResultU5BU5D_t2627* L_5 = (L_4->____items_1);
		int32_t L_6 = (__this->___next_1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(RaycastResult_t254 *)(RaycastResult_t254 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m13414_GenericMethod;
extern "C" RaycastResult_t254  Enumerator_get_Current_m13414_gshared (Enumerator_t2629 * __this, MethodInfo* method)
{
	{
		RaycastResult_t254  L_0 = (__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_5MethodDeclarations.h"
extern Il2CppType IList_1_t2630_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m13444_MethodInfo;
extern MethodInfo IList_1_get_Item_m23152_MethodInfo;
extern MethodInfo ICollection_1_Contains_m23153_MethodInfo;
extern MethodInfo IList_1_IndexOf_m23154_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m13444_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m23152_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m13476_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m23153_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m23154_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m13415_gshared (ReadOnlyCollection_1_t2631 * __this, Object_t* ___list, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t820 * L_1 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_1, (String_t*) &_stringLiteral1445, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Add(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13416_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13416_gshared (ReadOnlyCollection_1_t2631 * __this, RaycastResult_t254  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m829(L_0, /*hidden argument*/&NotSupportedException__ctor_m829_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m13417_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m13417_gshared (ReadOnlyCollection_1_t2631 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m829(L_0, /*hidden argument*/&NotSupportedException__ctor_m829_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m13418_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m13418_gshared (ReadOnlyCollection_1_t2631 * __this, int32_t ___index, RaycastResult_t254  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m829(L_0, /*hidden argument*/&NotSupportedException__ctor_m829_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Remove(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m13419_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m13419_gshared (ReadOnlyCollection_1_t2631 * __this, RaycastResult_t254  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m829(L_0, /*hidden argument*/&NotSupportedException__ctor_m829_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m13420_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m13420_gshared (ReadOnlyCollection_1_t2631 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m829(L_0, /*hidden argument*/&NotSupportedException__ctor_m829_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m13421_GenericMethod;
extern "C" RaycastResult_t254  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m13421_gshared (ReadOnlyCollection_1_t2631 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t254  L_1 = (RaycastResult_t254 )VirtFuncInvoker1< RaycastResult_t254 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this, L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m13422_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m13422_gshared (ReadOnlyCollection_1_t2631 * __this, int32_t ___index, RaycastResult_t254  ___value, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m829(L_0, /*hidden argument*/&NotSupportedException__ctor_m829_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13423_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13423_gshared (ReadOnlyCollection_1_t2631 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m13424_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m13424_gshared (ReadOnlyCollection_1_t2631 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t913_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m4993_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t913_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m13425_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m13425_gshared (ReadOnlyCollection_1_t2631 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m5149_MethodInfo, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Add_m13426_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m13426_gshared (ReadOnlyCollection_1_t2631 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m829(L_0, /*hidden argument*/&NotSupportedException__ctor_m829_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Clear_m13427_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m13427_gshared (ReadOnlyCollection_1_t2631 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m829(L_0, /*hidden argument*/&NotSupportedException__ctor_m829_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Contains_m13428_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m13428_gshared (ReadOnlyCollection_1_t2631 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_2, ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_IndexOf_m13429_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m13429_gshared (ReadOnlyCollection_1_t2631 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2, ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Insert_m13430_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m13430_gshared (ReadOnlyCollection_1_t2631 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m829(L_0, /*hidden argument*/&NotSupportedException__ctor_m829_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Remove_m13431_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m13431_gshared (ReadOnlyCollection_1_t2631 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m829(L_0, /*hidden argument*/&NotSupportedException__ctor_m829_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m13432_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m13432_gshared (ReadOnlyCollection_1_t2631 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m829(L_0, /*hidden argument*/&NotSupportedException__ctor_m829_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m13433_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m13433_gshared (ReadOnlyCollection_1_t2631 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13434_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13434_gshared (ReadOnlyCollection_1_t2631 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13435_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13435_gshared (ReadOnlyCollection_1_t2631 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13436_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13436_gshared (ReadOnlyCollection_1_t2631 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_Item_m13437_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m13437_gshared (ReadOnlyCollection_1_t2631 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t254  L_2 = (RaycastResult_t254 )InterfaceFuncInvoker1< RaycastResult_t254 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		RaycastResult_t254  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_set_Item_m13438_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m13438_gshared (ReadOnlyCollection_1_t2631 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m829(L_0, /*hidden argument*/&NotSupportedException__ctor_m829_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_Contains_m13439_GenericMethod;
extern "C" bool ReadOnlyCollection_1_Contains_m13439_gshared (ReadOnlyCollection_1_t2631 * __this, RaycastResult_t254  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t254  L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_CopyTo_m13440_GenericMethod;
extern "C" void ReadOnlyCollection_1_CopyTo_m13440_gshared (ReadOnlyCollection_1_t2631 * __this, RaycastResultU5BU5D_t2627* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResultU5BU5D_t2627* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2627*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_GetEnumerator_m13441_GenericMethod;
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m13441_gshared (ReadOnlyCollection_1_t2631 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_IndexOf_m13442_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m13442_gshared (ReadOnlyCollection_1_t2631 * __this, RaycastResult_t254  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t254  L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Count_m13443_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_get_Count_m13443_gshared (ReadOnlyCollection_1_t2631 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t254  ReadOnlyCollection_1_get_Item_m13444_gshared (ReadOnlyCollection_1_t2631 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t254  L_2 = (RaycastResult_t254 )InterfaceFuncInvoker1< RaycastResult_t254 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2632_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2632_0_0_0;
extern Il2CppType RaycastResult_t254_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m23155_MethodInfo;
extern MethodInfo Collection_1_SetItem_m13475_MethodInfo;
extern MethodInfo List_1__ctor_m2175_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m13468_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m13466_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m13471_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m13462_MethodInfo;
extern MethodInfo ICollection_1_Clear_m23156_MethodInfo;
extern MethodInfo IList_1_Insert_m23157_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m23158_MethodInfo;
extern MethodInfo IList_1_set_Item_m23159_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m23155_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m13479_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m13480_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m13477_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m13475_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m13468_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m13478_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m13466_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m13471_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m13462_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m23156_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m23157_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m23158_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m23159_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod Collection_1__ctor_m13445_GenericMethod;
extern TypeInfo* List_1_t253_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m13445_gshared (Collection_1_t2632 * __this, MethodInfo* method)
{
	static bool Collection_1__ctor_m13445_init;
	if (!Collection_1__ctor_m13445_init)
	{
		List_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t253_0_0_0);
		Collection_1__ctor_m13445_init = true;
	}
	List_1_t253 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t253_il2cpp_TypeInfo_var);
		List_1_t253 * L_0 = (List_1_t253 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t253 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = L_0;
		List_1_t253 * L_1 = V_0;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m11376_MethodInfo, L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t253 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13446_GenericMethod;
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13446_gshared (Collection_1_t2632 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_CopyTo_m13447_GenericMethod;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m13447_gshared (Collection_1_t2632 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t913_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m4993_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t913_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Collection_1_System_Collections_IEnumerable_GetEnumerator_m13448_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m13448_gshared (Collection_1_t2632 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Add_m13449_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_Add_m13449_gshared (Collection_1_t2632 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		RaycastResult_t254  L_4 = (( RaycastResult_t254  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Contains_m13450_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_Contains_m13450_gshared (Collection_1_t2632 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_2, ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_IndexOf_m13451_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m13451_gshared (Collection_1_t2632 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_2, ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Insert_m13452_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Insert_m13452_gshared (Collection_1_t2632 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		RaycastResult_t254  L_2 = (( RaycastResult_t254  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Remove_m13453_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Remove_m13453_gshared (Collection_1_t2632 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_1 = ___value;
		RaycastResult_t254  L_2 = (( RaycastResult_t254  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_IsSynchronized_m13454_GenericMethod;
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m13454_gshared (Collection_1_t2632 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_SyncRoot_m13455_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m13455_gshared (Collection_1_t2632 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsFixedSize_m13456_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m13456_gshared (Collection_1_t2632 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsReadOnly_m13457_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m13457_gshared (Collection_1_t2632 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_Item_m13458_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m13458_gshared (Collection_1_t2632 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t254  L_2 = (RaycastResult_t254 )InterfaceFuncInvoker1< RaycastResult_t254 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		RaycastResult_t254  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_set_Item_m13459_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_set_Item_m13459_gshared (Collection_1_t2632 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		RaycastResult_t254  L_2 = (( RaycastResult_t254  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern Il2CppGenericMethod Collection_1_Add_m13460_GenericMethod;
extern "C" void Collection_1_Add_m13460_gshared (Collection_1_t2632 * __this, RaycastResult_t254  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		RaycastResult_t254  L_3 = ___item;
		VirtActionInvoker2< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern Il2CppGenericMethod Collection_1_Clear_m13461_GenericMethod;
extern "C" void Collection_1_Clear_m13461_gshared (Collection_1_t2632 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), __this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::ClearItems()
extern "C" void Collection_1_ClearItems_m13462_gshared (Collection_1_t2632 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern Il2CppGenericMethod Collection_1_Contains_m13463_GenericMethod;
extern "C" bool Collection_1_Contains_m13463_gshared (Collection_1_t2632 * __this, RaycastResult_t254  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t254  L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod Collection_1_CopyTo_m13464_GenericMethod;
extern "C" void Collection_1_CopyTo_m13464_gshared (Collection_1_t2632 * __this, RaycastResultU5BU5D_t2627* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResultU5BU5D_t2627* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2627*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern Il2CppGenericMethod Collection_1_GetEnumerator_m13465_GenericMethod;
extern "C" Object_t* Collection_1_GetEnumerator_m13465_gshared (Collection_1_t2632 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m13466_gshared (Collection_1_t2632 * __this, RaycastResult_t254  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t254  L_1 = ___item;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern Il2CppGenericMethod Collection_1_Insert_m13467_GenericMethod;
extern "C" void Collection_1_Insert_m13467_gshared (Collection_1_t2632 * __this, int32_t ___index, RaycastResult_t254  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t254  L_1 = ___item;
		VirtActionInvoker2< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m13468_gshared (Collection_1_t2632 * __this, int32_t ___index, RaycastResult_t254  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		RaycastResult_t254  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern Il2CppGenericMethod Collection_1_Remove_m13469_GenericMethod;
extern "C" bool Collection_1_Remove_m13469_gshared (Collection_1_t2632 * __this, RaycastResult_t254  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		RaycastResult_t254  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern Il2CppGenericMethod Collection_1_RemoveAt_m13470_GenericMethod;
extern "C" void Collection_1_RemoveAt_m13470_gshared (Collection_1_t2632 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m13471_gshared (Collection_1_t2632 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0, L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern Il2CppGenericMethod Collection_1_get_Count_m13472_GenericMethod;
extern "C" int32_t Collection_1_get_Count_m13472_gshared (Collection_1_t2632 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_get_Item_m13473_GenericMethod;
extern "C" RaycastResult_t254  Collection_1_get_Item_m13473_gshared (Collection_1_t2632 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t254  L_2 = (RaycastResult_t254 )InterfaceFuncInvoker1< RaycastResult_t254 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern Il2CppGenericMethod Collection_1_set_Item_m13474_GenericMethod;
extern "C" void Collection_1_set_Item_m13474_gshared (Collection_1_t2632 * __this, int32_t ___index, RaycastResult_t254  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t254  L_1 = ___value;
		VirtActionInvoker2< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m13475_gshared (Collection_1_t2632 * __this, int32_t ___index, RaycastResult_t254  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		RaycastResult_t254  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m13476_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m7055_MethodInfo, L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::ConvertItem(System.Object)
extern "C" RaycastResult_t254  Collection_1_ConvertItem_m13477_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_000f:
	{
		ArgumentException_t514 * L_3 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_3, (String_t*) &_stringLiteral1442, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m13478_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	{
		Object_t* L_0 = ___list;
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t229 * L_2 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t229_il2cpp_TypeInfo));
		NotSupportedException__ctor_m829(L_2, /*hidden argument*/&NotSupportedException__ctor_m829_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m13479_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&ICollection_t913_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&ICollection_get_IsSynchronized_m11686_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m13480_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&IList_t1102_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IList_get_IsFixedSize_m11687_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2633_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5.h"
extern TypeInfo DefaultComparer_t2634_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2633_0_0_0;
extern Il2CppType IEquatable_1_t3796_0_0_0;
extern Il2CppType DefaultComparer_t2634_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13486_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23160_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m20487_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13486_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23160_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m20487_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m13481_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m13481_gshared (EqualityComparer_1_t2633 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m13482_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m13482_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2634 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2634 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2634 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t2633_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m13483_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m13483_gshared (EqualityComparer_1_t2633 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m13484_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m13484_gshared (EqualityComparer_1_t2633 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, RaycastResult_t254 , RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m13485_GenericMethod;
extern "C" EqualityComparer_1_t2633 * EqualityComparer_1_get_Default_m13485_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2633 * L_0 = ((EqualityComparer_1_t2633_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3797_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3796_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.RaycastResult>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m13486_gshared (DefaultComparer_t2634 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2633 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m13487_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m13487_gshared (DefaultComparer_t2634 * __this, RaycastResult_t254  ___obj, MethodInfo* method)
{
	{
		RaycastResult_t254  L_0 = ___obj;
		RaycastResult_t254  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m13488_GenericMethod;
extern "C" bool DefaultComparer_Equals_m13488_gshared (DefaultComparer_t2634 * __this, RaycastResult_t254  ___x, RaycastResult_t254  ___y, MethodInfo* method)
{
	{
		RaycastResult_t254  L_0 = ___x;
		RaycastResult_t254  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		RaycastResult_t254  L_3 = ___y;
		RaycastResult_t254  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		RaycastResult_t254  L_6 = ___y;
		RaycastResult_t254  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m440_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Predicate_1__ctor_m13489_GenericMethod;
extern "C" void Predicate_1__ctor_m13489_gshared (Predicate_1_t2635 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m13490_gshared (Predicate_1_t2635 * __this, RaycastResult_t254  ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m13490((Predicate_1_t2635 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastResult_t254  ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef bool (*FunctionPointerType) (Object_t * __this, RaycastResult_t254  ___obj, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Predicate_1_BeginInvoke_m13491_GenericMethod;
extern "C" Object_t * Predicate_1_BeginInvoke_m13491_gshared (Predicate_1_t2635 * __this, RaycastResult_t254  ___obj, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&RaycastResult_t254_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Predicate_1_EndInvoke_m13492_GenericMethod;
extern "C" bool Predicate_1_EndInvoke_m13492_gshared (Predicate_1_t2635 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_5.h"
extern TypeInfo DefaultComparer_t2637_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_5MethodDeclarations.h"
extern Il2CppType IComparable_1_t3536_0_0_0;
extern Il2CppType DefaultComparer_t2637_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13497_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23161_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13497_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23161_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m13493_GenericMethod;
extern "C" void Comparer_1__ctor_m13493_gshared (Comparer_1_t2636 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m13494_GenericMethod;
extern "C" void Comparer_1__cctor_m13494_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2637 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2637 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2637 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t2636_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m13495_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m13495_gshared (Comparer_1_t2636 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
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
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, RaycastResult_t254 , RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(RaycastResult_t254 *)((RaycastResult_t254 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t514 * L_8 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m10503(L_8, /*hidden argument*/&ArgumentException__ctor_m10503_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::get_Default()
extern "C" Comparer_1_t2636 * Comparer_1_get_Default_m13496_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2636 * L_0 = ((Comparer_1_t2636_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3535_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3536_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.RaycastResult>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m20496_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m20496_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m13497_gshared (DefaultComparer_t2637 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t2636 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m13498_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m13498_gshared (DefaultComparer_t2637 * __this, RaycastResult_t254  ___x, RaycastResult_t254  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		RaycastResult_t254  L_0 = ___x;
		RaycastResult_t254  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		RaycastResult_t254  L_3 = ___y;
		RaycastResult_t254  L_4 = L_3;
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
		RaycastResult_t254  L_6 = ___y;
		RaycastResult_t254  L_7 = L_6;
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
		RaycastResult_t254  L_9 = ___x;
		RaycastResult_t254  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		RaycastResult_t254  L_12 = ___x;
		RaycastResult_t254  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		RaycastResult_t254  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t254  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		RaycastResult_t254  L_17 = ___x;
		RaycastResult_t254  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t108_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		RaycastResult_t254  L_20 = ___x;
		RaycastResult_t254  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		RaycastResult_t254  L_23 = ___y;
		RaycastResult_t254  L_24 = L_23;
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
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t303_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"

// UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycaster.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_6.h"
// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Predicate_1_gen_9.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_6.h"
// System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Comparison_1_gen_9.h"
extern TypeInfo BaseRaycaster_t305_il2cpp_TypeInfo;
extern TypeInfo BaseRaycasterU5BU5D_t2638_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2640_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3330_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3331_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3329_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2642_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2646_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2647_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_6MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Predicate_1_gen_9MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_6MethodDeclarations.h"
extern Il2CppType List_1_t303_0_0_0;
extern Il2CppType BaseRaycasterU5BU5D_t2638_0_0_0;
extern Il2CppType Enumerator_t2640_0_0_0;
extern Il2CppType ICollection_1_t3330_0_0_0;
extern Il2CppType IEnumerable_1_t3331_0_0_0;
extern Il2CppType IEnumerator_1_t3329_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2642_0_0_0;
extern Il2CppType Predicate_1_t2646_0_0_0;
extern Il2CppType Comparer_1_t2647_0_0_0;
extern MethodInfo List_1_get_Item_m2105_MethodInfo;
extern MethodInfo List_1_set_Item_m13541_MethodInfo;
extern MethodInfo List_1_Add_m2169_MethodInfo;
extern MethodInfo List_1_Contains_m2168_MethodInfo;
extern MethodInfo List_1_IndexOf_m13527_MethodInfo;
extern MethodInfo List_1_Insert_m13530_MethodInfo;
extern MethodInfo List_1_Remove_m2170_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m23162_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m23163_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m23164_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m23165_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m13553_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m13628_MethodInfo;
extern MethodInfo Enumerator__ctor_m13547_MethodInfo;
extern MethodInfo List_1_RemoveAt_m13533_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.BaseRaycaster>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.BaseRaycaster>(!!0[]&,System.Int32)
#define Array_Resize_TisBaseRaycaster_t305_m20512(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, BaseRaycasterU5BU5D_t2638**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.BaseRaycaster>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.BaseRaycaster>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisBaseRaycaster_t305_m20514(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, BaseRaycasterU5BU5D_t2638*, BaseRaycaster_t305 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11377_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisBaseRaycaster_t305_m20516(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, BaseRaycasterU5BU5D_t2638*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20079_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisBaseRaycaster_t305_m20524(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, BaseRaycasterU5BU5D_t2638*, int32_t, Comparison_1_t2649 *, MethodInfo*))Array_Sort_TisObject_t_m20186_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2105_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m13541_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisBaseRaycaster_t305_m20512_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m13529_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m13526_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m2169_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m2168_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m13527_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m13530_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m2170_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m13516_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m13539_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m13540_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m23162_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m23163_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m23164_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m23165_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m13531_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m13517_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m13518_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m13553_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisBaseRaycaster_t305_m20514_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m13524_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m13525_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m13628_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13547_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m13528_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m13533_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m13634_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisBaseRaycaster_t305_m20516_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisBaseRaycaster_t305_m20524_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2639_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2639_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseRaycaster>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseRaycaster>(System.Int32)
#define Array_InternalArray__get_Item_TisBaseRaycaster_t305_m20501(__this, p0, method) (( BaseRaycaster_t305 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13546_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBaseRaycaster_t305_m20501_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2641_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m13550_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_6MethodDeclarations.h"
extern Il2CppType IList_1_t2641_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m13582_MethodInfo;
extern MethodInfo IList_1_get_Item_m23166_MethodInfo;
extern MethodInfo ICollection_1_Contains_m23167_MethodInfo;
extern MethodInfo IList_1_IndexOf_m23168_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m13582_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m23166_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m13614_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m23167_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m23168_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2643_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2643_0_0_0;
extern Il2CppType BaseRaycaster_t305_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m23169_MethodInfo;
extern MethodInfo Collection_1_SetItem_m13613_MethodInfo;
extern MethodInfo List_1__ctor_m2167_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m13606_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m13604_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m13609_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m13600_MethodInfo;
extern MethodInfo ICollection_1_Clear_m23170_MethodInfo;
extern MethodInfo IList_1_Insert_m23171_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m23172_MethodInfo;
extern MethodInfo IList_1_set_Item_m23173_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m23169_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m13617_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m13618_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m13615_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m13613_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m2167_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m13606_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m13616_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m13604_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m13609_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m13600_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m23170_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m23171_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m23172_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m23173_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2644_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_6.h"
extern TypeInfo DefaultComparer_t2645_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_6MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2644_0_0_0;
extern Il2CppType IEquatable_1_t3798_0_0_0;
extern Il2CppType DefaultComparer_t2645_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13624_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23174_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m20513_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13624_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23174_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m20513_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3799_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3798_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.BaseRaycaster>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m13619_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_6.h"
extern TypeInfo DefaultComparer_t2648_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_6MethodDeclarations.h"
extern Il2CppType IComparable_1_t3538_0_0_0;
extern Il2CppType DefaultComparer_t2648_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13635_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23175_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13635_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23175_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3537_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseRaycaster>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3538_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.BaseRaycaster>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m20522_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m13631_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m20522_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2649_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Comparison_1_gen_9MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t258_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_gen_6MethodDeclarations.h"

// UnityEngine.EventSystems.EventTrigger/Entry
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigger_Entry.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_7.h"
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Predicate_1_gen_10.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_7.h"
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Comparison_1_gen_10.h"
extern TypeInfo Entry_t257_il2cpp_TypeInfo;
extern TypeInfo EntryU5BU5D_t2650_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2652_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3333_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3334_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3332_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2654_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2658_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2659_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_7MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Predicate_1_gen_10MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_7MethodDeclarations.h"
extern Il2CppType List_1_t258_0_0_0;
extern Il2CppType EntryU5BU5D_t2650_0_0_0;
extern Il2CppType Enumerator_t2652_0_0_0;
extern Il2CppType ICollection_1_t3333_0_0_0;
extern Il2CppType IEnumerable_1_t3334_0_0_0;
extern Il2CppType IEnumerator_1_t3332_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2654_0_0_0;
extern Il2CppType Predicate_1_t2658_0_0_0;
extern Il2CppType Comparer_1_t2659_0_0_0;
extern MethodInfo List_1_get_Item_m2121_MethodInfo;
extern MethodInfo List_1_set_Item_m13687_MethodInfo;
extern MethodInfo List_1_Add_m13659_MethodInfo;
extern MethodInfo List_1_Contains_m13666_MethodInfo;
extern MethodInfo List_1_IndexOf_m13672_MethodInfo;
extern MethodInfo List_1_Insert_m13675_MethodInfo;
extern MethodInfo List_1_Remove_m13677_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m23176_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m23177_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m23178_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m23179_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m13699_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m13774_MethodInfo;
extern MethodInfo Enumerator__ctor_m13693_MethodInfo;
extern MethodInfo List_1_RemoveAt_m13679_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[]&,System.Int32)
#define Array_Resize_TisEntry_t257_m20538(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, EntryU5BU5D_t2650**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_7.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisEntry_t257_m20540(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, EntryU5BU5D_t2650*, Entry_t257 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11377_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisEntry_t257_m20542(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, EntryU5BU5D_t2650*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20079_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisEntry_t257_m20550(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, EntryU5BU5D_t2650*, int32_t, Comparison_1_t2661 *, MethodInfo*))Array_Sort_TisObject_t_m20186_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2121_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m13687_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisEntry_t257_m20538_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m13674_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m13671_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m13659_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m13666_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m13672_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m13675_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m13677_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m13660_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m13685_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m13686_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m23176_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m23177_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m23178_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m23179_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m13676_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m13661_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m13662_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m13699_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisEntry_t257_m20540_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m13669_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m13670_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m13774_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13693_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m13673_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m13679_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m13780_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisEntry_t257_m20542_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisEntry_t257_m20550_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2651_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2651_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.EventTrigger/Entry>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.EventTrigger/Entry>(System.Int32)
#define Array_InternalArray__get_Item_TisEntry_t257_m20527(__this, p0, method) (( Entry_t257 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13692_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisEntry_t257_m20527_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2653_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m13696_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_7MethodDeclarations.h"
extern Il2CppType IList_1_t2653_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m13728_MethodInfo;
extern MethodInfo IList_1_get_Item_m23180_MethodInfo;
extern MethodInfo ICollection_1_Contains_m23181_MethodInfo;
extern MethodInfo IList_1_IndexOf_m23182_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m13728_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m23180_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m13760_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m23181_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m23182_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2655_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2655_0_0_0;
extern Il2CppType Entry_t257_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m23183_MethodInfo;
extern MethodInfo Collection_1_SetItem_m13759_MethodInfo;
extern MethodInfo List_1__ctor_m13641_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m13752_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m13750_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m13755_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m13746_MethodInfo;
extern MethodInfo ICollection_1_Clear_m23184_MethodInfo;
extern MethodInfo IList_1_Insert_m23185_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m23186_MethodInfo;
extern MethodInfo IList_1_set_Item_m23187_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m23183_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m13763_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m13764_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m13761_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m13759_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m13641_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m13752_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m13762_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m13750_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m13755_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m13746_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m23184_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m23185_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m23186_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m23187_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2656_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_7MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_7.h"
extern TypeInfo DefaultComparer_t2657_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_7MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2656_0_0_0;
extern Il2CppType IEquatable_1_t3800_0_0_0;
extern Il2CppType DefaultComparer_t2657_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13770_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23188_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m20539_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13770_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23188_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m20539_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3801_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3800_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.EventTrigger/Entry>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m13765_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_7.h"
extern TypeInfo DefaultComparer_t2660_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_7MethodDeclarations.h"
extern Il2CppType IComparable_1_t3540_0_0_0;
extern Il2CppType DefaultComparer_t2660_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13781_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23189_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13781_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23189_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3539_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3540_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.EventTrigger/Entry>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m20548_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m13777_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m20548_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2661_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Comparison_1_gen_10MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>::EndInvoke(System.IAsyncResult)
// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_1_t256_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_genMethodDeclarations.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_0.h"
extern TypeInfo ObjectU5BU5D_t219_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t2665_il2cpp_TypeInfo;
extern TypeInfo BaseEventData_t248_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_0MethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t219_0_0_0;
extern Il2CppType BaseEventData_t248_0_0_0;
extern Il2CppType InvokableCall_1_t2665_0_0_0;
extern MethodInfo UnityEventBase__ctor_m3804_MethodInfo;
extern MethodInfo UnityEventBase_AddCall_m3809_MethodInfo;
extern MethodInfo Delegate_get_Target_m3945_MethodInfo;
extern MethodInfo Delegate_get_Method_m3943_MethodInfo;
extern MethodInfo UnityEventBase_RemoveListener_m3810_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m3812_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m13805_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m13806_MethodInfo;
extern MethodInfo UnityEventBase_Invoke_m3811_MethodInfo;
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m13794_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m13805_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m13806_GenericMethod;


// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_1_t2662_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen.h"
extern TypeInfo InvokableCall_1_t2663_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType InvokableCall_1_t2663_0_0_0;
extern MethodInfo InvokableCall_1__ctor_m13797_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m13798_MethodInfo;
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m13795_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m13797_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m13798_GenericMethod;


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern Il2CppGenericMethod UnityEvent_1__ctor_m13787_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m13787_gshared (UnityEvent_1_t2662 * __this, MethodInfo* method)
{
	static bool UnityEvent_1__ctor_m13787_init;
	if (!UnityEvent_1__ctor_m13787_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		UnityEvent_1__ctor_m13787_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 1));
		UnityEventBase__ctor_m3804(__this, /*hidden argument*/&UnityEventBase__ctor_m3804_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_AddListener_m13789_GenericMethod;
extern "C" void UnityEvent_1_AddListener_m13789_gshared (UnityEvent_1_t2662 * __this, UnityAction_1_t2609 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t2609 * L_0 = ___call;
		BaseInvokableCall_t775 * L_1 = (( BaseInvokableCall_t775 * (*) (Object_t * /* static, unused */, UnityAction_1_t2609 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UnityEventBase_AddCall_m3809(__this, L_1, /*hidden argument*/&UnityEventBase_AddCall_m3809_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_RemoveListener_m13791_GenericMethod;
extern "C" void UnityEvent_1_RemoveListener_m13791_gshared (UnityEvent_1_t2662 * __this, UnityAction_1_t2609 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t2609 * L_0 = ___call;
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3945(L_0, /*hidden argument*/&Delegate_get_Target_m3945_MethodInfo);
		UnityAction_1_t2609 * L_2 = ___call;
		NullCheck(L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m3943(L_2, /*hidden argument*/&Delegate_get_Method_m3943_MethodInfo);
		UnityEventBase_RemoveListener_m3810(__this, L_1, L_3, /*hidden argument*/&UnityEventBase_RemoveListener_m3810_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern Il2CppGenericMethod UnityEvent_1_FindMethod_Impl_m13792_GenericMethod;
extern TypeInfo* TypeU5BU5D_t97_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13792_gshared (UnityEvent_1_t2662 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_1_FindMethod_Impl_m13792_init;
	if (!UnityEvent_1_FindMethod_Impl_m13792_init)
	{
		TypeU5BU5D_t97_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t97_0_0_0);
		UnityEvent_1_FindMethod_Impl_m13792_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t97* L_2 = ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m3812(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3812_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m13793_GenericMethod;
extern "C" BaseInvokableCall_t775 * UnityEvent_1_GetDelegate_m13793_gshared (UnityEvent_1_t2662 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t2663 * L_2 = (InvokableCall_1_t2663 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2663 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t775 * UnityEvent_1_GetDelegate_m13795_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2609 * ___action, MethodInfo* method)
{
	{
		UnityAction_1_t2609 * L_0 = ___action;
		InvokableCall_1_t2663 * L_1 = (InvokableCall_1_t2663 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2663 *, UnityAction_1_t2609 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern Il2CppGenericMethod UnityEvent_1_Invoke_m13796_GenericMethod;
extern "C" void UnityEvent_1_Invoke_m13796_gshared (UnityEvent_1_t2662 * __this, Object_t * ___arg0, MethodInfo* method)
{
	{
		ObjectU5BU5D_t219* L_0 = (__this->___m_InvokeArray_4);
		Object_t * L_1 = ___arg0;
		Object_t * L_2 = L_1;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, ((Object_t *)L_2));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)((Object_t *)L_2);
		ObjectU5BU5D_t219* L_3 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m3811(__this, L_3, /*hidden argument*/&UnityEventBase_Invoke_m3811_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
extern Il2CppType UnityAction_1_t2609_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m3783_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m3946_MethodInfo;
extern MethodInfo Delegate_Combine_m2321_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m3782_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m3784_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m13183_MethodInfo;
struct BaseInvokableCall_t775;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20552_gshared (Object_t * __this /* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20552(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20552_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20552_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13797_gshared (InvokableCall_1_t2663 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3783(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m3783_MethodInfo);
		UnityAction_1_t2609 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t493 * L_6 = Delegate_CreateDelegate_m3946(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m3946_MethodInfo);
		Delegate_t493 * L_7 = Delegate_Combine_m2321(NULL /*static, unused*/, L_2, ((UnityAction_1_t2609 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/&Delegate_Combine_m2321_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t2609 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13798_gshared (InvokableCall_1_t2663 * __this, UnityAction_1_t2609 * ___callback, MethodInfo* method)
{
	{
		BaseInvokableCall__ctor_m3782(__this, /*hidden argument*/&BaseInvokableCall__ctor_m3782_MethodInfo);
		UnityAction_1_t2609 * L_0 = (__this->___Delegate_0);
		UnityAction_1_t2609 * L_1 = ___callback;
		Delegate_t493 * L_2 = Delegate_Combine_m2321(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m2321_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t2609 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern Il2CppGenericMethod InvokableCall_1_Invoke_m13799_GenericMethod;
extern "C" void InvokableCall_1_Invoke_m13799_gshared (InvokableCall_1_t2663 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method)
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
		UnityAction_1_t2609 * L_4 = (__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3784(NULL /*static, unused*/, L_4, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m3784_MethodInfo);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t2609 * L_6 = (__this->___Delegate_0);
		ObjectU5BU5D_t219* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6, ((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_1_Find_m13800_GenericMethod;
extern "C" bool InvokableCall_1_Find_m13800_gshared (InvokableCall_1_t2663 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t2609 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3945(L_0, /*hidden argument*/&Delegate_get_Target_m3945_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t2609 * L_3 = (__this->___Delegate_0);
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
extern TypeInfo UnityAction_1_t2664_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

extern Il2CppType UnityAction_1_t2664_0_0_0;
extern MethodInfo UnityAction_1_Invoke_m13802_MethodInfo;
struct BaseInvokableCall_t775;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.EventSystems.BaseEventData>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.EventSystems.BaseEventData>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisBaseEventData_t248_m20553(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20552_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisBaseEventData_t248_m20553_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m13802_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::Find(System.Object,System.Reflection.MethodInfo)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t262_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_2MethodDeclarations.h"



// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::EndInvoke(System.IAsyncResult)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t263_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_3MethodDeclarations.h"



// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::EndInvoke(System.IAsyncResult)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t264_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_4MethodDeclarations.h"



// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::EndInvoke(System.IAsyncResult)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t265_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_5MethodDeclarations.h"



// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>::EndInvoke(System.IAsyncResult)
#ifdef __clang__
#pragma clang diagnostic pop
#endif

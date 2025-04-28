#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3.h"
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
extern TypeInfo ObjectPool_1_t2546_il2cpp_TypeInfo;
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_0.h"
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo Stack_1_t2544_il2cpp_TypeInfo;
extern TypeInfo Int32_t27_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t2545_il2cpp_TypeInfo;
extern TypeInfo Void_t43_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_0MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppType Stack_1_t2544_0_0_0;
extern Il2CppType UnityAction_1_t2545_0_0_0;
extern MethodInfo Stack_1_get_Count_m12940_MethodInfo;
extern MethodInfo Stack_1__ctor_m12931_MethodInfo;
extern MethodInfo Object__ctor_m86_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m12948_MethodInfo;
extern MethodInfo Object_ReferenceEquals_m3638_MethodInfo;
extern MethodInfo Debug_LogError_m1862_MethodInfo;
struct Activator_t1825;
// System.Activator
#include "mscorlib_System_Activator.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// Declaration !!0 System.Activator::CreateInstance<System.Object>()
// !!0 System.Activator::CreateInstance<System.Object>()
extern "C" Object_t * Activator_CreateInstance_TisObject_t_m20185_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define Activator_CreateInstance_TisObject_t_m20185(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m20185_gshared)(__this /* static, unused */, method)
extern Il2CppGenericMethod ObjectPool_1_get_countAll_m12920_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_get_countInactive_m12926_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m12940_GenericMethod;
extern Il2CppGenericMethod Stack_1__ctor_m12931_GenericMethod;
extern Il2CppGenericMethod Activator_CreateInstance_TisObject_t_m20185_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_set_countAll_m12922_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m12938_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m12948_GenericMethod;
extern Il2CppGenericMethod Stack_1_Peek_m12937_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m12939_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern Il2CppGenericMethod ObjectPool_1__ctor_m12918_GenericMethod;
extern "C" void ObjectPool_1__ctor_m12918_gshared (ObjectPool_1_t2546 * __this, UnityAction_1_t2545 * ___actionOnGet, UnityAction_1_t2545 * ___actionOnRelease, MethodInfo* method)
{
	{
		Stack_1_t2544 * L_0 = (Stack_1_t2544 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Stack_1_t2544 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___m_Stack_0 = L_0;
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		UnityAction_1_t2545 * L_1 = ___actionOnGet;
		__this->___m_ActionOnGet_1 = L_1;
		UnityAction_1_t2545 * L_2 = ___actionOnRelease;
		__this->___m_ActionOnRelease_2 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m12920_gshared (ObjectPool_1_t2546 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcountAllU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m12922_gshared (ObjectPool_1_t2546 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcountAllU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern Il2CppGenericMethod ObjectPool_1_get_countActive_m12924_GenericMethod;
extern "C" int32_t ObjectPool_1_get_countActive_m12924_gshared (ObjectPool_1_t2546 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (ObjectPool_1_t2546 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_1 = (( int32_t (*) (ObjectPool_1_t2546 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return ((int32_t)((int32_t)L_0-(int32_t)L_1));
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m12926_gshared (ObjectPool_1_t2546 * __this, MethodInfo* method)
{
	{
		Stack_1_t2544 * L_0 = (__this->___m_Stack_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern Il2CppGenericMethod ObjectPool_1_Get_m12928_GenericMethod;
extern "C" Object_t * ObjectPool_1_Get_m12928_gshared (ObjectPool_1_t2546 * __this, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * G_B4_0 = {0};
	{
		Stack_1_t2544 * L_0 = (__this->___m_Stack_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		if (L_1)
		{
			goto IL_0047;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_1));
		Object_t * L_2 = V_1;
		Object_t * L_3 = L_2;
		if (!((Object_t *)L_3))
		{
			goto IL_002e;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_1));
		Object_t * L_4 = V_1;
		G_B4_0 = L_4;
		goto IL_0033;
	}

IL_002e:
	{
		Object_t * L_5 = (( Object_t * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		G_B4_0 = L_5;
	}

IL_0033:
	{
		V_0 = G_B4_0;
		int32_t L_6 = (( int32_t (*) (ObjectPool_1_t2546 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (ObjectPool_1_t2546 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, ((int32_t)((int32_t)L_6+(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		goto IL_0053;
	}

IL_0047:
	{
		Stack_1_t2544 * L_7 = (__this->___m_Stack_0);
		NullCheck(L_7);
		Object_t * L_8 = (( Object_t * (*) (Stack_1_t2544 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		V_0 = L_8;
	}

IL_0053:
	{
		UnityAction_1_t2545 * L_9 = (__this->___m_ActionOnGet_1);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		UnityAction_1_t2545 * L_10 = (__this->___m_ActionOnGet_1);
		Object_t * L_11 = V_0;
		NullCheck(L_10);
		VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_10, L_11);
	}

IL_006a:
	{
		Object_t * L_12 = V_0;
		return L_12;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern Il2CppGenericMethod ObjectPool_1_Release_m12930_GenericMethod;
extern "C" void ObjectPool_1_Release_m12930_gshared (ObjectPool_1_t2546 * __this, Object_t * ___element, MethodInfo* method)
{
	{
		Stack_1_t2544 * L_0 = (__this->___m_Stack_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		Stack_1_t2544 * L_2 = (__this->___m_Stack_0);
		NullCheck(L_2);
		Object_t * L_3 = (( Object_t * (*) (Stack_1_t2544 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_4 = L_3;
		Object_t * L_5 = ___element;
		Object_t * L_6 = L_5;
		bool L_7 = Object_ReferenceEquals_m3638(NULL /*static, unused*/, ((Object_t *)L_4), ((Object_t *)L_6), /*hidden argument*/&Object_ReferenceEquals_m3638_MethodInfo);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Debug_LogError_m1862(NULL /*static, unused*/, (String_t*) &_stringLiteral151, /*hidden argument*/&Debug_LogError_m1862_MethodInfo);
	}

IL_003b:
	{
		UnityAction_1_t2545 * L_8 = (__this->___m_ActionOnRelease_2);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		UnityAction_1_t2545 * L_9 = (__this->___m_ActionOnRelease_2);
		Object_t * L_10 = ___element;
		NullCheck(L_9);
		VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_9, L_10);
	}

IL_0052:
	{
		Stack_1_t2544 * L_11 = (__this->___m_Stack_0);
		Object_t * L_12 = ___element;
		NullCheck(L_11);
		(( void (*) (Stack_1_t2544 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(L_11, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t445_il2cpp_TypeInfo;
extern TypeInfo ArrayTypeMismatchException_t1835_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2547_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1076_il2cpp_TypeInfo;
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_genMethodDeclarations.h"
extern Il2CppType Enumerator_t2547_0_0_0;
extern MethodInfo Array_CopyTo_m4959_MethodInfo;
extern MethodInfo Array_Reverse_m5970_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10267_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4770_MethodInfo;
extern MethodInfo Enumerator__ctor_m12942_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m19769_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t148** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m19769(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m19769_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Stack_1_GetEnumerator_m12941_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisObject_t_m19769_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12942_GenericMethod;


// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m12931_gshared (Stack_1_t2544 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Stack_1_System_Collections_ICollection_get_IsSynchronized_m12932_GenericMethod;
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m12932_gshared (Stack_1_t2544 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Stack_1_System_Collections_ICollection_get_SyncRoot_m12933_GenericMethod;
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m12933_gshared (Stack_1_t2544 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Stack_1_System_Collections_ICollection_CopyTo_m12934_GenericMethod;
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m12934_gshared (Stack_1_t2544 * __this, Array_t * ___dest, int32_t ___idx, MethodInfo* method)
{
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t148* L_0 = (__this->____array_1);
			if (!L_0)
			{
				goto IL_0025;
			}
		}

IL_000b:
		{
			ObjectU5BU5D_t148* L_1 = (__this->____array_1);
			Array_t * L_2 = ___dest;
			int32_t L_3 = ___idx;
			NullCheck(L_1);
			VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4959_MethodInfo, L_1, L_2, L_3);
			Array_t * L_4 = ___dest;
			int32_t L_5 = ___idx;
			int32_t L_6 = (__this->____size_2);
			Array_Reverse_m5970(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/&Array_Reverse_m5970_MethodInfo);
		}

IL_0025:
		{
			goto IL_0036;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t163 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&ArrayTypeMismatchException_t1835_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t445 * L_7 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m10267(L_7, /*hidden argument*/&ArgumentException__ctor_m10267_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
		goto IL_0036;
	} // end catch (depth: 1)

IL_0036:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12935_GenericMethod;
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12935_gshared (Stack_1_t2544 * __this, MethodInfo* method)
{
	{
		Enumerator_t2547  L_0 = (( Enumerator_t2547  (*) (Stack_1_t2544 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t2547  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Stack_1_System_Collections_IEnumerable_GetEnumerator_m12936_GenericMethod;
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m12936_gshared (Stack_1_t2544 * __this, MethodInfo* method)
{
	{
		Enumerator_t2547  L_0 = (( Enumerator_t2547  (*) (Stack_1_t2544 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t2547  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (Object_t *)L_2;
	}
}
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m12937_gshared (Stack_1_t2544 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t1076 * L_1 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4770(L_1, /*hidden argument*/&InvalidOperationException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		ObjectU5BU5D_t148* L_2 = (__this->____array_1);
		int32_t L_3 = (__this->____size_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)((int32_t)L_3-(int32_t)1)));
		int32_t L_4 = ((int32_t)((int32_t)L_3-(int32_t)1));
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4));
	}
}
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m12938_gshared (Stack_1_t2544 * __this, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		int32_t L_0 = (__this->____size_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t1076 * L_1 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4770(L_1, /*hidden argument*/&InvalidOperationException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		ObjectU5BU5D_t148* L_3 = (__this->____array_1);
		int32_t L_4 = (__this->____size_2);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_1 = L_5;
		__this->____size_2 = L_5;
		int32_t L_6 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7));
		ObjectU5BU5D_t148* L_8 = (__this->____array_1);
		int32_t L_9 = (__this->____size_2);
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_2));
		Object_t * L_10 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, L_9)) = (Object_t *)L_10;
		Object_t * L_11 = V_0;
		return L_11;
	}
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m12939_gshared (Stack_1_t2544 * __this, Object_t * ___t, MethodInfo* method)
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t148** G_B4_0 = {0};
	ObjectU5BU5D_t148** G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t148** G_B5_1 = {0};
	{
		ObjectU5BU5D_t148* L_0 = (__this->____array_1);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->____size_2);
		ObjectU5BU5D_t148* L_2 = (__this->____array_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0043;
		}
	}

IL_001e:
	{
		ObjectU5BU5D_t148** L_3 = &(__this->____array_1);
		int32_t L_4 = (__this->____size_2);
		G_B3_0 = L_3;
		if (L_4)
		{
			G_B4_0 = L_3;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((int32_t)16);
		G_B5_1 = G_B3_0;
		goto IL_003e;
	}

IL_0036:
	{
		int32_t L_5 = (__this->____size_2);
		G_B5_0 = ((int32_t)((int32_t)2*(int32_t)L_5));
		G_B5_1 = G_B4_0;
	}

IL_003e:
	{
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, G_B5_1, G_B5_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}

IL_0043:
	{
		int32_t L_6 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_6+(int32_t)1));
		ObjectU5BU5D_t148* L_7 = (__this->____array_1);
		int32_t L_8 = (__this->____size_2);
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->____size_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_0;
		Object_t * L_11 = ___t;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, L_10)) = (Object_t *)L_11;
		return;
	}
}
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m12940_gshared (Stack_1_t2544 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		return L_0;
	}
}
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2547  Stack_1_GetEnumerator_m12941_gshared (Stack_1_t2544 * __this, MethodInfo* method)
{
	{
		Enumerator_t2547  L_0 = {0};
		(( void (*) (Enumerator_t2547 *, Stack_1_t2544 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_Current_m12946_GenericMethod;


// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Stack`1<T>)
extern "C" void Enumerator__ctor_m12942_gshared (Enumerator_t2547 * __this, Stack_1_t2544 * ___t, MethodInfo* method)
{
	{
		Stack_1_t2544 * L_0 = ___t;
		__this->___parent_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		Stack_1_t2544 * L_1 = ___t;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->____version_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m12943_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12943_gshared (Enumerator_t2547 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2547 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m12944_GenericMethod;
extern "C" void Enumerator_Dispose_m12944_gshared (Enumerator_t2547 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m12945_GenericMethod;
extern "C" bool Enumerator_MoveNext_m12945_gshared (Enumerator_t2547 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (__this->____version_2);
		Stack_1_t2544 * L_1 = (__this->___parent_0);
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t1076 * L_3 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4770(L_3, /*hidden argument*/&InvalidOperationException__ctor_m4770_MethodInfo);
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
		Stack_1_t2544 * L_5 = (__this->___parent_0);
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
extern "C" Object_t * Enumerator_get_Current_m12946_gshared (Enumerator_t2547 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t1076 * L_1 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4770(L_1, /*hidden argument*/&InvalidOperationException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Stack_1_t2544 * L_2 = (__this->___parent_0);
		NullCheck(L_2);
		ObjectU5BU5D_t148* L_3 = (L_2->____array_1);
		int32_t L_4 = (__this->___idx_1);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_1__ctor_m12947_GenericMethod;
extern "C" void UnityAction_1__ctor_m12947_gshared (UnityAction_1_t2545 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m12948_gshared (UnityAction_1_t2545 * __this, Object_t * ___arg0, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m12948((UnityAction_1_t2545 *)__this->___prev_9,___arg0, method);
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
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m12949_GenericMethod;
extern "C" Object_t * UnityAction_1_BeginInvoke_m12949_gshared (UnityAction_1_t2545 * __this, Object_t * ___arg0, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg0;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m12950_GenericMethod;
extern "C" void UnityAction_1_EndInvoke_m12950_gshared (UnityAction_1_t2545 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Stack_1_t2543_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_0.h"
extern TypeInfo Enumerator_t2552_il2cpp_TypeInfo;
extern TypeInfo List_1_t231_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_0MethodDeclarations.h"
extern Il2CppType Enumerator_t2552_0_0_0;
extern Il2CppType List_1_t231_0_0_0;
extern MethodInfo Enumerator__ctor_m12977_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(!!0[]&,System.Int32)
#define Array_Resize_TisList_1_t231_m20220(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, List_1U5BU5D_t2548**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m19769_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Stack_1_GetEnumerator_m12961_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisList_1_t231_m20220_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12977_GenericMethod;


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
extern TypeInfo IEnumerable_1_t3720_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3259_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_57.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2549_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_57MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2549_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4760_MethodInfo;
extern MethodInfo Array_get_Length_m4765_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m19472_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19472(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(System.Int32)
#define Array_InternalArray__get_Item_TisList_1_t231_m20187(__this, p0, method) (( List_1_t231 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12966_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisList_1_t231_m20187_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3721_il2cpp_TypeInfo;



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
extern TypeInfo IList_1_t3722_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3723_il2cpp_TypeInfo;



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
extern TypeInfo IEnumerable_1_t3724_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.ICollection>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3725_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.ICollection>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.ICollection>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_58.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2550_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.ICollection>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_58MethodDeclarations.h"

extern TypeInfo ICollection_t846_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2550_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.ICollection>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.ICollection>(System.Int32)
#define Array_InternalArray__get_Item_TisICollection_t846_m20198(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12971_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisICollection_t846_m20198_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.ICollection>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.ICollection>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.ICollection>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.ICollection>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.ICollection>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3726_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.ICollection>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.ICollection>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.ICollection>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.ICollection>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.ICollection>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3727_il2cpp_TypeInfo;



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
extern TypeInfo IEnumerable_1_t3728_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.IList>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3729_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.IList>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.IList>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2551_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.IList>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59MethodDeclarations.h"

extern TypeInfo IList_t1035_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2551_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.IList>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.IList>(System.Int32)
#define Array_InternalArray__get_Item_TisIList_t1035_m20209(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12976_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIList_t1035_m20209_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.IList>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.IList>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.IList>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.IList>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.IList>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3730_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.IList>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.IList>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.IList>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.IList>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.IList>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_Current_m12981_GenericMethod;


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
extern TypeInfo UnityAction_1_t211_il2cpp_TypeInfo;
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
extern TypeInfo List_1_t385_il2cpp_TypeInfo;
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
extern TypeInfo Component_t35_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t724_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1868_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1077_il2cpp_TypeInfo;
extern TypeInfo ComponentU5BU5D_t2553_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2554_il2cpp_TypeInfo;
extern TypeInfo Boolean_t25_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3261_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3262_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3260_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t103_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t160_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2556_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t753_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t383_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2560_il2cpp_TypeInfo;
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
extern Il2CppType List_1_t385_0_0_0;
extern Il2CppType ComponentU5BU5D_t2553_0_0_0;
extern Il2CppType Enumerator_t2554_0_0_0;
extern Il2CppType ICollection_1_t3261_0_0_0;
extern Il2CppType IEnumerable_1_t3262_0_0_0;
extern Il2CppType IEnumerator_1_t3260_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2556_0_0_0;
extern Il2CppType Predicate_1_t383_0_0_0;
extern Il2CppType Comparer_1_t2560_0_0_0;
extern MethodInfo List_1_get_Item_m2061_MethodInfo;
extern MethodInfo List_1_set_Item_m13029_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2382_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4958_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4771_MethodInfo;
extern MethodInfo Array_Copy_m6767_MethodInfo;
extern MethodInfo List_1_Add_m13003_MethodInfo;
extern MethodInfo List_1_Contains_m13009_MethodInfo;
extern MethodInfo List_1_IndexOf_m13015_MethodInfo;
extern MethodInfo List_1_Insert_m13018_MethodInfo;
extern MethodInfo List_1_Remove_m13020_MethodInfo;
extern MethodInfo Math_Max_m5937_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m22915_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m22916_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m22917_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m22918_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m4768_MethodInfo;
extern MethodInfo IDisposable_Dispose_m623_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m13036_MethodInfo;
extern MethodInfo Array_Clear_m5928_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3705_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m13110_MethodInfo;
extern MethodInfo Enumerator__ctor_m13030_MethodInfo;
extern MethodInfo List_1_RemoveAt_m13021_MethodInfo;
extern MethodInfo Array_Copy_m6766_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.Component>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Component>(!!0[]&,System.Int32)
#define Array_Resize_TisComponent_t35_m20227(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2553**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m19769_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m11142_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t148* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m11142(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11142_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Component>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Component>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisComponent_t35_m20229(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2553*, Component_t35 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11142_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m19838_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t148* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m19838(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m19838_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisComponent_t35_m20231(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2553*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m19838_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// System.Exception
#include "mscorlib_System_Exception.h"
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m19945_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t148* p0, int32_t p1, Comparison_1_t2478 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m19945(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148*, int32_t, Comparison_1_t2478 *, MethodInfo*))Array_Sort_TisObject_t_m19945_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisComponent_t35_m20239(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2553*, int32_t, Comparison_1_t2562 *, MethodInfo*))Array_Sort_TisObject_t_m19945_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2061_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m13029_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisComponent_t35_m20227_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m13017_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m13014_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m13003_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m13009_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m13015_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m13018_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m13020_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m13004_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m13027_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m13028_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m22915_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m22916_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m22917_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m22918_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m13019_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m13005_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m13006_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m13036_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisComponent_t35_m20229_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m13012_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m13013_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m13110_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13030_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m13016_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m13021_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m13116_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisComponent_t35_m20231_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisComponent_t35_m20239_GenericMethod;


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

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1256_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo Object_GetType_m1959_MethodInfo;
extern MethodInfo Type_get_FullName_m3737_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m5945_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m13033_GenericMethod;


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
extern TypeInfo NotSupportedException_t158_il2cpp_TypeInfo;
extern TypeInfo IList_1_t2555_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t510_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<UnityEngine.Component>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_4MethodDeclarations.h"
extern Il2CppType IList_1_t2555_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m13065_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m591_MethodInfo;
extern MethodInfo IList_1_get_Item_m22919_MethodInfo;
extern MethodInfo ICollection_CopyTo_m4756_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m4912_MethodInfo;
extern MethodInfo ICollection_1_Contains_m22920_MethodInfo;
extern MethodInfo IList_1_IndexOf_m22921_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m13065_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m22919_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m13097_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m22920_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m22921_GenericMethod;


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
extern TypeInfo Collection_1_t2557_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2557_0_0_0;
extern Il2CppType Component_t35_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m22922_MethodInfo;
extern MethodInfo Collection_1_SetItem_m13096_MethodInfo;
extern MethodInfo List_1__ctor_m12985_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m11141_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m13089_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m13087_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m13092_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m13083_MethodInfo;
extern MethodInfo ICollection_1_Clear_m22923_MethodInfo;
extern MethodInfo IList_1_Insert_m22924_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m22925_MethodInfo;
extern MethodInfo IList_1_set_Item_m22926_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m2059_MethodInfo;
extern MethodInfo Type_get_IsValueType_m6819_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m11451_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m11452_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m22922_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m13100_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m13101_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m13098_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m13096_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m12985_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m13089_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m13099_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m13087_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m13092_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m13083_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m22923_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m22924_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m22925_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m22926_GenericMethod;


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
extern TypeInfo EqualityComparer_1_t2558_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4.h"
extern TypeInfo TypeU5BU5D_t670_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2559_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2558_0_0_0;
extern Il2CppType IEquatable_1_t3731_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2267_0_0_0;
extern Il2CppType TypeU5BU5D_t670_0_0_0;
extern Il2CppType DefaultComparer_t2559_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m3718_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3716_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10241_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m13107_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m22927_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m20228_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13107_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m22927_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m20228_GenericMethod;


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
extern TypeInfo IEqualityComparer_1_t3732_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3731_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Component>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m167_MethodInfo;
extern MethodInfo Object_Equals_m166_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m13102_GenericMethod;


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
extern TypeInfo DefaultComparer_t2561_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_4MethodDeclarations.h"
extern Il2CppType IComparable_1_t3471_0_0_0;
extern Il2CppType GenericComparer_1_t2197_0_0_0;
extern Il2CppType DefaultComparer_t2561_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13117_MethodInfo;
extern MethodInfo Comparer_1_Compare_m22928_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13117_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m22928_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Component>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Component>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Component>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Component>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Component>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3470_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Component>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3471_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.Component>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t41_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m20237_MethodInfo;
extern MethodInfo IComparable_CompareTo_m11107_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m13113_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m20237_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Component>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Component>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2562_il2cpp_TypeInfo;
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
extern TypeInfo EventFunction_1_t204_il2cpp_TypeInfo;
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
extern TypeInfo List_1_t183_il2cpp_TypeInfo;
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
extern TypeInfo RaycastResult_t184_il2cpp_TypeInfo;
extern TypeInfo RaycastResultU5BU5D_t2563_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2565_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3264_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3265_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3263_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2567_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2571_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2572_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_5MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Predicate_1_gen_8MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_5MethodDeclarations.h"
extern Il2CppType List_1_t183_0_0_0;
extern Il2CppType RaycastResultU5BU5D_t2563_0_0_0;
extern Il2CppType Enumerator_t2565_0_0_0;
extern Il2CppType ICollection_1_t3264_0_0_0;
extern Il2CppType IEnumerable_1_t3265_0_0_0;
extern Il2CppType IEnumerator_1_t3263_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2567_0_0_0;
extern Il2CppType Predicate_1_t2571_0_0_0;
extern Il2CppType Comparer_1_t2572_0_0_0;
extern MethodInfo List_1_get_Item_m1939_MethodInfo;
extern MethodInfo List_1_set_Item_m13168_MethodInfo;
extern MethodInfo List_1_Add_m2011_MethodInfo;
extern MethodInfo List_1_Contains_m13148_MethodInfo;
extern MethodInfo List_1_IndexOf_m13154_MethodInfo;
extern MethodInfo List_1_Insert_m13157_MethodInfo;
extern MethodInfo List_1_Remove_m13159_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m22929_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m22930_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m22931_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m22932_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m13180_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m13255_MethodInfo;
extern MethodInfo Enumerator__ctor_m13174_MethodInfo;
extern MethodInfo List_1_RemoveAt_m13161_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisRaycastResult_t184_m20256_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2563** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisRaycastResult_t184_m20256(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2563**, int32_t, MethodInfo*))Array_Resize_TisRaycastResult_t184_m20256_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.RaycastResult>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.RaycastResult>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisRaycastResult_t184_m20258_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2563* p0, RaycastResult_t184  p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisRaycastResult_t184_m20258(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2563*, RaycastResult_t184 , int32_t, int32_t, MethodInfo*))Array_IndexOf_TisRaycastResult_t184_m20258_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisRaycastResult_t184_m20260_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2563* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisRaycastResult_t184_m20260(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2563*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisRaycastResult_t184_m20260_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisRaycastResult_t184_m20268_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2563* p0, int32_t p1, Comparison_1_t179 * p2, MethodInfo* method);
#define Array_Sort_TisRaycastResult_t184_m20268(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2563*, int32_t, Comparison_1_t179 *, MethodInfo*))Array_Sort_TisRaycastResult_t184_m20268_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m1939_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m13168_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisRaycastResult_t184_m20256_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m13156_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m13153_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m2011_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m13148_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m13154_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m13157_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m13159_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m13143_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m13166_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m13167_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m22929_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m22930_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m22931_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m22932_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m13158_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m13144_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m13145_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m13180_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisRaycastResult_t184_m20258_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m13151_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m13152_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m13255_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13174_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m13155_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m13161_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m13261_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRaycastResult_t184_m20260_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRaycastResult_t184_m20268_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod List_1__ctor_m1938_GenericMethod;
extern "C" void List_1__ctor_m1938_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResultU5BU5D_t2563* L_0 = ((List_1_t183_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern Il2CppGenericMethod List_1__ctor_m13126_GenericMethod;
extern "C" void List_1__ctor_m13126_gshared (List_1_t183 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1077 * L_1 = (ArgumentOutOfRangeException_t1077 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1077_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4771(L_1, (String_t*) &_stringLiteral1309, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4771_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((RaycastResultU5BU5D_t2563*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern Il2CppGenericMethod List_1__cctor_m13127_GenericMethod;
extern "C" void List_1__cctor_m13127_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((List_1_t183_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((RaycastResultU5BU5D_t2563*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13128_GenericMethod;
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13128_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		Enumerator_t2565  L_0 = (( Enumerator_t2565  (*) (List_1_t183 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2565  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_ICollection_CopyTo_m13129_GenericMethod;
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13129_gshared (List_1_t183 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2563* L_0 = (__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m6767(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m6767_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_IEnumerable_GetEnumerator_m13130_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13130_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		Enumerator_t2565  L_0 = (( Enumerator_t2565  (*) (List_1_t183 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2565  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Add_m13131_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_Add_m13131_gshared (List_1_t183 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			VirtActionInvoker1< RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), __this, ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
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
		__exception_local = (Exception_t163 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t724_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1868_il2cpp_TypeInfo, e.ex->object.klass))
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
		ArgumentException_t445 * L_2 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_2, (String_t*) &_stringLiteral1322, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Contains_m13132_GenericMethod;
extern "C" bool List_1_System_Collections_IList_Contains_m13132_gshared (List_1_t183 * __this, Object_t * ___item, MethodInfo* method)
{
	bool V_0 = false;
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			bool L_1 = (bool)VirtFuncInvoker1< bool, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
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
		__exception_local = (Exception_t163 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t724_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1868_il2cpp_TypeInfo, e.ex->object.klass))
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
extern Il2CppGenericMethod List_1_System_Collections_IList_IndexOf_m13133_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13133_gshared (List_1_t183 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
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
		__exception_local = (Exception_t163 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t724_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1868_il2cpp_TypeInfo, e.ex->object.klass))
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
extern Il2CppGenericMethod List_1_System_Collections_IList_Insert_m13134_GenericMethod;
extern "C" void List_1_System_Collections_IList_Insert_m13134_gshared (List_1_t183 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t183 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			VirtActionInvoker2< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), __this, L_1, ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t163 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t724_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1868_il2cpp_TypeInfo, e.ex->object.klass))
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
		ArgumentException_t445 * L_3 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_3, (String_t*) &_stringLiteral1322, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Remove_m13135_GenericMethod;
extern "C" void List_1_System_Collections_IList_Remove_m13135_gshared (List_1_t183 * __this, Object_t * ___item, MethodInfo* method)
{
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			VirtFuncInvoker1< bool, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t163 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t724_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1868_il2cpp_TypeInfo, e.ex->object.klass))
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
extern Il2CppGenericMethod List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13136_GenericMethod;
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13136_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_IsSynchronized_m13137_GenericMethod;
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13137_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_SyncRoot_m13138_GenericMethod;
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13138_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsFixedSize_m13139_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13139_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsReadOnly_m13140_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13140_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_IList_get_Item_m13141_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13141_gshared (List_1_t183 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t184  L_1 = (RaycastResult_t184 )VirtFuncInvoker1< RaycastResult_t184 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, L_0);
		RaycastResult_t184  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_set_Item_m13142_GenericMethod;
extern "C" void List_1_System_Collections_IList_set_Item_m13142_gshared (List_1_t183 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			VirtActionInvoker2< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0, ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t163 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t724_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1868_il2cpp_TypeInfo, e.ex->object.klass))
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
		ArgumentException_t445 * L_2 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_2, (String_t*) &_stringLiteral513, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m2011_gshared (List_1_t183 * __this, RaycastResult_t184  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		RaycastResultU5BU5D_t2563* L_1 = (__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		(( void (*) (List_1_t183 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0017:
	{
		RaycastResultU5BU5D_t2563* L_2 = (__this->____items_1);
		int32_t L_3 = (__this->____size_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		RaycastResult_t184  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((RaycastResult_t184 *)(RaycastResult_t184 *)SZArrayLdElema(L_2, L_5)) = (RaycastResult_t184 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13143_gshared (List_1_t183 * __this, int32_t ___newCount, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		RaycastResultU5BU5D_t2563* L_3 = (__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = (( int32_t (*) (List_1_t183 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		int32_t L_5 = Math_Max_m5937(NULL /*static, unused*/, ((int32_t)((int32_t)L_4*(int32_t)2)), 4, /*hidden argument*/&Math_Max_m5937_MethodInfo);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m5937(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Math_Max_m5937_MethodInfo);
		(( void (*) (List_1_t183 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13144_gshared (List_1_t183 * __this, Object_t* ___collection, MethodInfo* method)
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
		(( void (*) (List_1_t183 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		Object_t* L_4 = ___collection;
		RaycastResultU5BU5D_t2563* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		NullCheck(L_4);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2563*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), L_4, L_5, L_6);
		int32_t L_7 = (__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13145_gshared (List_1_t183 * __this, Object_t* ___enumerable, MethodInfo* method)
{
	RaycastResult_t184  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
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
			RaycastResult_t184  L_3 = (RaycastResult_t184 )InterfaceFuncInvoker0< RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_2);
			V_0 = L_3;
			RaycastResult_t184  L_4 = V_0;
			VirtActionInvoker1< RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), __this, L_4);
		}

IL_0017:
		{
			Object_t* L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_5);
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
		__last_unhandled_exception = (Exception_t163 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1_AddRange_m13146_GenericMethod;
extern "C" void List_1_AddRange_m13146_gshared (List_1_t183 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t183 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
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
		(( void (*) (List_1_t183 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t183 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
	}

IL_0021:
	{
		int32_t L_5 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern Il2CppGenericMethod List_1_AsReadOnly_m13147_GenericMethod;
extern "C" ReadOnlyCollection_1_t2567 * List_1_AsReadOnly_m13147_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2567 * L_0 = (ReadOnlyCollection_1_t2567 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (ReadOnlyCollection_1_t2567 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern Il2CppGenericMethod List_1_Clear_m1867_GenericMethod;
extern "C" void List_1_Clear_m1867_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2563* L_0 = (__this->____items_1);
		RaycastResultU5BU5D_t2563* L_1 = (__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m5928(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m5928_MethodInfo);
		__this->____size_2 = 0;
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m13148_gshared (List_1_t183 * __this, RaycastResult_t184  ___item, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2563* L_0 = (__this->____items_1);
		RaycastResult_t184  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2563*, RaycastResult_t184 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod List_1_CopyTo_m13149_GenericMethod;
extern "C" void List_1_CopyTo_m13149_gshared (List_1_t183 * __this, RaycastResultU5BU5D_t2563* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2563* L_0 = (__this->____items_1);
		RaycastResultU5BU5D_t2563* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m6767(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (Array_t *)(Array_t *)L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m6767_MethodInfo);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_Find_m13150_GenericMethod;
extern TypeInfo* List_1_t183_il2cpp_TypeInfo_var;
extern "C" RaycastResult_t184  List_1_Find_m13150_gshared (List_1_t183 * __this, Predicate_1_t2571 * ___match, MethodInfo* method)
{
	static bool List_1_Find_m13150_init;
	if (!List_1_Find_m13150_init)
	{
		List_1_t183_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t183_0_0_0);
		List_1_Find_m13150_init = true;
	}
	int32_t V_0 = 0;
	RaycastResult_t184  V_1 = {0};
	RaycastResult_t184  G_B3_0 = {0};
	{
		Predicate_1_t2571 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t183_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		int32_t L_1 = (__this->____size_2);
		Predicate_1_t2571 * L_2 = ___match;
		int32_t L_3 = (( int32_t (*) (List_1_t183 *, int32_t, int32_t, Predicate_1_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(__this, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		RaycastResultU5BU5D_t2563* L_5 = (__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(RaycastResult_t184 *)(RaycastResult_t184 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (InitializedTypeInfo(&RaycastResult_t184_il2cpp_TypeInfo), (&V_1));
		RaycastResult_t184  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13151_gshared (Object_t * __this /* static, unused */, Predicate_1_t2571 * ___match, MethodInfo* method)
{
	{
		Predicate_1_t2571 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t753 * L_1 = (ArgumentNullException_t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t753_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3705(L_1, (String_t*) &_stringLiteral1146, /*hidden argument*/&ArgumentNullException__ctor_m3705_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13152_gshared (List_1_t183 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2571 * ___match, MethodInfo* method)
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
		Predicate_1_t2571 * L_3 = ___match;
		RaycastResultU5BU5D_t2563* L_4 = (__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, (*(RaycastResult_t184 *)(RaycastResult_t184 *)SZArrayLdElema(L_4, L_6)));
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
extern "C" Enumerator_t2565  List_1_GetEnumerator_m13153_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		Enumerator_t2565  L_0 = {0};
		(( void (*) (Enumerator_t2565 *, List_1_t183 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13154_gshared (List_1_t183 * __this, RaycastResult_t184  ___item, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2563* L_0 = (__this->____items_1);
		RaycastResult_t184  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2563*, RaycastResult_t184 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13155_gshared (List_1_t183 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method)
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
		RaycastResultU5BU5D_t2563* L_5 = (__this->____items_1);
		int32_t L_6 = ___start;
		RaycastResultU5BU5D_t2563* L_7 = (__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m6767(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, (Array_t *)(Array_t *)L_7, ((int32_t)((int32_t)L_8+(int32_t)L_9)), ((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/&Array_Copy_m6767_MethodInfo);
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
		RaycastResultU5BU5D_t2563* L_15 = (__this->____items_1);
		int32_t L_16 = (__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m5928(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, ((-L_17)), /*hidden argument*/&Array_Clear_m5928_MethodInfo);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13156_gshared (List_1_t183 * __this, int32_t ___index, MethodInfo* method)
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
		ArgumentOutOfRangeException_t1077 * L_3 = (ArgumentOutOfRangeException_t1077 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1077_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4771(L_3, (String_t*) &_stringLiteral311, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4771_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13157_gshared (List_1_t183 * __this, int32_t ___index, RaycastResult_t184  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t183 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = (__this->____size_2);
		RaycastResultU5BU5D_t2563* L_2 = (__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		(( void (*) (List_1_t183 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		(( void (*) (List_1_t183 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_3, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		RaycastResultU5BU5D_t2563* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		RaycastResult_t184  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((RaycastResult_t184 *)(RaycastResult_t184 *)SZArrayLdElema(L_4, L_5)) = (RaycastResult_t184 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13158_gshared (List_1_t183 * __this, Object_t* ___collection, MethodInfo* method)
{
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t753 * L_1 = (ArgumentNullException_t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t753_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3705(L_1, (String_t*) &_stringLiteral1323, /*hidden argument*/&ArgumentNullException__ctor_m3705_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m13159_gshared (List_1_t183 * __this, RaycastResult_t184  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		RaycastResult_t184  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0);
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
extern Il2CppGenericMethod List_1_RemoveAll_m13160_GenericMethod;
extern TypeInfo* List_1_t183_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m13160_gshared (List_1_t183 * __this, Predicate_1_t2571 * ___match, MethodInfo* method)
{
	static bool List_1_RemoveAll_m13160_init;
	if (!List_1_RemoveAll_m13160_init)
	{
		List_1_t183_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t183_0_0_0);
		List_1_RemoveAll_m13160_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2571 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t183_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t2571 * L_1 = ___match;
		RaycastResultU5BU5D_t2563* L_2 = (__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_1, (*(RaycastResult_t184 *)(RaycastResult_t184 *)SZArrayLdElema(L_2, L_4)));
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
		Predicate_1_t2571 * L_13 = ___match;
		RaycastResultU5BU5D_t2563* L_14 = (__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck(L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_13, (*(RaycastResult_t184 *)(RaycastResult_t184 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		RaycastResultU5BU5D_t2563* L_18 = (__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		RaycastResultU5BU5D_t2563* L_21 = (__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((RaycastResult_t184 *)(RaycastResult_t184 *)SZArrayLdElema(L_18, L_20)) = (RaycastResult_t184 )(*(RaycastResult_t184 *)(RaycastResult_t184 *)SZArrayLdElema(L_21, L_23));
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
		RaycastResultU5BU5D_t2563* L_29 = (__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m5928(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, L_30, ((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/&Array_Clear_m5928_MethodInfo);
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
extern "C" void List_1_RemoveAt_m13161_gshared (List_1_t183 * __this, int32_t ___index, MethodInfo* method)
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
		ArgumentOutOfRangeException_t1077 * L_3 = (ArgumentOutOfRangeException_t1077 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1077_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4771(L_3, (String_t*) &_stringLiteral311, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4771_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		(( void (*) (List_1_t183 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_4, (-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		RaycastResultU5BU5D_t2563* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		Array_Clear_m5928(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, 1, /*hidden argument*/&Array_Clear_m5928_MethodInfo);
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern Il2CppGenericMethod List_1_Reverse_m13162_GenericMethod;
extern "C" void List_1_Reverse_m13162_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2563* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Array_Reverse_m5970(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, /*hidden argument*/&Array_Reverse_m5970_MethodInfo);
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern Il2CppGenericMethod List_1_Sort_m13163_GenericMethod;
extern TypeInfo* Comparer_1_t2572_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m13163_gshared (List_1_t183 * __this, MethodInfo* method)
{
	static bool List_1_Sort_m13163_init;
	if (!List_1_Sort_m13163_init)
	{
		Comparer_1_t2572_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Comparer_1_t2572_0_0_0);
		List_1_Sort_m13163_init = true;
	}
	{
		RaycastResultU5BU5D_t2563* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2572_il2cpp_TypeInfo_var);
		Comparer_1_t2572 * L_2 = (( Comparer_1_t2572 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2563*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, L_0, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern Il2CppGenericMethod List_1_Sort_m1881_GenericMethod;
extern "C" void List_1_Sort_m1881_gshared (List_1_t183 * __this, Comparison_1_t179 * ___comparison, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2563* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Comparison_1_t179 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2563*, int32_t, Comparison_1_t179 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern Il2CppGenericMethod List_1_ToArray_m13164_GenericMethod;
extern "C" RaycastResultU5BU5D_t2563* List_1_ToArray_m13164_gshared (List_1_t183 * __this, MethodInfo* method)
{
	RaycastResultU5BU5D_t2563* V_0 = {0};
	{
		int32_t L_0 = (__this->____size_2);
		V_0 = ((RaycastResultU5BU5D_t2563*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_0));
		RaycastResultU5BU5D_t2563* L_1 = (__this->____items_1);
		RaycastResultU5BU5D_t2563* L_2 = V_0;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m6766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/&Array_Copy_m6766_MethodInfo);
		RaycastResultU5BU5D_t2563* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern Il2CppGenericMethod List_1_TrimExcess_m13165_GenericMethod;
extern "C" void List_1_TrimExcess_m13165_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		(( void (*) (List_1_t183 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13166_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2563* L_0 = (__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13167_gshared (List_1_t183 * __this, int32_t ___value, MethodInfo* method)
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
		ArgumentOutOfRangeException_t1077 * L_2 = (ArgumentOutOfRangeException_t1077 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1077_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4958(L_2, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4958_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		RaycastResultU5BU5D_t2563** L_3 = &(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2563**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern Il2CppGenericMethod List_1_get_Count_m1940_GenericMethod;
extern "C" int32_t List_1_get_Count_m1940_gshared (List_1_t183 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t184  List_1_get_Item_m1939_gshared (List_1_t183 * __this, int32_t ___index, MethodInfo* method)
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
		ArgumentOutOfRangeException_t1077 * L_2 = (ArgumentOutOfRangeException_t1077 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1077_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4771(L_2, (String_t*) &_stringLiteral311, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4771_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		RaycastResultU5BU5D_t2563* L_3 = (__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(RaycastResult_t184 *)(RaycastResult_t184 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13168_gshared (List_1_t183 * __this, int32_t ___index, RaycastResult_t184  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t183 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t1077 * L_3 = (ArgumentOutOfRangeException_t1077 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1077_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4771(L_3, (String_t*) &_stringLiteral311, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4771_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		RaycastResultU5BU5D_t2563* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		RaycastResult_t184  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((RaycastResult_t184 *)(RaycastResult_t184 *)SZArrayLdElema(L_4, L_5)) = (RaycastResult_t184 )L_6;
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
extern TypeInfo InternalEnumerator_1_t2564_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_60MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2564_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
extern "C" RaycastResult_t184  Array_InternalArray__get_Item_TisRaycastResult_t184_m20245_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastResult_t184_m20245(__this, p0, method) (( RaycastResult_t184  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisRaycastResult_t184_m20245_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13173_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRaycastResult_t184_m20245_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m13169_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m13169_gshared (InternalEnumerator_1_t2564 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13170_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13170_gshared (InternalEnumerator_1_t2564 * __this, MethodInfo* method)
{
	{
		RaycastResult_t184  L_0 = (( RaycastResult_t184  (*) (InternalEnumerator_1_t2564 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResult_t184  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m13171_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m13171_gshared (InternalEnumerator_1_t2564 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m13172_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m13172_gshared (InternalEnumerator_1_t2564 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern "C" RaycastResult_t184  InternalEnumerator_1_get_Current_m13173_gshared (InternalEnumerator_1_t2564 * __this, MethodInfo* method)
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
		RaycastResult_t184  L_8 = (( RaycastResult_t184  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2566_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m13177_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m13174_gshared (Enumerator_t2565 * __this, List_1_t183 * ___l, MethodInfo* method)
{
	{
		List_1_t183 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t183 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m13175_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13175_gshared (Enumerator_t2565 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2565 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1076 * L_1 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4770(L_1, /*hidden argument*/&InvalidOperationException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		RaycastResult_t184  L_2 = (__this->___current_3);
		RaycastResult_t184  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m13176_GenericMethod;
extern "C" void Enumerator_Dispose_m13176_gshared (Enumerator_t2565 * __this, MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t183 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::VerifyState()
extern "C" void Enumerator_VerifyState_m13177_gshared (Enumerator_t2565 * __this, MethodInfo* method)
{
	{
		List_1_t183 * L_0 = (__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t2565  L_1 = (*(Enumerator_t2565 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m1959(L_2, /*hidden argument*/&Object_GetType_m1959_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3737_MethodInfo, L_3);
		ObjectDisposedException_t1256 * L_5 = (ObjectDisposedException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1256_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5945(L_5, L_4, /*hidden argument*/&ObjectDisposedException__ctor_m5945_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (__this->___ver_2);
		List_1_t183 * L_7 = (__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1076 * L_9 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4760(L_9, (String_t*) &_stringLiteral1324, /*hidden argument*/&InvalidOperationException__ctor_m4760_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m13178_GenericMethod;
extern "C" bool Enumerator_MoveNext_m13178_gshared (Enumerator_t2565 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2565 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		List_1_t183 * L_2 = (__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t183 * L_4 = (__this->___l_0);
		NullCheck(L_4);
		RaycastResultU5BU5D_t2563* L_5 = (L_4->____items_1);
		int32_t L_6 = (__this->___next_1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(RaycastResult_t184 *)(RaycastResult_t184 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m13179_GenericMethod;
extern "C" RaycastResult_t184  Enumerator_get_Current_m13179_gshared (Enumerator_t2565 * __this, MethodInfo* method)
{
	{
		RaycastResult_t184  L_0 = (__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_5MethodDeclarations.h"
extern Il2CppType IList_1_t2566_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m13209_MethodInfo;
extern MethodInfo IList_1_get_Item_m22933_MethodInfo;
extern MethodInfo ICollection_1_Contains_m22934_MethodInfo;
extern MethodInfo IList_1_IndexOf_m22935_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m13209_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m22933_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m13241_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m22934_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m22935_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m13180_gshared (ReadOnlyCollection_1_t2567 * __this, Object_t* ___list, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t753 * L_1 = (ArgumentNullException_t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t753_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3705(L_1, (String_t*) &_stringLiteral1325, /*hidden argument*/&ArgumentNullException__ctor_m3705_MethodInfo);
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
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13181_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13181_gshared (ReadOnlyCollection_1_t2567 * __this, RaycastResult_t184  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m13182_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m13182_gshared (ReadOnlyCollection_1_t2567 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m13183_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m13183_gshared (ReadOnlyCollection_1_t2567 * __this, int32_t ___index, RaycastResult_t184  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Remove(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m13184_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m13184_gshared (ReadOnlyCollection_1_t2567 * __this, RaycastResult_t184  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m13185_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m13185_gshared (ReadOnlyCollection_1_t2567 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m13186_GenericMethod;
extern "C" RaycastResult_t184  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m13186_gshared (ReadOnlyCollection_1_t2567 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t184  L_1 = (RaycastResult_t184 )VirtFuncInvoker1< RaycastResult_t184 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this, L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m13187_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m13187_gshared (ReadOnlyCollection_1_t2567 * __this, int32_t ___index, RaycastResult_t184  ___value, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13188_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13188_gshared (ReadOnlyCollection_1_t2567 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m13189_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m13189_gshared (ReadOnlyCollection_1_t2567 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t846_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m4756_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t846_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m13190_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m13190_gshared (ReadOnlyCollection_1_t2567 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m4912_MethodInfo, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Add_m13191_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m13191_gshared (ReadOnlyCollection_1_t2567 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Clear_m13192_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m13192_gshared (ReadOnlyCollection_1_t2567 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Contains_m13193_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m13193_gshared (ReadOnlyCollection_1_t2567 * __this, Object_t * ___value, MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_2, ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_IndexOf_m13194_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m13194_gshared (ReadOnlyCollection_1_t2567 * __this, Object_t * ___value, MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2, ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Insert_m13195_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m13195_gshared (ReadOnlyCollection_1_t2567 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Remove_m13196_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m13196_gshared (ReadOnlyCollection_1_t2567 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m13197_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m13197_gshared (ReadOnlyCollection_1_t2567 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m13198_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m13198_gshared (ReadOnlyCollection_1_t2567 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13199_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13199_gshared (ReadOnlyCollection_1_t2567 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13200_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13200_gshared (ReadOnlyCollection_1_t2567 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13201_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13201_gshared (ReadOnlyCollection_1_t2567 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_Item_m13202_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m13202_gshared (ReadOnlyCollection_1_t2567 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t184  L_2 = (RaycastResult_t184 )InterfaceFuncInvoker1< RaycastResult_t184 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		RaycastResult_t184  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_set_Item_m13203_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m13203_gshared (ReadOnlyCollection_1_t2567 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_Contains_m13204_GenericMethod;
extern "C" bool ReadOnlyCollection_1_Contains_m13204_gshared (ReadOnlyCollection_1_t2567 * __this, RaycastResult_t184  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t184  L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_CopyTo_m13205_GenericMethod;
extern "C" void ReadOnlyCollection_1_CopyTo_m13205_gshared (ReadOnlyCollection_1_t2567 * __this, RaycastResultU5BU5D_t2563* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResultU5BU5D_t2563* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2563*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_GetEnumerator_m13206_GenericMethod;
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m13206_gshared (ReadOnlyCollection_1_t2567 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_IndexOf_m13207_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m13207_gshared (ReadOnlyCollection_1_t2567 * __this, RaycastResult_t184  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t184  L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Count_m13208_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_get_Count_m13208_gshared (ReadOnlyCollection_1_t2567 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t184  ReadOnlyCollection_1_get_Item_m13209_gshared (ReadOnlyCollection_1_t2567 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t184  L_2 = (RaycastResult_t184 )InterfaceFuncInvoker1< RaycastResult_t184 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2568_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2568_0_0_0;
extern Il2CppType RaycastResult_t184_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m22936_MethodInfo;
extern MethodInfo Collection_1_SetItem_m13240_MethodInfo;
extern MethodInfo List_1__ctor_m1938_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m13233_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m13231_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m13236_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m13227_MethodInfo;
extern MethodInfo ICollection_1_Clear_m22937_MethodInfo;
extern MethodInfo IList_1_Insert_m22938_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m22939_MethodInfo;
extern MethodInfo IList_1_set_Item_m22940_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m22936_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m13244_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m13245_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m13242_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m13240_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m13233_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m13243_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m13231_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m13236_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m13227_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m22937_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m22938_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m22939_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m22940_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod Collection_1__ctor_m13210_GenericMethod;
extern TypeInfo* List_1_t183_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m13210_gshared (Collection_1_t2568 * __this, MethodInfo* method)
{
	static bool Collection_1__ctor_m13210_init;
	if (!Collection_1__ctor_m13210_init)
	{
		List_1_t183_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t183_0_0_0);
		Collection_1__ctor_m13210_init = true;
	}
	List_1_t183 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t183_il2cpp_TypeInfo_var);
		List_1_t183 * L_0 = (List_1_t183 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t183 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = L_0;
		List_1_t183 * L_1 = V_0;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m11141_MethodInfo, L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t183 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13211_GenericMethod;
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13211_gshared (Collection_1_t2568 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_CopyTo_m13212_GenericMethod;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m13212_gshared (Collection_1_t2568 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t846_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m4756_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t846_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Collection_1_System_Collections_IEnumerable_GetEnumerator_m13213_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m13213_gshared (Collection_1_t2568 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Add_m13214_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_Add_m13214_gshared (Collection_1_t2568 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		RaycastResult_t184  L_4 = (( RaycastResult_t184  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Contains_m13215_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_Contains_m13215_gshared (Collection_1_t2568 * __this, Object_t * ___value, MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_2, ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_IndexOf_m13216_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m13216_gshared (Collection_1_t2568 * __this, Object_t * ___value, MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_2, ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Insert_m13217_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Insert_m13217_gshared (Collection_1_t2568 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		RaycastResult_t184  L_2 = (( RaycastResult_t184  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Remove_m13218_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Remove_m13218_gshared (Collection_1_t2568 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_1 = ___value;
		RaycastResult_t184  L_2 = (( RaycastResult_t184  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_IsSynchronized_m13219_GenericMethod;
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m13219_gshared (Collection_1_t2568 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_SyncRoot_m13220_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m13220_gshared (Collection_1_t2568 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsFixedSize_m13221_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m13221_gshared (Collection_1_t2568 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsReadOnly_m13222_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m13222_gshared (Collection_1_t2568 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_Item_m13223_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m13223_gshared (Collection_1_t2568 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t184  L_2 = (RaycastResult_t184 )InterfaceFuncInvoker1< RaycastResult_t184 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		RaycastResult_t184  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_set_Item_m13224_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_set_Item_m13224_gshared (Collection_1_t2568 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		RaycastResult_t184  L_2 = (( RaycastResult_t184  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern Il2CppGenericMethod Collection_1_Add_m13225_GenericMethod;
extern "C" void Collection_1_Add_m13225_gshared (Collection_1_t2568 * __this, RaycastResult_t184  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		RaycastResult_t184  L_3 = ___item;
		VirtActionInvoker2< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern Il2CppGenericMethod Collection_1_Clear_m13226_GenericMethod;
extern "C" void Collection_1_Clear_m13226_gshared (Collection_1_t2568 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), __this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::ClearItems()
extern "C" void Collection_1_ClearItems_m13227_gshared (Collection_1_t2568 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern Il2CppGenericMethod Collection_1_Contains_m13228_GenericMethod;
extern "C" bool Collection_1_Contains_m13228_gshared (Collection_1_t2568 * __this, RaycastResult_t184  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t184  L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod Collection_1_CopyTo_m13229_GenericMethod;
extern "C" void Collection_1_CopyTo_m13229_gshared (Collection_1_t2568 * __this, RaycastResultU5BU5D_t2563* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResultU5BU5D_t2563* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2563*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern Il2CppGenericMethod Collection_1_GetEnumerator_m13230_GenericMethod;
extern "C" Object_t* Collection_1_GetEnumerator_m13230_gshared (Collection_1_t2568 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m13231_gshared (Collection_1_t2568 * __this, RaycastResult_t184  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t184  L_1 = ___item;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern Il2CppGenericMethod Collection_1_Insert_m13232_GenericMethod;
extern "C" void Collection_1_Insert_m13232_gshared (Collection_1_t2568 * __this, int32_t ___index, RaycastResult_t184  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t184  L_1 = ___item;
		VirtActionInvoker2< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m13233_gshared (Collection_1_t2568 * __this, int32_t ___index, RaycastResult_t184  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		RaycastResult_t184  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern Il2CppGenericMethod Collection_1_Remove_m13234_GenericMethod;
extern "C" bool Collection_1_Remove_m13234_gshared (Collection_1_t2568 * __this, RaycastResult_t184  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		RaycastResult_t184  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
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
extern Il2CppGenericMethod Collection_1_RemoveAt_m13235_GenericMethod;
extern "C" void Collection_1_RemoveAt_m13235_gshared (Collection_1_t2568 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m13236_gshared (Collection_1_t2568 * __this, int32_t ___index, MethodInfo* method)
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
extern Il2CppGenericMethod Collection_1_get_Count_m13237_GenericMethod;
extern "C" int32_t Collection_1_get_Count_m13237_gshared (Collection_1_t2568 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_get_Item_m13238_GenericMethod;
extern "C" RaycastResult_t184  Collection_1_get_Item_m13238_gshared (Collection_1_t2568 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t184  L_2 = (RaycastResult_t184 )InterfaceFuncInvoker1< RaycastResult_t184 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern Il2CppGenericMethod Collection_1_set_Item_m13239_GenericMethod;
extern "C" void Collection_1_set_Item_m13239_gshared (Collection_1_t2568 * __this, int32_t ___index, RaycastResult_t184  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t184  L_1 = ___value;
		VirtActionInvoker2< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m13240_gshared (Collection_1_t2568 * __this, int32_t ___index, RaycastResult_t184  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		RaycastResult_t184  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m13241_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
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
		Type_t * L_2 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m6819_MethodInfo, L_2);
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
extern "C" RaycastResult_t184  Collection_1_ConvertItem_m13242_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
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
		return ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_000f:
	{
		ArgumentException_t445 * L_3 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_3, (String_t*) &_stringLiteral1322, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m13243_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
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
		NotSupportedException_t158 * L_2 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_2, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m13244_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&ICollection_t846_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&ICollection_get_IsSynchronized_m11451_MethodInfo, L_2);
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
extern "C" bool Collection_1_IsFixedSize_m13245_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&IList_t1035_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IList_get_IsFixedSize_m11452_MethodInfo, L_2);
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
extern TypeInfo EqualityComparer_1_t2569_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5.h"
extern TypeInfo DefaultComparer_t2570_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2569_0_0_0;
extern Il2CppType IEquatable_1_t3733_0_0_0;
extern Il2CppType DefaultComparer_t2570_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13251_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m22941_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m20257_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13251_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m22941_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m20257_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m13246_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m13246_gshared (EqualityComparer_1_t2569 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m13247_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m13247_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2570 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2570 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2570 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t2569_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m13248_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m13248_gshared (EqualityComparer_1_t2569 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m13249_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m13249_gshared (EqualityComparer_1_t2569 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, RaycastResult_t184 , RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m13250_GenericMethod;
extern "C" EqualityComparer_1_t2569 * EqualityComparer_1_get_Default_m13250_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2569 * L_0 = ((EqualityComparer_1_t2569_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3734_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3733_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.RaycastResult>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m13251_gshared (DefaultComparer_t2570 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2569 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m13252_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m13252_gshared (DefaultComparer_t2570 * __this, RaycastResult_t184  ___obj, MethodInfo* method)
{
	{
		RaycastResult_t184  L_0 = ___obj;
		RaycastResult_t184  L_1 = L_0;
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
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m167_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m13253_GenericMethod;
extern "C" bool DefaultComparer_Equals_m13253_gshared (DefaultComparer_t2570 * __this, RaycastResult_t184  ___x, RaycastResult_t184  ___y, MethodInfo* method)
{
	{
		RaycastResult_t184  L_0 = ___x;
		RaycastResult_t184  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		RaycastResult_t184  L_3 = ___y;
		RaycastResult_t184  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		RaycastResult_t184  L_6 = ___y;
		RaycastResult_t184  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m166_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Predicate_1__ctor_m13254_GenericMethod;
extern "C" void Predicate_1__ctor_m13254_gshared (Predicate_1_t2571 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m13255_gshared (Predicate_1_t2571 * __this, RaycastResult_t184  ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m13255((Predicate_1_t2571 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastResult_t184  ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef bool (*FunctionPointerType) (Object_t * __this, RaycastResult_t184  ___obj, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Predicate_1_BeginInvoke_m13256_GenericMethod;
extern "C" Object_t * Predicate_1_BeginInvoke_m13256_gshared (Predicate_1_t2571 * __this, RaycastResult_t184  ___obj, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&RaycastResult_t184_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Predicate_1_EndInvoke_m13257_GenericMethod;
extern "C" bool Predicate_1_EndInvoke_m13257_gshared (Predicate_1_t2571 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_5.h"
extern TypeInfo DefaultComparer_t2573_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_5MethodDeclarations.h"
extern Il2CppType IComparable_1_t3473_0_0_0;
extern Il2CppType DefaultComparer_t2573_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13262_MethodInfo;
extern MethodInfo Comparer_1_Compare_m22942_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13262_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m22942_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m13258_GenericMethod;
extern "C" void Comparer_1__ctor_m13258_gshared (Comparer_1_t2572 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m13259_GenericMethod;
extern "C" void Comparer_1__cctor_m13259_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2573 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2573 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2573 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t2572_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m13260_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m13260_gshared (Comparer_1_t2572 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
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
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, RaycastResult_t184 , RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(RaycastResult_t184 *)((RaycastResult_t184 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t445 * L_8 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m10267(L_8, /*hidden argument*/&ArgumentException__ctor_m10267_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::get_Default()
extern "C" Comparer_1_t2572 * Comparer_1_get_Default_m13261_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2572 * L_0 = ((Comparer_1_t2572_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3472_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3473_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.RaycastResult>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m20266_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m20266_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m13262_gshared (DefaultComparer_t2573 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t2572 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m13263_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m13263_gshared (DefaultComparer_t2573 * __this, RaycastResult_t184  ___x, RaycastResult_t184  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		RaycastResult_t184  L_0 = ___x;
		RaycastResult_t184  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		RaycastResult_t184  L_3 = ___y;
		RaycastResult_t184  L_4 = L_3;
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
		RaycastResult_t184  L_6 = ___y;
		RaycastResult_t184  L_7 = L_6;
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
		RaycastResult_t184  L_9 = ___x;
		RaycastResult_t184  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		RaycastResult_t184  L_12 = ___x;
		RaycastResult_t184  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		RaycastResult_t184  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t184  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		RaycastResult_t184  L_17 = ___x;
		RaycastResult_t184  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t41_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		RaycastResult_t184  L_20 = ___x;
		RaycastResult_t184  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		RaycastResult_t184  L_23 = ___y;
		RaycastResult_t184  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck(((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t41_il2cpp_TypeInfo))));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m11107_MethodInfo, ((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t41_il2cpp_TypeInfo))), L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t445 * L_27 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_27, (String_t*) &_stringLiteral1308, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t233_il2cpp_TypeInfo;
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
extern TypeInfo BaseRaycaster_t235_il2cpp_TypeInfo;
extern TypeInfo BaseRaycasterU5BU5D_t2574_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2576_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3267_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3268_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3266_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2578_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2582_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2583_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_6MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Predicate_1_gen_9MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_6MethodDeclarations.h"
extern Il2CppType List_1_t233_0_0_0;
extern Il2CppType BaseRaycasterU5BU5D_t2574_0_0_0;
extern Il2CppType Enumerator_t2576_0_0_0;
extern Il2CppType ICollection_1_t3267_0_0_0;
extern Il2CppType IEnumerable_1_t3268_0_0_0;
extern Il2CppType IEnumerator_1_t3266_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2578_0_0_0;
extern Il2CppType Predicate_1_t2582_0_0_0;
extern Il2CppType Comparer_1_t2583_0_0_0;
extern MethodInfo List_1_get_Item_m1868_MethodInfo;
extern MethodInfo List_1_set_Item_m13306_MethodInfo;
extern MethodInfo List_1_Add_m1932_MethodInfo;
extern MethodInfo List_1_Contains_m1931_MethodInfo;
extern MethodInfo List_1_IndexOf_m13292_MethodInfo;
extern MethodInfo List_1_Insert_m13295_MethodInfo;
extern MethodInfo List_1_Remove_m1933_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m22943_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m22944_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m22945_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m22946_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m13318_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m13393_MethodInfo;
extern MethodInfo Enumerator__ctor_m13312_MethodInfo;
extern MethodInfo List_1_RemoveAt_m13298_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.BaseRaycaster>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.BaseRaycaster>(!!0[]&,System.Int32)
#define Array_Resize_TisBaseRaycaster_t235_m20282(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, BaseRaycasterU5BU5D_t2574**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m19769_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.BaseRaycaster>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.BaseRaycaster>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisBaseRaycaster_t235_m20284(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, BaseRaycasterU5BU5D_t2574*, BaseRaycaster_t235 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11142_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisBaseRaycaster_t235_m20286(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, BaseRaycasterU5BU5D_t2574*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m19838_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisBaseRaycaster_t235_m20294(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, BaseRaycasterU5BU5D_t2574*, int32_t, Comparison_1_t2585 *, MethodInfo*))Array_Sort_TisObject_t_m19945_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m1868_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m13306_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisBaseRaycaster_t235_m20282_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m13294_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m13291_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m1932_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m1931_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m13292_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m13295_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m1933_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m13281_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m13304_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m13305_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m22943_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m22944_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m22945_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m22946_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m13296_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m13282_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m13283_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m13318_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisBaseRaycaster_t235_m20284_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m13289_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m13290_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m13393_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13312_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m13293_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m13298_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m13399_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisBaseRaycaster_t235_m20286_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisBaseRaycaster_t235_m20294_GenericMethod;


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
extern TypeInfo InternalEnumerator_1_t2575_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2575_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseRaycaster>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseRaycaster>(System.Int32)
#define Array_InternalArray__get_Item_TisBaseRaycaster_t235_m20271(__this, p0, method) (( BaseRaycaster_t235 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13311_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBaseRaycaster_t235_m20271_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2577_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m13315_GenericMethod;


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
extern Il2CppType IList_1_t2577_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m13347_MethodInfo;
extern MethodInfo IList_1_get_Item_m22947_MethodInfo;
extern MethodInfo ICollection_1_Contains_m22948_MethodInfo;
extern MethodInfo IList_1_IndexOf_m22949_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m13347_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m22947_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m13379_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m22948_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m22949_GenericMethod;


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
extern TypeInfo Collection_1_t2579_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2579_0_0_0;
extern Il2CppType BaseRaycaster_t235_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m22950_MethodInfo;
extern MethodInfo Collection_1_SetItem_m13378_MethodInfo;
extern MethodInfo List_1__ctor_m1930_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m13371_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m13369_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m13374_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m13365_MethodInfo;
extern MethodInfo ICollection_1_Clear_m22951_MethodInfo;
extern MethodInfo IList_1_Insert_m22952_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m22953_MethodInfo;
extern MethodInfo IList_1_set_Item_m22954_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m22950_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m13382_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m13383_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m13380_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m13378_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m1930_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m13371_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m13381_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m13369_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m13374_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m13365_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m22951_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m22952_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m22953_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m22954_GenericMethod;


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
extern TypeInfo EqualityComparer_1_t2580_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_6.h"
extern TypeInfo DefaultComparer_t2581_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_6MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2580_0_0_0;
extern Il2CppType IEquatable_1_t3735_0_0_0;
extern Il2CppType DefaultComparer_t2581_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13389_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m22955_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m20283_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13389_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m22955_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m20283_GenericMethod;


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
extern TypeInfo IEqualityComparer_1_t3736_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3735_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.BaseRaycaster>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m13384_GenericMethod;


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
extern TypeInfo DefaultComparer_t2584_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_6MethodDeclarations.h"
extern Il2CppType IComparable_1_t3475_0_0_0;
extern Il2CppType DefaultComparer_t2584_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13400_MethodInfo;
extern MethodInfo Comparer_1_Compare_m22956_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13400_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m22956_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3474_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseRaycaster>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3475_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.BaseRaycaster>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m20292_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m13396_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m20292_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2585_il2cpp_TypeInfo;
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
extern TypeInfo List_1_t188_il2cpp_TypeInfo;
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
extern TypeInfo Entry_t187_il2cpp_TypeInfo;
extern TypeInfo EntryU5BU5D_t2586_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2588_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3270_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3271_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3269_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2590_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2594_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2595_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_7MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Predicate_1_gen_10MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_7MethodDeclarations.h"
extern Il2CppType List_1_t188_0_0_0;
extern Il2CppType EntryU5BU5D_t2586_0_0_0;
extern Il2CppType Enumerator_t2588_0_0_0;
extern Il2CppType ICollection_1_t3270_0_0_0;
extern Il2CppType IEnumerable_1_t3271_0_0_0;
extern Il2CppType IEnumerator_1_t3269_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2590_0_0_0;
extern Il2CppType Predicate_1_t2594_0_0_0;
extern Il2CppType Comparer_1_t2595_0_0_0;
extern MethodInfo List_1_get_Item_m1884_MethodInfo;
extern MethodInfo List_1_set_Item_m13452_MethodInfo;
extern MethodInfo List_1_Add_m13424_MethodInfo;
extern MethodInfo List_1_Contains_m13431_MethodInfo;
extern MethodInfo List_1_IndexOf_m13437_MethodInfo;
extern MethodInfo List_1_Insert_m13440_MethodInfo;
extern MethodInfo List_1_Remove_m13442_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m22957_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m22958_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m22959_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m22960_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m13464_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m13539_MethodInfo;
extern MethodInfo Enumerator__ctor_m13458_MethodInfo;
extern MethodInfo List_1_RemoveAt_m13444_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[]&,System.Int32)
#define Array_Resize_TisEntry_t187_m20308(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, EntryU5BU5D_t2586**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m19769_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_7.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisEntry_t187_m20310(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, EntryU5BU5D_t2586*, Entry_t187 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11142_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisEntry_t187_m20312(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, EntryU5BU5D_t2586*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m19838_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisEntry_t187_m20320(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, EntryU5BU5D_t2586*, int32_t, Comparison_1_t2597 *, MethodInfo*))Array_Sort_TisObject_t_m19945_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m1884_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m13452_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisEntry_t187_m20308_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m13439_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m13436_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m13424_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m13431_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m13437_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m13440_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m13442_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m13425_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m13450_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m13451_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m22957_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m22958_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m22959_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m22960_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m13441_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m13426_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m13427_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m13464_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisEntry_t187_m20310_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m13434_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m13435_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m13539_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13458_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m13438_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m13444_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m13545_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisEntry_t187_m20312_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisEntry_t187_m20320_GenericMethod;


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
extern TypeInfo InternalEnumerator_1_t2587_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2587_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.EventTrigger/Entry>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.EventTrigger/Entry>(System.Int32)
#define Array_InternalArray__get_Item_TisEntry_t187_m20297(__this, p0, method) (( Entry_t187 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19472_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13457_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisEntry_t187_m20297_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2589_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m13461_GenericMethod;


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
extern Il2CppType IList_1_t2589_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m13493_MethodInfo;
extern MethodInfo IList_1_get_Item_m22961_MethodInfo;
extern MethodInfo ICollection_1_Contains_m22962_MethodInfo;
extern MethodInfo IList_1_IndexOf_m22963_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m13493_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m22961_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m13525_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m22962_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m22963_GenericMethod;


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
extern TypeInfo Collection_1_t2591_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2591_0_0_0;
extern Il2CppType Entry_t187_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m22964_MethodInfo;
extern MethodInfo Collection_1_SetItem_m13524_MethodInfo;
extern MethodInfo List_1__ctor_m13406_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m13517_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m13515_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m13520_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m13511_MethodInfo;
extern MethodInfo ICollection_1_Clear_m22965_MethodInfo;
extern MethodInfo IList_1_Insert_m22966_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m22967_MethodInfo;
extern MethodInfo IList_1_set_Item_m22968_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m22964_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m13528_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m13529_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m13526_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m13524_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m13406_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m13517_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m13527_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m13515_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m13520_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m13511_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m22965_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m22966_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m22967_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m22968_GenericMethod;


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
extern TypeInfo EqualityComparer_1_t2592_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_7MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_7.h"
extern TypeInfo DefaultComparer_t2593_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_7MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2592_0_0_0;
extern Il2CppType IEquatable_1_t3737_0_0_0;
extern Il2CppType DefaultComparer_t2593_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13535_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m22969_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m20309_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13535_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m22969_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m20309_GenericMethod;


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
extern TypeInfo IEqualityComparer_1_t3738_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3737_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.EventTrigger/Entry>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m13530_GenericMethod;


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
extern TypeInfo DefaultComparer_t2596_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_7MethodDeclarations.h"
extern Il2CppType IComparable_1_t3477_0_0_0;
extern Il2CppType DefaultComparer_t2596_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13546_MethodInfo;
extern MethodInfo Comparer_1_Compare_m22970_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13546_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m22970_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3476_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3477_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.EventTrigger/Entry>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m20318_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m13542_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m20318_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2597_il2cpp_TypeInfo;
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
extern TypeInfo UnityEvent_1_t186_il2cpp_TypeInfo;
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
extern TypeInfo ObjectU5BU5D_t148_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t2601_il2cpp_TypeInfo;
extern TypeInfo BaseEventData_t178_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_0MethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t148_0_0_0;
extern Il2CppType BaseEventData_t178_0_0_0;
extern Il2CppType InvokableCall_1_t2601_0_0_0;
extern MethodInfo UnityEventBase__ctor_m3572_MethodInfo;
extern MethodInfo UnityEventBase_AddCall_m3577_MethodInfo;
extern MethodInfo Delegate_get_Target_m3708_MethodInfo;
extern MethodInfo Delegate_get_Method_m3706_MethodInfo;
extern MethodInfo UnityEventBase_RemoveListener_m3578_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m3580_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m13570_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m13571_MethodInfo;
extern MethodInfo UnityEventBase_Invoke_m3579_MethodInfo;
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m13559_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m13570_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m13571_GenericMethod;


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
extern TypeInfo UnityEvent_1_t2598_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen.h"
extern TypeInfo InvokableCall_1_t2599_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType InvokableCall_1_t2599_0_0_0;
extern MethodInfo InvokableCall_1__ctor_m13562_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m13563_MethodInfo;
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m13560_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m13562_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m13563_GenericMethod;


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern Il2CppGenericMethod UnityEvent_1__ctor_m13552_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m13552_gshared (UnityEvent_1_t2598 * __this, MethodInfo* method)
{
	static bool UnityEvent_1__ctor_m13552_init;
	if (!UnityEvent_1__ctor_m13552_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		UnityEvent_1__ctor_m13552_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 1));
		UnityEventBase__ctor_m3572(__this, /*hidden argument*/&UnityEventBase__ctor_m3572_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_AddListener_m13554_GenericMethod;
extern "C" void UnityEvent_1_AddListener_m13554_gshared (UnityEvent_1_t2598 * __this, UnityAction_1_t2545 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t2545 * L_0 = ___call;
		BaseInvokableCall_t709 * L_1 = (( BaseInvokableCall_t709 * (*) (Object_t * /* static, unused */, UnityAction_1_t2545 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UnityEventBase_AddCall_m3577(__this, L_1, /*hidden argument*/&UnityEventBase_AddCall_m3577_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_RemoveListener_m13556_GenericMethod;
extern "C" void UnityEvent_1_RemoveListener_m13556_gshared (UnityEvent_1_t2598 * __this, UnityAction_1_t2545 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t2545 * L_0 = ___call;
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3708(L_0, /*hidden argument*/&Delegate_get_Target_m3708_MethodInfo);
		UnityAction_1_t2545 * L_2 = ___call;
		NullCheck(L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m3706(L_2, /*hidden argument*/&Delegate_get_Method_m3706_MethodInfo);
		UnityEventBase_RemoveListener_m3578(__this, L_1, L_3, /*hidden argument*/&UnityEventBase_RemoveListener_m3578_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern Il2CppGenericMethod UnityEvent_1_FindMethod_Impl_m13557_GenericMethod;
extern TypeInfo* TypeU5BU5D_t670_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13557_gshared (UnityEvent_1_t2598 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_1_FindMethod_Impl_m13557_init;
	if (!UnityEvent_1_FindMethod_Impl_m13557_init)
	{
		TypeU5BU5D_t670_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t670_0_0_0);
		UnityEvent_1_FindMethod_Impl_m13557_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t670* L_2 = ((TypeU5BU5D_t670*)SZArrayNew(TypeU5BU5D_t670_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m3580(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3580_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m13558_GenericMethod;
extern "C" BaseInvokableCall_t709 * UnityEvent_1_GetDelegate_m13558_gshared (UnityEvent_1_t2598 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t2599 * L_2 = (InvokableCall_1_t2599 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2599 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t709 * UnityEvent_1_GetDelegate_m13560_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2545 * ___action, MethodInfo* method)
{
	{
		UnityAction_1_t2545 * L_0 = ___action;
		InvokableCall_1_t2599 * L_1 = (InvokableCall_1_t2599 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2599 *, UnityAction_1_t2545 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern Il2CppGenericMethod UnityEvent_1_Invoke_m13561_GenericMethod;
extern "C" void UnityEvent_1_Invoke_m13561_gshared (UnityEvent_1_t2598 * __this, Object_t * ___arg0, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->___m_InvokeArray_4);
		Object_t * L_1 = ___arg0;
		Object_t * L_2 = L_1;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, ((Object_t *)L_2));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)((Object_t *)L_2);
		ObjectU5BU5D_t148* L_3 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m3579(__this, L_3, /*hidden argument*/&UnityEventBase_Invoke_m3579_MethodInfo);
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
extern MethodInfo BaseInvokableCall__ctor_m3551_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m3709_MethodInfo;
extern MethodInfo Delegate_Combine_m2090_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m3550_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m3552_MethodInfo;
struct BaseInvokableCall_t709;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20322_gshared (Object_t * __this /* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20322(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20322_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20322_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13562_gshared (InvokableCall_1_t2599 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3551(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m3551_MethodInfo);
		UnityAction_1_t2545 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t424 * L_6 = Delegate_CreateDelegate_m3709(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m3709_MethodInfo);
		Delegate_t424 * L_7 = Delegate_Combine_m2090(NULL /*static, unused*/, L_2, ((UnityAction_1_t2545 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/&Delegate_Combine_m2090_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t2545 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13563_gshared (InvokableCall_1_t2599 * __this, UnityAction_1_t2545 * ___callback, MethodInfo* method)
{
	{
		BaseInvokableCall__ctor_m3550(__this, /*hidden argument*/&BaseInvokableCall__ctor_m3550_MethodInfo);
		UnityAction_1_t2545 * L_0 = (__this->___Delegate_0);
		UnityAction_1_t2545 * L_1 = ___callback;
		Delegate_t424 * L_2 = Delegate_Combine_m2090(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m2090_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t2545 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern Il2CppGenericMethod InvokableCall_1_Invoke_m13564_GenericMethod;
extern "C" void InvokableCall_1_Invoke_m13564_gshared (InvokableCall_1_t2599 * __this, ObjectU5BU5D_t148* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t445 * L_1 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_1, (String_t*) &_stringLiteral304, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t148* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t2545 * L_4 = (__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3552(NULL /*static, unused*/, L_4, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m3552_MethodInfo);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t2545 * L_6 = (__this->___Delegate_0);
		ObjectU5BU5D_t148* L_7 = ___args;
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
extern Il2CppGenericMethod InvokableCall_1_Find_m13565_GenericMethod;
extern "C" bool InvokableCall_1_Find_m13565_gshared (InvokableCall_1_t2599 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t2545 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3708(L_0, /*hidden argument*/&Delegate_get_Target_m3708_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t2545 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m3706(L_3, /*hidden argument*/&Delegate_get_Method_m3706_MethodInfo);
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
extern TypeInfo UnityAction_1_t2600_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

extern Il2CppType UnityAction_1_t2600_0_0_0;
extern MethodInfo UnityAction_1_Invoke_m13567_MethodInfo;
struct BaseInvokableCall_t709;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.EventSystems.BaseEventData>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.EventSystems.BaseEventData>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisBaseEventData_t178_m20323(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20322_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisBaseEventData_t178_m20323_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m13567_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::Find(System.Object,System.Reflection.MethodInfo)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t192_il2cpp_TypeInfo;
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
extern TypeInfo EventFunction_1_t193_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_3MethodDeclarations.h"



// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::EndInvoke(System.IAsyncResult)
#ifdef __clang__
#pragma clang diagnostic pop
#endif

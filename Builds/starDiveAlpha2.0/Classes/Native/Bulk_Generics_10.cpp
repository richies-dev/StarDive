#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.Events.UnityAction`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_10.h"
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
extern TypeInfo UnityAction_1_t2921_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_10MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_1__ctor_m16403_GenericMethod;
extern "C" void UnityAction_1__ctor_m16403_gshared (UnityAction_1_t2921 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::Invoke(T0)
extern Il2CppGenericMethod UnityAction_1_Invoke_m16404_GenericMethod;
extern "C" void UnityAction_1_Invoke_m16404_gshared (UnityAction_1_t2921 * __this, uint8_t ___arg0, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m16404((UnityAction_1_t2921 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, uint8_t ___arg0, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, uint8_t ___arg0, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Byte>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m16405_GenericMethod;
extern "C" Object_t * UnityAction_1_BeginInvoke_m16405_gshared (UnityAction_1_t2921 * __this, uint8_t ___arg0, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Byte_t517_il2cpp_TypeInfo), &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m16406_GenericMethod;
extern "C" void UnityAction_1_EndInvoke_m16406_gshared (UnityAction_1_t2921 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.InvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t2922_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_5MethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
#include "mscorlib_ArrayTypes.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t514_il2cpp_TypeInfo;
extern TypeInfo Byte_t517_il2cpp_TypeInfo;
extern TypeInfo Void_t103_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType UnityAction_1_t2921_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m3783_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m298_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m3946_MethodInfo;
extern MethodInfo Delegate_Combine_m2321_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m3782_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2604_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m3784_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m16404_MethodInfo;
extern MethodInfo Delegate_get_Target_m3945_MethodInfo;
extern MethodInfo Delegate_get_Method_m3943_MethodInfo;
struct BaseInvokableCall_t775;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Byte>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Byte>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisByte_t517_m21278_gshared (Object_t * __this /* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisByte_t517_m21278(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisByte_t517_m21278_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisByte_t517_m21278_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_1__ctor_m16407_GenericMethod;
extern "C" void InvokableCall_1__ctor_m16407_gshared (InvokableCall_1_t2922 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3783(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m3783_MethodInfo);
		UnityAction_1_t2921 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t493 * L_6 = Delegate_CreateDelegate_m3946(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m3946_MethodInfo);
		Delegate_t493 * L_7 = Delegate_Combine_m2321(NULL /*static, unused*/, L_2, ((UnityAction_1_t2921 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/&Delegate_Combine_m2321_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t2921 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern Il2CppGenericMethod InvokableCall_1__ctor_m16408_GenericMethod;
extern "C" void InvokableCall_1__ctor_m16408_gshared (InvokableCall_1_t2922 * __this, UnityAction_1_t2921 * ___callback, MethodInfo* method)
{
	{
		BaseInvokableCall__ctor_m3782(__this, /*hidden argument*/&BaseInvokableCall__ctor_m3782_MethodInfo);
		UnityAction_1_t2921 * L_0 = (__this->___Delegate_0);
		UnityAction_1_t2921 * L_1 = ___callback;
		Delegate_t493 * L_2 = Delegate_Combine_m2321(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m2321_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t2921 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16409_GenericMethod;
extern "C" void InvokableCall_1_Invoke_m16409_gshared (InvokableCall_1_t2922 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method)
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
		UnityAction_1_t2921 * L_4 = (__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3784(NULL /*static, unused*/, L_4, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m3784_MethodInfo);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t2921 * L_6 = (__this->___Delegate_0);
		ObjectU5BU5D_t219* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck(L_6);
		VirtActionInvoker1< uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6, ((*(uint8_t*)((uint8_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_1_Find_m16410_GenericMethod;
extern "C" bool InvokableCall_1_Find_m16410_gshared (InvokableCall_1_t2922 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t2921 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3945(L_0, /*hidden argument*/&Delegate_get_Target_m3945_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t2921 * L_3 = (__this->___Delegate_0);
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
// UnityEngine.Events.UnityAction`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t2923_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_11MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t2924_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_6MethodDeclarations.h"

extern TypeInfo Boolean_t90_il2cpp_TypeInfo;
extern Il2CppType UnityAction_1_t2923_0_0_0;
extern MethodInfo UnityAction_1_Invoke_m16412_MethodInfo;
struct BaseInvokableCall_t775;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Boolean>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Boolean>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t90_m21279(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisByte_t517_m21278_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t90_m21279_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m16412_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_gen_17.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t429_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.UI.Toggle
#include "UnityEngine_UI_UnityEngine_UI_Toggle.h"
#include "UnityEngine.UI_ArrayTypes.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_18.h"
// System.Predicate`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Predicate_1_gen_0.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_18.h"
// System.Comparison`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Comparison_1_gen_19.h"
extern TypeInfo Toggle_t428_il2cpp_TypeInfo;
extern TypeInfo Int32_t92_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t790_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1934_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1144_il2cpp_TypeInfo;
extern TypeInfo ToggleU5BU5D_t2925_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2929_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3383_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t432_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t2941_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t169_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t231_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2931_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t820_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t430_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2935_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_18MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Predicate_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_18MethodDeclarations.h"
extern Il2CppType List_1_t429_0_0_0;
extern Il2CppType ToggleU5BU5D_t2925_0_0_0;
extern Il2CppType Enumerator_t2929_0_0_0;
extern Il2CppType ICollection_1_t3383_0_0_0;
extern Il2CppType IEnumerable_1_t432_0_0_0;
extern Il2CppType IEnumerator_1_t2941_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2931_0_0_0;
extern Il2CppType Predicate_1_t430_0_0_0;
extern Il2CppType Comparer_1_t2935_0_0_0;
extern MethodInfo List_1_get_Item_m2605_MethodInfo;
extern MethodInfo List_1_set_Item_m16460_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5195_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5008_MethodInfo;
extern MethodInfo Object__ctor_m373_MethodInfo;
extern MethodInfo Array_Copy_m7003_MethodInfo;
extern MethodInfo List_1_Add_m2608_MethodInfo;
extern MethodInfo List_1_Contains_m2602_MethodInfo;
extern MethodInfo List_1_IndexOf_m16446_MethodInfo;
extern MethodInfo List_1_Insert_m16449_MethodInfo;
extern MethodInfo List_1_Remove_m2607_MethodInfo;
extern MethodInfo Math_Max_m6173_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m23351_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m23352_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m23353_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m23354_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m5005_MethodInfo;
extern MethodInfo IDisposable_Dispose_m861_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m16482_MethodInfo;
extern MethodInfo Array_Clear_m6165_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3942_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m16556_MethodInfo;
extern MethodInfo Enumerator__ctor_m16476_MethodInfo;
extern MethodInfo List_1_RemoveAt_m16452_MethodInfo;
extern MethodInfo Array_Reverse_m6206_MethodInfo;
extern MethodInfo Array_Copy_m7002_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m20076_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m20076(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.UI.Toggle>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UI.Toggle>(!!0[]&,System.Int32)
#define Array_Resize_TisToggle_t428_m21314(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ToggleU5BU5D_t2925**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_23.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m11377_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m11377(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11377_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UI.Toggle>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UI.Toggle>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisToggle_t428_m21316(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ToggleU5BU5D_t2925*, Toggle_t428 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11377_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m20079_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m20079(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20079_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.UI.Toggle>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.Toggle>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisToggle_t428_m21318(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ToggleU5BU5D_t2925*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20079_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// System.Exception
#include "mscorlib_System_Exception.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m20186_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t219* p0, int32_t p1, Comparison_1_t2545 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m20186(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t219*, int32_t, Comparison_1_t2545 *, MethodInfo*))Array_Sort_TisObject_t_m20186_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.UI.Toggle>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.Toggle>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisToggle_t428_m21326(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ToggleU5BU5D_t2925*, int32_t, Comparison_1_t2937 *, MethodInfo*))Array_Sort_TisObject_t_m20186_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2605_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m16460_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisToggle_t428_m21314_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m16448_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m16445_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m2608_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m2602_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m16446_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m16449_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m2607_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m16436_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m16458_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m16459_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m23351_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m23352_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m23353_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m23354_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m16450_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m16437_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m16438_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m16482_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisToggle_t428_m21316_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m16443_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m16444_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m16556_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m16476_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m16447_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m16452_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m16562_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisToggle_t428_m21318_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisToggle_t428_m21326_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Toggle>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_105.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2926_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_105MethodDeclarations.h"

extern TypeInfo InvalidOperationException_t1143_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2926_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4997_MethodInfo;
extern MethodInfo Array_get_Length_m5002_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m19712_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19712(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Toggle>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Toggle>(System.Int32)
#define Array_InternalArray__get_Item_TisToggle_t428_m21281(__this, p0, method) (( Toggle_t428 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16465_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisToggle_t428_m21281_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2930_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Toggle>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Toggle>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Toggle>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3946_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3947_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IPointerClickHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3948_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_106.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2927_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_106MethodDeclarations.h"

extern TypeInfo IPointerClickHandler_t287_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2927_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerClickHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerClickHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisIPointerClickHandler_t287_m21292(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16470_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIPointerClickHandler_t287_m21292_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3949_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerClickHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerClickHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerClickHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerClickHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerClickHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3950_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3951_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.ISubmitHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3952_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_107.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2928_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_107MethodDeclarations.h"

extern TypeInfo ISubmitHandler_t298_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2928_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.ISubmitHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.ISubmitHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisISubmitHandler_t298_m21303(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16475_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisISubmitHandler_t298_m21303_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3953_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISubmitHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISubmitHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISubmitHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISubmitHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISubmitHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1323_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m5007_MethodInfo;
extern MethodInfo Object_GetType_m2196_MethodInfo;
extern MethodInfo Type_get_FullName_m3974_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m6181_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m16479_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::get_Current()
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
// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_18MethodDeclarations.h"
extern Il2CppType IList_1_t2930_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m16511_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m829_MethodInfo;
extern MethodInfo IList_1_get_Item_m23355_MethodInfo;
extern MethodInfo ICollection_CopyTo_m4993_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m5149_MethodInfo;
extern MethodInfo ICollection_1_Contains_m23356_MethodInfo;
extern MethodInfo IList_1_IndexOf_m23357_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m16511_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m23355_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m16543_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m23356_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m23357_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_18.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2932_il2cpp_TypeInfo;

extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo IList_t1102_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t2932_0_0_0;
extern Il2CppType Toggle_t428_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m23358_MethodInfo;
extern MethodInfo Collection_1_SetItem_m16542_MethodInfo;
extern MethodInfo List_1__ctor_m2601_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m11376_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m16535_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m16533_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m16538_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m16529_MethodInfo;
extern MethodInfo ICollection_1_Clear_m23359_MethodInfo;
extern MethodInfo IList_1_Insert_m23360_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m23361_MethodInfo;
extern MethodInfo IList_1_set_Item_m23362_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7055_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m11686_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m11687_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m23358_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m16546_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m16547_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m16544_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m16542_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m2601_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m16535_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m16545_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m16533_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m16538_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m16529_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m23359_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m23360_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m23361_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m23362_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2933_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_23MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_23.h"
extern TypeInfo TypeU5BU5D_t97_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2934_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_23MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2933_0_0_0;
extern Il2CppType IEquatable_1_t3954_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2333_0_0_0;
extern Il2CppType TypeU5BU5D_t97_0_0_0;
extern Il2CppType DefaultComparer_t2934_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m3955_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3953_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10477_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m16553_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23363_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m21315_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m16553_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23363_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m21315_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3955_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Toggle>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Toggle>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3954_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.UI.Toggle>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m441_MethodInfo;
extern MethodInfo Object_Equals_m440_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m16548_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Toggle>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Toggle>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Toggle>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.UI.Toggle>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.UI.Toggle>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.UI.Toggle>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.UI.Toggle>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_18.h"
extern TypeInfo DefaultComparer_t2936_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_18MethodDeclarations.h"
extern Il2CppType IComparable_1_t3562_0_0_0;
extern Il2CppType GenericComparer_1_t2263_0_0_0;
extern Il2CppType DefaultComparer_t2936_0_0_0;
extern MethodInfo DefaultComparer__ctor_m16563_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23364_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10503_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m16563_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23364_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3561_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UI.Toggle>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3562_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.UI.Toggle>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t108_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m21324_MethodInfo;
extern MethodInfo IComparable_CompareTo_m11342_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m16559_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m21324_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Toggle>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Toggle>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2937_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Comparison_1_gen_19MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.UI.Toggle>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.UI.Toggle>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.UI.Toggle>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.UI.Toggle>::EndInvoke(System.IAsyncResult)
// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
#include "System_Core_System_Func_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t431_il2cpp_TypeInfo;
// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
#include "System_Core_System_Func_2_genMethodDeclarations.h"



// System.Void System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::Invoke(T)
// System.IAsyncResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::EndInvoke(System.IAsyncResult)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t2938_il2cpp_TypeInfo;
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Func_2__ctor_m16569_GenericMethod;
extern "C" void Func_2__ctor_m16569_gshared (Func_2_t2938 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Byte>::Invoke(T)
extern Il2CppGenericMethod Func_2_Invoke_m16571_GenericMethod;
extern "C" uint8_t Func_2_Invoke_m16571_gshared (Func_2_t2938 * __this, Object_t * ___arg1, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m16571((Func_2_t2938 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Func_2_BeginInvoke_m16573_GenericMethod;
extern "C" Object_t * Func_2_BeginInvoke_m16573_gshared (Func_2_t2938 * __this, Object_t * ___arg1, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Byte>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Func_2_EndInvoke_m16575_GenericMethod;
extern "C" uint8_t Func_2_EndInvoke_m16575_gshared (Func_2_t2938 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t516_il2cpp_TypeInfo;
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_0MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940_il2cpp_TypeInfo;
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3EMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
extern TypeInfo IEnumerator_1_t238_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t2939_il2cpp_TypeInfo;
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
extern Il2CppType U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940_0_0_0;
extern Il2CppType IEnumerable_1_t2939_0_0_0;
extern Il2CppType IEnumerator_1_t238_0_0_0;
extern Il2CppType Func_2_t516_0_0_0;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m16584_MethodInfo;
extern MethodInfo Interlocked_CompareExchange_m10381_MethodInfo;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m16580_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m23070_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m23071_MethodInfo;
extern MethodInfo Func_2_Invoke_m16577_MethodInfo;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m16584_GenericMethod;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m16580_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m23070_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m23071_GenericMethod;
extern Il2CppGenericMethod Func_2_Invoke_m16577_GenericMethod;


// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::.ctor()
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m16580_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m16581_GenericMethod;
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m16581_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m16582_GenericMethod;
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m16582_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m16583_GenericMethod;
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m16583_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m16584_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 * __this, MethodInfo* method)
{
	U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 * V_0 = {0};
	{
		int32_t* L_0 = &(__this->___$PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m10381(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/&Interlocked_CompareExchange_m10381_MethodInfo);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 * L_2 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_2;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 * L_3 = V_0;
		Object_t* L_4 = (__this->___U3C$U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 * L_5 = V_0;
		Func_2_t516 * L_6 = (__this->___U3C$U3Epredicate_7);
		NullCheck(L_5);
		L_5->___predicate_3 = L_6;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::MoveNext()
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m16585_GenericMethod;
extern "C" bool U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m16585_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___$PC_4);
		V_0 = L_0;
		__this->___$PC_4 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00be;
	}

IL_0023:
	{
		Object_t* L_2 = (__this->___source_0);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2);
		__this->___U3C$s_97U3E__0_1 = L_3;
		V_0 = ((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_0089;
			}
		}

IL_0043:
		{
			goto IL_0089;
		}

IL_0048:
		{
			Object_t* L_5 = (__this->___U3C$s_97U3E__0_1);
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t516 * L_7 = (__this->___predicate_3);
			Object_t * L_8 = (__this->___U3CelementU3E__1_2);
			NullCheck(L_7);
			bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_7, L_8);
			if (!L_9)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			Object_t * L_10 = (__this->___U3CelementU3E__1_2);
			__this->___$current_5 = L_10;
			__this->___$PC_4 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xC0, FINALLY_009e);
		}

IL_0089:
		{
			Object_t* L_11 = (__this->___U3C$s_97U3E__0_1);
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m5005_MethodInfo, L_11);
			if (L_12)
			{
				goto IL_0048;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_00a2;
			}
		}

IL_00a1:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00a2:
		{
			Object_t* L_14 = (__this->___U3C$s_97U3E__0_1);
			if (L_14)
			{
				goto IL_00ab;
			}
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00ab:
		{
			Object_t* L_15 = (__this->___U3C$s_97U3E__0_1);
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_15);
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xC0, IL_00c0)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_00b7:
	{
		__this->___$PC_4 = (-1);
	}

IL_00be:
	{
		return 0;
	}

IL_00c0:
	{
		return 1;
	}
	// Dead block : IL_00c2: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::Dispose()
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m16586_GenericMethod;
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m16586_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2940 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___$PC_4);
		V_0 = L_0;
		__this->___$PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (__this->___U3C$s_97U3E__0_1);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			Object_t* L_3 = (__this->___U3C$s_97U3E__0_1);
			NullCheck(L_3);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2942_il2cpp_TypeInfo;
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_0MethodDeclarations.h"

extern Il2CppType U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2942_0_0_0;
extern Il2CppType Func_2_t431_0_0_0;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m16591_MethodInfo;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m16587_MethodInfo;
extern MethodInfo Func_2_Invoke_m16570_MethodInfo;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m16591_GenericMethod;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m16587_GenericMethod;
extern Il2CppGenericMethod Func_2_Invoke_m16570_GenericMethod;


// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::.ctor()
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerator.get_Current()
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::MoveNext()
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::Dispose()
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_gen_18.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t450_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_gen_18MethodDeclarations.h"

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_22.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_19.h"
// System.Predicate`1<UnityEngine.RectTransform>
#include "mscorlib_System_Predicate_1_gen_20.h"
// System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_19.h"
// System.Comparison`1<UnityEngine.RectTransform>
#include "mscorlib_System_Comparison_1_gen_20.h"
extern TypeInfo RectTransform_t345_il2cpp_TypeInfo;
extern TypeInfo RectTransformU5BU5D_t2943_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2945_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3385_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3386_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3384_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2947_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2951_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2952_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_19MethodDeclarations.h"
// System.Predicate`1<UnityEngine.RectTransform>
#include "mscorlib_System_Predicate_1_gen_20MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_22MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_19MethodDeclarations.h"
extern Il2CppType List_1_t450_0_0_0;
extern Il2CppType RectTransformU5BU5D_t2943_0_0_0;
extern Il2CppType Enumerator_t2945_0_0_0;
extern Il2CppType ICollection_1_t3385_0_0_0;
extern Il2CppType IEnumerable_1_t3386_0_0_0;
extern Il2CppType IEnumerator_1_t3384_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2947_0_0_0;
extern Il2CppType Predicate_1_t2951_0_0_0;
extern Il2CppType Comparer_1_t2952_0_0_0;
extern MethodInfo List_1_get_Item_m2624_MethodInfo;
extern MethodInfo List_1_set_Item_m16637_MethodInfo;
extern MethodInfo List_1_Add_m2642_MethodInfo;
extern MethodInfo List_1_Contains_m16616_MethodInfo;
extern MethodInfo List_1_IndexOf_m16622_MethodInfo;
extern MethodInfo List_1_Insert_m16625_MethodInfo;
extern MethodInfo List_1_Remove_m16627_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m23365_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m23366_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m23367_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m23368_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m16649_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m16724_MethodInfo;
extern MethodInfo Enumerator__ctor_m16643_MethodInfo;
extern MethodInfo List_1_RemoveAt_m16629_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.RectTransform>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.RectTransform>(!!0[]&,System.Int32)
#define Array_Resize_TisRectTransform_t345_m21342(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, RectTransformU5BU5D_t2943**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_24.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.RectTransform>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.RectTransform>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisRectTransform_t345_m21344(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, RectTransformU5BU5D_t2943*, RectTransform_t345 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11377_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.RectTransform>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.RectTransform>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisRectTransform_t345_m21346(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, RectTransformU5BU5D_t2943*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m20079_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.RectTransform>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.RectTransform>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisRectTransform_t345_m21354(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, RectTransformU5BU5D_t2943*, int32_t, Comparison_1_t2954 *, MethodInfo*))Array_Sort_TisObject_t_m20186_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2624_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m16637_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisRectTransform_t345_m21342_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m16624_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m16621_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m2642_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m16616_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m16622_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m16625_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m16627_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m16611_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m16635_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m16636_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m23365_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m23366_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m23367_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m23368_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m16626_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m16612_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m16613_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m16649_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisRectTransform_t345_m21344_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m16619_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m16620_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m16724_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m16643_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m16623_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m16629_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m16730_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRectTransform_t345_m21346_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRectTransform_t345_m21354_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.RectTransform>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RectTransform>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.RectTransform>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.RectTransform>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_108.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2944_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.RectTransform>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_108MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2944_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RectTransform>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RectTransform>(System.Int32)
#define Array_InternalArray__get_Item_TisRectTransform_t345_m21331(__this, p0, method) (( RectTransform_t345 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16642_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRectTransform_t345_m21331_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RectTransform>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RectTransform>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RectTransform>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RectTransform>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.RectTransform>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2946_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RectTransform>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RectTransform>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RectTransform>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RectTransform>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RectTransform>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m16646_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_19MethodDeclarations.h"
extern Il2CppType IList_1_t2946_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m16678_MethodInfo;
extern MethodInfo IList_1_get_Item_m23369_MethodInfo;
extern MethodInfo ICollection_1_Contains_m23370_MethodInfo;
extern MethodInfo IList_1_IndexOf_m23371_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m16678_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m23369_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m16710_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m23370_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m23371_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_19.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2948_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2948_0_0_0;
extern Il2CppType RectTransform_t345_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m23372_MethodInfo;
extern MethodInfo Collection_1_SetItem_m16709_MethodInfo;
extern MethodInfo List_1__ctor_m2638_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m16702_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m16700_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m16705_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m16696_MethodInfo;
extern MethodInfo ICollection_1_Clear_m23373_MethodInfo;
extern MethodInfo IList_1_Insert_m23374_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m23375_MethodInfo;
extern MethodInfo IList_1_set_Item_m23376_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m23372_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m16713_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m16714_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m16711_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m16709_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m2638_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m16702_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m16712_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m16700_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m16705_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m16696_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m23373_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m23374_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m23375_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m23376_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2949_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_24MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_24.h"
extern TypeInfo DefaultComparer_t2950_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_24MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2949_0_0_0;
extern Il2CppType IEquatable_1_t3956_0_0_0;
extern Il2CppType DefaultComparer_t2950_0_0_0;
extern MethodInfo DefaultComparer__ctor_m16720_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23377_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m21343_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m16720_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23377_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m21343_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3957_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.RectTransform>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.RectTransform>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3956_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.RectTransform>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m16715_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RectTransform>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RectTransform>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RectTransform>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.RectTransform>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.RectTransform>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.RectTransform>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.RectTransform>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_19.h"
extern TypeInfo DefaultComparer_t2953_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_19MethodDeclarations.h"
extern Il2CppType IComparable_1_t3564_0_0_0;
extern Il2CppType DefaultComparer_t2953_0_0_0;
extern MethodInfo DefaultComparer__ctor_m16731_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23378_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m16731_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23378_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3563_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.RectTransform>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3564_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.RectTransform>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m21352_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m16727_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m21352_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.RectTransform>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.RectTransform>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2954_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.RectTransform>
#include "mscorlib_System_Comparison_1_gen_20MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.RectTransform>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.RectTransform>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.RectTransform>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.RectTransform>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t566_il2cpp_TypeInfo;

// UnityEngine.UI.LayoutRebuilder
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder.h"


// System.Boolean System.IEquatable`1<UnityEngine.UI.LayoutRebuilder>::Equals(T)
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t451_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_3MethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"


// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
#include "System_Core_System_Func_2_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t455_il2cpp_TypeInfo;
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
#include "System_Core_System_Func_2_gen_1MethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"


// System.Void System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::.ctor(System.Object,System.IntPtr)
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::Invoke(T)
// System.IAsyncResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::EndInvoke(System.IAsyncResult)
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t2955_il2cpp_TypeInfo;
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_3MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Func_2__ctor_m16739_GenericMethod;
extern "C" void Func_2__ctor_m16739_gshared (Func_2_t2955 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern Il2CppGenericMethod Func_2_Invoke_m16740_GenericMethod;
extern "C" float Func_2_Invoke_m16740_gshared (Func_2_t2955 * __this, Object_t * ___arg1, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m16740((Func_2_t2955 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef float (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Func_2_BeginInvoke_m16742_GenericMethod;
extern "C" Object_t * Func_2_BeginInvoke_m16742_gshared (Func_2_t2955 * __this, Object_t * ___arg1, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Func_2_EndInvoke_m16744_GenericMethod;
extern "C" float Func_2_EndInvoke_m16744_gshared (Func_2_t2955 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(float*)UnBox ((Il2CppCodeGenObject*)__result);
}
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ObjectPool_1_t460_il2cpp_TypeInfo;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "System_System_Collections_Generic_Stack_1_gen_3.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_4.h"
// System.Collections.Generic.List`1<UnityEngine.Canvas>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
extern TypeInfo Stack_1_t2956_il2cpp_TypeInfo;
extern TypeInfo List_1_t463_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t461_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "System_System_Collections_Generic_Stack_1_gen_3MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_4MethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppType Stack_1_t2956_0_0_0;
extern Il2CppType List_1_t463_0_0_0;
extern Il2CppType UnityAction_1_t461_0_0_0;
extern MethodInfo Stack_1_get_Count_m16758_MethodInfo;
extern MethodInfo Stack_1__ctor_m16749_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m16770_MethodInfo;
extern MethodInfo Object_ReferenceEquals_m3871_MethodInfo;
extern MethodInfo Debug_LogError_m331_MethodInfo;
struct Activator_t1891;
// System.Activator
#include "mscorlib_System_Activator.h"
struct Activator_t1891;
// Declaration !!0 System.Activator::CreateInstance<System.Object>()
// !!0 System.Activator::CreateInstance<System.Object>()
extern "C" Object_t * Activator_CreateInstance_TisObject_t_m20415_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define Activator_CreateInstance_TisObject_t_m20415(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m20415_gshared)(__this /* static, unused */, method)
// Declaration !!0 System.Activator::CreateInstance<System.Collections.Generic.List`1<UnityEngine.Canvas>>()
// !!0 System.Activator::CreateInstance<System.Collections.Generic.List`1<UnityEngine.Canvas>>()
#define Activator_CreateInstance_TisList_1_t463_m21373(__this /* static, unused */, method) (( List_1_t463 * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m20415_gshared)(__this /* static, unused */, method)
extern Il2CppGenericMethod ObjectPool_1_get_countAll_m16745_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_get_countInactive_m16748_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m16758_GenericMethod;
extern Il2CppGenericMethod Stack_1__ctor_m16749_GenericMethod;
extern Il2CppGenericMethod Activator_CreateInstance_TisList_1_t463_m21373_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_set_countAll_m16746_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m16756_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m16770_GenericMethod;
extern Il2CppGenericMethod Stack_1_Peek_m16755_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m16757_GenericMethod;


// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_2.h"
extern TypeInfo ArrayTypeMismatchException_t1901_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2959_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_2MethodDeclarations.h"
extern Il2CppType Enumerator_t2959_0_0_0;
extern MethodInfo Array_CopyTo_m5196_MethodInfo;
extern MethodInfo Enumerator__ctor_m16765_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.Canvas>>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.Canvas>>(!!0[]&,System.Int32)
#define Array_Resize_TisList_1_t463_m21372(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, List_1U5BU5D_t2957**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Stack_1_GetEnumerator_m16759_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisList_1_t463_m21372_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m16765_GenericMethod;


// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor()
// System.Boolean System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.IEnumerable.GetEnumerator()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Peek()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Pop()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Push(T)
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_Count()
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3958_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3387_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_109.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2958_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_109MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2958_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.Canvas>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.Canvas>>(System.Int32)
#define Array_InternalArray__get_Item_TisList_1_t463_m21361(__this, p0, method) (( List_1_t463 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16764_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisList_1_t463_m21361_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3959_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3960_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_Current_m16769_GenericMethod;


// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(System.Collections.Generic.Stack`1<T>)
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Dispose()
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>::MoveNext()
// T System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::EndInvoke(System.IAsyncResult)
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ObjectPool_1_t464_il2cpp_TypeInfo;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_2MethodDeclarations.h"

// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "System_System_Collections_Generic_Stack_1_gen_4.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_5.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_10.h"
extern TypeInfo Stack_1_t2960_il2cpp_TypeInfo;
extern TypeInfo List_1_t454_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t465_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "System_System_Collections_Generic_Stack_1_gen_4MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_5MethodDeclarations.h"
extern Il2CppType Stack_1_t2960_0_0_0;
extern Il2CppType List_1_t454_0_0_0;
extern Il2CppType UnityAction_1_t465_0_0_0;
extern MethodInfo Stack_1_get_Count_m16786_MethodInfo;
extern MethodInfo Stack_1__ctor_m16777_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m16798_MethodInfo;
struct Activator_t1891;
// Declaration !!0 System.Activator::CreateInstance<System.Collections.Generic.List`1<UnityEngine.Component>>()
// !!0 System.Activator::CreateInstance<System.Collections.Generic.List`1<UnityEngine.Component>>()
#define Activator_CreateInstance_TisList_1_t454_m21387(__this /* static, unused */, method) (( List_1_t454 * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m20415_gshared)(__this /* static, unused */, method)
extern Il2CppGenericMethod ObjectPool_1_get_countAll_m16773_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_get_countInactive_m16776_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m16786_GenericMethod;
extern Il2CppGenericMethod Stack_1__ctor_m16777_GenericMethod;
extern Il2CppGenericMethod Activator_CreateInstance_TisList_1_t454_m21387_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_set_countAll_m16774_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m16784_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m16798_GenericMethod;
extern Il2CppGenericMethod Stack_1_Peek_m16783_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m16785_GenericMethod;


// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_3.h"
extern TypeInfo Enumerator_t2963_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_3MethodDeclarations.h"
extern Il2CppType Enumerator_t2963_0_0_0;
extern MethodInfo Enumerator__ctor_m16793_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.Component>>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.Component>>(!!0[]&,System.Int32)
#define Array_Resize_TisList_1_t454_m21386(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, List_1U5BU5D_t2961**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m20076_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Stack_1_GetEnumerator_m16787_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisList_1_t454_m21386_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m16793_GenericMethod;


// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor()
// System.Boolean System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.IEnumerable.GetEnumerator()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Peek()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Pop()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Push(T)
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_Count()
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3961_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.Component>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3388_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_110.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2962_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_110MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2962_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.Component>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.Component>>(System.Int32)
#define Array_InternalArray__get_Item_TisList_1_t454_m21375(__this, p0, method) (( List_1_t454 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16792_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisList_1_t454_m21375_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3962_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3963_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Component>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Component>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_Current_m16797_GenericMethod;


// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(System.Collections.Generic.Stack`1<T>)
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>::Dispose()
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>::MoveNext()
// T System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::EndInvoke(System.IAsyncResult)
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t609_il2cpp_TypeInfo;
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"



// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t2964_il2cpp_TypeInfo;
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"



// System.Void System.Action`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Action_1__ctor_m16802_GenericMethod;
extern "C" void Action_1__ctor_m16802_gshared (Action_1_t2964 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Byte>::Invoke(T)
extern Il2CppGenericMethod Action_1_Invoke_m16803_GenericMethod;
extern "C" void Action_1_Invoke_m16803_gshared (Action_1_t2964 * __this, uint8_t ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m16803((Action_1_t2964 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, uint8_t ___obj, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, uint8_t ___obj, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Action`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Action_1_BeginInvoke_m16805_GenericMethod;
extern "C" Object_t * Action_1_BeginInvoke_m16805_gshared (Action_1_t2964 * __this, uint8_t ___obj, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Byte_t517_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Action_1_EndInvoke_m16807_GenericMethod;
extern "C" void Action_1_EndInvoke_m16807_gshared (Action_1_t2964 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t610_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"



// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(T)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3964_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_111.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2965_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_111MethodDeclarations.h"

extern TypeInfo IAchievementDescription_t792_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2965_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IAchievementDescription>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IAchievementDescription>(System.Int32)
#define Array_InternalArray__get_Item_TisIAchievementDescription_t792_m21389(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16815_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIAchievementDescription_t792_m21389_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3965_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3966_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.IAchievementDescription>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3967_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::set_Item(System.Int32,T)
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t611_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"



// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(T)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3968_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_112.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2966_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_112MethodDeclarations.h"

extern TypeInfo IAchievement_t625_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2966_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IAchievement>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IAchievement>(System.Int32)
#define Array_InternalArray__get_Item_TisIAchievement_t625_m21400(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16823_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIAchievement_t625_m21400_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3969_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3970_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.IAchievement>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3971_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::set_Item(System.Int32,T)
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t612_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"



// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(T)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3972_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.IScore>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_113.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2967_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_113MethodDeclarations.h"

extern TypeInfo IScore_t753_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2967_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IScore>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IScore>(System.Int32)
#define Array_InternalArray__get_Item_TisIScore_t753_m21411(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16831_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIScore_t753_m21411_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3973_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3974_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.IScore>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3975_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::set_Item(System.Int32,T)
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t613_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"



// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(T)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::EndInvoke(System.IAsyncResult)
#ifdef __clang__
#pragma clang diagnostic pop
#endif

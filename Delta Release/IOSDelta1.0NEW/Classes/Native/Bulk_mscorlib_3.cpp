#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Reflection.MonoGenericMethod
#include "mscorlib_System_Reflection_MonoGenericMethod.h"
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
extern TypeInfo MonoGenericMethod_t_il2cpp_TypeInfo;
// System.Reflection.MonoGenericMethod
#include "mscorlib_System_Reflection_MonoGenericMethodMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo InvalidOperationException_t1076_il2cpp_TypeInfo;
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern MethodInfo MonoMethod__ctor_m8744_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4770_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Reflection.MonoGenericMethod::.ctor()
extern MethodInfo MonoGenericMethod__ctor_m8732_MethodInfo;
extern "C" void MonoGenericMethod__ctor_m8732 (MonoGenericMethod_t * __this, MethodInfo* method)
{
	{
		MonoMethod__ctor_m8744(__this, /*hidden argument*/&MonoMethod__ctor_m8744_MethodInfo);
		InvalidOperationException_t1076 * L_0 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4770(L_0, /*hidden argument*/&InvalidOperationException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.MonoGenericMethod::get_ReflectedType()
extern MethodInfo MonoGenericMethod_get_ReflectedType_m8733_MethodInfo;
extern "C" Type_t * MonoGenericMethod_get_ReflectedType_m8733 (MonoGenericMethod_t * __this, MethodInfo* method)
{
	typedef Type_t * (*MonoGenericMethod_get_ReflectedType_m8733_ftn) (MonoGenericMethod_t *);
	static MonoGenericMethod_get_ReflectedType_m8733_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoGenericMethod_get_ReflectedType_m8733_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MonoGenericCMethod
#include "mscorlib_System_Reflection_MonoGenericCMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoGenericCMethod_t1543_il2cpp_TypeInfo;
// System.Reflection.MonoGenericCMethod
#include "mscorlib_System_Reflection_MonoGenericCMethodMethodDeclarations.h"

// System.Reflection.MonoCMethod
#include "mscorlib_System_Reflection_MonoCMethodMethodDeclarations.h"
extern MethodInfo MonoCMethod__ctor_m8773_MethodInfo;


// System.Void System.Reflection.MonoGenericCMethod::.ctor()
extern MethodInfo MonoGenericCMethod__ctor_m8734_MethodInfo;
extern "C" void MonoGenericCMethod__ctor_m8734 (MonoGenericCMethod_t1543 * __this, MethodInfo* method)
{
	{
		MonoCMethod__ctor_m8773(__this, /*hidden argument*/&MonoCMethod__ctor_m8773_MethodInfo);
		InvalidOperationException_t1076 * L_0 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4770(L_0, /*hidden argument*/&InvalidOperationException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.MonoGenericCMethod::get_ReflectedType()
extern MethodInfo MonoGenericCMethod_get_ReflectedType_m8735_MethodInfo;
extern "C" Type_t * MonoGenericCMethod_get_ReflectedType_m8735 (MonoGenericCMethod_t1543 * __this, MethodInfo* method)
{
	typedef Type_t * (*MonoGenericCMethod_get_ReflectedType_m8735_ftn) (MonoGenericCMethod_t1543 *);
	static MonoGenericCMethod_get_ReflectedType_m8735_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoGenericCMethod_get_ReflectedType_m8735_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericCMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoMethodInfo_t1545_il2cpp_TypeInfo;
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfoMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
#include "mscorlib_ArrayTypes.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
extern MethodInfo MonoMethodInfo_get_method_info_m8736_MethodInfo;
extern MethodInfo MonoMethodInfo_GetMethodInfo_m8737_MethodInfo;
extern MethodInfo MonoMethodInfo_get_parameter_info_m8742_MethodInfo;


// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
extern "C" void MonoMethodInfo_get_method_info_m8736 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MonoMethodInfo_t1545 * ___info, MethodInfo* method)
{
	typedef void (*MonoMethodInfo_get_method_info_m8736_ftn) (IntPtr_t, MonoMethodInfo_t1545 *);
	static MonoMethodInfo_get_method_info_m8736_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethodInfo_get_method_info_m8736_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)");
	_il2cpp_icall_func(___handle, ___info);
}
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
extern "C" MonoMethodInfo_t1545  MonoMethodInfo_GetMethodInfo_m8737 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1545  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_get_method_info_m8736(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/&MonoMethodInfo_get_method_info_m8736_MethodInfo);
		MonoMethodInfo_t1545  L_1 = V_0;
		return L_1;
	}
}
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetDeclaringType_m8738_MethodInfo;
extern "C" Type_t * MonoMethodInfo_GetDeclaringType_m8738 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1545  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t1545  L_1 = MonoMethodInfo_GetMethodInfo_m8737(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8737_MethodInfo);
		V_0 = L_1;
		Type_t * L_2 = ((&V_0)->___parent_0);
		return L_2;
	}
}
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetReturnType_m8739_MethodInfo;
extern "C" Type_t * MonoMethodInfo_GetReturnType_m8739 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1545  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t1545  L_1 = MonoMethodInfo_GetMethodInfo_m8737(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8737_MethodInfo);
		V_0 = L_1;
		Type_t * L_2 = ((&V_0)->___ret_1);
		return L_2;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetAttributes_m8740_MethodInfo;
extern "C" int32_t MonoMethodInfo_GetAttributes_m8740 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1545  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t1545  L_1 = MonoMethodInfo_GetMethodInfo_m8737(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8737_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->___attrs_2);
		return L_2;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetCallingConvention_m8741_MethodInfo;
extern "C" int32_t MonoMethodInfo_GetCallingConvention_m8741 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1545  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t1545  L_1 = MonoMethodInfo_GetMethodInfo_m8737(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8737_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->___callconv_4);
		return L_2;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t751* MonoMethodInfo_get_parameter_info_m8742 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, MethodInfo* method)
{
	typedef ParameterInfoU5BU5D_t751* (*MonoMethodInfo_get_parameter_info_m8742_ftn) (IntPtr_t, MemberInfo_t *);
	static MonoMethodInfo_get_parameter_info_m8742_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethodInfo_get_parameter_info_m8742_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)");
	return _il2cpp_icall_func(___handle, ___member);
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
extern MethodInfo MonoMethodInfo_GetParametersInfo_m8743_MethodInfo;
extern "C" ParameterInfoU5BU5D_t751* MonoMethodInfo_GetParametersInfo_m8743 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___handle;
		MemberInfo_t * L_1 = ___member;
		ParameterInfoU5BU5D_t751* L_2 = MonoMethodInfo_get_parameter_info_m8742(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&MonoMethodInfo_get_parameter_info_m8742_MethodInfo);
		return L_2;
	}
}
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoMethod_t_il2cpp_TypeInfo;

// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.String
#include "mscorlib_System_String.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationException.h"
// System.Runtime.InteropServices.DllImportAttribute
#include "mscorlib_System_Runtime_InteropServices_DllImportAttribute.h"
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo RuntimeMethodHandle_t1489_il2cpp_TypeInfo;
extern TypeInfo Boolean_t25_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t670_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t751_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t752_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Void_t43_il2cpp_TypeInfo;
extern TypeInfo Int32_t27_il2cpp_TypeInfo;
extern TypeInfo Binder_t742_il2cpp_TypeInfo;
extern TypeInfo TargetParameterCountException_t1556_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t445_il2cpp_TypeInfo;
extern TypeInfo TargetInvocationException_t1555_il2cpp_TypeInfo;
extern TypeInfo ThreadAbortException_t1813_il2cpp_TypeInfo;
extern TypeInfo MethodAccessException_t1871_il2cpp_TypeInfo;
extern TypeInfo Exception_t163_il2cpp_TypeInfo;
extern TypeInfo MonoCustomAttrs_t1877_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t148_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo PreserveSigAttribute_t1581_il2cpp_TypeInfo;
extern TypeInfo DllImportAttribute_t1297_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t403_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo CallingConventions_t1532_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t753_il2cpp_TypeInfo;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandleMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_BinderMethodDeclarations.h"
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationExceptionMethodDeclarations.h"
// System.MonoCustomAttrs
#include "mscorlib_System_MonoCustomAttrsMethodDeclarations.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttributeMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.MemberInfoSerializationHolder
#include "mscorlib_System_Reflection_MemberInfoSerializationHolderMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType ParameterInfoU5BU5D_t751_0_0_0;
extern Il2CppType ObjectU5BU5D_t148_0_0_0;
extern MethodInfo RuntimeMethodHandle__ctor_m10923_MethodInfo;
extern MethodInfo MonoMethod_get_name_m8746_MethodInfo;
extern MethodInfo MonoMethod_get_IsGenericMethod_m8771_MethodInfo;
extern MethodInfo MonoMethod_GetGenericArguments_m8769_MethodInfo;
extern MethodInfo Type_get_ContainsGenericParameters_m6859_MethodInfo;
extern MethodInfo MonoMethod_get_DeclaringType_m8757_MethodInfo;
extern MethodInfo MethodInfo__ctor_m8674_MethodInfo;
extern MethodInfo RuntimeMethodHandle_get_Value_m10925_MethodInfo;
extern MethodInfo MonoMethod_get_base_definition_m8747_MethodInfo;
extern MethodInfo Array_CopyTo_m4959_MethodInfo;
extern MethodInfo Binder_get_DefaultBinder_m8625_MethodInfo;
extern MethodInfo TargetParameterCountException__ctor_m8855_MethodInfo;
extern MethodInfo Binder_ConvertArgs_m8626_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2382_MethodInfo;
extern MethodInfo Object_GetType_m1959_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m3695_MethodInfo;
extern MethodInfo MonoMethod_get_ContainsGenericParameters_m8772_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4760_MethodInfo;
extern MethodInfo MonoMethod_InternalInvoke_m8751_MethodInfo;
extern MethodInfo TargetInvocationException__ctor_m8851_MethodInfo;
extern MethodInfo MonoCustomAttrs_IsDefined_m10743_MethodInfo;
extern MethodInfo MonoCustomAttrs_GetCustomAttributes_m10742_MethodInfo;
extern MethodInfo MonoCustomAttrs_GetCustomAttributes_m10741_MethodInfo;
extern MethodInfo PreserveSigAttribute__ctor_m8913_MethodInfo;
extern MethodInfo MonoMethod_GetDllImportAttribute_m8762_MethodInfo;
extern MethodInfo Type_get_IsClass_m6810_MethodInfo;
extern MethodInfo Type_get_IsPointer_m6816_MethodInfo;
extern MethodInfo Type_GetElementType_m11106_MethodInfo;
extern MethodInfo Type_get_IsPrimitive_m3739_MethodInfo;
extern MethodInfo Type_get_IsNested_m6866_MethodInfo;
extern MethodInfo StringBuilder__ctor_m1872_MethodInfo;
extern MethodInfo MonoMethod_get_ReturnType_m8749_MethodInfo;
extern MethodInfo MonoMethod_ShouldPrintFullName_m8764_MethodInfo;
extern MethodInfo Type_ToString_m6856_MethodInfo;
extern MethodInfo StringBuilder_Append_m3682_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m3679_MethodInfo;
extern MethodInfo MonoMethod_get_Name_m8758_MethodInfo;
extern MethodInfo MonoMethod_GetParameters_m8750_MethodInfo;
extern MethodInfo Type_get_IsByRef_m6809_MethodInfo;
extern MethodInfo MonoMethod_get_CallingConvention_m8755_MethodInfo;
extern MethodInfo StringBuilder_ToString_m1875_MethodInfo;
extern MethodInfo MonoMethod_get_IsGenericMethodDefinition_m8770_MethodInfo;
extern MethodInfo MonoMethod_get_ReflectedType_m8756_MethodInfo;
extern MethodInfo MonoMethod_ToString_m8765_MethodInfo;
extern MethodInfo MemberInfoSerializationHolder_Serialize_m8656_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3705_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m10273_MethodInfo;
extern MethodInfo MonoMethod_MakeGenericMethod_impl_m8768_MethodInfo;
extern MethodInfo String_Format_m6424_MethodInfo;


// System.Void System.Reflection.MonoMethod::.ctor()
extern "C" void MonoMethod__ctor_m8744 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		MethodInfo__ctor_m8674(__this, /*hidden argument*/&MethodInfo__ctor_m8674_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MonoMethod::.ctor(System.RuntimeMethodHandle)
extern MethodInfo MonoMethod__ctor_m8745_MethodInfo;
extern "C" void MonoMethod__ctor_m8745 (MonoMethod_t * __this, RuntimeMethodHandle_t1489  ___mhandle, MethodInfo* method)
{
	{
		MethodInfo__ctor_m8674(__this, /*hidden argument*/&MethodInfo__ctor_m8674_MethodInfo);
		IntPtr_t L_0 = RuntimeMethodHandle_get_Value_m10925((&___mhandle), /*hidden argument*/&RuntimeMethodHandle_get_Value_m10925_MethodInfo);
		__this->___mhandle_0 = L_0;
		return;
	}
}
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
extern "C" String_t* MonoMethod_get_name_m8746 (Object_t * __this /* static, unused */, MethodBase_t750 * ___method, MethodInfo* method)
{
	typedef String_t* (*MonoMethod_get_name_m8746_ftn) (MethodBase_t750 *);
	static MonoMethod_get_name_m8746_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_name_m8746_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)");
	return _il2cpp_icall_func(___method);
}
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
extern "C" MonoMethod_t * MonoMethod_get_base_definition_m8747 (Object_t * __this /* static, unused */, MonoMethod_t * ___method, MethodInfo* method)
{
	typedef MonoMethod_t * (*MonoMethod_get_base_definition_m8747_ftn) (MonoMethod_t *);
	static MonoMethod_get_base_definition_m8747_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_base_definition_m8747_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)");
	return _il2cpp_icall_func(___method);
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
extern MethodInfo MonoMethod_GetBaseDefinition_m8748_MethodInfo;
extern "C" MethodInfo_t * MonoMethod_GetBaseDefinition_m8748 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = MonoMethod_get_base_definition_m8747(NULL /*static, unused*/, __this, /*hidden argument*/&MonoMethod_get_base_definition_m8747_MethodInfo);
		return L_0;
	}
}
// System.Type System.Reflection.MonoMethod::get_ReturnType()
extern "C" Type_t * MonoMethod_get_ReturnType_m8749 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		Type_t * L_1 = MonoMethodInfo_GetReturnType_m8739(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetReturnType_m8739_MethodInfo);
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
extern TypeInfo* ParameterInfoU5BU5D_t751_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t751* MonoMethod_GetParameters_m8750 (MonoMethod_t * __this, MethodInfo* method)
{
	static bool MonoMethod_GetParameters_m8750_init;
	if (!MonoMethod_GetParameters_m8750_init)
	{
		ParameterInfoU5BU5D_t751_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t751_0_0_0);
		MonoMethod_GetParameters_m8750_init = true;
	}
	ParameterInfoU5BU5D_t751* V_0 = {0};
	ParameterInfoU5BU5D_t751* V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		ParameterInfoU5BU5D_t751* L_1 = MonoMethodInfo_GetParametersInfo_m8743(NULL /*static, unused*/, L_0, __this, /*hidden argument*/&MonoMethodInfo_GetParametersInfo_m8743_MethodInfo);
		V_0 = L_1;
		ParameterInfoU5BU5D_t751* L_2 = V_0;
		NullCheck(L_2);
		V_1 = ((ParameterInfoU5BU5D_t751*)SZArrayNew(ParameterInfoU5BU5D_t751_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		ParameterInfoU5BU5D_t751* L_3 = V_0;
		ParameterInfoU5BU5D_t751* L_4 = V_1;
		NullCheck(L_3);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4959_MethodInfo, L_3, (Array_t *)(Array_t *)L_4, 0);
		ParameterInfoU5BU5D_t751* L_5 = V_1;
		return L_5;
	}
}
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoMethod_InternalInvoke_m8751 (MonoMethod_t * __this, Object_t * ___obj, ObjectU5BU5D_t148* ___parameters, Exception_t163 ** ___exc, MethodInfo* method)
{
	typedef Object_t * (*MonoMethod_InternalInvoke_m8751_ftn) (MonoMethod_t *, Object_t *, ObjectU5BU5D_t148*, Exception_t163 **);
	static MonoMethod_InternalInvoke_m8751_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_InternalInvoke_m8751_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, ___obj, ___parameters, ___exc);
}
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MonoMethod_Invoke_m8752_MethodInfo;
extern "C" Object_t * MonoMethod_Invoke_m8752 (MonoMethod_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t742 * ___binder, ObjectU5BU5D_t148* ___parameters, CultureInfo_t745 * ___culture, MethodInfo* method)
{
	ParameterInfoU5BU5D_t751* V_0 = {0};
	int32_t V_1 = 0;
	Exception_t163 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t163 * V_4 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Binder_t742 * L_0 = ___binder;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t742_il2cpp_TypeInfo));
		Binder_t742 * L_1 = Binder_get_DefaultBinder_m8625(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m8625_MethodInfo);
		___binder = L_1;
	}

IL_000c:
	{
		IntPtr_t L_2 = (__this->___mhandle_0);
		ParameterInfoU5BU5D_t751* L_3 = MonoMethodInfo_GetParametersInfo_m8743(NULL /*static, unused*/, L_2, __this, /*hidden argument*/&MonoMethodInfo_GetParametersInfo_m8743_MethodInfo);
		V_0 = L_3;
		ObjectU5BU5D_t148* L_4 = ___parameters;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ParameterInfoU5BU5D_t751* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)(((Array_t *)L_5)->max_length))))
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		ObjectU5BU5D_t148* L_6 = ___parameters;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_t148* L_7 = ___parameters;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t751* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		TargetParameterCountException_t1556 * L_9 = (TargetParameterCountException_t1556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t1556_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m8855(L_9, (String_t*) &_stringLiteral1986, /*hidden argument*/&TargetParameterCountException__ctor_m8855_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003a:
	{
		int32_t L_10 = ___invokeAttr;
		if (((int32_t)((int32_t)L_10&(int32_t)((int32_t)65536))))
		{
			goto IL_005d;
		}
	}
	{
		Binder_t742 * L_11 = ___binder;
		ObjectU5BU5D_t148* L_12 = ___parameters;
		ParameterInfoU5BU5D_t751* L_13 = V_0;
		CultureInfo_t745 * L_14 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t742_il2cpp_TypeInfo));
		bool L_15 = Binder_ConvertArgs_m8626(NULL /*static, unused*/, L_11, L_12, L_13, L_14, /*hidden argument*/&Binder_ConvertArgs_m8626_MethodInfo);
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_t445 * L_16 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_16, (String_t*) &_stringLiteral1987, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_005b:
	{
		goto IL_0089;
	}

IL_005d:
	{
		V_1 = 0;
		goto IL_0083;
	}

IL_0061:
	{
		ObjectU5BU5D_t148* L_17 = ___parameters;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)));
		Type_t * L_20 = Object_GetType_m1959((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), /*hidden argument*/&Object_GetType_m1959_MethodInfo);
		ParameterInfoU5BU5D_t751* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck((*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_21, L_23)));
		Type_t * L_24 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3695_MethodInfo, (*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_21, L_23)));
		if ((((Object_t*)(Type_t *)L_20) == ((Object_t*)(Type_t *)L_24)))
		{
			goto IL_007f;
		}
	}
	{
		ArgumentException_t445 * L_25 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_25, (String_t*) &_stringLiteral1986, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_007f:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_27 = V_1;
		ParameterInfoU5BU5D_t751* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((Array_t *)L_28)->max_length))))))
		{
			goto IL_0061;
		}
	}

IL_0089:
	{
		bool L_29 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_ContainsGenericParameters_m8772_MethodInfo, __this);
		if (!L_29)
		{
			goto IL_009c;
		}
	}
	{
		InvalidOperationException_t1076 * L_30 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4760(L_30, (String_t*) &_stringLiteral1988, /*hidden argument*/&InvalidOperationException__ctor_m4760_MethodInfo);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_009c:
	{
		V_3 = NULL;
	}

IL_009e:
	try
	{ // begin try (depth: 1)
		Object_t * L_31 = ___obj;
		ObjectU5BU5D_t148* L_32 = ___parameters;
		Object_t * L_33 = MonoMethod_InternalInvoke_m8751(__this, L_31, L_32, (&V_2), /*hidden argument*/&MonoMethod_InternalInvoke_m8751_MethodInfo);
		V_3 = L_33;
		goto IL_00c2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t163 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&ThreadAbortException_t1813_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00ac;
		if(il2cpp_codegen_class_is_assignable_from (&MethodAccessException_t1871_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00b1;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t163_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00b6;
		throw e;
	}

CATCH_00ac:
	{ // begin catch(System.Threading.ThreadAbortException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00c2;
	} // end catch (depth: 1)

CATCH_00b1:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00c2;
	} // end catch (depth: 1)

CATCH_00b6:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t163 *)__exception_local);
		Exception_t163 * L_34 = V_4;
		TargetInvocationException_t1555 * L_35 = (TargetInvocationException_t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetInvocationException_t1555_il2cpp_TypeInfo));
		TargetInvocationException__ctor_m8851(L_35, L_34, /*hidden argument*/&TargetInvocationException__ctor_m8851_MethodInfo);
		il2cpp_codegen_raise_exception(L_35);
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00c2:
	{
		Exception_t163 * L_36 = V_2;
		if (!L_36)
		{
			goto IL_00c7;
		}
	}
	{
		Exception_t163 * L_37 = V_2;
		il2cpp_codegen_raise_exception(L_37);
	}

IL_00c7:
	{
		Object_t * L_38 = V_3;
		return L_38;
	}
}
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
extern MethodInfo MonoMethod_get_MethodHandle_m8753_MethodInfo;
extern "C" RuntimeMethodHandle_t1489  MonoMethod_get_MethodHandle_m8753 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		RuntimeMethodHandle_t1489  L_1 = {0};
		RuntimeMethodHandle__ctor_m10923(&L_1, L_0, /*hidden argument*/&RuntimeMethodHandle__ctor_m10923_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
extern MethodInfo MonoMethod_get_Attributes_m8754_MethodInfo;
extern "C" int32_t MonoMethod_get_Attributes_m8754 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		int32_t L_1 = MonoMethodInfo_GetAttributes_m8740(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetAttributes_m8740_MethodInfo);
		return L_1;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
extern "C" int32_t MonoMethod_get_CallingConvention_m8755 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		int32_t L_1 = MonoMethodInfo_GetCallingConvention_m8741(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetCallingConvention_m8741_MethodInfo);
		return L_1;
	}
}
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
extern "C" Type_t * MonoMethod_get_ReflectedType_m8756 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___reftype_2);
		return L_0;
	}
}
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
extern "C" Type_t * MonoMethod_get_DeclaringType_m8757 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		Type_t * L_1 = MonoMethodInfo_GetDeclaringType_m8738(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetDeclaringType_m8738_MethodInfo);
		return L_1;
	}
}
// System.String System.Reflection.MonoMethod::get_Name()
extern "C" String_t* MonoMethod_get_Name_m8758 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_1);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___name_1);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = MonoMethod_get_name_m8746(NULL /*static, unused*/, __this, /*hidden argument*/&MonoMethod_get_name_m8746_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoMethod_IsDefined_m8759_MethodInfo;
extern "C" bool MonoMethod_IsDefined_m8759 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1877_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m10743(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m10743_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoMethod_GetCustomAttributes_m8760_MethodInfo;
extern "C" ObjectU5BU5D_t148* MonoMethod_GetCustomAttributes_m8760 (MonoMethod_t * __this, bool ___inherit, MethodInfo* method)
{
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1877_il2cpp_TypeInfo));
		ObjectU5BU5D_t148* L_1 = MonoCustomAttrs_GetCustomAttributes_m10742(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10742_MethodInfo);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoMethod_GetCustomAttributes_m8761_MethodInfo;
extern "C" ObjectU5BU5D_t148* MonoMethod_GetCustomAttributes_m8761 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1877_il2cpp_TypeInfo));
		ObjectU5BU5D_t148* L_2 = MonoCustomAttrs_GetCustomAttributes_m10741(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10741_MethodInfo);
		return L_2;
	}
}
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
extern "C" DllImportAttribute_t1297 * MonoMethod_GetDllImportAttribute_m8762 (Object_t * __this /* static, unused */, IntPtr_t ___mhandle, MethodInfo* method)
{
	typedef DllImportAttribute_t1297 * (*MonoMethod_GetDllImportAttribute_m8762_ftn) (IntPtr_t);
	static MonoMethod_GetDllImportAttribute_m8762_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_GetDllImportAttribute_m8762_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)");
	return _il2cpp_icall_func(___mhandle);
}
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
extern MethodInfo MonoMethod_GetPseudoCustomAttributes_m8763_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t148* MonoMethod_GetPseudoCustomAttributes_m8763 (MonoMethod_t * __this, MethodInfo* method)
{
	static bool MonoMethod_GetPseudoCustomAttributes_m8763_init;
	if (!MonoMethod_GetPseudoCustomAttributes_m8763_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		MonoMethod_GetPseudoCustomAttributes_m8763_init = true;
	}
	int32_t V_0 = 0;
	MonoMethodInfo_t1545  V_1 = {0};
	ObjectU5BU5D_t148* V_2 = {0};
	DllImportAttribute_t1297 * V_3 = {0};
	{
		V_0 = 0;
		IntPtr_t L_0 = (__this->___mhandle_0);
		MonoMethodInfo_t1545  L_1 = MonoMethodInfo_GetMethodInfo_m8737(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8737_MethodInfo);
		V_1 = L_1;
		int32_t L_2 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)128))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_4 = ((&V_1)->___attrs_2);
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)8192))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0039;
		}
	}
	{
		return (ObjectU5BU5D_t148*)NULL;
	}

IL_0039:
	{
		int32_t L_7 = V_0;
		V_2 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, L_7));
		V_0 = 0;
		int32_t L_8 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_8&(int32_t)((int32_t)128))))
		{
			goto IL_005d;
		}
	}
	{
		ObjectU5BU5D_t148* L_9 = V_2;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		PreserveSigAttribute_t1581 * L_12 = (PreserveSigAttribute_t1581 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PreserveSigAttribute_t1581_il2cpp_TypeInfo));
		PreserveSigAttribute__ctor_m8913(L_12, /*hidden argument*/&PreserveSigAttribute__ctor_m8913_MethodInfo);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_11);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)) = (Object_t *)L_12;
	}

IL_005d:
	{
		int32_t L_13 = ((&V_1)->___attrs_2);
		if (!((int32_t)((int32_t)L_13&(int32_t)((int32_t)8192))))
		{
			goto IL_0096;
		}
	}
	{
		IntPtr_t L_14 = (__this->___mhandle_0);
		DllImportAttribute_t1297 * L_15 = MonoMethod_GetDllImportAttribute_m8762(NULL /*static, unused*/, L_14, /*hidden argument*/&MonoMethod_GetDllImportAttribute_m8762_MethodInfo);
		V_3 = L_15;
		int32_t L_16 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_16&(int32_t)((int32_t)128))))
		{
			goto IL_008e;
		}
	}
	{
		DllImportAttribute_t1297 * L_17 = V_3;
		NullCheck(L_17);
		L_17->___PreserveSig_5 = 1;
	}

IL_008e:
	{
		ObjectU5BU5D_t148* L_18 = V_2;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		DllImportAttribute_t1297 * L_21 = V_3;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, L_20)) = (Object_t *)L_21;
	}

IL_0096:
	{
		ObjectU5BU5D_t148* L_22 = V_2;
		return L_22;
	}
}
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
extern "C" bool MonoMethod_ShouldPrintFullName_m8764 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsClass_m6810_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPointer_m6816_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_4 = ___type;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m11106_MethodInfo, L_4);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m3739_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_7 = ___type;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m11106_MethodInfo, L_7);
		NullCheck(L_8);
		bool L_9 = Type_get_IsNested_m6866(L_8, /*hidden argument*/&Type_get_IsNested_m6866_MethodInfo);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 0;
	}

IL_002e:
	{
		G_B7_0 = G_B5_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B7_0 = 1;
	}

IL_0031:
	{
		G_B9_0 = G_B7_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B9_0 = 0;
	}

IL_0034:
	{
		return G_B9_0;
	}
}
// System.String System.Reflection.MonoMethod::ToString()
extern "C" String_t* MonoMethod_ToString_m8765 (MonoMethod_t * __this, MethodInfo* method)
{
	StringBuilder_t403 * V_0 = {0};
	Type_t * V_1 = {0};
	TypeU5BU5D_t670* V_2 = {0};
	int32_t V_3 = 0;
	ParameterInfoU5BU5D_t751* V_4 = {0};
	int32_t V_5 = 0;
	Type_t * V_6 = {0};
	bool V_7 = false;
	{
		StringBuilder_t403 * L_0 = (StringBuilder_t403 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t403_il2cpp_TypeInfo));
		StringBuilder__ctor_m1872(L_0, /*hidden argument*/&StringBuilder__ctor_m1872_MethodInfo);
		V_0 = L_0;
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_ReturnType_m8749_MethodInfo, __this);
		V_1 = L_1;
		Type_t * L_2 = V_1;
		bool L_3 = MonoMethod_ShouldPrintFullName_m8764(NULL /*static, unused*/, L_2, /*hidden argument*/&MonoMethod_ShouldPrintFullName_m8764_MethodInfo);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		StringBuilder_t403 * L_4 = V_0;
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6856_MethodInfo, L_5);
		NullCheck(L_4);
		StringBuilder_Append_m3682(L_4, L_6, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		goto IL_0031;
	}

IL_0024:
	{
		StringBuilder_t403 * L_7 = V_0;
		Type_t * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3679_MethodInfo, L_8);
		NullCheck(L_7);
		StringBuilder_Append_m3682(L_7, L_9, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
	}

IL_0031:
	{
		StringBuilder_t403 * L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_Append_m3682(L_10, (String_t*) &_stringLiteral37, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		StringBuilder_t403 * L_11 = V_0;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_get_Name_m8758_MethodInfo, __this);
		NullCheck(L_11);
		StringBuilder_Append_m3682(L_11, L_12, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethod_m8771_MethodInfo, __this);
		if (!L_13)
		{
			goto IL_009e;
		}
	}
	{
		TypeU5BU5D_t670* L_14 = (TypeU5BU5D_t670*)VirtFuncInvoker0< TypeU5BU5D_t670* >::Invoke(&MonoMethod_GetGenericArguments_m8769_MethodInfo, __this);
		V_2 = L_14;
		StringBuilder_t403 * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_Append_m3682(L_15, (String_t*) &_stringLiteral287, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		V_3 = 0;
		goto IL_008c;
	}

IL_0069:
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		StringBuilder_t403 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m3682(L_17, (String_t*) &_stringLiteral258, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
	}

IL_0079:
	{
		StringBuilder_t403 * L_18 = V_0;
		TypeU5BU5D_t670* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		NullCheck((*(Type_t **)(Type_t **)SZArrayLdElema(L_19, L_21)));
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3679_MethodInfo, (*(Type_t **)(Type_t **)SZArrayLdElema(L_19, L_21)));
		NullCheck(L_18);
		StringBuilder_Append_m3682(L_18, L_22, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_24 = V_3;
		TypeU5BU5D_t670* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0069;
		}
	}
	{
		StringBuilder_t403 * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m3682(L_26, (String_t*) &_stringLiteral288, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
	}

IL_009e:
	{
		StringBuilder_t403 * L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_Append_m3682(L_27, (String_t*) &_stringLiteral295, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		ParameterInfoU5BU5D_t751* L_28 = (ParameterInfoU5BU5D_t751*)VirtFuncInvoker0< ParameterInfoU5BU5D_t751* >::Invoke(&MonoMethod_GetParameters_m8750_MethodInfo, __this);
		V_4 = L_28;
		V_5 = 0;
		goto IL_0127;
	}

IL_00b7:
	{
		int32_t L_29 = V_5;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		StringBuilder_t403 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m3682(L_30, (String_t*) &_stringLiteral296, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
	}

IL_00c8:
	{
		ParameterInfoU5BU5D_t751* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3695_MethodInfo, (*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_31, L_33)));
		V_6 = L_34;
		Type_t * L_35 = V_6;
		NullCheck(L_35);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6809_MethodInfo, L_35);
		V_7 = L_36;
		bool L_37 = V_7;
		if (!L_37)
		{
			goto IL_00ea;
		}
	}
	{
		Type_t * L_38 = V_6;
		NullCheck(L_38);
		Type_t * L_39 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m11106_MethodInfo, L_38);
		V_6 = L_39;
	}

IL_00ea:
	{
		Type_t * L_40 = V_6;
		bool L_41 = MonoMethod_ShouldPrintFullName_m8764(NULL /*static, unused*/, L_40, /*hidden argument*/&MonoMethod_ShouldPrintFullName_m8764_MethodInfo);
		if (!L_41)
		{
			goto IL_0103;
		}
	}
	{
		StringBuilder_t403 * L_42 = V_0;
		Type_t * L_43 = V_6;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6856_MethodInfo, L_43);
		NullCheck(L_42);
		StringBuilder_Append_m3682(L_42, L_44, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		goto IL_0111;
	}

IL_0103:
	{
		StringBuilder_t403 * L_45 = V_0;
		Type_t * L_46 = V_6;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3679_MethodInfo, L_46);
		NullCheck(L_45);
		StringBuilder_Append_m3682(L_45, L_47, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
	}

IL_0111:
	{
		bool L_48 = V_7;
		if (!L_48)
		{
			goto IL_0121;
		}
	}
	{
		StringBuilder_t403 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m3682(L_49, (String_t*) &_stringLiteral1395, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
	}

IL_0121:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_0127:
	{
		int32_t L_51 = V_5;
		ParameterInfoU5BU5D_t751* L_52 = V_4;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)(((Array_t *)L_52)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_53 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MonoMethod_get_CallingConvention_m8755_MethodInfo, __this);
		if (!((int32_t)((int32_t)L_53&(int32_t)2)))
		{
			goto IL_0158;
		}
	}
	{
		ParameterInfoU5BU5D_t751* L_54 = V_4;
		NullCheck(L_54);
		if ((((int32_t)(((int32_t)(((Array_t *)L_54)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		StringBuilder_t403 * L_55 = V_0;
		NullCheck(L_55);
		StringBuilder_Append_m3682(L_55, (String_t*) &_stringLiteral296, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
	}

IL_014c:
	{
		StringBuilder_t403 * L_56 = V_0;
		NullCheck(L_56);
		StringBuilder_Append_m3682(L_56, (String_t*) &_stringLiteral1989, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
	}

IL_0158:
	{
		StringBuilder_t403 * L_57 = V_0;
		NullCheck(L_57);
		StringBuilder_Append_m3682(L_57, (String_t*) &_stringLiteral143, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		StringBuilder_t403 * L_58 = V_0;
		NullCheck(L_58);
		String_t* L_59 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1875_MethodInfo, L_58);
		return L_59;
	}
}
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoMethod_GetObjectData_m8766_MethodInfo;
extern "C" void MonoMethod_GetObjectData_m8766 (MonoMethod_t * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	TypeU5BU5D_t670* V_0 = {0};
	TypeU5BU5D_t670* G_B4_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethod_m8771_MethodInfo, __this);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethodDefinition_m8770_MethodInfo, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		TypeU5BU5D_t670* L_2 = (TypeU5BU5D_t670*)VirtFuncInvoker0< TypeU5BU5D_t670* >::Invoke(&MonoMethod_GetGenericArguments_m8769_MethodInfo, __this);
		G_B4_0 = L_2;
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = ((TypeU5BU5D_t670*)(NULL));
	}

IL_0019:
	{
		V_0 = G_B4_0;
		SerializationInfo_t700 * L_3 = ___info;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_get_Name_m8758_MethodInfo, __this);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_ReflectedType_m8756_MethodInfo, __this);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_ToString_m8765_MethodInfo, __this);
		TypeU5BU5D_t670* L_7 = V_0;
		MemberInfoSerializationHolder_Serialize_m8656(NULL /*static, unused*/, L_3, L_4, L_5, L_6, 8, L_7, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8656_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
extern MethodInfo MonoMethod_MakeGenericMethod_m8767_MethodInfo;
extern "C" MethodInfo_t * MonoMethod_MakeGenericMethod_m8767 (MonoMethod_t * __this, TypeU5BU5D_t670* ___methodInstantiation, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t670* V_1 = {0};
	int32_t V_2 = 0;
	MethodInfo_t * V_3 = {0};
	{
		TypeU5BU5D_t670* L_0 = ___methodInstantiation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t753 * L_1 = (ArgumentNullException_t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t753_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3705(L_1, (String_t*) &_stringLiteral1990, /*hidden argument*/&ArgumentNullException__ctor_m3705_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		TypeU5BU5D_t670* L_2 = ___methodInstantiation;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		TypeU5BU5D_t670* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_3, L_5));
		Type_t * L_6 = V_0;
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t753 * L_7 = (ArgumentNullException_t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t753_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m10273(L_7, /*hidden argument*/&ArgumentNullException__ctor_m10273_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0021:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_9 = V_2;
		TypeU5BU5D_t670* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		TypeU5BU5D_t670* L_11 = ___methodInstantiation;
		MethodInfo_t * L_12 = MonoMethod_MakeGenericMethod_impl_m8768(__this, L_11, /*hidden argument*/&MonoMethod_MakeGenericMethod_impl_m8768_MethodInfo);
		V_3 = L_12;
		MethodInfo_t * L_13 = V_3;
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		TypeU5BU5D_t670* L_14 = (TypeU5BU5D_t670*)VirtFuncInvoker0< TypeU5BU5D_t670* >::Invoke(&MonoMethod_GetGenericArguments_m8769_MethodInfo, __this);
		NullCheck(L_14);
		int32_t L_15 = (((int32_t)(((Array_t *)L_14)->max_length)));
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_15);
		TypeU5BU5D_t670* L_17 = ___methodInstantiation;
		NullCheck(L_17);
		int32_t L_18 = (((int32_t)(((Array_t *)L_17)->max_length)));
		Object_t * L_19 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_18);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_20 = String_Format_m6424(NULL /*static, unused*/, (String_t*) &_stringLiteral1991, L_16, L_19, /*hidden argument*/&String_Format_m6424_MethodInfo);
		ArgumentException_t445 * L_21 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_21, L_20, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_005b:
	{
		MethodInfo_t * L_22 = V_3;
		return L_22;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
extern "C" MethodInfo_t * MonoMethod_MakeGenericMethod_impl_m8768 (MonoMethod_t * __this, TypeU5BU5D_t670* ___types, MethodInfo* method)
{
	typedef MethodInfo_t * (*MonoMethod_MakeGenericMethod_impl_m8768_ftn) (MonoMethod_t *, TypeU5BU5D_t670*);
	static MonoMethod_MakeGenericMethod_impl_m8768_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_MakeGenericMethod_impl_m8768_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])");
	return _il2cpp_icall_func(__this, ___types);
}
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
extern "C" TypeU5BU5D_t670* MonoMethod_GetGenericArguments_m8769 (MonoMethod_t * __this, MethodInfo* method)
{
	typedef TypeU5BU5D_t670* (*MonoMethod_GetGenericArguments_m8769_ftn) (MonoMethod_t *);
	static MonoMethod_GetGenericArguments_m8769_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_GetGenericArguments_m8769_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
extern "C" bool MonoMethod_get_IsGenericMethodDefinition_m8770 (MonoMethod_t * __this, MethodInfo* method)
{
	typedef bool (*MonoMethod_get_IsGenericMethodDefinition_m8770_ftn) (MonoMethod_t *);
	static MonoMethod_get_IsGenericMethodDefinition_m8770_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_IsGenericMethodDefinition_m8770_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethodDefinition()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
extern "C" bool MonoMethod_get_IsGenericMethod_m8771 (MonoMethod_t * __this, MethodInfo* method)
{
	typedef bool (*MonoMethod_get_IsGenericMethod_m8771_ftn) (MonoMethod_t *);
	static MonoMethod_get_IsGenericMethod_m8771_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_IsGenericMethod_m8771_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethod()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
extern "C" bool MonoMethod_get_ContainsGenericParameters_m8772 (MonoMethod_t * __this, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t670* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethod_m8771_MethodInfo, __this);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		TypeU5BU5D_t670* L_1 = (TypeU5BU5D_t670*)VirtFuncInvoker0< TypeU5BU5D_t670* >::Invoke(&MonoMethod_GetGenericArguments_m8769_MethodInfo, __this);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		TypeU5BU5D_t670* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m6859_MethodInfo, L_5);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_8 = V_2;
		TypeU5BU5D_t670* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0013;
		}
	}

IL_002b:
	{
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_DeclaringType_m8757_MethodInfo, __this);
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m6859_MethodInfo, L_10);
		return L_11;
	}
}
// System.Reflection.MonoCMethod
#include "mscorlib_System_Reflection_MonoCMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoCMethod_t1544_il2cpp_TypeInfo;

// System.MemberAccessException
#include "mscorlib_System_MemberAccessException.h"
extern TypeInfo MemberAccessException_t1865_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t741_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t745_il2cpp_TypeInfo;
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.MemberAccessException
#include "mscorlib_System_MemberAccessExceptionMethodDeclarations.h"
extern MethodInfo ConstructorInfo__ctor_m8629_MethodInfo;
extern MethodInfo MonoCMethod_GetParameters_m8774_MethodInfo;
extern MethodInfo MonoCMethod_get_DeclaringType_m8782_MethodInfo;
extern MethodInfo String_Concat_m577_MethodInfo;
extern MethodInfo MemberAccessException__ctor_m10712_MethodInfo;
extern MethodInfo Type_get_IsAbstract_m6807_MethodInfo;
extern MethodInfo String_Format_m2040_MethodInfo;
extern MethodInfo MonoCMethod_InternalInvoke_m8775_MethodInfo;
extern MethodInfo MonoCMethod_Invoke_m8776_MethodInfo;
extern MethodInfo MonoCMethod_get_Name_m8783_MethodInfo;
extern MethodInfo MonoCMethod_get_CallingConvention_m8780_MethodInfo;
extern MethodInfo MonoCMethod_get_ReflectedType_m8781_MethodInfo;
extern MethodInfo MonoCMethod_ToString_m8787_MethodInfo;
extern MethodInfo MemberInfoSerializationHolder_Serialize_m8655_MethodInfo;


// System.Void System.Reflection.MonoCMethod::.ctor()
extern "C" void MonoCMethod__ctor_m8773 (MonoCMethod_t1544 * __this, MethodInfo* method)
{
	{
		ConstructorInfo__ctor_m8629(__this, /*hidden argument*/&ConstructorInfo__ctor_m8629_MethodInfo);
		return;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t751* MonoCMethod_GetParameters_m8774 (MonoCMethod_t1544 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		ParameterInfoU5BU5D_t751* L_1 = MonoMethodInfo_GetParametersInfo_m8743(NULL /*static, unused*/, L_0, __this, /*hidden argument*/&MonoMethodInfo_GetParametersInfo_m8743_MethodInfo);
		return L_1;
	}
}
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoCMethod_InternalInvoke_m8775 (MonoCMethod_t1544 * __this, Object_t * ___obj, ObjectU5BU5D_t148* ___parameters, Exception_t163 ** ___exc, MethodInfo* method)
{
	typedef Object_t * (*MonoCMethod_InternalInvoke_m8775_ftn) (MonoCMethod_t1544 *, Object_t *, ObjectU5BU5D_t148*, Exception_t163 **);
	static MonoCMethod_InternalInvoke_m8775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoCMethod_InternalInvoke_m8775_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, ___obj, ___parameters, ___exc);
}
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m8776 (MonoCMethod_t1544 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t742 * ___binder, ObjectU5BU5D_t148* ___parameters, CultureInfo_t745 * ___culture, MethodInfo* method)
{
	ParameterInfoU5BU5D_t751* V_0 = {0};
	int32_t V_1 = 0;
	Exception_t163 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t163 * V_4 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Object_t * G_B31_0 = {0};
	{
		Binder_t742 * L_0 = ___binder;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t742_il2cpp_TypeInfo));
		Binder_t742 * L_1 = Binder_get_DefaultBinder_m8625(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m8625_MethodInfo);
		___binder = L_1;
	}

IL_000c:
	{
		ParameterInfoU5BU5D_t751* L_2 = (ParameterInfoU5BU5D_t751*)VirtFuncInvoker0< ParameterInfoU5BU5D_t751* >::Invoke(&MonoCMethod_GetParameters_m8774_MethodInfo, __this);
		V_0 = L_2;
		ObjectU5BU5D_t148* L_3 = ___parameters;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		ParameterInfoU5BU5D_t751* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((Array_t *)L_4)->max_length))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		ObjectU5BU5D_t148* L_5 = ___parameters;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		ObjectU5BU5D_t148* L_6 = ___parameters;
		NullCheck(L_6);
		ParameterInfoU5BU5D_t751* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		TargetParameterCountException_t1556 * L_8 = (TargetParameterCountException_t1556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t1556_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m8855(L_8, (String_t*) &_stringLiteral1986, /*hidden argument*/&TargetParameterCountException__ctor_m8855_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0034:
	{
		int32_t L_9 = ___invokeAttr;
		if (((int32_t)((int32_t)L_9&(int32_t)((int32_t)65536))))
		{
			goto IL_0057;
		}
	}
	{
		Binder_t742 * L_10 = ___binder;
		ObjectU5BU5D_t148* L_11 = ___parameters;
		ParameterInfoU5BU5D_t751* L_12 = V_0;
		CultureInfo_t745 * L_13 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t742_il2cpp_TypeInfo));
		bool L_14 = Binder_ConvertArgs_m8626(NULL /*static, unused*/, L_10, L_11, L_12, L_13, /*hidden argument*/&Binder_ConvertArgs_m8626_MethodInfo);
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		ArgumentException_t445 * L_15 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_15, (String_t*) &_stringLiteral1987, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0055:
	{
		goto IL_0083;
	}

IL_0057:
	{
		V_1 = 0;
		goto IL_007d;
	}

IL_005b:
	{
		ObjectU5BU5D_t148* L_16 = ___parameters;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)));
		Type_t * L_19 = Object_GetType_m1959((*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), /*hidden argument*/&Object_GetType_m1959_MethodInfo);
		ParameterInfoU5BU5D_t751* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		NullCheck((*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_20, L_22)));
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3695_MethodInfo, (*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_20, L_22)));
		if ((((Object_t*)(Type_t *)L_19) == ((Object_t*)(Type_t *)L_23)))
		{
			goto IL_0079;
		}
	}
	{
		ArgumentException_t445 * L_24 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_24, (String_t*) &_stringLiteral1986, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0079:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_007d:
	{
		int32_t L_26 = V_1;
		ParameterInfoU5BU5D_t751* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0083:
	{
		Object_t * L_28 = ___obj;
		if (L_28)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t * L_29 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m8782_MethodInfo, __this);
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m6859_MethodInfo, L_29);
		if (!L_30)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t * L_31 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m8782_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_32 = String_Concat_m577(NULL /*static, unused*/, (String_t*) &_stringLiteral1992, L_31, (String_t*) &_stringLiteral1993, /*hidden argument*/&String_Concat_m577_MethodInfo);
		MemberAccessException_t1865 * L_33 = (MemberAccessException_t1865 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MemberAccessException_t1865_il2cpp_TypeInfo));
		MemberAccessException__ctor_m10712(L_33, L_32, /*hidden argument*/&MemberAccessException__ctor_m10712_MethodInfo);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00ae:
	{
		int32_t L_34 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_34&(int32_t)((int32_t)512))))
		{
			goto IL_00da;
		}
	}
	{
		Type_t * L_35 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m8782_MethodInfo, __this);
		NullCheck(L_35);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsAbstract_m6807_MethodInfo, L_35);
		if (!L_36)
		{
			goto IL_00da;
		}
	}
	{
		Type_t * L_37 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m8782_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_38 = String_Format_m2040(NULL /*static, unused*/, (String_t*) &_stringLiteral1994, L_37, /*hidden argument*/&String_Format_m2040_MethodInfo);
		MemberAccessException_t1865 * L_39 = (MemberAccessException_t1865 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MemberAccessException_t1865_il2cpp_TypeInfo));
		MemberAccessException__ctor_m10712(L_39, L_38, /*hidden argument*/&MemberAccessException__ctor_m10712_MethodInfo);
		il2cpp_codegen_raise_exception(L_39);
	}

IL_00da:
	{
		V_2 = (Exception_t163 *)NULL;
		V_3 = NULL;
	}

IL_00de:
	try
	{ // begin try (depth: 1)
		Object_t * L_40 = ___obj;
		ObjectU5BU5D_t148* L_41 = ___parameters;
		Object_t * L_42 = MonoCMethod_InternalInvoke_m8775(__this, L_40, L_41, (&V_2), /*hidden argument*/&MonoCMethod_InternalInvoke_m8775_MethodInfo);
		V_3 = L_42;
		goto IL_00fd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t163 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&MethodAccessException_t1871_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00ec;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t163_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00f1;
		throw e;
	}

CATCH_00ec:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00fd;
	} // end catch (depth: 1)

CATCH_00f1:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t163 *)__exception_local);
		Exception_t163 * L_43 = V_4;
		TargetInvocationException_t1555 * L_44 = (TargetInvocationException_t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetInvocationException_t1555_il2cpp_TypeInfo));
		TargetInvocationException__ctor_m8851(L_44, L_43, /*hidden argument*/&TargetInvocationException__ctor_m8851_MethodInfo);
		il2cpp_codegen_raise_exception(L_44);
		goto IL_00fd;
	} // end catch (depth: 1)

IL_00fd:
	{
		Exception_t163 * L_45 = V_2;
		if (!L_45)
		{
			goto IL_0102;
		}
	}
	{
		Exception_t163 * L_46 = V_2;
		il2cpp_codegen_raise_exception(L_46);
	}

IL_0102:
	{
		Object_t * L_47 = ___obj;
		if (L_47)
		{
			goto IL_0108;
		}
	}
	{
		Object_t * L_48 = V_3;
		G_B31_0 = L_48;
		goto IL_0109;
	}

IL_0108:
	{
		G_B31_0 = NULL;
	}

IL_0109:
	{
		return G_B31_0;
	}
}
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MonoCMethod_Invoke_m8777_MethodInfo;
extern "C" Object_t * MonoCMethod_Invoke_m8777 (MonoCMethod_t1544 * __this, int32_t ___invokeAttr, Binder_t742 * ___binder, ObjectU5BU5D_t148* ___parameters, CultureInfo_t745 * ___culture, MethodInfo* method)
{
	{
		int32_t L_0 = ___invokeAttr;
		Binder_t742 * L_1 = ___binder;
		ObjectU5BU5D_t148* L_2 = ___parameters;
		CultureInfo_t745 * L_3 = ___culture;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t742 *, ObjectU5BU5D_t148*, CultureInfo_t745 * >::Invoke(&MonoCMethod_Invoke_m8776_MethodInfo, __this, NULL, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern MethodInfo MonoCMethod_get_MethodHandle_m8778_MethodInfo;
extern "C" RuntimeMethodHandle_t1489  MonoCMethod_get_MethodHandle_m8778 (MonoCMethod_t1544 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		RuntimeMethodHandle_t1489  L_1 = {0};
		RuntimeMethodHandle__ctor_m10923(&L_1, L_0, /*hidden argument*/&RuntimeMethodHandle__ctor_m10923_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern MethodInfo MonoCMethod_get_Attributes_m8779_MethodInfo;
extern "C" int32_t MonoCMethod_get_Attributes_m8779 (MonoCMethod_t1544 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		int32_t L_1 = MonoMethodInfo_GetAttributes_m8740(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetAttributes_m8740_MethodInfo);
		return L_1;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C" int32_t MonoCMethod_get_CallingConvention_m8780 (MonoCMethod_t1544 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		int32_t L_1 = MonoMethodInfo_GetCallingConvention_m8741(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetCallingConvention_m8741_MethodInfo);
		return L_1;
	}
}
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C" Type_t * MonoCMethod_get_ReflectedType_m8781 (MonoCMethod_t1544 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___reftype_4);
		return L_0;
	}
}
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C" Type_t * MonoCMethod_get_DeclaringType_m8782 (MonoCMethod_t1544 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		Type_t * L_1 = MonoMethodInfo_GetDeclaringType_m8738(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetDeclaringType_m8738_MethodInfo);
		return L_1;
	}
}
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C" String_t* MonoCMethod_get_Name_m8783 (MonoCMethod_t1544 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___name_3);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = MonoMethod_get_name_m8746(NULL /*static, unused*/, __this, /*hidden argument*/&MonoMethod_get_name_m8746_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoCMethod_IsDefined_m8784_MethodInfo;
extern "C" bool MonoCMethod_IsDefined_m8784 (MonoCMethod_t1544 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1877_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m10743(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m10743_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoCMethod_GetCustomAttributes_m8785_MethodInfo;
extern "C" ObjectU5BU5D_t148* MonoCMethod_GetCustomAttributes_m8785 (MonoCMethod_t1544 * __this, bool ___inherit, MethodInfo* method)
{
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1877_il2cpp_TypeInfo));
		ObjectU5BU5D_t148* L_1 = MonoCustomAttrs_GetCustomAttributes_m10742(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10742_MethodInfo);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoCMethod_GetCustomAttributes_m8786_MethodInfo;
extern "C" ObjectU5BU5D_t148* MonoCMethod_GetCustomAttributes_m8786 (MonoCMethod_t1544 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1877_il2cpp_TypeInfo));
		ObjectU5BU5D_t148* L_2 = MonoCustomAttrs_GetCustomAttributes_m10741(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10741_MethodInfo);
		return L_2;
	}
}
// System.String System.Reflection.MonoCMethod::ToString()
extern "C" String_t* MonoCMethod_ToString_m8787 (MonoCMethod_t1544 * __this, MethodInfo* method)
{
	StringBuilder_t403 * V_0 = {0};
	ParameterInfoU5BU5D_t751* V_1 = {0};
	int32_t V_2 = 0;
	{
		StringBuilder_t403 * L_0 = (StringBuilder_t403 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t403_il2cpp_TypeInfo));
		StringBuilder__ctor_m1872(L_0, /*hidden argument*/&StringBuilder__ctor_m1872_MethodInfo);
		V_0 = L_0;
		StringBuilder_t403 * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_Append_m3682(L_1, (String_t*) &_stringLiteral1995, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		StringBuilder_t403 * L_2 = V_0;
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoCMethod_get_Name_m8783_MethodInfo, __this);
		NullCheck(L_2);
		StringBuilder_Append_m3682(L_2, L_3, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		StringBuilder_t403 * L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_Append_m3682(L_4, (String_t*) &_stringLiteral295, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		ParameterInfoU5BU5D_t751* L_5 = (ParameterInfoU5BU5D_t751*)VirtFuncInvoker0< ParameterInfoU5BU5D_t751* >::Invoke(&MonoCMethod_GetParameters_m8774_MethodInfo, __this);
		V_1 = L_5;
		V_2 = 0;
		goto IL_005e;
	}

IL_0036:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		StringBuilder_t403 * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m3682(L_7, (String_t*) &_stringLiteral296, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
	}

IL_0046:
	{
		StringBuilder_t403 * L_8 = V_0;
		ParameterInfoU5BU5D_t751* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_9, L_11)));
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3695_MethodInfo, (*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_9, L_11)));
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3679_MethodInfo, L_12);
		NullCheck(L_8);
		StringBuilder_Append_m3682(L_8, L_13, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_15 = V_2;
		ParameterInfoU5BU5D_t751* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MonoCMethod_get_CallingConvention_m8780_MethodInfo, __this);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0079;
		}
	}
	{
		StringBuilder_t403 * L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_Append_m3682(L_18, (String_t*) &_stringLiteral1996, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
	}

IL_0079:
	{
		StringBuilder_t403 * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m3682(L_19, (String_t*) &_stringLiteral143, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		StringBuilder_t403 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1875_MethodInfo, L_20);
		return L_21;
	}
}
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoCMethod_GetObjectData_m8788_MethodInfo;
extern "C" void MonoCMethod_GetObjectData_m8788 (MonoCMethod_t1544 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t700 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoCMethod_get_Name_m8783_MethodInfo, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_ReflectedType_m8781_MethodInfo, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoCMethod_ToString_m8787_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m8655(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 1, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8655_MethodInfo);
		return;
	}
}
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoPropertyInfo_t1546_il2cpp_TypeInfo;
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfoMethodDeclarations.h"

// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoProperty.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"


// System.Void System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)
extern MethodInfo MonoPropertyInfo_get_property_info_m8789_MethodInfo;
extern "C" void MonoPropertyInfo_get_property_info_m8789 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, MonoPropertyInfo_t1546 * ___info, int32_t ___req_info, MethodInfo* method)
{
	typedef void (*MonoPropertyInfo_get_property_info_m8789_ftn) (MonoProperty_t *, MonoPropertyInfo_t1546 *, int32_t);
	static MonoPropertyInfo_get_property_info_m8789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoPropertyInfo_get_property_info_m8789_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)");
	_il2cpp_icall_func(___prop, ___info, ___req_info);
}
// System.Type[] System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)
extern MethodInfo MonoPropertyInfo_GetTypeModifiers_m8790_MethodInfo;
extern "C" TypeU5BU5D_t670* MonoPropertyInfo_GetTypeModifiers_m8790 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, bool ___optional, MethodInfo* method)
{
	typedef TypeU5BU5D_t670* (*MonoPropertyInfo_GetTypeModifiers_m8790_ftn) (MonoProperty_t *, bool);
	static MonoPropertyInfo_GetTypeModifiers_m8790_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoPropertyInfo_GetTypeModifiers_m8790_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)");
	return _il2cpp_icall_func(___prop, ___optional);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PInfo_t1547_il2cpp_TypeInfo;
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfoMethodDeclarations.h"



// System.Reflection.MonoProperty/GetterAdapter
#include "mscorlib_System_Reflection_MonoProperty_GetterAdapter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GetterAdapter_t1548_il2cpp_TypeInfo;
// System.Reflection.MonoProperty/GetterAdapter
#include "mscorlib_System_Reflection_MonoProperty_GetterAdapterMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Reflection.MonoProperty/GetterAdapter::.ctor(System.Object,System.IntPtr)
extern MethodInfo GetterAdapter__ctor_m8791_MethodInfo;
extern "C" void GetterAdapter__ctor_m8791 (GetterAdapter_t1548 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object)
extern MethodInfo GetterAdapter_Invoke_m8792_MethodInfo;
extern "C" Object_t * GetterAdapter_Invoke_m8792 (GetterAdapter_t1548 * __this, Object_t * ____this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetterAdapter_Invoke_m8792((GetterAdapter_t1548 *)__this->___prev_9,____this, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ____this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetterAdapter_t1548(Il2CppObject* delegate, Object_t * ____this)
{
	// Marshaling of parameter '____this' to native representation
	Object_t * _____this_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Reflection.MonoProperty/GetterAdapter::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern MethodInfo GetterAdapter_BeginInvoke_m8793_MethodInfo;
extern "C" Object_t * GetterAdapter_BeginInvoke_m8793 (GetterAdapter_t1548 * __this, Object_t * ____this, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object System.Reflection.MonoProperty/GetterAdapter::EndInvoke(System.IAsyncResult)
extern MethodInfo GetterAdapter_EndInvoke_m8794_MethodInfo;
extern "C" Object_t * GetterAdapter_EndInvoke_m8794 (GetterAdapter_t1548 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoProperty_t_il2cpp_TypeInfo;
// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoPropertyMethodDeclarations.h"

// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.MethodAccessException
#include "mscorlib_System_MethodAccessException.h"
// System.Security.SecurityException
#include "mscorlib_System_Security_SecurityException.h"
extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t750_il2cpp_TypeInfo;
extern TypeInfo MethodInfoU5BU5D_t1293_il2cpp_TypeInfo;
extern TypeInfo SecurityException_t1768_il2cpp_TypeInfo;
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.MethodAccessException
#include "mscorlib_System_MethodAccessExceptionMethodDeclarations.h"
extern Il2CppType MethodInfoU5BU5D_t1293_0_0_0;
extern Il2CppType TypeU5BU5D_t670_0_0_0;
extern Il2CppType StaticGetter_1_t1928_0_0_0;
extern Il2CppType Getter_2_t1929_0_0_0;
extern Il2CppType MonoProperty_t_0_0_0;
extern Il2CppType GetterAdapter_t1548_0_0_0;
extern MethodInfo MonoProperty_CachePropertyInfo_m8796_MethodInfo;
extern MethodInfo MethodInfo_get_ReturnType_m8676_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m3694_MethodInfo;
extern MethodInfo PropertyInfo__ctor_m8836_MethodInfo;
extern MethodInfo MethodBase_get_IsPublic_m8667_MethodInfo;
extern MethodInfo Array_Copy_m6766_MethodInfo;
extern MethodInfo ParameterInfo__ctor_m8821_MethodInfo;
extern MethodInfo MethodBase_get_IsStatic_m3707_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m2059_MethodInfo;
extern MethodInfo MemberInfo_get_DeclaringType_m3692_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3716_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m6663_MethodInfo;
extern MethodInfo MethodAccessException__ctor_m10714_MethodInfo;
extern MethodInfo Type_GetMethod_m6840_MethodInfo;
extern MethodInfo MethodInfo_MakeGenericMethod_m8677_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m6662_MethodInfo;
extern MethodInfo MonoProperty_GetValue_m8813_MethodInfo;
extern MethodInfo MonoProperty_GetGetMethod_m8805_MethodInfo;
extern MethodInfo MonoProperty_get_Name_m8803_MethodInfo;
extern MethodInfo String_Concat_m98_MethodInfo;
extern MethodInfo MethodBase_Invoke_m11175_MethodInfo;
extern MethodInfo MonoProperty_GetSetMethod_m8807_MethodInfo;
extern MethodInfo MonoProperty_get_PropertyType_m8800_MethodInfo;
extern MethodInfo MonoProperty_get_ReflectedType_m8801_MethodInfo;
extern MethodInfo MonoProperty_ToString_m8815_MethodInfo;


// System.Void System.Reflection.MonoProperty::.ctor()
extern MethodInfo MonoProperty__ctor_m8795_MethodInfo;
extern "C" void MonoProperty__ctor_m8795 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		PropertyInfo__ctor_m8836(__this, /*hidden argument*/&PropertyInfo__ctor_m8836_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
extern "C" void MonoProperty_CachePropertyInfo_m8796 (MonoProperty_t * __this, int32_t ___flags, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___cached_3);
		int32_t L_1 = ___flags;
		int32_t L_2 = ___flags;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2)))
		{
			goto IL_0026;
		}
	}
	{
		MonoPropertyInfo_t1546 * L_3 = &(__this->___info_2);
		int32_t L_4 = ___flags;
		MonoPropertyInfo_get_property_info_m8789(NULL /*static, unused*/, __this, L_3, L_4, /*hidden argument*/&MonoPropertyInfo_get_property_info_m8789_MethodInfo);
		int32_t L_5 = (__this->___cached_3);
		int32_t L_6 = ___flags;
		__this->___cached_3 = ((int32_t)((int32_t)L_5|(int32_t)L_6));
	}

IL_0026:
	{
		return;
	}
}
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
extern MethodInfo MonoProperty_get_Attributes_m8797_MethodInfo;
extern "C" int32_t MonoProperty_get_Attributes_m8797 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8796(__this, 1, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8796_MethodInfo);
		MonoPropertyInfo_t1546 * L_0 = &(__this->___info_2);
		int32_t L_1 = (L_0->___attrs_4);
		return L_1;
	}
}
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
extern MethodInfo MonoProperty_get_CanRead_m8798_MethodInfo;
extern "C" bool MonoProperty_get_CanRead_m8798 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8796(__this, 2, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8796_MethodInfo);
		MonoPropertyInfo_t1546 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		return ((((int32_t)((((Object_t*)(MethodInfo_t *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
extern MethodInfo MonoProperty_get_CanWrite_m8799_MethodInfo;
extern "C" bool MonoProperty_get_CanWrite_m8799 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8796(__this, 4, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8796_MethodInfo);
		MonoPropertyInfo_t1546 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		return ((((int32_t)((((Object_t*)(MethodInfo_t *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type System.Reflection.MonoProperty::get_PropertyType()
extern "C" Type_t * MonoProperty_get_PropertyType_m8800 (MonoProperty_t * __this, MethodInfo* method)
{
	ParameterInfoU5BU5D_t751* V_0 = {0};
	{
		MonoProperty_CachePropertyInfo_m8796(__this, 6, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8796_MethodInfo);
		MonoPropertyInfo_t1546 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		MonoPropertyInfo_t1546 * L_2 = &(__this->___info_2);
		MethodInfo_t * L_3 = (L_2->___get_method_2);
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m8676_MethodInfo, L_3);
		return L_4;
	}

IL_0025:
	{
		MonoPropertyInfo_t1546 * L_5 = &(__this->___info_2);
		MethodInfo_t * L_6 = (L_5->___set_method_3);
		NullCheck(L_6);
		ParameterInfoU5BU5D_t751* L_7 = (ParameterInfoU5BU5D_t751*)VirtFuncInvoker0< ParameterInfoU5BU5D_t751* >::Invoke(&MethodBase_GetParameters_m3694_MethodInfo, L_6);
		V_0 = L_7;
		ParameterInfoU5BU5D_t751* L_8 = V_0;
		ParameterInfoU5BU5D_t751* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)1));
		NullCheck((*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_8, L_10)));
		Type_t * L_11 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3695_MethodInfo, (*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_8, L_10)));
		return L_11;
	}
}
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
extern "C" Type_t * MonoProperty_get_ReflectedType_m8801 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8796(__this, 8, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8796_MethodInfo);
		MonoPropertyInfo_t1546 * L_0 = &(__this->___info_2);
		Type_t * L_1 = (L_0->___parent_0);
		return L_1;
	}
}
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
extern MethodInfo MonoProperty_get_DeclaringType_m8802_MethodInfo;
extern "C" Type_t * MonoProperty_get_DeclaringType_m8802 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8796(__this, ((int32_t)16), /*hidden argument*/&MonoProperty_CachePropertyInfo_m8796_MethodInfo);
		MonoPropertyInfo_t1546 * L_0 = &(__this->___info_2);
		Type_t * L_1 = (L_0->___parent_0);
		return L_1;
	}
}
// System.String System.Reflection.MonoProperty::get_Name()
extern "C" String_t* MonoProperty_get_Name_m8803 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8796(__this, ((int32_t)32), /*hidden argument*/&MonoProperty_CachePropertyInfo_m8796_MethodInfo);
		MonoPropertyInfo_t1546 * L_0 = &(__this->___info_2);
		String_t* L_1 = (L_0->___name_1);
		return L_1;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
extern MethodInfo MonoProperty_GetAccessors_m8804_MethodInfo;
extern TypeInfo* MethodInfoU5BU5D_t1293_il2cpp_TypeInfo_var;
extern "C" MethodInfoU5BU5D_t1293* MonoProperty_GetAccessors_m8804 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method)
{
	static bool MonoProperty_GetAccessors_m8804_init;
	if (!MonoProperty_GetAccessors_m8804_init)
	{
		MethodInfoU5BU5D_t1293_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MethodInfoU5BU5D_t1293_0_0_0);
		MonoProperty_GetAccessors_m8804_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MethodInfoU5BU5D_t1293* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		MonoProperty_CachePropertyInfo_m8796(__this, 6, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8796_MethodInfo);
		MonoPropertyInfo_t1546 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		MonoPropertyInfo_t1546 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___set_method_3);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m8667_MethodInfo, L_4);
		if (!L_5)
		{
			goto IL_002f;
		}
	}

IL_002d:
	{
		V_1 = 1;
	}

IL_002f:
	{
		MonoPropertyInfo_t1546 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___get_method_2);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		bool L_8 = ___nonPublic;
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		MonoPropertyInfo_t1546 * L_9 = &(__this->___info_2);
		MethodInfo_t * L_10 = (L_9->___get_method_2);
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m8667_MethodInfo, L_10);
		if (!L_11)
		{
			goto IL_0053;
		}
	}

IL_0051:
	{
		V_0 = 1;
	}

IL_0053:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		V_2 = ((MethodInfoU5BU5D_t1293*)SZArrayNew(MethodInfoU5BU5D_t1293_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_12+(int32_t)L_13))));
		V_3 = 0;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		MethodInfoU5BU5D_t1293* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
		MonoPropertyInfo_t1546 * L_18 = &(__this->___info_2);
		MethodInfo_t * L_19 = (L_18->___set_method_3);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_17);
		ArrayElementTypeCheck (L_15, L_19);
		*((MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_15, L_17)) = (MethodInfo_t *)L_19;
	}

IL_0073:
	{
		int32_t L_20 = V_0;
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		MethodInfoU5BU5D_t1293* L_21 = V_2;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
		MonoPropertyInfo_t1546 * L_24 = &(__this->___info_2);
		MethodInfo_t * L_25 = (L_24->___get_method_2);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_23);
		ArrayElementTypeCheck (L_21, L_25);
		*((MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_21, L_23)) = (MethodInfo_t *)L_25;
	}

IL_0088:
	{
		MethodInfoU5BU5D_t1293* L_26 = V_2;
		return L_26;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetGetMethod_m8805 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8796(__this, 2, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8796_MethodInfo);
		MonoPropertyInfo_t1546 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		MonoPropertyInfo_t1546 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___get_method_2);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m8667_MethodInfo, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		MonoPropertyInfo_t1546 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___get_method_2);
		return L_7;
	}

IL_0035:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
extern MethodInfo MonoProperty_GetIndexParameters_m8806_MethodInfo;
extern TypeInfo* ParameterInfoU5BU5D_t751_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t751* MonoProperty_GetIndexParameters_m8806 (MonoProperty_t * __this, MethodInfo* method)
{
	static bool MonoProperty_GetIndexParameters_m8806_init;
	if (!MonoProperty_GetIndexParameters_m8806_init)
	{
		ParameterInfoU5BU5D_t751_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t751_0_0_0);
		MonoProperty_GetIndexParameters_m8806_init = true;
	}
	ParameterInfoU5BU5D_t751* V_0 = {0};
	ParameterInfoU5BU5D_t751* V_1 = {0};
	int32_t V_2 = 0;
	ParameterInfo_t752 * V_3 = {0};
	{
		MonoProperty_CachePropertyInfo_m8796(__this, 6, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8796_MethodInfo);
		MonoPropertyInfo_t1546 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		MonoPropertyInfo_t1546 * L_2 = &(__this->___info_2);
		MethodInfo_t * L_3 = (L_2->___get_method_2);
		NullCheck(L_3);
		ParameterInfoU5BU5D_t751* L_4 = (ParameterInfoU5BU5D_t751*)VirtFuncInvoker0< ParameterInfoU5BU5D_t751* >::Invoke(&MethodBase_GetParameters_m3694_MethodInfo, L_3);
		V_0 = L_4;
		goto IL_0063;
	}

IL_0027:
	{
		MonoPropertyInfo_t1546 * L_5 = &(__this->___info_2);
		MethodInfo_t * L_6 = (L_5->___set_method_3);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		MonoPropertyInfo_t1546 * L_7 = &(__this->___info_2);
		MethodInfo_t * L_8 = (L_7->___set_method_3);
		NullCheck(L_8);
		ParameterInfoU5BU5D_t751* L_9 = (ParameterInfoU5BU5D_t751*)VirtFuncInvoker0< ParameterInfoU5BU5D_t751* >::Invoke(&MethodBase_GetParameters_m3694_MethodInfo, L_8);
		V_1 = L_9;
		ParameterInfoU5BU5D_t751* L_10 = V_1;
		NullCheck(L_10);
		V_0 = ((ParameterInfoU5BU5D_t751*)SZArrayNew(ParameterInfoU5BU5D_t751_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))-(int32_t)1))));
		ParameterInfoU5BU5D_t751* L_11 = V_1;
		ParameterInfoU5BU5D_t751* L_12 = V_0;
		ParameterInfoU5BU5D_t751* L_13 = V_0;
		NullCheck(L_13);
		Array_Copy_m6766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_11, (Array_t *)(Array_t *)L_12, (((int32_t)(((Array_t *)L_13)->max_length))), /*hidden argument*/&Array_Copy_m6766_MethodInfo);
		goto IL_0063;
	}

IL_005c:
	{
		return ((ParameterInfoU5BU5D_t751*)SZArrayNew(ParameterInfoU5BU5D_t751_il2cpp_TypeInfo_var, 0));
	}

IL_0063:
	{
		V_2 = 0;
		goto IL_0079;
	}

IL_0067:
	{
		ParameterInfoU5BU5D_t751* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_3 = (*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_14, L_16));
		ParameterInfoU5BU5D_t751* L_17 = V_0;
		int32_t L_18 = V_2;
		ParameterInfo_t752 * L_19 = V_3;
		ParameterInfo_t752 * L_20 = (ParameterInfo_t752 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ParameterInfo_t752_il2cpp_TypeInfo));
		ParameterInfo__ctor_m8821(L_20, L_19, __this, /*hidden argument*/&ParameterInfo__ctor_m8821_MethodInfo);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		ArrayElementTypeCheck (L_17, L_20);
		*((ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_17, L_18)) = (ParameterInfo_t752 *)L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_22 = V_2;
		ParameterInfoU5BU5D_t751* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((Array_t *)L_23)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		ParameterInfoU5BU5D_t751* L_24 = V_0;
		return L_24;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetSetMethod_m8807 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8796(__this, 4, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8796_MethodInfo);
		MonoPropertyInfo_t1546 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		MonoPropertyInfo_t1546 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___set_method_3);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m8667_MethodInfo, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		MonoPropertyInfo_t1546 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___set_method_3);
		return L_7;
	}

IL_0035:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoProperty_IsDefined_m8808_MethodInfo;
extern "C" bool MonoProperty_IsDefined_m8808 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1877_il2cpp_TypeInfo));
		bool L_1 = MonoCustomAttrs_IsDefined_m10743(NULL /*static, unused*/, __this, L_0, 0, /*hidden argument*/&MonoCustomAttrs_IsDefined_m10743_MethodInfo);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoProperty_GetCustomAttributes_m8809_MethodInfo;
extern "C" ObjectU5BU5D_t148* MonoProperty_GetCustomAttributes_m8809 (MonoProperty_t * __this, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1877_il2cpp_TypeInfo));
		ObjectU5BU5D_t148* L_0 = MonoCustomAttrs_GetCustomAttributes_m10742(NULL /*static, unused*/, __this, 0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10742_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoProperty_GetCustomAttributes_m8810_MethodInfo;
extern "C" ObjectU5BU5D_t148* MonoProperty_GetCustomAttributes_m8810 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1877_il2cpp_TypeInfo));
		ObjectU5BU5D_t148* L_1 = MonoCustomAttrs_GetCustomAttributes_m10741(NULL /*static, unused*/, __this, L_0, 0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10741_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
extern MethodInfo MonoProperty_CreateGetterDelegate_m8811_MethodInfo;
extern TypeInfo* TypeU5BU5D_t670_il2cpp_TypeInfo_var;
extern "C" GetterAdapter_t1548 * MonoProperty_CreateGetterDelegate_m8811 (Object_t * __this /* static, unused */, MethodInfo_t * ___method, MethodInfo* method)
{
	static bool MonoProperty_CreateGetterDelegate_m8811_init;
	if (!MonoProperty_CreateGetterDelegate_m8811_init)
	{
		TypeU5BU5D_t670_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t670_0_0_0);
		MonoProperty_CreateGetterDelegate_m8811_init = true;
	}
	TypeU5BU5D_t670* V_0 = {0};
	Type_t * V_1 = {0};
	Object_t * V_2 = {0};
	MethodInfo_t * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		MethodInfo_t * L_0 = ___method;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m3707_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		TypeU5BU5D_t670* L_2 = ((TypeU5BU5D_t670*)SZArrayNew(TypeU5BU5D_t670_il2cpp_TypeInfo_var, 1));
		MethodInfo_t * L_3 = ___method;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m8676_MethodInfo, L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_4;
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&StaticGetter_1_t1928_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		V_4 = L_5;
		V_5 = (String_t*) &_stringLiteral1997;
		goto IL_0059;
	}

IL_002d:
	{
		TypeU5BU5D_t670* L_6 = ((TypeU5BU5D_t670*)SZArrayNew(TypeU5BU5D_t670_il2cpp_TypeInfo_var, 2));
		MethodInfo_t * L_7 = ___method;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3692_MethodInfo, L_7);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_8);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 0)) = (Type_t *)L_8;
		TypeU5BU5D_t670* L_9 = L_6;
		MethodInfo_t * L_10 = ___method;
		NullCheck(L_10);
		Type_t * L_11 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m8676_MethodInfo, L_10);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		ArrayElementTypeCheck (L_9, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_9, 1)) = (Type_t *)L_11;
		V_0 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_12 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&Getter_2_t1929_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		V_4 = L_12;
		V_5 = (String_t*) &_stringLiteral1998;
	}

IL_0059:
	{
		Type_t * L_13 = V_4;
		TypeU5BU5D_t670* L_14 = V_0;
		NullCheck(L_13);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t670* >::Invoke(&Type_MakeGenericType_m3716_MethodInfo, L_13, L_14);
		V_1 = L_15;
		Type_t * L_16 = V_1;
		MethodInfo_t * L_17 = ___method;
		Delegate_t424 * L_18 = Delegate_CreateDelegate_m6663(NULL /*static, unused*/, L_16, L_17, 0, /*hidden argument*/&Delegate_CreateDelegate_m6663_MethodInfo);
		V_2 = L_18;
		Object_t * L_19 = V_2;
		if (L_19)
		{
			goto IL_0074;
		}
	}
	{
		MethodAccessException_t1871 * L_20 = (MethodAccessException_t1871 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MethodAccessException_t1871_il2cpp_TypeInfo));
		MethodAccessException__ctor_m10714(L_20, /*hidden argument*/&MethodAccessException__ctor_m10714_MethodInfo);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_21 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&MonoProperty_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		String_t* L_22 = V_5;
		NullCheck(L_21);
		MethodInfo_t * L_23 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(&Type_GetMethod_m6840_MethodInfo, L_21, L_22, ((int32_t)40));
		V_3 = L_23;
		MethodInfo_t * L_24 = V_3;
		TypeU5BU5D_t670* L_25 = V_0;
		NullCheck(L_24);
		MethodInfo_t * L_26 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t670* >::Invoke(&MethodInfo_MakeGenericMethod_m8677_MethodInfo, L_24, L_25);
		V_3 = L_26;
		Type_t * L_27 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&GetterAdapter_t1548_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		Object_t * L_28 = V_2;
		MethodInfo_t * L_29 = V_3;
		Delegate_t424 * L_30 = Delegate_CreateDelegate_m6662(NULL /*static, unused*/, L_27, L_28, L_29, 1, /*hidden argument*/&Delegate_CreateDelegate_m6662_MethodInfo);
		return ((GetterAdapter_t1548 *)Castclass(L_30, InitializedTypeInfo(&GetterAdapter_t1548_il2cpp_TypeInfo)));
	}
}
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
extern MethodInfo MonoProperty_GetValue_m8812_MethodInfo;
extern "C" Object_t * MonoProperty_GetValue_m8812 (MonoProperty_t * __this, Object_t * ___obj, ObjectU5BU5D_t148* ___index, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = ___index;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t148* L_1 = ___index;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0008;
		}
	}

IL_0008:
	{
		Object_t * L_2 = ___obj;
		ObjectU5BU5D_t148* L_3 = ___index;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t742 *, ObjectU5BU5D_t148*, CultureInfo_t745 * >::Invoke(&MonoProperty_GetValue_m8813_MethodInfo, __this, L_2, 0, (Binder_t742 *)NULL, L_3, (CultureInfo_t745 *)NULL);
		return L_4;
	}
}
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoProperty_GetValue_m8813 (MonoProperty_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t742 * ___binder, ObjectU5BU5D_t148* ___index, CultureInfo_t745 * ___culture, MethodInfo* method)
{
	Object_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	SecurityException_t1768 * V_2 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = NULL;
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&MonoProperty_GetGetMethod_m8805_MethodInfo, __this, 1);
		V_1 = L_0;
		MethodInfo_t * L_1 = V_1;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m8803_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral1999, L_2, (String_t*) &_stringLiteral136, /*hidden argument*/&String_Concat_m98_MethodInfo);
		ArgumentException_t445 * L_4 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_4, L_3, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t148* L_5 = ___index;
			if (!L_5)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			ObjectU5BU5D_t148* L_6 = ___index;
			NullCheck(L_6);
			if ((((int32_t)(((Array_t *)L_6)->max_length))))
			{
				goto IL_0041;
			}
		}

IL_0032:
		{
			MethodInfo_t * L_7 = V_1;
			Object_t * L_8 = ___obj;
			int32_t L_9 = ___invokeAttr;
			Binder_t742 * L_10 = ___binder;
			CultureInfo_t745 * L_11 = ___culture;
			NullCheck(L_7);
			Object_t * L_12 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t742 *, ObjectU5BU5D_t148*, CultureInfo_t745 * >::Invoke(&MethodBase_Invoke_m11175_MethodInfo, L_7, L_8, L_9, L_10, (ObjectU5BU5D_t148*)(ObjectU5BU5D_t148*)NULL, L_11);
			V_0 = L_12;
			goto IL_004f;
		}

IL_0041:
		{
			MethodInfo_t * L_13 = V_1;
			Object_t * L_14 = ___obj;
			int32_t L_15 = ___invokeAttr;
			Binder_t742 * L_16 = ___binder;
			ObjectU5BU5D_t148* L_17 = ___index;
			CultureInfo_t745 * L_18 = ___culture;
			NullCheck(L_13);
			Object_t * L_19 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t742 *, ObjectU5BU5D_t148*, CultureInfo_t745 * >::Invoke(&MethodBase_Invoke_m11175_MethodInfo, L_13, L_14, L_15, L_16, L_17, L_18);
			V_0 = L_19;
		}

IL_004f:
		{
			goto IL_005b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t163 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&SecurityException_t1768_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0051;
		throw e;
	}

CATCH_0051:
	{ // begin catch(System.Security.SecurityException)
		V_2 = ((SecurityException_t1768 *)__exception_local);
		SecurityException_t1768 * L_20 = V_2;
		TargetInvocationException_t1555 * L_21 = (TargetInvocationException_t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetInvocationException_t1555_il2cpp_TypeInfo));
		TargetInvocationException__ctor_m8851(L_21, L_20, /*hidden argument*/&TargetInvocationException__ctor_m8851_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
		goto IL_005b;
	} // end catch (depth: 1)

IL_005b:
	{
		Object_t * L_22 = V_0;
		return L_22;
	}
}
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MonoProperty_SetValue_m8814_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void MonoProperty_SetValue_m8814 (MonoProperty_t * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t742 * ___binder, ObjectU5BU5D_t148* ___index, CultureInfo_t745 * ___culture, MethodInfo* method)
{
	static bool MonoProperty_SetValue_m8814_init;
	if (!MonoProperty_SetValue_m8814_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		MonoProperty_SetValue_m8814_init = true;
	}
	MethodInfo_t * V_0 = {0};
	ObjectU5BU5D_t148* V_1 = {0};
	int32_t V_2 = 0;
	{
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&MonoProperty_GetSetMethod_m8807_MethodInfo, __this, 1);
		V_0 = L_0;
		MethodInfo_t * L_1 = V_0;
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m8803_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral2000, L_2, (String_t*) &_stringLiteral136, /*hidden argument*/&String_Concat_m98_MethodInfo);
		ArgumentException_t445 * L_4 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_4, L_3, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		ObjectU5BU5D_t148* L_5 = ___index;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		ObjectU5BU5D_t148* L_6 = ___index;
		NullCheck(L_6);
		if ((((int32_t)(((Array_t *)L_6)->max_length))))
		{
			goto IL_003d;
		}
	}

IL_0030:
	{
		ObjectU5BU5D_t148* L_7 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 1));
		Object_t * L_8 = ___value;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0)) = (Object_t *)L_8;
		V_1 = L_7;
		goto IL_0058;
	}

IL_003d:
	{
		ObjectU5BU5D_t148* L_9 = ___index;
		NullCheck(L_9);
		V_2 = (((int32_t)(((Array_t *)L_9)->max_length)));
		int32_t L_10 = V_2;
		V_1 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_10+(int32_t)1))));
		ObjectU5BU5D_t148* L_11 = ___index;
		ObjectU5BU5D_t148* L_12 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4959_MethodInfo, L_11, (Array_t *)(Array_t *)L_12, 0);
		ObjectU5BU5D_t148* L_13 = V_1;
		int32_t L_14 = V_2;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		ArrayElementTypeCheck (L_13, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)) = (Object_t *)L_15;
	}

IL_0058:
	{
		MethodInfo_t * L_16 = V_0;
		Object_t * L_17 = ___obj;
		int32_t L_18 = ___invokeAttr;
		Binder_t742 * L_19 = ___binder;
		ObjectU5BU5D_t148* L_20 = V_1;
		CultureInfo_t745 * L_21 = ___culture;
		NullCheck(L_16);
		VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t742 *, ObjectU5BU5D_t148*, CultureInfo_t745 * >::Invoke(&MethodBase_Invoke_m11175_MethodInfo, L_16, L_17, L_18, L_19, L_20, L_21);
		return;
	}
}
// System.String System.Reflection.MonoProperty::ToString()
extern "C" String_t* MonoProperty_ToString_m8815 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoProperty_get_PropertyType_m8800_MethodInfo, __this);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6856_MethodInfo, L_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m8803_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m98(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral37, L_2, /*hidden argument*/&String_Concat_m98_MethodInfo);
		return L_3;
	}
}
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
extern MethodInfo MonoProperty_GetOptionalCustomModifiers_m8816_MethodInfo;
extern "C" TypeU5BU5D_t670* MonoProperty_GetOptionalCustomModifiers_m8816 (MonoProperty_t * __this, MethodInfo* method)
{
	TypeU5BU5D_t670* V_0 = {0};
	{
		TypeU5BU5D_t670* L_0 = MonoPropertyInfo_GetTypeModifiers_m8790(NULL /*static, unused*/, __this, 1, /*hidden argument*/&MonoPropertyInfo_GetTypeModifiers_m8790_MethodInfo);
		V_0 = L_0;
		TypeU5BU5D_t670* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t670* L_2 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_2;
	}

IL_0011:
	{
		TypeU5BU5D_t670* L_3 = V_0;
		return L_3;
	}
}
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
extern MethodInfo MonoProperty_GetRequiredCustomModifiers_m8817_MethodInfo;
extern "C" TypeU5BU5D_t670* MonoProperty_GetRequiredCustomModifiers_m8817 (MonoProperty_t * __this, MethodInfo* method)
{
	TypeU5BU5D_t670* V_0 = {0};
	{
		TypeU5BU5D_t670* L_0 = MonoPropertyInfo_GetTypeModifiers_m8790(NULL /*static, unused*/, __this, 0, /*hidden argument*/&MonoPropertyInfo_GetTypeModifiers_m8790_MethodInfo);
		V_0 = L_0;
		TypeU5BU5D_t670* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t670* L_2 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_2;
	}

IL_0011:
	{
		TypeU5BU5D_t670* L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoProperty_GetObjectData_m8818_MethodInfo;
extern "C" void MonoProperty_GetObjectData_m8818 (MonoProperty_t * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t700 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m8803_MethodInfo, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoProperty_get_ReflectedType_m8801_MethodInfo, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_ToString_m8815_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m8655(NULL /*static, unused*/, L_0, L_1, L_2, L_3, ((int32_t)16), /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8655_MethodInfo);
		return;
	}
}
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParameterAttributes_t1549_il2cpp_TypeInfo;
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilder.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshal.h"
// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttribute.h"
// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttribute.h"
// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttribute.h"
// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttribute.h"
extern TypeInfo ParameterBuilder_t1518_il2cpp_TypeInfo;
extern TypeInfo Char_t166_il2cpp_TypeInfo;
extern TypeInfo InAttribute_t1299_il2cpp_TypeInfo;
extern TypeInfo OptionalAttribute_t1301_il2cpp_TypeInfo;
extern TypeInfo OutAttribute_t1296_il2cpp_TypeInfo;
// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilderMethodDeclarations.h"
// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttributeMethodDeclarations.h"
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshalMethodDeclarations.h"
extern Il2CppType Void_t43_0_0_0;
extern MethodInfo ParameterInfo_get_Attributes_m8823_MethodInfo;
extern MethodInfo Object__ctor_m86_MethodInfo;
extern MethodInfo ParameterBuilder_get_Name_m8496_MethodInfo;
extern MethodInfo ParameterBuilder_get_Position_m8497_MethodInfo;
extern MethodInfo ParameterBuilder_get_Attributes_m8495_MethodInfo;
extern MethodInfo ParameterInfo_get_Name_m8829_MethodInfo;
extern MethodInfo ParameterInfo_get_Position_m8830_MethodInfo;
extern MethodInfo Type_get_HasElementType_m6806_MethodInfo;
extern MethodInfo Type_get_Namespace_m3693_MethodInfo;
extern MethodInfo String_op_Equality_m641_MethodInfo;
extern MethodInfo Type_get_FullName_m3737_MethodInfo;
extern MethodInfo ParameterInfo_get_IsRetval_m8827_MethodInfo;
extern MethodInfo String_Concat_m555_MethodInfo;
extern MethodInfo String_Concat_m94_MethodInfo;
extern MethodInfo ParameterInfo_get_IsIn_m8824_MethodInfo;
extern MethodInfo ParameterInfo_get_IsOut_m8826_MethodInfo;
extern MethodInfo ParameterInfo_get_IsOptional_m8825_MethodInfo;
extern MethodInfo InAttribute__ctor_m6887_MethodInfo;
extern MethodInfo OptionalAttribute__ctor_m6889_MethodInfo;
extern MethodInfo OutAttribute__ctor_m6883_MethodInfo;
extern MethodInfo UnmanagedMarshal_ToMarshalAsAttribute_m8561_MethodInfo;


// System.Void System.Reflection.ParameterInfo::.ctor()
extern MethodInfo ParameterInfo__ctor_m8819_MethodInfo;
extern "C" void ParameterInfo__ctor_m8819 (ParameterInfo_t752 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
extern MethodInfo ParameterInfo__ctor_m8820_MethodInfo;
extern "C" void ParameterInfo__ctor_m8820 (ParameterInfo_t752 * __this, ParameterBuilder_t1518 * ___pb, Type_t * ___type, MemberInfo_t * ___member, int32_t ___position, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		Type_t * L_0 = ___type;
		__this->___ClassImpl_0 = L_0;
		MemberInfo_t * L_1 = ___member;
		__this->___MemberImpl_2 = L_1;
		ParameterBuilder_t1518 * L_2 = ___pb;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		ParameterBuilder_t1518 * L_3 = ___pb;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ParameterBuilder_get_Name_m8496_MethodInfo, L_3);
		__this->___NameImpl_3 = L_4;
		ParameterBuilder_t1518 * L_5 = ___pb;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterBuilder_get_Position_m8497_MethodInfo, L_5);
		__this->___PositionImpl_4 = ((int32_t)((int32_t)L_6-(int32_t)1));
		ParameterBuilder_t1518 * L_7 = ___pb;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterBuilder_get_Attributes_m8495_MethodInfo, L_7);
		__this->___AttrsImpl_5 = L_8;
		goto IL_0057;
	}

IL_003f:
	{
		__this->___NameImpl_3 = (String_t*)NULL;
		int32_t L_9 = ___position;
		__this->___PositionImpl_4 = ((int32_t)((int32_t)L_9-(int32_t)1));
		__this->___AttrsImpl_5 = 0;
	}

IL_0057:
	{
		return;
	}
}
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
extern "C" void ParameterInfo__ctor_m8821 (ParameterInfo_t752 * __this, ParameterInfo_t752 * ___pinfo, MemberInfo_t * ___member, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		ParameterInfo_t752 * L_0 = ___pinfo;
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3695_MethodInfo, L_0);
		__this->___ClassImpl_0 = L_1;
		MemberInfo_t * L_2 = ___member;
		__this->___MemberImpl_2 = L_2;
		ParameterInfo_t752 * L_3 = ___pinfo;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ParameterInfo_get_Name_m8829_MethodInfo, L_3);
		__this->___NameImpl_3 = L_4;
		ParameterInfo_t752 * L_5 = ___pinfo;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Position_m8830_MethodInfo, L_5);
		__this->___PositionImpl_4 = L_6;
		ParameterInfo_t752 * L_7 = ___pinfo;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8823_MethodInfo, L_7);
		__this->___AttrsImpl_5 = L_8;
		return;
	}
}
// System.String System.Reflection.ParameterInfo::ToString()
extern MethodInfo ParameterInfo_ToString_m8822_MethodInfo;
extern "C" String_t* ParameterInfo_ToString_m8822 (ParameterInfo_t752 * __this, MethodInfo* method)
{
	Type_t * V_0 = {0};
	bool V_1 = false;
	String_t* V_2 = {0};
	int32_t G_B7_0 = 0;
	String_t* G_B10_0 = {0};
	{
		Type_t * L_0 = (__this->___ClassImpl_0);
		V_0 = L_0;
		goto IL_0010;
	}

IL_0009:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m11106_MethodInfo, L_1);
		V_0 = L_2;
	}

IL_0010:
	{
		Type_t * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m6806_MethodInfo, L_3);
		if (L_4)
		{
			goto IL_0009;
		}
	}
	{
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m3739_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		Type_t * L_7 = (__this->___ClassImpl_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&Void_t43_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		if ((((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_0054;
		}
	}
	{
		Type_t * L_9 = (__this->___ClassImpl_0);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m3693_MethodInfo, L_9);
		MemberInfo_t * L_11 = (__this->___MemberImpl_2);
		NullCheck(L_11);
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3692_MethodInfo, L_11);
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m3693_MethodInfo, L_12);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_14 = String_op_Equality_m641(NULL /*static, unused*/, L_10, L_13, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		G_B7_0 = ((int32_t)(L_14));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 1;
	}

IL_0055:
	{
		V_1 = G_B7_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		Type_t * L_16 = (__this->___ClassImpl_0);
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3679_MethodInfo, L_16);
		G_B10_0 = L_17;
		goto IL_0071;
	}

IL_0066:
	{
		Type_t * L_18 = (__this->___ClassImpl_0);
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3737_MethodInfo, L_18);
		G_B10_0 = L_19;
	}

IL_0071:
	{
		V_2 = G_B10_0;
		bool L_20 = ParameterInfo_get_IsRetval_m8827(__this, /*hidden argument*/&ParameterInfo_get_IsRetval_m8827_MethodInfo);
		if (L_20)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_21 = V_2;
		uint16_t L_22 = ((int32_t)32);
		Object_t * L_23 = Box(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo), &L_22);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_24 = String_Concat_m555(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/&String_Concat_m555_MethodInfo);
		V_2 = L_24;
		String_t* L_25 = V_2;
		String_t* L_26 = (__this->___NameImpl_3);
		String_t* L_27 = String_Concat_m94(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/&String_Concat_m94_MethodInfo);
		V_2 = L_27;
	}

IL_0095:
	{
		String_t* L_28 = V_2;
		return L_28;
	}
}
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
extern "C" Type_t * ParameterInfo_get_ParameterType_m3695 (ParameterInfo_t752 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___ClassImpl_0);
		return L_0;
	}
}
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
extern "C" int32_t ParameterInfo_get_Attributes_m8823 (ParameterInfo_t752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___AttrsImpl_5);
		return L_0;
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
extern "C" bool ParameterInfo_get_IsIn_m8824 (ParameterInfo_t752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8823_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
extern "C" bool ParameterInfo_get_IsOptional_m8825 (ParameterInfo_t752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8823_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
extern "C" bool ParameterInfo_get_IsOut_m8826 (ParameterInfo_t752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8823_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
extern "C" bool ParameterInfo_get_IsRetval_m8827 (ParameterInfo_t752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8823_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
extern MethodInfo ParameterInfo_get_Member_m8828_MethodInfo;
extern "C" MemberInfo_t * ParameterInfo_get_Member_m8828 (ParameterInfo_t752 * __this, MethodInfo* method)
{
	{
		MemberInfo_t * L_0 = (__this->___MemberImpl_2);
		return L_0;
	}
}
// System.String System.Reflection.ParameterInfo::get_Name()
extern "C" String_t* ParameterInfo_get_Name_m8829 (ParameterInfo_t752 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___NameImpl_3);
		return L_0;
	}
}
// System.Int32 System.Reflection.ParameterInfo::get_Position()
extern "C" int32_t ParameterInfo_get_Position_m8830 (ParameterInfo_t752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___PositionImpl_4);
		return L_0;
	}
}
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo ParameterInfo_GetCustomAttributes_m8831_MethodInfo;
extern "C" ObjectU5BU5D_t148* ParameterInfo_GetCustomAttributes_m8831 (ParameterInfo_t752 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1877_il2cpp_TypeInfo));
		ObjectU5BU5D_t148* L_2 = MonoCustomAttrs_GetCustomAttributes_m10741(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10741_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
extern MethodInfo ParameterInfo_IsDefined_m8832_MethodInfo;
extern "C" bool ParameterInfo_IsDefined_m8832 (ParameterInfo_t752 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1877_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m10743(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m10743_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
extern MethodInfo ParameterInfo_GetPseudoCustomAttributes_m8833_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t148* ParameterInfo_GetPseudoCustomAttributes_m8833 (ParameterInfo_t752 * __this, MethodInfo* method)
{
	static bool ParameterInfo_GetPseudoCustomAttributes_m8833_init;
	if (!ParameterInfo_GetPseudoCustomAttributes_m8833_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		ParameterInfo_GetPseudoCustomAttributes_m8833_init = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t148* V_1 = {0};
	{
		V_0 = 0;
		bool L_0 = ParameterInfo_get_IsIn_m8824(__this, /*hidden argument*/&ParameterInfo_get_IsIn_m8824_MethodInfo);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000e:
	{
		bool L_2 = ParameterInfo_get_IsOut_m8826(__this, /*hidden argument*/&ParameterInfo_get_IsOut_m8826_MethodInfo);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001a:
	{
		bool L_4 = ParameterInfo_get_IsOptional_m8825(__this, /*hidden argument*/&ParameterInfo_get_IsOptional_m8825_MethodInfo);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0026:
	{
		UnmanagedMarshal_t1493 * L_6 = (__this->___marshalAs_6);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		return (ObjectU5BU5D_t148*)NULL;
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		V_1 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, L_9));
		V_0 = 0;
		bool L_10 = ParameterInfo_get_IsIn_m8824(__this, /*hidden argument*/&ParameterInfo_get_IsIn_m8824_MethodInfo);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		ObjectU5BU5D_t148* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
		InAttribute_t1299 * L_14 = (InAttribute_t1299 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InAttribute_t1299_il2cpp_TypeInfo));
		InAttribute__ctor_m6887(L_14, /*hidden argument*/&InAttribute__ctor_m6887_MethodInfo);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, L_13)) = (Object_t *)L_14;
	}

IL_0054:
	{
		bool L_15 = ParameterInfo_get_IsOptional_m8825(__this, /*hidden argument*/&ParameterInfo_get_IsOptional_m8825_MethodInfo);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		ObjectU5BU5D_t148* L_16 = V_1;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
		OptionalAttribute_t1301 * L_19 = (OptionalAttribute_t1301 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OptionalAttribute_t1301_il2cpp_TypeInfo));
		OptionalAttribute__ctor_m6889(L_19, /*hidden argument*/&OptionalAttribute__ctor_m6889_MethodInfo);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_18);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)) = (Object_t *)L_19;
	}

IL_0068:
	{
		bool L_20 = ParameterInfo_get_IsOut_m8826(__this, /*hidden argument*/&ParameterInfo_get_IsOut_m8826_MethodInfo);
		if (!L_20)
		{
			goto IL_007c;
		}
	}
	{
		ObjectU5BU5D_t148* L_21 = V_1;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
		OutAttribute_t1296 * L_24 = (OutAttribute_t1296 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OutAttribute_t1296_il2cpp_TypeInfo));
		OutAttribute__ctor_m6883(L_24, /*hidden argument*/&OutAttribute__ctor_m6883_MethodInfo);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_23);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23)) = (Object_t *)L_24;
	}

IL_007c:
	{
		UnmanagedMarshal_t1493 * L_25 = (__this->___marshalAs_6);
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		ObjectU5BU5D_t148* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)((int32_t)L_28+(int32_t)1));
		UnmanagedMarshal_t1493 * L_29 = (__this->___marshalAs_6);
		NullCheck(L_29);
		MarshalAsAttribute_t1298 * L_30 = UnmanagedMarshal_ToMarshalAsAttribute_m8561(L_29, /*hidden argument*/&UnmanagedMarshal_ToMarshalAsAttribute_m8561_MethodInfo);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_28);
		ArrayElementTypeCheck (L_26, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, L_28)) = (Object_t *)L_30;
	}

IL_0096:
	{
		ObjectU5BU5D_t148* L_31 = V_1;
		return L_31;
	}
}
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParameterModifier_t744_il2cpp_TypeInfo;
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifierMethodDeclarations.h"



// Conversion methods for marshalling of: System.Reflection.ParameterModifier
void ParameterModifier_t744_marshal(const ParameterModifier_t744& unmarshaled, ParameterModifier_t744_marshaled& marshaled)
{
	marshaled.____byref_0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.____byref_0);
}
void ParameterModifier_t744_marshal_back(const ParameterModifier_t744_marshaled& marshaled, ParameterModifier_t744& unmarshaled)
{
	unmarshaled.____byref_0 = (BooleanU5BU5D_t118*)il2cpp_codegen_marshal_array_result(&Boolean_t25_il2cpp_TypeInfo, marshaled.____byref_0, 1);
}
// Conversion method for clean up from marshalling of: System.Reflection.ParameterModifier
void ParameterModifier_t744_marshal_cleanup(ParameterModifier_t744_marshaled& marshaled)
{
}
// System.Reflection.Pointer
#include "mscorlib_System_Reflection_Pointer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Pointer_t1550_il2cpp_TypeInfo;
// System.Reflection.Pointer
#include "mscorlib_System_Reflection_PointerMethodDeclarations.h"

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo NotSupportedException_t158_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern MethodInfo NotSupportedException__ctor_m4784_MethodInfo;


// System.Void System.Reflection.Pointer::.ctor()
extern MethodInfo Pointer__ctor_m8834_MethodInfo;
extern "C" void Pointer__ctor_m8834 (Pointer_t1550 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.Pointer::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo Pointer_System_Runtime_Serialization_ISerializable_GetObjectData_m8835_MethodInfo;
extern "C" void Pointer_System_Runtime_Serialization_ISerializable_GetObjectData_m8835 (Pointer_t1550 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4784(L_0, (String_t*) &_stringLiteral2001, /*hidden argument*/&NotSupportedException__ctor_m4784_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitecture.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ProcessorArchitecture_t1551_il2cpp_TypeInfo;
// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitectureMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropertyAttributes_t1552_il2cpp_TypeInfo;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributesMethodDeclarations.h"



// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropertyInfo_t_il2cpp_TypeInfo;

extern MethodInfo MemberInfo__ctor_m6869_MethodInfo;
extern MethodInfo PropertyInfo_GetGetMethod_m11176_MethodInfo;
extern MethodInfo PropertyInfo_GetValue_m11177_MethodInfo;
extern MethodInfo PropertyInfo_SetValue_m11178_MethodInfo;


// System.Void System.Reflection.PropertyInfo::.ctor()
extern "C" void PropertyInfo__ctor_m8836 (PropertyInfo_t * __this, MethodInfo* method)
{
	{
		MemberInfo__ctor_m6869(__this, /*hidden argument*/&MemberInfo__ctor_m6869_MethodInfo);
		return;
	}
}
// System.Reflection.PropertyAttributes System.Reflection.PropertyInfo::get_Attributes()
// System.Boolean System.Reflection.PropertyInfo::get_CanRead()
// System.Boolean System.Reflection.PropertyInfo::get_CanWrite()
// System.Reflection.MemberTypes System.Reflection.PropertyInfo::get_MemberType()
extern MethodInfo PropertyInfo_get_MemberType_m8837_MethodInfo;
extern "C" int32_t PropertyInfo_get_MemberType_m8837 (PropertyInfo_t * __this, MethodInfo* method)
{
	{
		return (int32_t)(((int32_t)16));
	}
}
// System.Type System.Reflection.PropertyInfo::get_PropertyType()
// System.Reflection.MethodInfo[] System.Reflection.PropertyInfo::GetAccessors(System.Boolean)
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
extern MethodInfo PropertyInfo_GetGetMethod_m8838_MethodInfo;
extern "C" MethodInfo_t * PropertyInfo_GetGetMethod_m8838 (PropertyInfo_t * __this, MethodInfo* method)
{
	{
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&PropertyInfo_GetGetMethod_m11176_MethodInfo, __this, 0);
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean)
// System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters()
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean)
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[])
extern MethodInfo PropertyInfo_GetValue_m8839_MethodInfo;
extern "C" Object_t * PropertyInfo_GetValue_m8839 (PropertyInfo_t * __this, Object_t * ___obj, ObjectU5BU5D_t148* ___index, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		ObjectU5BU5D_t148* L_1 = ___index;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t742 *, ObjectU5BU5D_t148*, CultureInfo_t745 * >::Invoke(&PropertyInfo_GetValue_m11177_MethodInfo, __this, L_0, 0, (Binder_t742 *)NULL, L_1, (CultureInfo_t745 *)NULL);
		return L_2;
	}
}
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[])
extern MethodInfo PropertyInfo_SetValue_m8840_MethodInfo;
extern "C" void PropertyInfo_SetValue_m8840 (PropertyInfo_t * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t148* ___index, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = ___value;
		ObjectU5BU5D_t148* L_2 = ___index;
		VirtActionInvoker6< Object_t *, Object_t *, int32_t, Binder_t742 *, ObjectU5BU5D_t148*, CultureInfo_t745 * >::Invoke(&PropertyInfo_SetValue_m11178_MethodInfo, __this, L_0, L_1, 0, (Binder_t742 *)NULL, L_2, (CultureInfo_t745 *)NULL);
		return;
	}
}
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Type[] System.Reflection.PropertyInfo::GetOptionalCustomModifiers()
extern MethodInfo PropertyInfo_GetOptionalCustomModifiers_m8841_MethodInfo;
extern "C" TypeU5BU5D_t670* PropertyInfo_GetOptionalCustomModifiers_m8841 (PropertyInfo_t * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t670* L_0 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
// System.Type[] System.Reflection.PropertyInfo::GetRequiredCustomModifiers()
extern MethodInfo PropertyInfo_GetRequiredCustomModifiers_m8842_MethodInfo;
extern "C" TypeU5BU5D_t670* PropertyInfo_GetRequiredCustomModifiers_m8842 (PropertyInfo_t * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t670* L_0 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
// System.Reflection.ResourceAttributes
#include "mscorlib_System_Reflection_ResourceAttributes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResourceAttributes_t1553_il2cpp_TypeInfo;
// System.Reflection.ResourceAttributes
#include "mscorlib_System_Reflection_ResourceAttributesMethodDeclarations.h"



// System.Reflection.StrongNameKeyPair
#include "mscorlib_System_Reflection_StrongNameKeyPair.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StrongNameKeyPair_t1527_il2cpp_TypeInfo;
// System.Reflection.StrongNameKeyPair
#include "mscorlib_System_Reflection_StrongNameKeyPairMethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
// Mono.Security.StrongName
#include "mscorlib_Mono_Security_StrongName.h"
extern TypeInfo ByteU5BU5D_t952_il2cpp_TypeInfo;
extern TypeInfo Byte_t173_il2cpp_TypeInfo;
extern TypeInfo StrongName_t1387_il2cpp_TypeInfo;
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// Mono.Security.Cryptography.CryptoConvert
#include "mscorlib_Mono_Security_Cryptography_CryptoConvertMethodDeclarations.h"
// Mono.Security.StrongName
#include "mscorlib_Mono_Security_StrongNameMethodDeclarations.h"
extern Il2CppType ByteU5BU5D_t952_0_0_0;
extern MethodInfo SerializationInfo_GetValue_m4781_MethodInfo;
extern MethodInfo SerializationInfo_GetString_m4790_MethodInfo;
extern MethodInfo SerializationInfo_GetBoolean_m4783_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4778_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4793_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4779_MethodInfo;
extern MethodInfo CryptoConvert_FromCapiKeyBlob_m7185_MethodInfo;
extern MethodInfo StrongNameKeyPair_GetRSA_m8846_MethodInfo;
extern MethodInfo StrongName__ctor_m7430_MethodInfo;
extern MethodInfo StrongName__ctor_m7429_MethodInfo;


// System.Void System.Reflection.StrongNameKeyPair::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo StrongNameKeyPair__ctor_m8843_MethodInfo;
extern TypeInfo* ByteU5BU5D_t952_il2cpp_TypeInfo_var;
extern "C" void StrongNameKeyPair__ctor_m8843 (StrongNameKeyPair_t1527 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	static bool StrongNameKeyPair__ctor_m8843_init;
	if (!StrongNameKeyPair__ctor_m8843_init)
	{
		ByteU5BU5D_t952_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t952_0_0_0);
		StrongNameKeyPair__ctor_m8843_init = true;
	}
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		SerializationInfo_t700 * L_0 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t952_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		NullCheck(L_0);
		Object_t * L_2 = SerializationInfo_GetValue_m4781(L_0, (String_t*) &_stringLiteral2002, L_1, /*hidden argument*/&SerializationInfo_GetValue_m4781_MethodInfo);
		__this->____publicKey_0 = ((ByteU5BU5D_t952*)Castclass(L_2, ByteU5BU5D_t952_il2cpp_TypeInfo_var));
		SerializationInfo_t700 * L_3 = ___info;
		NullCheck(L_3);
		String_t* L_4 = SerializationInfo_GetString_m4790(L_3, (String_t*) &_stringLiteral2003, /*hidden argument*/&SerializationInfo_GetString_m4790_MethodInfo);
		__this->____keyPairContainer_1 = L_4;
		SerializationInfo_t700 * L_5 = ___info;
		NullCheck(L_5);
		bool L_6 = SerializationInfo_GetBoolean_m4783(L_5, (String_t*) &_stringLiteral2004, /*hidden argument*/&SerializationInfo_GetBoolean_m4783_MethodInfo);
		__this->____keyPairExported_2 = L_6;
		SerializationInfo_t700 * L_7 = ___info;
		Type_t * L_8 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t952_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		NullCheck(L_7);
		Object_t * L_9 = SerializationInfo_GetValue_m4781(L_7, (String_t*) &_stringLiteral2005, L_8, /*hidden argument*/&SerializationInfo_GetValue_m4781_MethodInfo);
		__this->____keyPairArray_3 = ((ByteU5BU5D_t952*)Castclass(L_9, ByteU5BU5D_t952_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m8844_MethodInfo;
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m8844 (StrongNameKeyPair_t1527 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t700 * L_0 = ___info;
		ByteU5BU5D_t952* L_1 = (__this->____publicKey_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t952_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		NullCheck(L_0);
		SerializationInfo_AddValue_m4778(L_0, (String_t*) &_stringLiteral2002, (Object_t *)(Object_t *)L_1, L_2, /*hidden argument*/&SerializationInfo_AddValue_m4778_MethodInfo);
		SerializationInfo_t700 * L_3 = ___info;
		String_t* L_4 = (__this->____keyPairContainer_1);
		NullCheck(L_3);
		SerializationInfo_AddValue_m4793(L_3, (String_t*) &_stringLiteral2003, L_4, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		SerializationInfo_t700 * L_5 = ___info;
		bool L_6 = (__this->____keyPairExported_2);
		NullCheck(L_5);
		SerializationInfo_AddValue_m4779(L_5, (String_t*) &_stringLiteral2004, L_6, /*hidden argument*/&SerializationInfo_AddValue_m4779_MethodInfo);
		SerializationInfo_t700 * L_7 = ___info;
		ByteU5BU5D_t952* L_8 = (__this->____keyPairArray_3);
		Type_t * L_9 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t952_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		NullCheck(L_7);
		SerializationInfo_AddValue_m4778(L_7, (String_t*) &_stringLiteral2005, (Object_t *)(Object_t *)L_8, L_9, /*hidden argument*/&SerializationInfo_AddValue_m4778_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern MethodInfo StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m8845_MethodInfo;
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m8845 (StrongNameKeyPair_t1527 * __this, Object_t * ___sender, MethodInfo* method)
{
	{
		return;
	}
}
// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::GetRSA()
extern "C" RSA_t954 * StrongNameKeyPair_GetRSA_m8846 (StrongNameKeyPair_t1527 * __this, MethodInfo* method)
{
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RSA_t954 * L_0 = (__this->____rsa_4);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RSA_t954 * L_1 = (__this->____rsa_4);
		return L_1;
	}

IL_000f:
	{
		ByteU5BU5D_t952* L_2 = (__this->____keyPairArray_3);
		if (!L_2)
		{
			goto IL_0034;
		}
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_t952* L_3 = (__this->____keyPairArray_3);
		RSA_t954 * L_4 = CryptoConvert_FromCapiKeyBlob_m7185(NULL /*static, unused*/, L_3, /*hidden argument*/&CryptoConvert_FromCapiKeyBlob_m7185_MethodInfo);
		__this->____rsa_4 = L_4;
		goto IL_0034;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t163 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Object_t_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Object)
		__this->____keyPairArray_3 = (ByteU5BU5D_t952*)NULL;
		goto IL_0034;
	} // end catch (depth: 1)

IL_0034:
	{
		RSA_t954 * L_5 = (__this->____rsa_4);
		return L_5;
	}
}
// Mono.Security.StrongName System.Reflection.StrongNameKeyPair::StrongName()
extern MethodInfo StrongNameKeyPair_StrongName_m8847_MethodInfo;
extern "C" StrongName_t1387 * StrongNameKeyPair_StrongName_m8847 (StrongNameKeyPair_t1527 * __this, MethodInfo* method)
{
	RSA_t954 * V_0 = {0};
	{
		RSA_t954 * L_0 = StrongNameKeyPair_GetRSA_m8846(__this, /*hidden argument*/&StrongNameKeyPair_GetRSA_m8846_MethodInfo);
		V_0 = L_0;
		RSA_t954 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RSA_t954 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StrongName_t1387_il2cpp_TypeInfo));
		StrongName_t1387 * L_3 = (StrongName_t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StrongName_t1387_il2cpp_TypeInfo));
		StrongName__ctor_m7430(L_3, L_2, /*hidden argument*/&StrongName__ctor_m7430_MethodInfo);
		return L_3;
	}

IL_0011:
	{
		ByteU5BU5D_t952* L_4 = (__this->____publicKey_0);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		ByteU5BU5D_t952* L_5 = (__this->____publicKey_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StrongName_t1387_il2cpp_TypeInfo));
		StrongName_t1387 * L_6 = (StrongName_t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StrongName_t1387_il2cpp_TypeInfo));
		StrongName__ctor_m7429(L_6, L_5, /*hidden argument*/&StrongName__ctor_m7429_MethodInfo);
		return L_6;
	}

IL_0025:
	{
		return (StrongName_t1387 *)NULL;
	}
}
// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TargetException_t1554_il2cpp_TypeInfo;
// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetExceptionMethodDeclarations.h"

// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern MethodInfo Locale_GetText_m6903_MethodInfo;
extern MethodInfo Exception__ctor_m3615_MethodInfo;
extern MethodInfo Exception__ctor_m3702_MethodInfo;


// System.Void System.Reflection.TargetException::.ctor()
extern MethodInfo TargetException__ctor_m8848_MethodInfo;
extern "C" void TargetException__ctor_m8848 (TargetException_t1554 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6903(NULL /*static, unused*/, (String_t*) &_stringLiteral2006, /*hidden argument*/&Locale_GetText_m6903_MethodInfo);
		Exception__ctor_m3615(__this, L_0, /*hidden argument*/&Exception__ctor_m3615_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetException::.ctor(System.String)
extern MethodInfo TargetException__ctor_m8849_MethodInfo;
extern "C" void TargetException__ctor_m8849 (TargetException_t1554 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m3615(__this, L_0, /*hidden argument*/&Exception__ctor_m3615_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TargetException__ctor_m8850_MethodInfo;
extern "C" void TargetException__ctor_m8850 (TargetException_t1554 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t700 * L_0 = ___info;
		StreamingContext_t701  L_1 = ___context;
		Exception__ctor_m3702(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m3702_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Exception__ctor_m3701_MethodInfo;


// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m8851 (TargetInvocationException_t1555 * __this, Exception_t163 * ___inner, MethodInfo* method)
{
	{
		Exception_t163 * L_0 = ___inner;
		Exception__ctor_m3701(__this, (String_t*) &_stringLiteral2007, L_0, /*hidden argument*/&Exception__ctor_m3701_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetInvocationException::.ctor(System.String,System.Exception)
extern MethodInfo TargetInvocationException__ctor_m8852_MethodInfo;
extern "C" void TargetInvocationException__ctor_m8852 (TargetInvocationException_t1555 * __this, String_t* ___message, Exception_t163 * ___inner, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t163 * L_1 = ___inner;
		Exception__ctor_m3701(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m3701_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TargetInvocationException__ctor_m8853_MethodInfo;
extern "C" void TargetInvocationException__ctor_m8853 (TargetInvocationException_t1555 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___sc, MethodInfo* method)
{
	{
		SerializationInfo_t700 * L_0 = ___info;
		StreamingContext_t701  L_1 = ___sc;
		Exception__ctor_m3702(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m3702_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.TargetParameterCountException::.ctor()
extern MethodInfo TargetParameterCountException__ctor_m8854_MethodInfo;
extern "C" void TargetParameterCountException__ctor_m8854 (TargetParameterCountException_t1556 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6903(NULL /*static, unused*/, (String_t*) &_stringLiteral2008, /*hidden argument*/&Locale_GetText_m6903_MethodInfo);
		Exception__ctor_m3615(__this, L_0, /*hidden argument*/&Exception__ctor_m3615_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.String)
extern "C" void TargetParameterCountException__ctor_m8855 (TargetParameterCountException_t1556 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m3615(__this, L_0, /*hidden argument*/&Exception__ctor_m3615_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TargetParameterCountException__ctor_m8856_MethodInfo;
extern "C" void TargetParameterCountException__ctor_m8856 (TargetParameterCountException_t1556 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t700 * L_0 = ___info;
		StreamingContext_t701  L_1 = ___context;
		Exception__ctor_m3702(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m3702_MethodInfo);
		return;
	}
}
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeAttributes_t1557_il2cpp_TypeInfo;
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributesMethodDeclarations.h"



// System.Reflection.TypeDelegator
#include "mscorlib_System_Reflection_TypeDelegator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeDelegator_t1558_il2cpp_TypeInfo;
// System.Reflection.TypeDelegator
#include "mscorlib_System_Reflection_TypeDelegatorMethodDeclarations.h"

// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Reflection.Module
#include "mscorlib_System_Reflection_Module.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.EventInfo
#include "mscorlib_System_Reflection_EventInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
extern TypeInfo Assembly_t1082_il2cpp_TypeInfo;
extern TypeInfo Module_t1291_il2cpp_TypeInfo;
extern TypeInfo RuntimeTypeHandle_t1290_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfo_t758_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t743_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfoU5BU5D_t1294_il2cpp_TypeInfo;
extern TypeInfo EventInfo_t_il2cpp_TypeInfo;
extern TypeInfo FieldInfo_t_il2cpp_TypeInfo;
extern TypeInfo FieldInfoU5BU5D_t1292_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t34_il2cpp_TypeInfo;
extern MethodInfo Type_get_Assembly_m4827_MethodInfo;
extern MethodInfo Type_get_AssemblyQualifiedName_m3735_MethodInfo;
extern MethodInfo Type_get_BaseType_m3661_MethodInfo;
extern MethodInfo Type_get_Module_m11122_MethodInfo;
extern MethodInfo Type_get_TypeHandle_m6822_MethodInfo;
extern MethodInfo Type_get_UnderlyingSystemType_m11105_MethodInfo;
extern MethodInfo Type__ctor_m6799_MethodInfo;
extern MethodInfo Type_get_Attributes_m6804_MethodInfo;
extern MethodInfo Type_GetConstructor_m6855_MethodInfo;
extern MethodInfo Type_GetConstructors_m11161_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m11160_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m3662_MethodInfo;
extern MethodInfo Type_GetEvent_m11162_MethodInfo;
extern MethodInfo Type_GetField_m11163_MethodInfo;
extern MethodInfo Type_GetFields_m11164_MethodInfo;
extern MethodInfo Type_GetInterfaces_m11165_MethodInfo;
extern MethodInfo Type_GetMethodImplInternal_m6843_MethodInfo;
extern MethodInfo Type_GetMethods_m11166_MethodInfo;
extern MethodInfo Type_GetPropertyImplInternal_m6849_MethodInfo;
extern MethodInfo Type_InvokeMember_m3669_MethodInfo;
extern MethodInfo Type_get_IsArray_m6808_MethodInfo;
extern MethodInfo MemberInfo_IsDefined_m11096_MethodInfo;
extern MethodInfo Type_get_IsValueType_m6819_MethodInfo;


// System.Void System.Reflection.TypeDelegator::.ctor()
extern MethodInfo TypeDelegator__ctor_m8857_MethodInfo;
extern "C" void TypeDelegator__ctor_m8857 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type__ctor_m6799(__this, /*hidden argument*/&Type__ctor_m6799_MethodInfo);
		return;
	}
}
// System.Reflection.Assembly System.Reflection.TypeDelegator::get_Assembly()
extern MethodInfo TypeDelegator_get_Assembly_m8858_MethodInfo;
extern "C" Assembly_t1082 * TypeDelegator_get_Assembly_m8858 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		Assembly_t1082 * L_1 = (Assembly_t1082 *)VirtFuncInvoker0< Assembly_t1082 * >::Invoke(&Type_get_Assembly_m4827_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.TypeDelegator::get_AssemblyQualifiedName()
extern MethodInfo TypeDelegator_get_AssemblyQualifiedName_m8859_MethodInfo;
extern "C" String_t* TypeDelegator_get_AssemblyQualifiedName_m8859 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3735_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.TypeDelegator::get_BaseType()
extern MethodInfo TypeDelegator_get_BaseType_m8860_MethodInfo;
extern "C" Type_t * TypeDelegator_get_BaseType_m8860 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3661_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.TypeDelegator::get_FullName()
extern MethodInfo TypeDelegator_get_FullName_m8861_MethodInfo;
extern "C" String_t* TypeDelegator_get_FullName_m8861 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3737_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.Module System.Reflection.TypeDelegator::get_Module()
extern MethodInfo TypeDelegator_get_Module_m8862_MethodInfo;
extern "C" Module_t1291 * TypeDelegator_get_Module_m8862 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		Module_t1291 * L_1 = (Module_t1291 *)VirtFuncInvoker0< Module_t1291 * >::Invoke(&Type_get_Module_m11122_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.TypeDelegator::get_Name()
extern MethodInfo TypeDelegator_get_Name_m8863_MethodInfo;
extern "C" String_t* TypeDelegator_get_Name_m8863 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3679_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.TypeDelegator::get_Namespace()
extern MethodInfo TypeDelegator_get_Namespace_m8864_MethodInfo;
extern "C" String_t* TypeDelegator_get_Namespace_m8864 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m3693_MethodInfo, L_0);
		return L_1;
	}
}
// System.RuntimeTypeHandle System.Reflection.TypeDelegator::get_TypeHandle()
extern MethodInfo TypeDelegator_get_TypeHandle_m8865_MethodInfo;
extern "C" RuntimeTypeHandle_t1290  TypeDelegator_get_TypeHandle_m8865 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		RuntimeTypeHandle_t1290  L_1 = (RuntimeTypeHandle_t1290 )VirtFuncInvoker0< RuntimeTypeHandle_t1290  >::Invoke(&Type_get_TypeHandle_m6822_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.TypeDelegator::get_UnderlyingSystemType()
extern MethodInfo TypeDelegator_get_UnderlyingSystemType_m8866_MethodInfo;
extern "C" Type_t * TypeDelegator_get_UnderlyingSystemType_m8866 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_UnderlyingSystemType_m11105_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.TypeAttributes System.Reflection.TypeDelegator::GetAttributeFlagsImpl()
extern MethodInfo TypeDelegator_GetAttributeFlagsImpl_m8867_MethodInfo;
extern "C" int32_t TypeDelegator_GetAttributeFlagsImpl_m8867 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Type_get_Attributes_m6804_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.ConstructorInfo System.Reflection.TypeDelegator::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo TypeDelegator_GetConstructorImpl_m8868_MethodInfo;
extern "C" ConstructorInfo_t758 * TypeDelegator_GetConstructorImpl_m8868 (TypeDelegator_t1558 * __this, int32_t ___bindingAttr, Binder_t742 * ___binder, int32_t ___callConvention, TypeU5BU5D_t670* ___types, ParameterModifierU5BU5D_t743* ___modifiers, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		int32_t L_1 = ___bindingAttr;
		Binder_t742 * L_2 = ___binder;
		int32_t L_3 = ___callConvention;
		TypeU5BU5D_t670* L_4 = ___types;
		ParameterModifierU5BU5D_t743* L_5 = ___modifiers;
		NullCheck(L_0);
		ConstructorInfo_t758 * L_6 = (ConstructorInfo_t758 *)VirtFuncInvoker5< ConstructorInfo_t758 *, int32_t, Binder_t742 *, int32_t, TypeU5BU5D_t670*, ParameterModifierU5BU5D_t743* >::Invoke(&Type_GetConstructor_m6855_MethodInfo, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.TypeDelegator::GetConstructors(System.Reflection.BindingFlags)
extern MethodInfo TypeDelegator_GetConstructors_m8869_MethodInfo;
extern "C" ConstructorInfoU5BU5D_t1294* TypeDelegator_GetConstructors_m8869 (TypeDelegator_t1558 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t1294* L_2 = (ConstructorInfoU5BU5D_t1294*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t1294*, int32_t >::Invoke(&Type_GetConstructors_m11161_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Boolean)
extern MethodInfo TypeDelegator_GetCustomAttributes_m8870_MethodInfo;
extern "C" ObjectU5BU5D_t148* TypeDelegator_GetCustomAttributes_m8870 (TypeDelegator_t1558 * __this, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		bool L_1 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)VirtFuncInvoker1< ObjectU5BU5D_t148*, bool >::Invoke(&MemberInfo_GetCustomAttributes_m11160_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo TypeDelegator_GetCustomAttributes_m8871_MethodInfo;
extern "C" ObjectU5BU5D_t148* TypeDelegator_GetCustomAttributes_m8871 (TypeDelegator_t1558 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t148* L_3 = (ObjectU5BU5D_t148*)VirtFuncInvoker2< ObjectU5BU5D_t148*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m3662_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Type System.Reflection.TypeDelegator::GetElementType()
extern MethodInfo TypeDelegator_GetElementType_m8872_MethodInfo;
extern "C" Type_t * TypeDelegator_GetElementType_m8872 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m11106_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.EventInfo System.Reflection.TypeDelegator::GetEvent(System.String,System.Reflection.BindingFlags)
extern MethodInfo TypeDelegator_GetEvent_m8873_MethodInfo;
extern "C" EventInfo_t * TypeDelegator_GetEvent_m8873 (TypeDelegator_t1558 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		EventInfo_t * L_3 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(&Type_GetEvent_m11162_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo System.Reflection.TypeDelegator::GetField(System.String,System.Reflection.BindingFlags)
extern MethodInfo TypeDelegator_GetField_m8874_MethodInfo;
extern "C" FieldInfo_t * TypeDelegator_GetField_m8874 (TypeDelegator_t1558 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		FieldInfo_t * L_3 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(&Type_GetField_m11163_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo[] System.Reflection.TypeDelegator::GetFields(System.Reflection.BindingFlags)
extern MethodInfo TypeDelegator_GetFields_m8875_MethodInfo;
extern "C" FieldInfoU5BU5D_t1292* TypeDelegator_GetFields_m8875 (TypeDelegator_t1558 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		FieldInfoU5BU5D_t1292* L_2 = (FieldInfoU5BU5D_t1292*)VirtFuncInvoker1< FieldInfoU5BU5D_t1292*, int32_t >::Invoke(&Type_GetFields_m11164_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Type[] System.Reflection.TypeDelegator::GetInterfaces()
extern MethodInfo TypeDelegator_GetInterfaces_m8876_MethodInfo;
extern "C" TypeU5BU5D_t670* TypeDelegator_GetInterfaces_m8876 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		TypeU5BU5D_t670* L_1 = (TypeU5BU5D_t670*)VirtFuncInvoker0< TypeU5BU5D_t670* >::Invoke(&Type_GetInterfaces_m11165_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.TypeDelegator::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo TypeDelegator_GetMethodImpl_m8877_MethodInfo;
extern "C" MethodInfo_t * TypeDelegator_GetMethodImpl_m8877 (TypeDelegator_t1558 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t742 * ___binder, int32_t ___callConvention, TypeU5BU5D_t670* ___types, ParameterModifierU5BU5D_t743* ___modifiers, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		Binder_t742 * L_3 = ___binder;
		int32_t L_4 = ___callConvention;
		TypeU5BU5D_t670* L_5 = ___types;
		ParameterModifierU5BU5D_t743* L_6 = ___modifiers;
		NullCheck(L_0);
		MethodInfo_t * L_7 = Type_GetMethodImplInternal_m6843(L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/&Type_GetMethodImplInternal_m6843_MethodInfo);
		return L_7;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.TypeDelegator::GetMethods(System.Reflection.BindingFlags)
extern MethodInfo TypeDelegator_GetMethods_m8878_MethodInfo;
extern "C" MethodInfoU5BU5D_t1293* TypeDelegator_GetMethods_m8878 (TypeDelegator_t1558 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		MethodInfoU5BU5D_t1293* L_2 = (MethodInfoU5BU5D_t1293*)VirtFuncInvoker1< MethodInfoU5BU5D_t1293*, int32_t >::Invoke(&Type_GetMethods_m11166_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.PropertyInfo System.Reflection.TypeDelegator::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo TypeDelegator_GetPropertyImpl_m8879_MethodInfo;
extern "C" PropertyInfo_t * TypeDelegator_GetPropertyImpl_m8879 (TypeDelegator_t1558 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t742 * ___binder, Type_t * ___returnType, TypeU5BU5D_t670* ___types, ParameterModifierU5BU5D_t743* ___modifiers, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		Binder_t742 * L_3 = ___binder;
		Type_t * L_4 = ___returnType;
		TypeU5BU5D_t670* L_5 = ___types;
		ParameterModifierU5BU5D_t743* L_6 = ___modifiers;
		NullCheck(L_0);
		PropertyInfo_t * L_7 = Type_GetPropertyImplInternal_m6849(L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/&Type_GetPropertyImplInternal_m6849_MethodInfo);
		return L_7;
	}
}
// System.Boolean System.Reflection.TypeDelegator::HasElementTypeImpl()
extern MethodInfo TypeDelegator_HasElementTypeImpl_m8880_MethodInfo;
extern "C" bool TypeDelegator_HasElementTypeImpl_m8880 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m6806_MethodInfo, L_0);
		return L_1;
	}
}
// System.Object System.Reflection.TypeDelegator::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern MethodInfo TypeDelegator_InvokeMember_m8881_MethodInfo;
extern "C" Object_t * TypeDelegator_InvokeMember_m8881 (TypeDelegator_t1558 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t742 * ___binder, Object_t * ___target, ObjectU5BU5D_t148* ___args, ParameterModifierU5BU5D_t743* ___modifiers, CultureInfo_t745 * ___culture, StringU5BU5D_t34* ___namedParameters, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___invokeAttr;
		Binder_t742 * L_3 = ___binder;
		Object_t * L_4 = ___target;
		ObjectU5BU5D_t148* L_5 = ___args;
		ParameterModifierU5BU5D_t743* L_6 = ___modifiers;
		CultureInfo_t745 * L_7 = ___culture;
		StringU5BU5D_t34* L_8 = ___namedParameters;
		NullCheck(L_0);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t742 *, Object_t *, ObjectU5BU5D_t148*, ParameterModifierU5BU5D_t743*, CultureInfo_t745 *, StringU5BU5D_t34* >::Invoke(&Type_InvokeMember_m3669_MethodInfo, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Boolean System.Reflection.TypeDelegator::IsArrayImpl()
extern MethodInfo TypeDelegator_IsArrayImpl_m8882_MethodInfo;
extern "C" bool TypeDelegator_IsArrayImpl_m8882 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m6808_MethodInfo, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.TypeDelegator::IsByRefImpl()
extern MethodInfo TypeDelegator_IsByRefImpl_m8883_MethodInfo;
extern "C" bool TypeDelegator_IsByRefImpl_m8883 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6809_MethodInfo, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.TypeDelegator::IsDefined(System.Type,System.Boolean)
extern MethodInfo TypeDelegator_IsDefined_m8884_MethodInfo;
extern "C" bool TypeDelegator_IsDefined_m8884 (TypeDelegator_t1558 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(&MemberInfo_IsDefined_m11096_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean System.Reflection.TypeDelegator::IsPointerImpl()
extern MethodInfo TypeDelegator_IsPointerImpl_m8885_MethodInfo;
extern "C" bool TypeDelegator_IsPointerImpl_m8885 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPointer_m6816_MethodInfo, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.TypeDelegator::IsPrimitiveImpl()
extern MethodInfo TypeDelegator_IsPrimitiveImpl_m8886_MethodInfo;
extern "C" bool TypeDelegator_IsPrimitiveImpl_m8886 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m3739_MethodInfo, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.TypeDelegator::IsValueTypeImpl()
extern MethodInfo TypeDelegator_IsValueTypeImpl_m8887_MethodInfo;
extern "C" bool TypeDelegator_IsValueTypeImpl_m8887 (TypeDelegator_t1558 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m6819_MethodInfo, L_0);
		return L_1;
	}
}
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NeutralResourcesLanguageAttribute_t883_il2cpp_TypeInfo;
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3652_MethodInfo;


// System.Void System.Resources.NeutralResourcesLanguageAttribute::.ctor(System.String)
extern MethodInfo NeutralResourcesLanguageAttribute__ctor_m3873_MethodInfo;
extern "C" void NeutralResourcesLanguageAttribute__ctor_m3873 (NeutralResourcesLanguageAttribute_t883 * __this, String_t* ___cultureName, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		String_t* L_0 = ___cultureName;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t753 * L_1 = (ArgumentNullException_t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t753_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3705(L_1, (String_t*) &_stringLiteral2009, /*hidden argument*/&ArgumentNullException__ctor_m3705_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		String_t* L_2 = ___cultureName;
		__this->___culture_0 = L_2;
		return;
	}
}
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SatelliteContractVersionAttribute_t881_il2cpp_TypeInfo;
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttributeMethodDeclarations.h"

// System.Version
#include "mscorlib_System_Version.h"
extern TypeInfo Version_t931_il2cpp_TypeInfo;
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
extern MethodInfo Version__ctor_m11018_MethodInfo;


// System.Void System.Resources.SatelliteContractVersionAttribute::.ctor(System.String)
extern MethodInfo SatelliteContractVersionAttribute__ctor_m3871_MethodInfo;
extern "C" void SatelliteContractVersionAttribute__ctor_m3871 (SatelliteContractVersionAttribute_t881 * __this, String_t* ___version, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		String_t* L_0 = ___version;
		Version_t931 * L_1 = (Version_t931 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Version_t931_il2cpp_TypeInfo));
		Version__ctor_m11018(L_1, L_0, /*hidden argument*/&Version__ctor_m11018_MethodInfo);
		__this->___ver_0 = L_1;
		return;
	}
}
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CompilationRelaxations_t1559_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0MethodDeclarations.h"



// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CompilationRelaxationsAttribute_t886_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Runtime.CompilerServices.CompilationRelaxations)
extern MethodInfo CompilationRelaxationsAttribute__ctor_m3876_MethodInfo;
extern "C" void CompilationRelaxationsAttribute__ctor_m3876 (CompilationRelaxationsAttribute_t886 * __this, int32_t ___relaxations, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		int32_t L_0 = ___relaxations;
		__this->___relax_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultDependencyAttribute_t1560_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAtMethodDeclarations.h"

// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"


// System.Void System.Runtime.CompilerServices.DefaultDependencyAttribute::.ctor(System.Runtime.CompilerServices.LoadHint)
extern MethodInfo DefaultDependencyAttribute__ctor_m8888_MethodInfo;
extern "C" void DefaultDependencyAttribute__ctor_m8888 (DefaultDependencyAttribute_t1560 * __this, int32_t ___loadHintArgument, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		int32_t L_0 = ___loadHintArgument;
		__this->___hint_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatile.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IsVolatile_t1561_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatileMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo LoadHint_t1562_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHintMethodDeclarations.h"



// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttri.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StringFreezingAttribute_t1563_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttriMethodDeclarations.h"



// System.Void System.Runtime.CompilerServices.StringFreezingAttribute::.ctor()
extern MethodInfo StringFreezingAttribute__ctor_m8889_MethodInfo;
extern "C" void StringFreezingAttribute__ctor_m8889 (StringFreezingAttribute_t1563 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		return;
	}
}
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Cer_t1564_il2cpp_TypeInfo;
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_CerMethodDeclarations.h"



// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Consistency_t1565_il2cpp_TypeInfo;
// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_ConsistencyMethodDeclarations.h"



// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CriticalFinalizerObject_t1566_il2cpp_TypeInfo;
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"

extern MethodInfo Object_Finalize_m138_MethodInfo;


// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::.ctor()
extern MethodInfo CriticalFinalizerObject__ctor_m8890_MethodInfo;
extern "C" void CriticalFinalizerObject__ctor_m8890 (CriticalFinalizerObject_t1566 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::Finalize()
extern MethodInfo CriticalFinalizerObject_Finalize_m8891_MethodInfo;
extern "C" void CriticalFinalizerObject_Finalize_m8891 (CriticalFinalizerObject_t1566 * __this, MethodInfo* method)
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
		IL2CPP_LEAVE(0x9, FINALLY_0002);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0002;
	}

FINALLY_0002:
	{ // begin finally (depth: 1)
		Object_Finalize_m138(__this, /*hidden argument*/&Object_Finalize_m138_MethodInfo);
		IL2CPP_END_FINALLY(2)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(2)
	{
		IL2CPP_JUMP_TBL(0x9, IL_0009)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0009:
	{
		return;
	}
}
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityCont.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReliabilityContractAttribute_t1567_il2cpp_TypeInfo;
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityContMethodDeclarations.h"



// System.Void System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::.ctor(System.Runtime.ConstrainedExecution.Consistency,System.Runtime.ConstrainedExecution.Cer)
extern MethodInfo ReliabilityContractAttribute__ctor_m8892_MethodInfo;
extern "C" void ReliabilityContractAttribute__ctor_m8892 (ReliabilityContractAttribute_t1567 * __this, int32_t ___consistencyGuarantee, int32_t ___cer, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		int32_t L_0 = ___consistencyGuarantee;
		__this->___consistency_0 = L_0;
		int32_t L_1 = ___cer;
		__this->___cer_1 = L_1;
		return;
	}
}
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArguments.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ActivationArguments_t1568_il2cpp_TypeInfo;
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArgumentsMethodDeclarations.h"



// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConvention.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CallingConvention_t1569_il2cpp_TypeInfo;
// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConventionMethodDeclarations.h"



// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSet.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CharSet_t1570_il2cpp_TypeInfo;
// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSetMethodDeclarations.h"



// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttrib.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ClassInterfaceAttribute_t1571_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttribMethodDeclarations.h"

// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceType.h"


// System.Void System.Runtime.InteropServices.ClassInterfaceAttribute::.ctor(System.Runtime.InteropServices.ClassInterfaceType)
extern MethodInfo ClassInterfaceAttribute__ctor_m8893_MethodInfo;
extern "C" void ClassInterfaceAttribute__ctor_m8893 (ClassInterfaceAttribute_t1571 * __this, int32_t ___classInterfaceType, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		int32_t L_0 = ___classInterfaceType;
		__this->___ciType_0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ClassInterfaceType_t1572_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceTypeMethodDeclarations.h"



// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceA.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ComDefaultInterfaceAttribute_t1573_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceAMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.ComDefaultInterfaceAttribute::.ctor(System.Type)
extern MethodInfo ComDefaultInterfaceAttribute__ctor_m8894_MethodInfo;
extern "C" void ComDefaultInterfaceAttribute__ctor_m8894 (ComDefaultInterfaceAttribute_t1573 * __this, Type_t * ___defaultInterface, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		Type_t * L_0 = ___defaultInterface;
		__this->____type_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ComInterfaceType_t1574_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceTypeMethodDeclarations.h"



// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DispIdAttribute_t1575_il2cpp_TypeInfo;
// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttributeMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.DispIdAttribute::.ctor(System.Int32)
extern MethodInfo DispIdAttribute__ctor_m8895_MethodInfo;
extern "C" void DispIdAttribute__ctor_m8895 (DispIdAttribute_t1575 * __this, int32_t ___dispId, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		int32_t L_0 = ___dispId;
		__this->___id_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GCHandle_t1576_il2cpp_TypeInfo;
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandleMethodDeclarations.h"

// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern MethodInfo GCHandle_get_IsAllocated_m8897_MethodInfo;
extern MethodInfo GCHandle_GetTarget_m8901_MethodInfo;
extern MethodInfo GCHandle_GetTargetHandle_m8902_MethodInfo;
extern MethodInfo GCHandle__ctor_m8896_MethodInfo;
extern MethodInfo GCHandle_FreeHandle_m8903_MethodInfo;
extern MethodInfo Int32_GetHashCode_m3612_MethodInfo;


// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" void GCHandle__ctor_m8896 (GCHandle_t1576 * __this, Object_t * ___value, int32_t ___type, MethodInfo* method)
{
	{
		int32_t L_0 = ___type;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___type;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_000d;
		}
	}

IL_0008:
	{
		___type = 2;
	}

IL_000d:
	{
		Object_t * L_2 = ___value;
		int32_t L_3 = ___type;
		int32_t L_4 = GCHandle_GetTargetHandle_m8902(NULL /*static, unused*/, L_2, 0, L_3, /*hidden argument*/&GCHandle_GetTargetHandle_m8902_MethodInfo);
		__this->___handle_0 = L_4;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" bool GCHandle_get_IsAllocated_m8897 (GCHandle_t1576 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern MethodInfo GCHandle_get_Target_m8898_MethodInfo;
extern "C" Object_t * GCHandle_get_Target_m8898 (GCHandle_t1576 * __this, MethodInfo* method)
{
	{
		bool L_0 = GCHandle_get_IsAllocated_m8897(__this, /*hidden argument*/&GCHandle_get_IsAllocated_m8897_MethodInfo);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m6903(NULL /*static, unused*/, (String_t*) &_stringLiteral2010, /*hidden argument*/&Locale_GetText_m6903_MethodInfo);
		InvalidOperationException_t1076 * L_2 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4760(L_2, L_1, /*hidden argument*/&InvalidOperationException__ctor_m4760_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = (__this->___handle_0);
		Object_t * L_4 = GCHandle_GetTarget_m8901(NULL /*static, unused*/, L_3, /*hidden argument*/&GCHandle_GetTarget_m8901_MethodInfo);
		return L_4;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern MethodInfo GCHandle_Alloc_m8899_MethodInfo;
extern "C" GCHandle_t1576  GCHandle_Alloc_m8899 (Object_t * __this /* static, unused */, Object_t * ___value, int32_t ___type, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		int32_t L_1 = ___type;
		GCHandle_t1576  L_2 = {0};
		GCHandle__ctor_m8896(&L_2, L_0, L_1, /*hidden argument*/&GCHandle__ctor_m8896_MethodInfo);
		return L_2;
	}
}
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern MethodInfo GCHandle_Free_m8900_MethodInfo;
extern "C" void GCHandle_Free_m8900 (GCHandle_t1576 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		GCHandle_FreeHandle_m8903(NULL /*static, unused*/, L_0, /*hidden argument*/&GCHandle_FreeHandle_m8903_MethodInfo);
		__this->___handle_0 = 0;
		return;
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
extern "C" Object_t * GCHandle_GetTarget_m8901 (Object_t * __this /* static, unused */, int32_t ___handle, MethodInfo* method)
{
	typedef Object_t * (*GCHandle_GetTarget_m8901_ftn) (int32_t);
	static GCHandle_GetTarget_m8901_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_GetTarget_m8901_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)");
	return _il2cpp_icall_func(___handle);
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
extern "C" int32_t GCHandle_GetTargetHandle_m8902 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___handle, int32_t ___type, MethodInfo* method)
{
	typedef int32_t (*GCHandle_GetTargetHandle_m8902_ftn) (Object_t *, int32_t, int32_t);
	static GCHandle_GetTargetHandle_m8902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_GetTargetHandle_m8902_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)");
	return _il2cpp_icall_func(___obj, ___handle, ___type);
}
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
extern "C" void GCHandle_FreeHandle_m8903 (Object_t * __this /* static, unused */, int32_t ___handle, MethodInfo* method)
{
	typedef void (*GCHandle_FreeHandle_m8903_ftn) (int32_t);
	static GCHandle_FreeHandle_m8903_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_FreeHandle_m8903_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)");
	_il2cpp_icall_func(___handle);
}
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
extern MethodInfo GCHandle_Equals_m8904_MethodInfo;
extern "C" bool GCHandle_Equals_m8904 (GCHandle_t1576 * __this, Object_t * ___o, MethodInfo* method)
{
	GCHandle_t1576  V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___o;
		if (((Object_t *)IsInst(L_1, InitializedTypeInfo(&GCHandle_t1576_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_2 = (__this->___handle_0);
		Object_t * L_3 = ___o;
		V_0 = ((*(GCHandle_t1576 *)((GCHandle_t1576 *)UnBox (L_3, InitializedTypeInfo(&GCHandle_t1576_il2cpp_TypeInfo)))));
		int32_t L_4 = ((&V_0)->___handle_0);
		return ((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
extern MethodInfo GCHandle_GetHashCode_m8905_MethodInfo;
extern "C" int32_t GCHandle_GetHashCode_m8905 (GCHandle_t1576 * __this, MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->___handle_0);
		int32_t L_1 = Int32_GetHashCode_m3612(L_0, /*hidden argument*/&Int32_GetHashCode_m3612_MethodInfo);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GCHandleType_t1577_il2cpp_TypeInfo;
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleTypeMethodDeclarations.h"



// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribu.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InterfaceTypeAttribute_t1578_il2cpp_TypeInfo;
// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribuMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.InterfaceTypeAttribute::.ctor(System.Runtime.InteropServices.ComInterfaceType)
extern MethodInfo InterfaceTypeAttribute__ctor_m8906_MethodInfo;
extern "C" void InterfaceTypeAttribute__ctor_m8906 (InterfaceTypeAttribute_t1578 * __this, int32_t ___interfaceType, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		int32_t L_0 = ___interfaceType;
		__this->___intType_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_Marshal.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Marshal_t1579_il2cpp_TypeInfo;
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"

// System.OperatingSystem
#include "mscorlib_System_OperatingSystem.h"
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystemMethodDeclarations.h"
extern MethodInfo Environment_get_OSVersion_m10656_MethodInfo;
extern MethodInfo OperatingSystem_get_Platform_m10912_MethodInfo;
extern MethodInfo Marshal_copy_from_unmanaged_m8908_MethodInfo;


// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern MethodInfo Marshal__cctor_m8907_MethodInfo;
extern "C" void Marshal__cctor_m8907 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		((Marshal_t1579_StaticFields*)InitializedTypeInfo(&Marshal_t1579_il2cpp_TypeInfo)->static_fields)->___SystemMaxDBCSCharSize_0 = 2;
		OperatingSystem_t1860 * L_0 = Environment_get_OSVersion_m10656(NULL /*static, unused*/, /*hidden argument*/&Environment_get_OSVersion_m10656_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = OperatingSystem_get_Platform_m10912(L_0, /*hidden argument*/&OperatingSystem_get_Platform_m10912_MethodInfo);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		((Marshal_t1579_StaticFields*)InitializedTypeInfo(&Marshal_t1579_il2cpp_TypeInfo)->static_fields)->___SystemDefaultCharSize_1 = G_B3_0;
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C" void Marshal_copy_from_unmanaged_m8908 (Object_t * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, MethodInfo* method)
{
	typedef void (*Marshal_copy_from_unmanaged_m8908_ftn) (IntPtr_t, int32_t, Array_t *, int32_t);
	static Marshal_copy_from_unmanaged_m8908_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Marshal_copy_from_unmanaged_m8908_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)");
	_il2cpp_icall_func(___source, ___startIndex, ___destination, ___length);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern MethodInfo Marshal_Copy_m8909_MethodInfo;
extern "C" void Marshal_Copy_m8909 (Object_t * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t952* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		ByteU5BU5D_t952* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Marshal_t1579_il2cpp_TypeInfo));
		Marshal_copy_from_unmanaged_m8908(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/&Marshal_copy_from_unmanaged_m8908_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern MethodInfo Marshal_Copy_m8910_MethodInfo;
extern "C" void Marshal_Copy_m8910 (Object_t * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t318* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		CharU5BU5D_t318* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Marshal_t1579_il2cpp_TypeInfo));
		Marshal_copy_from_unmanaged_m8908(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/&Marshal_copy_from_unmanaged_m8908_MethodInfo);
		return;
	}
}
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExce.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MarshalDirectiveException_t1580_il2cpp_TypeInfo;
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExceMethodDeclarations.h"

// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
extern MethodInfo SystemException__ctor_m4962_MethodInfo;
extern MethodInfo Exception_set_HResult_m3700_MethodInfo;
extern MethodInfo SystemException__ctor_m10943_MethodInfo;


// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor()
extern MethodInfo MarshalDirectiveException__ctor_m8911_MethodInfo;
extern "C" void MarshalDirectiveException__ctor_m8911 (MarshalDirectiveException_t1580 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6903(NULL /*static, unused*/, (String_t*) &_stringLiteral2011, /*hidden argument*/&Locale_GetText_m6903_MethodInfo);
		SystemException__ctor_m4962(__this, L_0, /*hidden argument*/&SystemException__ctor_m4962_MethodInfo);
		Exception_set_HResult_m3700(__this, ((int32_t)-2146233035), /*hidden argument*/&Exception_set_HResult_m3700_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MarshalDirectiveException__ctor_m8912_MethodInfo;
extern "C" void MarshalDirectiveException__ctor_m8912 (MarshalDirectiveException_t1580 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t700 * L_0 = ___info;
		StreamingContext_t701  L_1 = ___context;
		SystemException__ctor_m10943(__this, L_0, L_1, /*hidden argument*/&SystemException__ctor_m10943_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.InteropServices.PreserveSigAttribute::.ctor()
extern "C" void PreserveSigAttribute__ctor_m8913 (PreserveSigAttribute_t1581 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		return;
	}
}
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SafeHandle_t1315_il2cpp_TypeInfo;
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandleMethodDeclarations.h"

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo ObjectDisposedException_t1256_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
extern MethodInfo ObjectDisposedException__ctor_m5945_MethodInfo;
extern MethodInfo Interlocked_CompareExchange_m10145_MethodInfo;
extern MethodInfo SafeHandle_get_IsInvalid_m11179_MethodInfo;
extern MethodInfo SafeHandle_ReleaseHandle_m11180_MethodInfo;
extern MethodInfo SafeHandle_Dispose_m8920_MethodInfo;
extern MethodInfo GC_SuppressFinalize_m5929_MethodInfo;
extern MethodInfo SafeHandle_Close_m8915_MethodInfo;


// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
extern MethodInfo SafeHandle__ctor_m8914_MethodInfo;
extern "C" void SafeHandle__ctor_m8914 (SafeHandle_t1315 * __this, IntPtr_t ___invalidHandleValue, bool ___ownsHandle, MethodInfo* method)
{
	{
		CriticalFinalizerObject__ctor_m8890(__this, /*hidden argument*/&CriticalFinalizerObject__ctor_m8890_MethodInfo);
		IntPtr_t L_0 = ___invalidHandleValue;
		__this->___invalid_handle_value_1 = L_0;
		bool L_1 = ___ownsHandle;
		__this->___owns_handle_3 = L_1;
		__this->___refcount_2 = 1;
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
extern "C" void SafeHandle_Close_m8915 (SafeHandle_t1315 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1959(__this, /*hidden argument*/&Object_GetType_m1959_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3737_MethodInfo, L_1);
		ObjectDisposedException_t1256 * L_3 = (ObjectDisposedException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1256_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5945(L_3, L_2, /*hidden argument*/&ObjectDisposedException__ctor_m5945_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0019:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m10145(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/&Interlocked_CompareExchange_m10145_MethodInfo);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&SafeHandle_get_IsInvalid_m11179_MethodInfo, __this);
		if (L_13)
		{
			goto IL_0061;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&SafeHandle_ReleaseHandle_m11180_MethodInfo, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
		__this->___refcount_2 = (-1);
	}

IL_0061:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern MethodInfo SafeHandle_DangerousAddRef_m8916_MethodInfo;
extern "C" void SafeHandle_DangerousAddRef_m8916 (SafeHandle_t1315 * __this, bool* ___success, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1959(__this, /*hidden argument*/&Object_GetType_m1959_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3737_MethodInfo, L_1);
		ObjectDisposedException_t1256 * L_3 = (ObjectDisposedException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1256_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5945(L_3, L_2, /*hidden argument*/&ObjectDisposedException__ctor_m5945_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		Type_t * L_7 = Object_GetType_m1959(__this, /*hidden argument*/&Object_GetType_m1959_MethodInfo);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3737_MethodInfo, L_7);
		ObjectDisposedException_t1256 * L_9 = (ObjectDisposedException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1256_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5945(L_9, L_8, /*hidden argument*/&ObjectDisposedException__ctor_m5945_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003a:
	{
		int32_t* L_10 = &(__this->___refcount_2);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = Interlocked_CompareExchange_m10145(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/&Interlocked_CompareExchange_m10145_MethodInfo);
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_001a;
		}
	}
	{
		bool* L_15 = ___success;
		*((int8_t*)(L_15)) = (int8_t)1;
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
extern MethodInfo SafeHandle_DangerousGetHandle_m8917_MethodInfo;
extern "C" IntPtr_t SafeHandle_DangerousGetHandle_m8917 (SafeHandle_t1315 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1959(__this, /*hidden argument*/&Object_GetType_m1959_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3737_MethodInfo, L_1);
		ObjectDisposedException_t1256 * L_3 = (ObjectDisposedException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1256_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5945(L_3, L_2, /*hidden argument*/&ObjectDisposedException__ctor_m5945_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		IntPtr_t L_4 = (__this->___handle_0);
		return L_4;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern MethodInfo SafeHandle_DangerousRelease_m8918_MethodInfo;
extern "C" void SafeHandle_DangerousRelease_m8918 (SafeHandle_t1315 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1959(__this, /*hidden argument*/&Object_GetType_m1959_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3737_MethodInfo, L_1);
		ObjectDisposedException_t1256 * L_3 = (ObjectDisposedException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1256_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5945(L_3, L_2, /*hidden argument*/&ObjectDisposedException__ctor_m5945_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m10145(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/&Interlocked_CompareExchange_m10145_MethodInfo);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&SafeHandle_get_IsInvalid_m11179_MethodInfo, __this);
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&SafeHandle_ReleaseHandle_m11180_MethodInfo, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
	}

IL_005b:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
extern MethodInfo SafeHandle_Dispose_m8919_MethodInfo;
extern "C" void SafeHandle_Dispose_m8919 (SafeHandle_t1315 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&SafeHandle_Dispose_m8920_MethodInfo, __this, 1);
		GC_SuppressFinalize_m5929(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m5929_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
extern "C" void SafeHandle_Dispose_m8920 (SafeHandle_t1315 * __this, bool ___disposing, MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		SafeHandle_Close_m8915(__this, /*hidden argument*/&SafeHandle_Close_m8915_MethodInfo);
		goto IL_000b;
	}

IL_000b:
	{
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle()
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern MethodInfo SafeHandle_SetHandle_m8921_MethodInfo;
extern "C" void SafeHandle_SetHandle_m8921 (SafeHandle_t1315 * __this, IntPtr_t ___handle, MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___handle;
		__this->___handle_0 = L_0;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid()
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern MethodInfo SafeHandle_Finalize_m8922_MethodInfo;
extern "C" void SafeHandle_Finalize_m8922 (SafeHandle_t1315 * __this, MethodInfo* method)
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
			bool L_0 = (__this->___owns_handle_3);
			if (!L_0)
			{
				goto IL_0023;
			}
		}

IL_0008:
		{
			bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&SafeHandle_get_IsInvalid_m11179_MethodInfo, __this);
			if (L_1)
			{
				goto IL_0023;
			}
		}

IL_0010:
		{
			VirtFuncInvoker0< bool >::Invoke(&SafeHandle_ReleaseHandle_m11180_MethodInfo, __this);
			IntPtr_t L_2 = (__this->___invalid_handle_value_1);
			__this->___handle_0 = L_2;
		}

IL_0023:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0025);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		CriticalFinalizerObject_Finalize_m8891(__this, /*hidden argument*/&CriticalFinalizerObject_Finalize_m8891_MethodInfo);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeLibImportClassAttribute_t1582_il2cpp_TypeInfo;
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAtMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.TypeLibImportClassAttribute::.ctor(System.Type)
extern MethodInfo TypeLibImportClassAttribute__ctor_m8923_MethodInfo;
extern "C" void TypeLibImportClassAttribute__ctor_m8923 (TypeLibImportClassAttribute_t1582 * __this, Type_t * ___importClass, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		Type_t * L_0 = ___importClass;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6856_MethodInfo, L_0);
		__this->____importClass_0 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttrib.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeLibVersionAttribute_t1583_il2cpp_TypeInfo;
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttribMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.TypeLibVersionAttribute::.ctor(System.Int32,System.Int32)
extern MethodInfo TypeLibVersionAttribute__ctor_m8924_MethodInfo;
extern "C" void TypeLibVersionAttribute__ctor_m8924 (TypeLibVersionAttribute_t1583 * __this, int32_t ___major, int32_t ___minor, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		int32_t L_0 = ___major;
		__this->___major_0 = L_0;
		int32_t L_1 = ___minor;
		__this->___minor_1 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnmanagedType_t1584_il2cpp_TypeInfo;
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedTypeMethodDeclarations.h"



// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServic.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ActivationServices_t1586_il2cpp_TypeInfo;
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeve.h"
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntry.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingException.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttribute.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCall.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAc.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActi.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServices.h"
extern TypeInfo ConstructionLevelActivator_t1589_il2cpp_TypeInfo;
extern TypeInfo IContextAttribute_t1930_il2cpp_TypeInfo;
extern TypeInfo RemotingException_t1660_il2cpp_TypeInfo;
extern TypeInfo UrlAttribute_t1592_il2cpp_TypeInfo;
extern TypeInfo RemotingConfiguration_t1659_il2cpp_TypeInfo;
extern TypeInfo RemotingServices_t1661_il2cpp_TypeInfo;
extern TypeInfo ConstructionCall_t1587_il2cpp_TypeInfo;
extern TypeInfo AppDomainLevelActivator_t1588_il2cpp_TypeInfo;
extern TypeInfo IActivator_t1585_il2cpp_TypeInfo;
extern TypeInfo ContextLevelActivator_t1590_il2cpp_TypeInfo;
extern TypeInfo ArrayList_t906_il2cpp_TypeInfo;
extern TypeInfo ICollection_t846_il2cpp_TypeInfo;
extern TypeInfo ChannelServices_t1598_il2cpp_TypeInfo;
extern TypeInfo Thread_t1605_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t103_il2cpp_TypeInfo;
extern TypeInfo Context_t1595_il2cpp_TypeInfo;
extern TypeInfo IConstructionCallMessage_t1594_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t160_il2cpp_TypeInfo;
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeveMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// Replacements.RemotingServices
#include "replacements_Replacements_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallMethodDeclarations.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAcMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActiMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
extern MethodInfo ConstructionLevelActivator__ctor_m8930_MethodInfo;
extern MethodInfo RemotingException__ctor_m9209_MethodInfo;
extern MethodInfo UrlAttribute_get_UrlValue_m8933_MethodInfo;
extern MethodInfo RemotingServices_CreateClientProxy_m5109_MethodInfo;
extern MethodInfo RemotingConfiguration_IsRemotelyActivatedClientType_m9207_MethodInfo;
extern MethodInfo RemotingServices_CreateClientProxy_m9227_MethodInfo;
extern MethodInfo Type_get_IsContextful_m6811_MethodInfo;
extern MethodInfo RemotingServices_CreateClientProxyForContextBound_m9228_MethodInfo;
extern MethodInfo ConstructionCall__ctor_m9023_MethodInfo;
extern MethodInfo ActivationServices_get_ConstructionActivator_m8925_MethodInfo;
extern MethodInfo AppDomainLevelActivator__ctor_m8929_MethodInfo;
extern MethodInfo ConstructionCall_set_Activator_m9030_MethodInfo;
extern MethodInfo ConstructionCall_set_IsContextOk_m9026_MethodInfo;
extern MethodInfo ContextLevelActivator__ctor_m8931_MethodInfo;
extern MethodInfo ArrayList__ctor_m4776_MethodInfo;
extern MethodInfo ArrayList_AddRange_m4905_MethodInfo;
extern MethodInfo Thread_get_CurrentContext_m10168_MethodInfo;
extern MethodInfo ArrayList_GetEnumerator_m4777_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m4766_MethodInfo;
extern MethodInfo IContextAttribute_IsContextOK_m11181_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m4768_MethodInfo;
extern MethodInfo IDisposable_Dispose_m623_MethodInfo;
extern MethodInfo ArrayList_Add_m4787_MethodInfo;
extern MethodInfo ArrayList_ToArray_m7574_MethodInfo;
extern MethodInfo ConstructionCall_SetActivationAttributes_m9032_MethodInfo;
extern MethodInfo IContextAttribute_GetPropertiesForNewContext_m11182_MethodInfo;
extern MethodInfo String_op_Inequality_m2200_MethodInfo;


// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
extern "C" Object_t * ActivationServices_get_ConstructionActivator_m8925 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Object_t * L_0 = ((ActivationServices_t1586_StaticFields*)InitializedTypeInfo(&ActivationServices_t1586_il2cpp_TypeInfo)->static_fields)->____constructionActivator_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ConstructionLevelActivator_t1589 * L_1 = (ConstructionLevelActivator_t1589 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ConstructionLevelActivator_t1589_il2cpp_TypeInfo));
		ConstructionLevelActivator__ctor_m8930(L_1, /*hidden argument*/&ConstructionLevelActivator__ctor_m8930_MethodInfo);
		((ActivationServices_t1586_StaticFields*)InitializedTypeInfo(&ActivationServices_t1586_il2cpp_TypeInfo)->static_fields)->____constructionActivator_0 = L_1;
	}

IL_0011:
	{
		Object_t * L_2 = ((ActivationServices_t1586_StaticFields*)InitializedTypeInfo(&ActivationServices_t1586_il2cpp_TypeInfo)->static_fields)->____constructionActivator_0;
		return L_2;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
extern MethodInfo ActivationServices_CreateProxyFromAttributes_m8926_MethodInfo;
extern "C" Object_t * ActivationServices_CreateProxyFromAttributes_m8926 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t148* ___activationAttributes, MethodInfo* method)
{
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	ObjectU5BU5D_t148* V_2 = {0};
	int32_t V_3 = 0;
	ActivatedClientTypeEntry_t1651 * V_4 = {0};
	{
		V_0 = (String_t*)NULL;
		ObjectU5BU5D_t148* L_0 = ___activationAttributes;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0037;
	}

IL_0008:
	{
		ObjectU5BU5D_t148* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3));
		Object_t * L_4 = V_1;
		if (((Object_t *)IsInst(L_4, InitializedTypeInfo(&IContextAttribute_t1930_il2cpp_TypeInfo))))
		{
			goto IL_001f;
		}
	}
	{
		RemotingException_t1660 * L_5 = (RemotingException_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1660_il2cpp_TypeInfo));
		RemotingException__ctor_m9209(L_5, (String_t*) &_stringLiteral2012, /*hidden argument*/&RemotingException__ctor_m9209_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001f:
	{
		Object_t * L_6 = V_1;
		if (!((UrlAttribute_t1592 *)IsInst(L_6, InitializedTypeInfo(&UrlAttribute_t1592_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_7 = V_1;
		NullCheck(((UrlAttribute_t1592 *)Castclass(L_7, InitializedTypeInfo(&UrlAttribute_t1592_il2cpp_TypeInfo))));
		String_t* L_8 = UrlAttribute_get_UrlValue_m8933(((UrlAttribute_t1592 *)Castclass(L_7, InitializedTypeInfo(&UrlAttribute_t1592_il2cpp_TypeInfo))), /*hidden argument*/&UrlAttribute_get_UrlValue_m8933_MethodInfo);
		V_0 = L_8;
	}

IL_0033:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_10 = V_3;
		ObjectU5BU5D_t148* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0008;
		}
	}
	{
		String_t* L_12 = V_0;
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		Type_t * L_13 = ___type;
		String_t* L_14 = V_0;
		ObjectU5BU5D_t148* L_15 = ___activationAttributes;
		Object_t * L_16 = RemotingServices_CreateClientProxy_m5109(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/&RemotingServices_CreateClientProxy_m5109_MethodInfo);
		return L_16;
	}

IL_0049:
	{
		Type_t * L_17 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingConfiguration_t1659_il2cpp_TypeInfo));
		ActivatedClientTypeEntry_t1651 * L_18 = RemotingConfiguration_IsRemotelyActivatedClientType_m9207(NULL /*static, unused*/, L_17, /*hidden argument*/&RemotingConfiguration_IsRemotelyActivatedClientType_m9207_MethodInfo);
		V_4 = L_18;
		ActivatedClientTypeEntry_t1651 * L_19 = V_4;
		if (!L_19)
		{
			goto IL_005e;
		}
	}
	{
		ActivatedClientTypeEntry_t1651 * L_20 = V_4;
		ObjectU5BU5D_t148* L_21 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1661_il2cpp_TypeInfo));
		Object_t * L_22 = RemotingServices_CreateClientProxy_m9227(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/&RemotingServices_CreateClientProxy_m9227_MethodInfo);
		return L_22;
	}

IL_005e:
	{
		Type_t * L_23 = ___type;
		NullCheck(L_23);
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsContextful_m6811_MethodInfo, L_23);
		if (!L_24)
		{
			goto IL_006e;
		}
	}
	{
		Type_t * L_25 = ___type;
		ObjectU5BU5D_t148* L_26 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1661_il2cpp_TypeInfo));
		Object_t * L_27 = RemotingServices_CreateClientProxyForContextBound_m9228(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/&RemotingServices_CreateClientProxyForContextBound_m9228_MethodInfo);
		return L_27;
	}

IL_006e:
	{
		return NULL;
	}
}
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
extern MethodInfo ActivationServices_CreateConstructionCall_m8927_MethodInfo;
extern "C" ConstructionCall_t1587 * ActivationServices_CreateConstructionCall_m8927 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t148* ___activationAttributes, MethodInfo* method)
{
	ConstructionCall_t1587 * V_0 = {0};
	Object_t * V_1 = {0};
	ArrayList_t906 * V_2 = {0};
	bool V_3 = false;
	Context_t1595 * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	ObjectU5BU5D_t148* V_7 = {0};
	Object_t * V_8 = {0};
	ObjectU5BU5D_t148* V_9 = {0};
	int32_t V_10 = 0;
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Object_t * V_13 = {0};
	Object_t * V_14 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B19_0 = 0;
	{
		Type_t * L_0 = ___type;
		ConstructionCall_t1587 * L_1 = (ConstructionCall_t1587 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ConstructionCall_t1587_il2cpp_TypeInfo));
		ConstructionCall__ctor_m9023(L_1, L_0, /*hidden argument*/&ConstructionCall__ctor_m9023_MethodInfo);
		V_0 = L_1;
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsContextful_m6811_MethodInfo, L_2);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ConstructionCall_t1587 * L_4 = V_0;
		String_t* L_5 = ___activationUrl;
		Object_t * L_6 = ActivationServices_get_ConstructionActivator_m8925(NULL /*static, unused*/, /*hidden argument*/&ActivationServices_get_ConstructionActivator_m8925_MethodInfo);
		AppDomainLevelActivator_t1588 * L_7 = (AppDomainLevelActivator_t1588 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AppDomainLevelActivator_t1588_il2cpp_TypeInfo));
		AppDomainLevelActivator__ctor_m8929(L_7, L_5, L_6, /*hidden argument*/&AppDomainLevelActivator__ctor_m8929_MethodInfo);
		NullCheck(L_4);
		VirtActionInvoker1< Object_t * >::Invoke(&ConstructionCall_set_Activator_m9030_MethodInfo, L_4, L_7);
		ConstructionCall_t1587 * L_8 = V_0;
		NullCheck(L_8);
		ConstructionCall_set_IsContextOk_m9026(L_8, 0, /*hidden argument*/&ConstructionCall_set_IsContextOk_m9026_MethodInfo);
		ConstructionCall_t1587 * L_9 = V_0;
		return L_9;
	}

IL_0029:
	{
		Object_t * L_10 = ActivationServices_get_ConstructionActivator_m8925(NULL /*static, unused*/, /*hidden argument*/&ActivationServices_get_ConstructionActivator_m8925_MethodInfo);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ContextLevelActivator_t1590 * L_12 = (ContextLevelActivator_t1590 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ContextLevelActivator_t1590_il2cpp_TypeInfo));
		ContextLevelActivator__ctor_m8931(L_12, L_11, /*hidden argument*/&ContextLevelActivator__ctor_m8931_MethodInfo);
		V_1 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList_t906 * L_13 = (ArrayList_t906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList__ctor_m4776(L_13, /*hidden argument*/&ArrayList__ctor_m4776_MethodInfo);
		V_2 = L_13;
		ObjectU5BU5D_t148* L_14 = ___activationAttributes;
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		ArrayList_t906 * L_15 = V_2;
		ObjectU5BU5D_t148* L_16 = ___activationAttributes;
		NullCheck(L_15);
		VirtActionInvoker1< Object_t * >::Invoke(&ArrayList_AddRange_m4905_MethodInfo, L_15, (Object_t *)(Object_t *)L_16);
	}

IL_0046:
	{
		String_t* L_17 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
		String_t* L_18 = ((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_19 = String_op_Equality_m641(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		V_3 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1605_il2cpp_TypeInfo));
		Context_t1595 * L_20 = Thread_get_CurrentContext_m10168(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m10168_MethodInfo);
		V_4 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		ArrayList_t906 * L_22 = V_2;
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m4777_MethodInfo, L_22);
		V_6 = L_23;
	}

IL_0064:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0084;
		}

IL_0066:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_24);
			V_5 = ((Object_t *)Castclass(L_25, InitializedTypeInfo(&IContextAttribute_t1930_il2cpp_TypeInfo)));
			Object_t * L_26 = V_5;
			Context_t1595 * L_27 = V_4;
			ConstructionCall_t1587 * L_28 = V_0;
			NullCheck(L_26);
			bool L_29 = (bool)InterfaceFuncInvoker2< bool, Context_t1595 *, Object_t * >::Invoke(&IContextAttribute_IsContextOK_m11181_MethodInfo, L_26, L_27, L_28);
			if (L_29)
			{
				goto IL_0084;
			}
		}

IL_0080:
		{
			V_3 = 0;
			goto IL_008d;
		}

IL_0084:
		{
			Object_t * L_30 = V_6;
			NullCheck(L_30);
			bool L_31 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_30);
			if (L_31)
			{
				goto IL_0066;
			}
		}

IL_008d:
		{
			IL2CPP_LEAVE(0xA5, FINALLY_008f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_008f;
	}

FINALLY_008f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_32 = V_6;
			V_13 = ((Object_t *)IsInst(L_32, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_33 = V_13;
			if (L_33)
			{
				goto IL_009d;
			}
		}

IL_009c:
		{
			IL2CPP_END_FINALLY(143)
		}

IL_009d:
		{
			Object_t * L_34 = V_13;
			NullCheck(L_34);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_34);
			IL2CPP_END_FINALLY(143)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_00a5:
	{
		Type_t * L_35 = ___type;
		NullCheck(L_35);
		ObjectU5BU5D_t148* L_36 = (ObjectU5BU5D_t148*)VirtFuncInvoker1< ObjectU5BU5D_t148*, bool >::Invoke(&MemberInfo_GetCustomAttributes_m11160_MethodInfo, L_35, 1);
		V_7 = L_36;
		ObjectU5BU5D_t148* L_37 = V_7;
		V_9 = L_37;
		V_10 = 0;
		goto IL_00ec;
	}

IL_00b7:
	{
		ObjectU5BU5D_t148* L_38 = V_9;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = L_39;
		V_8 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_38, L_40));
		Object_t * L_41 = V_8;
		if (!((Object_t *)IsInst(L_41, InitializedTypeInfo(&IContextAttribute_t1930_il2cpp_TypeInfo))))
		{
			goto IL_00e6;
		}
	}
	{
		bool L_42 = V_3;
		if (!L_42)
		{
			goto IL_00db;
		}
	}
	{
		Object_t * L_43 = V_8;
		Context_t1595 * L_44 = V_4;
		ConstructionCall_t1587 * L_45 = V_0;
		NullCheck(((Object_t *)Castclass(L_43, InitializedTypeInfo(&IContextAttribute_t1930_il2cpp_TypeInfo))));
		bool L_46 = (bool)InterfaceFuncInvoker2< bool, Context_t1595 *, Object_t * >::Invoke(&IContextAttribute_IsContextOK_m11181_MethodInfo, ((Object_t *)Castclass(L_43, InitializedTypeInfo(&IContextAttribute_t1930_il2cpp_TypeInfo))), L_44, L_45);
		G_B19_0 = ((int32_t)(L_46));
		goto IL_00dc;
	}

IL_00db:
	{
		G_B19_0 = 0;
	}

IL_00dc:
	{
		V_3 = G_B19_0;
		ArrayList_t906 * L_47 = V_2;
		Object_t * L_48 = V_8;
		NullCheck(L_47);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_47, L_48);
	}

IL_00e6:
	{
		int32_t L_49 = V_10;
		V_10 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_00ec:
	{
		int32_t L_50 = V_10;
		ObjectU5BU5D_t148* L_51 = V_9;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)(((Array_t *)L_51)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		bool L_52 = V_3;
		if (L_52)
		{
			goto IL_0144;
		}
	}
	{
		ConstructionCall_t1587 * L_53 = V_0;
		ArrayList_t906 * L_54 = V_2;
		NullCheck(L_54);
		ObjectU5BU5D_t148* L_55 = (ObjectU5BU5D_t148*)VirtFuncInvoker0< ObjectU5BU5D_t148* >::Invoke(&ArrayList_ToArray_m7574_MethodInfo, L_54);
		NullCheck(L_53);
		ConstructionCall_SetActivationAttributes_m9032(L_53, L_55, /*hidden argument*/&ConstructionCall_SetActivationAttributes_m9032_MethodInfo);
		ArrayList_t906 * L_56 = V_2;
		NullCheck(L_56);
		Object_t * L_57 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m4777_MethodInfo, L_56);
		V_12 = L_57;
	}

IL_010b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0123;
		}

IL_010d:
		{
			Object_t * L_58 = V_12;
			NullCheck(L_58);
			Object_t * L_59 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_58);
			V_11 = ((Object_t *)Castclass(L_59, InitializedTypeInfo(&IContextAttribute_t1930_il2cpp_TypeInfo)));
			Object_t * L_60 = V_11;
			ConstructionCall_t1587 * L_61 = V_0;
			NullCheck(L_60);
			InterfaceActionInvoker1< Object_t * >::Invoke(&IContextAttribute_GetPropertiesForNewContext_m11182_MethodInfo, L_60, L_61);
		}

IL_0123:
		{
			Object_t * L_62 = V_12;
			NullCheck(L_62);
			bool L_63 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_62);
			if (L_63)
			{
				goto IL_010d;
			}
		}

IL_012c:
		{
			IL2CPP_LEAVE(0x144, FINALLY_012e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_012e;
	}

FINALLY_012e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_64 = V_12;
			V_14 = ((Object_t *)IsInst(L_64, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_65 = V_14;
			if (L_65)
			{
				goto IL_013c;
			}
		}

IL_013b:
		{
			IL2CPP_END_FINALLY(302)
		}

IL_013c:
		{
			Object_t * L_66 = V_14;
			NullCheck(L_66);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_66);
			IL2CPP_END_FINALLY(302)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(302)
	{
		IL2CPP_JUMP_TBL(0x144, IL_0144)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0144:
	{
		String_t* L_67 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
		String_t* L_68 = ((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_69 = String_op_Inequality_m2200(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
		if (!L_69)
		{
			goto IL_0159;
		}
	}
	{
		String_t* L_70 = ___activationUrl;
		Object_t * L_71 = V_1;
		AppDomainLevelActivator_t1588 * L_72 = (AppDomainLevelActivator_t1588 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AppDomainLevelActivator_t1588_il2cpp_TypeInfo));
		AppDomainLevelActivator__ctor_m8929(L_72, L_70, L_71, /*hidden argument*/&AppDomainLevelActivator__ctor_m8929_MethodInfo);
		V_1 = L_72;
	}

IL_0159:
	{
		ConstructionCall_t1587 * L_73 = V_0;
		Object_t * L_74 = V_1;
		NullCheck(L_73);
		VirtActionInvoker1< Object_t * >::Invoke(&ConstructionCall_set_Activator_m9030_MethodInfo, L_73, L_74);
		ConstructionCall_t1587 * L_75 = V_0;
		bool L_76 = V_3;
		NullCheck(L_75);
		ConstructionCall_set_IsContextOk_m9026(L_75, L_76, /*hidden argument*/&ConstructionCall_set_IsContextOk_m9026_MethodInfo);
		ConstructionCall_t1587 * L_77 = V_0;
		return L_77;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern MethodInfo ActivationServices_AllocateUninitializedClassInstance_m8928_MethodInfo;
extern "C" Object_t * ActivationServices_AllocateUninitializedClassInstance_m8928 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	typedef Object_t * (*ActivationServices_AllocateUninitializedClassInstance_m8928_ftn) (Type_t *);
	static ActivationServices_AllocateUninitializedClassInstance_m8928_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ActivationServices_AllocateUninitializedClassInstance_m8928_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)");
	return _il2cpp_icall_func(___type);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.AppDomainLevelActivator::.ctor(System.String,System.Runtime.Remoting.Activation.IActivator)
extern "C" void AppDomainLevelActivator__ctor_m8929 (AppDomainLevelActivator_t1588 * __this, String_t* ___activationUrl, Object_t * ___next, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		String_t* L_0 = ___activationUrl;
		__this->____activationUrl_0 = L_0;
		Object_t * L_1 = ___next;
		__this->____next_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ConstructionLevelActivator::.ctor()
extern "C" void ConstructionLevelActivator__ctor_m8930 (ConstructionLevelActivator_t1589 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ContextLevelActivator::.ctor(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ContextLevelActivator__ctor_m8931 (ContextLevelActivator_t1590 * __this, Object_t * ___next, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		Object_t * L_0 = ___next;
		__this->___m_NextActivator_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RemoteActivator_t1591_il2cpp_TypeInfo;
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivatorMethodDeclarations.h"

// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Runtime.Remoting.Lifetime.LeaseState
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseState.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Double
#include "mscorlib_System_Double.h"
extern TypeInfo MarshalByRefObject_t945_il2cpp_TypeInfo;
extern TypeInfo ILease_t1607_il2cpp_TypeInfo;
extern TypeInfo LeaseState_t1613_il2cpp_TypeInfo;
extern TypeInfo TimeSpan_t980_il2cpp_TypeInfo;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObjectMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern MethodInfo MarshalByRefObject_InitializeLifetimeService_m5069_MethodInfo;
extern MethodInfo ILease_get_CurrentState_m11183_MethodInfo;
extern MethodInfo TimeSpan_FromMinutes_m10969_MethodInfo;
extern MethodInfo ILease_set_InitialLeaseTime_m11184_MethodInfo;
extern MethodInfo ILease_set_SponsorshipTimeout_m11185_MethodInfo;
extern MethodInfo ILease_set_RenewOnCallTime_m11186_MethodInfo;


// System.Object System.Runtime.Remoting.Activation.RemoteActivator::InitializeLifetimeService()
extern MethodInfo RemoteActivator_InitializeLifetimeService_m8932_MethodInfo;
extern "C" Object_t * RemoteActivator_InitializeLifetimeService_m8932 (RemoteActivator_t1591 * __this, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = MarshalByRefObject_InitializeLifetimeService_m5069(__this, /*hidden argument*/&MarshalByRefObject_InitializeLifetimeService_m5069_MethodInfo);
		V_0 = ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ILease_t1607_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ILease_get_CurrentState_m11183_MethodInfo, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t980_il2cpp_TypeInfo));
		TimeSpan_t980  L_4 = TimeSpan_FromMinutes_m10969(NULL /*static, unused*/, (30.0), /*hidden argument*/&TimeSpan_FromMinutes_m10969_MethodInfo);
		NullCheck(L_3);
		InterfaceActionInvoker1< TimeSpan_t980  >::Invoke(&ILease_set_InitialLeaseTime_m11184_MethodInfo, L_3, L_4);
		Object_t * L_5 = V_0;
		TimeSpan_t980  L_6 = TimeSpan_FromMinutes_m10969(NULL /*static, unused*/, (1.0), /*hidden argument*/&TimeSpan_FromMinutes_m10969_MethodInfo);
		NullCheck(L_5);
		InterfaceActionInvoker1< TimeSpan_t980  >::Invoke(&ILease_set_SponsorshipTimeout_m11185_MethodInfo, L_5, L_6);
		Object_t * L_7 = V_0;
		TimeSpan_t980  L_8 = TimeSpan_FromMinutes_m10969(NULL /*static, unused*/, (10.0), /*hidden argument*/&TimeSpan_FromMinutes_m10969_MethodInfo);
		NullCheck(L_7);
		InterfaceActionInvoker1< TimeSpan_t980  >::Invoke(&ILease_set_RenewOnCallTime_m11186_MethodInfo, L_7, L_8);
	}

IL_0051:
	{
		Object_t * L_9 = V_0;
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo String_GetHashCode_m3616_MethodInfo;


// System.String System.Runtime.Remoting.Activation.UrlAttribute::get_UrlValue()
extern "C" String_t* UrlAttribute_get_UrlValue_m8933 (UrlAttribute_t1592 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::Equals(System.Object)
extern MethodInfo UrlAttribute_Equals_m8934_MethodInfo;
extern "C" bool UrlAttribute_Equals_m8934 (UrlAttribute_t1592 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		if (((UrlAttribute_t1592 *)IsInst(L_0, InitializedTypeInfo(&UrlAttribute_t1592_il2cpp_TypeInfo))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		Object_t * L_1 = ___o;
		NullCheck(((UrlAttribute_t1592 *)Castclass(L_1, InitializedTypeInfo(&UrlAttribute_t1592_il2cpp_TypeInfo))));
		String_t* L_2 = UrlAttribute_get_UrlValue_m8933(((UrlAttribute_t1592 *)Castclass(L_1, InitializedTypeInfo(&UrlAttribute_t1592_il2cpp_TypeInfo))), /*hidden argument*/&UrlAttribute_get_UrlValue_m8933_MethodInfo);
		String_t* L_3 = (__this->___url_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_4 = String_op_Equality_m641(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		return L_4;
	}
}
// System.Int32 System.Runtime.Remoting.Activation.UrlAttribute::GetHashCode()
extern MethodInfo UrlAttribute_GetHashCode_m8935_MethodInfo;
extern "C" int32_t UrlAttribute_GetHashCode_m8935 (UrlAttribute_t1592 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3616_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Activation.UrlAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo UrlAttribute_GetPropertiesForNewContext_m8936_MethodInfo;
extern "C" void UrlAttribute_GetPropertiesForNewContext_m8936 (UrlAttribute_t1592 * __this, Object_t * ___ctorMsg, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo UrlAttribute_IsContextOK_m8937_MethodInfo;
extern "C" bool UrlAttribute_IsContextOK_m8937 (UrlAttribute_t1592 * __this, Context_t1595 * ___ctx, Object_t * ___msg, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ChannelInfo_t1596_il2cpp_TypeInfo;
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfoMethodDeclarations.h"

extern MethodInfo ChannelServices_GetCurrentChannelInfo_m8943_MethodInfo;


// System.Void System.Runtime.Remoting.ChannelInfo::.ctor()
extern MethodInfo ChannelInfo__ctor_m8938_MethodInfo;
extern "C" void ChannelInfo__ctor_m8938 (ChannelInfo_t1596 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
		ObjectU5BU5D_t148* L_0 = ChannelServices_GetCurrentChannelInfo_m8943(NULL /*static, unused*/, /*hidden argument*/&ChannelServices_GetCurrentChannelInfo_m8943_MethodInfo);
		__this->___channelData_0 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.ChannelInfo::get_ChannelData()
extern MethodInfo ChannelInfo_get_ChannelData_m8939_MethodInfo;
extern "C" ObjectU5BU5D_t148* ChannelInfo_get_ChannelData_m8939 (ChannelInfo_t1596 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->___channelData_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanne.h"
extern TypeInfo CrossContextChannel_t1597_il2cpp_TypeInfo;
extern TypeInfo ISecurableChannel_t1931_il2cpp_TypeInfo;
extern TypeInfo IChannel_t1599_il2cpp_TypeInfo;
extern TypeInfo IChannelReceiver_t1932_il2cpp_TypeInfo;
extern TypeInfo IList_t1035_il2cpp_TypeInfo;
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanneMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t34_0_0_0;
extern MethodInfo CrossContextChannel__ctor_m8967_MethodInfo;
extern MethodInfo ChannelServices_RegisterChannel_m8942_MethodInfo;
extern MethodInfo IChannel_get_ChannelName_m11187_MethodInfo;
extern MethodInfo ISecurableChannel_set_IsSecured_m11188_MethodInfo;
extern MethodInfo ArrayList_get_SyncRoot_m4935_MethodInfo;
extern MethodInfo Monitor_Enter_m4796_MethodInfo;
extern MethodInfo ArrayList_get_Item_m4774_MethodInfo;
extern MethodInfo IChannel_get_ChannelPriority_m11189_MethodInfo;
extern MethodInfo ArrayList_get_Count_m4772_MethodInfo;
extern MethodInfo ArrayList_Insert_m4915_MethodInfo;
extern MethodInfo IList_Contains_m11104_MethodInfo;
extern MethodInfo IChannelReceiver_StartListening_m11190_MethodInfo;
extern MethodInfo Monitor_Exit_m4797_MethodInfo;
extern MethodInfo IChannelReceiver_get_ChannelData_m11191_MethodInfo;


// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern MethodInfo ChannelServices__cctor_m8940_MethodInfo;
extern TypeInfo* StringU5BU5D_t34_il2cpp_TypeInfo_var;
extern "C" void ChannelServices__cctor_m8940 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool ChannelServices__cctor_m8940_init;
	if (!ChannelServices__cctor_m8940_init)
	{
		StringU5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t34_0_0_0);
		ChannelServices__cctor_m8940_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList_t906 * L_0 = (ArrayList_t906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList__ctor_m4776(L_0, /*hidden argument*/&ArrayList__ctor_m4776_MethodInfo);
		((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0 = L_0;
		ArrayList_t906 * L_1 = (ArrayList_t906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList__ctor_m4776(L_1, /*hidden argument*/&ArrayList__ctor_m4776_MethodInfo);
		((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___delayedClientChannels_1 = L_1;
		CrossContextChannel_t1597 * L_2 = (CrossContextChannel_t1597 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CrossContextChannel_t1597_il2cpp_TypeInfo));
		CrossContextChannel__ctor_m8967(L_2, /*hidden argument*/&CrossContextChannel__ctor_m8967_MethodInfo);
		((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->____crossContextSink_2 = L_2;
		((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___CrossContextUrl_3 = (String_t*) &_stringLiteral2013;
		StringU5BU5D_t34* L_3 = ((StringU5BU5D_t34*)SZArrayNew(StringU5BU5D_t34_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral2014);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 0)) = (String_t*)(String_t*) &_stringLiteral2014;
		StringU5BU5D_t34* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral2015);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 1)) = (String_t*)(String_t*) &_stringLiteral2015;
		((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___oldStartModeTypes_4 = (Object_t *)L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern MethodInfo ChannelServices_RegisterChannel_m8941_MethodInfo;
extern "C" void ChannelServices_RegisterChannel_m8941 (Object_t * __this /* static, unused */, Object_t * ___chnl, MethodInfo* method)
{
	{
		Object_t * L_0 = ___chnl;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
		ChannelServices_RegisterChannel_m8942(NULL /*static, unused*/, L_0, 0, /*hidden argument*/&ChannelServices_RegisterChannel_m8942_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern "C" void ChannelServices_RegisterChannel_m8942 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___chnl;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t753 * L_1 = (ArgumentNullException_t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t753_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3705(L_1, (String_t*) &_stringLiteral2016, /*hidden argument*/&ArgumentNullException__ctor_m3705_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = ___ensureSecurity;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		Object_t * L_3 = ___chnl;
		V_1 = ((Object_t *)IsInst(L_3, InitializedTypeInfo(&ISecurableChannel_t1931_il2cpp_TypeInfo)));
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		Object_t * L_5 = ___chnl;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m11187_MethodInfo, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = String_Format_m2040(NULL /*static, unused*/, (String_t*) &_stringLiteral2017, L_6, /*hidden argument*/&String_Format_m2040_MethodInfo);
		RemotingException_t1660 * L_8 = (RemotingException_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1660_il2cpp_TypeInfo));
		RemotingException__ctor_m9209(L_8, L_7, /*hidden argument*/&RemotingException__ctor_m9209_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0031:
	{
		Object_t * L_9 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(&ISecurableChannel_set_IsSecured_m11188_MethodInfo, L_9, 1);
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
		ArrayList_t906 * L_10 = ((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_get_SyncRoot_m4935_MethodInfo, L_10);
		V_0 = L_11;
		Object_t * L_12 = V_0;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_12, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			V_2 = (-1);
			V_3 = 0;
			goto IL_00bc;
		}

IL_004f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
			ArrayList_t906 * L_13 = ((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
			int32_t L_14 = V_3;
			NullCheck(L_13);
			Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m4774_MethodInfo, L_13, L_14);
			V_4 = ((Object_t *)Castclass(L_15, InitializedTypeInfo(&IChannel_t1599_il2cpp_TypeInfo)));
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			String_t* L_17 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m11187_MethodInfo, L_16);
			Object_t * L_18 = ___chnl;
			NullCheck(L_18);
			String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m11187_MethodInfo, L_18);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			bool L_20 = String_op_Equality_m641(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
			if (!L_20)
			{
				goto IL_00a3;
			}
		}

IL_0075:
		{
			Object_t * L_21 = ___chnl;
			NullCheck(L_21);
			String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m11187_MethodInfo, L_21);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_23 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
			bool L_24 = String_op_Inequality_m2200(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
			if (!L_24)
			{
				goto IL_00a3;
			}
		}

IL_0087:
		{
			Object_t * L_25 = V_4;
			NullCheck(L_25);
			String_t* L_26 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m11187_MethodInfo, L_25);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_27 = String_Concat_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral2018, L_26, (String_t*) &_stringLiteral2019, /*hidden argument*/&String_Concat_m98_MethodInfo);
			RemotingException_t1660 * L_28 = (RemotingException_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1660_il2cpp_TypeInfo));
			RemotingException__ctor_m9209(L_28, L_27, /*hidden argument*/&RemotingException__ctor_m9209_MethodInfo);
			il2cpp_codegen_raise_exception(L_28);
		}

IL_00a3:
		{
			Object_t * L_29 = V_4;
			NullCheck(L_29);
			int32_t L_30 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&IChannel_get_ChannelPriority_m11189_MethodInfo, L_29);
			Object_t * L_31 = ___chnl;
			NullCheck(L_31);
			int32_t L_32 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&IChannel_get_ChannelPriority_m11189_MethodInfo, L_31);
			if ((((int32_t)L_30) >= ((int32_t)L_32)))
			{
				goto IL_00b8;
			}
		}

IL_00b2:
		{
			int32_t L_33 = V_2;
			if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
			{
				goto IL_00b8;
			}
		}

IL_00b6:
		{
			int32_t L_34 = V_3;
			V_2 = L_34;
		}

IL_00b8:
		{
			int32_t L_35 = V_3;
			V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
		}

IL_00bc:
		{
			int32_t L_36 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
			ArrayList_t906 * L_37 = ((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
			NullCheck(L_37);
			int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_37);
			if ((((int32_t)L_36) < ((int32_t)L_38)))
			{
				goto IL_004f;
			}
		}

IL_00c9:
		{
			int32_t L_39 = V_2;
			if ((((int32_t)L_39) == ((int32_t)(-1))))
			{
				goto IL_00db;
			}
		}

IL_00cd:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
			ArrayList_t906 * L_40 = ((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
			int32_t L_41 = V_2;
			Object_t * L_42 = ___chnl;
			NullCheck(L_40);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(&ArrayList_Insert_m4915_MethodInfo, L_40, L_41, L_42);
			goto IL_00e7;
		}

IL_00db:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
			ArrayList_t906 * L_43 = ((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
			Object_t * L_44 = ___chnl;
			NullCheck(L_43);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_43, L_44);
		}

IL_00e7:
		{
			Object_t * L_45 = ___chnl;
			V_5 = ((Object_t *)IsInst(L_45, InitializedTypeInfo(&IChannelReceiver_t1932_il2cpp_TypeInfo)));
			Object_t * L_46 = V_5;
			if (!L_46)
			{
				goto IL_0112;
			}
		}

IL_00f3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
			Object_t * L_47 = ((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___oldStartModeTypes_4;
			Object_t * L_48 = ___chnl;
			NullCheck(L_48);
			Type_t * L_49 = Object_GetType_m1959(L_48, /*hidden argument*/&Object_GetType_m1959_MethodInfo);
			NullCheck(L_49);
			String_t* L_50 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6856_MethodInfo, L_49);
			NullCheck(L_47);
			bool L_51 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(&IList_Contains_m11104_MethodInfo, L_47, L_50);
			if (!L_51)
			{
				goto IL_0112;
			}
		}

IL_010a:
		{
			Object_t * L_52 = V_5;
			NullCheck(L_52);
			InterfaceActionInvoker1< Object_t * >::Invoke(&IChannelReceiver_StartListening_m11190_MethodInfo, L_52, NULL);
		}

IL_0112:
		{
			IL2CPP_LEAVE(0x11B, FINALLY_0114);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0114;
	}

FINALLY_0114:
	{ // begin finally (depth: 1)
		Object_t * L_53 = V_0;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_53, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(276)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(276)
	{
		IL2CPP_JUMP_TBL(0x11B, IL_011b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_011b:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern "C" ObjectU5BU5D_t148* ChannelServices_GetCurrentChannelInfo_m8943 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	ArrayList_t906 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList_t906 * L_0 = (ArrayList_t906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList__ctor_m4776(L_0, /*hidden argument*/&ArrayList__ctor_m4776_MethodInfo);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
		ArrayList_t906 * L_1 = ((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_get_SyncRoot_m4935_MethodInfo, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
			ArrayList_t906 * L_4 = ((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m4777_MethodInfo, L_4);
			V_3 = L_5;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_004d;
			}

IL_0024:
			{
				Object_t * L_6 = V_3;
				NullCheck(L_6);
				Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_6);
				V_2 = L_7;
				Object_t * L_8 = V_2;
				V_4 = ((Object_t *)IsInst(L_8, InitializedTypeInfo(&IChannelReceiver_t1932_il2cpp_TypeInfo)));
				Object_t * L_9 = V_4;
				if (!L_9)
				{
					goto IL_004d;
				}
			}

IL_0037:
			{
				Object_t * L_10 = V_4;
				NullCheck(L_10);
				Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IChannelReceiver_get_ChannelData_m11191_MethodInfo, L_10);
				V_5 = L_11;
				Object_t * L_12 = V_5;
				if (!L_12)
				{
					goto IL_004d;
				}
			}

IL_0044:
			{
				ArrayList_t906 * L_13 = V_0;
				Object_t * L_14 = V_5;
				NullCheck(L_13);
				VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_13, L_14);
			}

IL_004d:
			{
				Object_t * L_15 = V_3;
				NullCheck(L_15);
				bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_15);
				if (L_16)
				{
					goto IL_0024;
				}
			}

IL_0055:
			{
				IL2CPP_LEAVE(0x6C, FINALLY_0057);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t163 *)e.ex;
			goto FINALLY_0057;
		}

FINALLY_0057:
		{ // begin finally (depth: 2)
			{
				Object_t * L_17 = V_3;
				V_6 = ((Object_t *)IsInst(L_17, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
				Object_t * L_18 = V_6;
				if (L_18)
				{
					goto IL_0064;
				}
			}

IL_0063:
			{
				IL2CPP_END_FINALLY(87)
			}

IL_0064:
			{
				Object_t * L_19 = V_6;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_19);
				IL2CPP_END_FINALLY(87)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(87)
		{
			IL2CPP_JUMP_TBL(0x6C, IL_006c)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x75, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_1;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_20, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0075:
	{
		ArrayList_t906 * L_21 = V_0;
		NullCheck(L_21);
		ObjectU5BU5D_t148* L_22 = (ObjectU5BU5D_t148*)VirtFuncInvoker0< ObjectU5BU5D_t148* >::Invoke(&ArrayList_ToArray_m7574_MethodInfo, L_21);
		return L_22;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainData.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CrossAppDomainData_t1600_il2cpp_TypeInfo;
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainDataMethodDeclarations.h"

extern MethodInfo RemotingConfiguration_get_ProcessId_m9206_MethodInfo;


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainData::.ctor(System.Int32)
extern MethodInfo CrossAppDomainData__ctor_m8944_MethodInfo;
extern "C" void CrossAppDomainData__ctor_m8944 (CrossAppDomainData_t1600 * __this, int32_t ___domainId, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		int32_t L_0 = 0;
		Object_t * L_1 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_0);
		__this->____ContextID_0 = L_1;
		int32_t L_2 = ___domainId;
		__this->____DomainID_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingConfiguration_t1659_il2cpp_TypeInfo));
		String_t* L_3 = RemotingConfiguration_get_ProcessId_m9206(NULL /*static, unused*/, /*hidden argument*/&RemotingConfiguration_get_ProcessId_m9206_MethodInfo);
		__this->____processGuid_2 = L_3;
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CrossAppDomainChannel_t1601_il2cpp_TypeInfo;
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChanMethodDeclarations.h"

extern MethodInfo Thread_GetDomainID_m10172_MethodInfo;
extern MethodInfo CrossAppDomainChannel__ctor_m8945_MethodInfo;


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.ctor()
extern "C" void CrossAppDomainChannel__ctor_m8945 (CrossAppDomainChannel_t1601 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.cctor()
extern MethodInfo CrossAppDomainChannel__cctor_m8946_MethodInfo;
extern "C" void CrossAppDomainChannel__cctor_m8946 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo));
		Object__ctor_m86(L_0, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		((CrossAppDomainChannel_t1601_StaticFields*)InitializedTypeInfo(&CrossAppDomainChannel_t1601_il2cpp_TypeInfo)->static_fields)->___s_lock_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::RegisterCrossAppDomainChannel()
extern MethodInfo CrossAppDomainChannel_RegisterCrossAppDomainChannel_m8947_MethodInfo;
extern "C" void CrossAppDomainChannel_RegisterCrossAppDomainChannel_m8947 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Object_t * V_0 = {0};
	CrossAppDomainChannel_t1601 * V_1 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossAppDomainChannel_t1601_il2cpp_TypeInfo));
		Object_t * L_0 = ((CrossAppDomainChannel_t1601_StaticFields*)InitializedTypeInfo(&CrossAppDomainChannel_t1601_il2cpp_TypeInfo)->static_fields)->___s_lock_0;
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_1, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossAppDomainChannel_t1601_il2cpp_TypeInfo));
		CrossAppDomainChannel_t1601 * L_2 = (CrossAppDomainChannel_t1601 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CrossAppDomainChannel_t1601_il2cpp_TypeInfo));
		CrossAppDomainChannel__ctor_m8945(L_2, /*hidden argument*/&CrossAppDomainChannel__ctor_m8945_MethodInfo);
		V_1 = L_2;
		CrossAppDomainChannel_t1601 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
		ChannelServices_RegisterChannel_m8941(NULL /*static, unused*/, L_3, /*hidden argument*/&ChannelServices_RegisterChannel_m8941_MethodInfo);
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_0;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_4, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0021:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelName()
extern MethodInfo CrossAppDomainChannel_get_ChannelName_m8948_MethodInfo;
extern "C" String_t* CrossAppDomainChannel_get_ChannelName_m8948 (CrossAppDomainChannel_t1601 * __this, MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral2020;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelPriority()
extern MethodInfo CrossAppDomainChannel_get_ChannelPriority_m8949_MethodInfo;
extern "C" int32_t CrossAppDomainChannel_get_ChannelPriority_m8949 (CrossAppDomainChannel_t1601 * __this, MethodInfo* method)
{
	{
		return ((int32_t)100);
	}
}
// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelData()
extern MethodInfo CrossAppDomainChannel_get_ChannelData_m8950_MethodInfo;
extern "C" Object_t * CrossAppDomainChannel_get_ChannelData_m8950 (CrossAppDomainChannel_t1601 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1605_il2cpp_TypeInfo));
		int32_t L_0 = Thread_GetDomainID_m10172(NULL /*static, unused*/, /*hidden argument*/&Thread_GetDomainID_m10172_MethodInfo);
		CrossAppDomainData_t1600 * L_1 = (CrossAppDomainData_t1600 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CrossAppDomainData_t1600_il2cpp_TypeInfo));
		CrossAppDomainData__ctor_m8944(L_1, L_0, /*hidden argument*/&CrossAppDomainData__ctor_m8944_MethodInfo);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::StartListening(System.Object)
extern MethodInfo CrossAppDomainChannel_StartListening_m8951_MethodInfo;
extern "C" void CrossAppDomainChannel_StartListening_m8951 (CrossAppDomainChannel_t1601 * __this, Object_t * ___data, MethodInfo* method)
{
	{
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSink.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CrossAppDomainSink_t1602_il2cpp_TypeInfo;
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
extern TypeInfo Hashtable_t893_il2cpp_TypeInfo;
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern Il2CppType CrossAppDomainSink_t1602_0_0_0;
extern MethodInfo Hashtable__ctor_m4969_MethodInfo;


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.cctor()
extern MethodInfo CrossAppDomainSink__cctor_m8952_MethodInfo;
extern "C" void CrossAppDomainSink__cctor_m8952 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable_t893 * L_0 = (Hashtable_t893 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable__ctor_m4969(L_0, /*hidden argument*/&Hashtable__ctor_m4969_MethodInfo);
		((CrossAppDomainSink_t1602_StaticFields*)InitializedTypeInfo(&CrossAppDomainSink_t1602_il2cpp_TypeInfo)->static_fields)->___s_sinks_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&CrossAppDomainSink_t1602_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		NullCheck(L_1);
		MethodInfo_t * L_2 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(&Type_GetMethod_m6840_MethodInfo, L_1, (String_t*) &_stringLiteral2021, ((int32_t)40));
		((CrossAppDomainSink_t1602_StaticFields*)InitializedTypeInfo(&CrossAppDomainSink_t1602_il2cpp_TypeInfo)->static_fields)->___processMessageMethod_1 = L_2;
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::get_TargetDomainId()
extern MethodInfo CrossAppDomainSink_get_TargetDomainId_m8953_MethodInfo;
extern "C" int32_t CrossAppDomainSink_get_TargetDomainId_m8953 (CrossAppDomainSink_t1602 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____domainID_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSi.h"
extern TypeInfo IContextProperty_t1603_il2cpp_TypeInfo;
extern TypeInfo EnvoyTerminatorSink_t1625_il2cpp_TypeInfo;
extern TypeInfo IContributeEnvoySink_t1933_il2cpp_TypeInfo;
extern TypeInfo IMessageSink_t1129_il2cpp_TypeInfo;
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSiMethodDeclarations.h"
extern MethodInfo AppDomain_InternalGetDefaultContext_m10257_MethodInfo;
extern MethodInfo IContextProperty_get_Name_m11192_MethodInfo;
extern MethodInfo IContributeEnvoySink_GetEnvoySink_m11193_MethodInfo;


// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern MethodInfo Context__cctor_m8954_MethodInfo;
extern "C" void Context__cctor_m8954 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable_t893 * L_0 = (Hashtable_t893 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable__ctor_m4969(L_0, /*hidden argument*/&Hashtable__ctor_m4969_MethodInfo);
		((Context_t1595_StaticFields*)InitializedTypeInfo(&Context_t1595_il2cpp_TypeInfo)->static_fields)->___namedSlots_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern MethodInfo Context_Finalize_m8955_MethodInfo;
extern "C" void Context_Finalize_m8955 (Context_t1595 * __this, MethodInfo* method)
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
		IL2CPP_LEAVE(0x9, FINALLY_0002);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0002;
	}

FINALLY_0002:
	{ // begin finally (depth: 1)
		Object_Finalize_m138(__this, /*hidden argument*/&Object_Finalize_m138_MethodInfo);
		IL2CPP_END_FINALLY(2)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(2)
	{
		IL2CPP_JUMP_TBL(0x9, IL_0009)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0009:
	{
		return;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
extern MethodInfo Context_get_DefaultContext_m8956_MethodInfo;
extern "C" Context_t1595 * Context_get_DefaultContext_m8956 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Context_t1595 * L_0 = AppDomain_InternalGetDefaultContext_m10257(NULL /*static, unused*/, /*hidden argument*/&AppDomain_InternalGetDefaultContext_m10257_MethodInfo);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern MethodInfo Context_get_IsDefaultContext_m8957_MethodInfo;
extern "C" bool Context_get_IsDefaultContext_m8957 (Context_t1595 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern MethodInfo Context_GetProperty_m8958_MethodInfo;
extern "C" Object_t * Context_GetProperty_m8958 (Context_t1595 * __this, String_t* ___name, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t906 * L_0 = (__this->___context_properties_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (Object_t *)NULL;
	}

IL_000a:
	{
		ArrayList_t906 * L_1 = (__this->___context_properties_1);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m4777_MethodInfo, L_1);
		V_1 = L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0018:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_3);
			V_0 = ((Object_t *)Castclass(L_4, InitializedTypeInfo(&IContextProperty_t1603_il2cpp_TypeInfo)));
			Object_t * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IContextProperty_get_Name_m11192_MethodInfo, L_5);
			String_t* L_7 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			bool L_8 = String_op_Equality_m641(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
			if (!L_8)
			{
				goto IL_0036;
			}
		}

IL_0032:
		{
			Object_t * L_9 = V_0;
			V_2 = L_9;
			IL2CPP_LEAVE(0x54, FINALLY_0040);
		}

IL_0036:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_10);
			if (L_11)
			{
				goto IL_0018;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_3 = ((Object_t *)IsInst(L_12, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_13 = V_3;
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_004b:
		{
			Object_t * L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_14);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0052:
	{
		return (Object_t *)NULL;
	}

IL_0054:
	{
		Object_t * L_15 = V_2;
		return L_15;
	}
}
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern MethodInfo Context_ToString_m8959_MethodInfo;
extern "C" String_t* Context_ToString_m8959 (Context_t1595 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_0);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m555(NULL /*static, unused*/, (String_t*) &_stringLiteral2022, L_2, /*hidden argument*/&String_Concat_m555_MethodInfo);
		return L_3;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateEnvoySink(System.MarshalByRefObject)
extern MethodInfo Context_CreateEnvoySink_m8960_MethodInfo;
extern "C" Object_t * Context_CreateEnvoySink_m8960 (Context_t1595 * __this, MarshalByRefObject_t945 * ___serverObject, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EnvoyTerminatorSink_t1625_il2cpp_TypeInfo));
		EnvoyTerminatorSink_t1625 * L_0 = ((EnvoyTerminatorSink_t1625_StaticFields*)InitializedTypeInfo(&EnvoyTerminatorSink_t1625_il2cpp_TypeInfo)->static_fields)->___Instance_0;
		V_0 = L_0;
		ArrayList_t906 * L_1 = (__this->___context_properties_1);
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		ArrayList_t906 * L_2 = (__this->___context_properties_1);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m4777_MethodInfo, L_2);
		V_2 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_001c:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_4);
			V_1 = ((Object_t *)Castclass(L_5, InitializedTypeInfo(&IContextProperty_t1603_il2cpp_TypeInfo)));
			Object_t * L_6 = V_1;
			V_3 = ((Object_t *)IsInst(L_6, InitializedTypeInfo(&IContributeEnvoySink_t1933_il2cpp_TypeInfo)));
			Object_t * L_7 = V_3;
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_0032:
		{
			Object_t * L_8 = V_3;
			MarshalByRefObject_t945 * L_9 = ___serverObject;
			Object_t * L_10 = V_0;
			NullCheck(L_8);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker2< Object_t *, MarshalByRefObject_t945 *, Object_t * >::Invoke(&IContributeEnvoySink_GetEnvoySink_m11193_MethodInfo, L_8, L_9, L_10);
			V_0 = L_11;
		}

IL_003b:
		{
			Object_t * L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_001c;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_2;
			V_4 = ((Object_t *)IsInst(L_14, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_15 = V_4;
			if (L_15)
			{
				goto IL_0052;
			}
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(69)
		}

IL_0052:
		{
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_16);
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_005a:
	{
		Object_t * L_17 = V_0;
		return L_17;
	}
}
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ContextAttribute_t1593_il2cpp_TypeInfo;
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttributeMethodDeclarations.h"

extern MethodInfo IConstructionCallMessage_get_ContextProperties_m11194_MethodInfo;
extern MethodInfo IList_Add_m5001_MethodInfo;
extern MethodInfo IConstructionCallMessage_get_ActivationType_m11195_MethodInfo;


// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
extern MethodInfo ContextAttribute__ctor_m8961_MethodInfo;
extern "C" void ContextAttribute__ctor_m8961 (ContextAttribute_t1593 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		String_t* L_0 = ___name;
		__this->___AttributeName_0 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
extern MethodInfo ContextAttribute_get_Name_m8962_MethodInfo;
extern "C" String_t* ContextAttribute_get_Name_m8962 (ContextAttribute_t1593 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
extern MethodInfo ContextAttribute_Equals_m8963_MethodInfo;
extern "C" bool ContextAttribute_Equals_m8963 (ContextAttribute_t1593 * __this, Object_t * ___o, MethodInfo* method)
{
	ContextAttribute_t1593 * V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		Object_t * L_1 = ___o;
		if (((ContextAttribute_t1593 *)IsInst(L_1, InitializedTypeInfo(&ContextAttribute_t1593_il2cpp_TypeInfo))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = ___o;
		V_0 = ((ContextAttribute_t1593 *)Castclass(L_2, InitializedTypeInfo(&ContextAttribute_t1593_il2cpp_TypeInfo)));
		ContextAttribute_t1593 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = (L_3->___AttributeName_0);
		String_t* L_5 = (__this->___AttributeName_0);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_6 = String_op_Inequality_m2200(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		return 1;
	}
}
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
extern MethodInfo ContextAttribute_GetHashCode_m8964_MethodInfo;
extern "C" int32_t ContextAttribute_GetHashCode_m8964 (ContextAttribute_t1593 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		String_t* L_1 = (__this->___AttributeName_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3616_MethodInfo, L_1);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo ContextAttribute_GetPropertiesForNewContext_m8965_MethodInfo;
extern "C" void ContextAttribute_GetPropertiesForNewContext_m8965 (ContextAttribute_t1593 * __this, Object_t * ___ctorMsg, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t753 * L_1 = (ArgumentNullException_t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t753_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3705(L_1, (String_t*) &_stringLiteral2023, /*hidden argument*/&ArgumentNullException__ctor_m3705_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___ctorMsg;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IConstructionCallMessage_get_ContextProperties_m11194_MethodInfo, L_2);
		V_0 = L_3;
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IList_Add_m5001_MethodInfo, L_4, __this);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo ContextAttribute_IsContextOK_m8966_MethodInfo;
extern "C" bool ContextAttribute_IsContextOK_m8966 (ContextAttribute_t1593 * __this, Context_t1595 * ___ctx, Object_t * ___ctorMsg, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t753 * L_1 = (ArgumentNullException_t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t753_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3705(L_1, (String_t*) &_stringLiteral2023, /*hidden argument*/&ArgumentNullException__ctor_m3705_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Context_t1595 * L_2 = ___ctx;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t753 * L_3 = (ArgumentNullException_t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t753_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3705(L_3, (String_t*) &_stringLiteral2024, /*hidden argument*/&ArgumentNullException__ctor_m3705_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Object_t * L_4 = ___ctorMsg;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(&IConstructionCallMessage_get_ActivationType_m11195_MethodInfo, L_4);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsContextful_m6811_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		Context_t1595 * L_7 = ___ctx;
		String_t* L_8 = (__this->___AttributeName_0);
		NullCheck(L_7);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&Context_GetProperty_m8958_MethodInfo, L_7, L_8);
		V_0 = L_9;
		Object_t * L_10 = V_0;
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		return 0;
	}

IL_003d:
	{
		Object_t * L_11 = V_0;
		if ((((Object_t*)(ContextAttribute_t1593 *)__this) == ((Object_t*)(Object_t *)L_11)))
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}

IL_0043:
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Contexts.CrossContextChannel::.ctor()
extern "C" void CrossContextChannel__ctor_m8967 (CrossContextChannel_t1597 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SynchronizationAttribute_t1606_il2cpp_TypeInfo;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"

// System.Threading.Mutex
#include "mscorlib_System_Threading_Mutex.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
extern TypeInfo WaitHandle_t1211_il2cpp_TypeInfo;
extern TypeInfo Mutex_t1604_il2cpp_TypeInfo;
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandleMethodDeclarations.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"
extern MethodInfo WaitHandle_WaitOne_m6030_MethodInfo;
extern MethodInfo SynchronizationAttribute_ReleaseLock_m8971_MethodInfo;
extern MethodInfo Thread_get_CurrentThread_m10170_MethodInfo;
extern MethodInfo Mutex_ReleaseMutex_m10155_MethodInfo;
extern MethodInfo SynchronizationAttribute__ctor_m8969_MethodInfo;
extern MethodInfo Mutex__ctor_m10152_MethodInfo;
extern MethodInfo SynchronizationAttribute_set_Locked_m8970_MethodInfo;


// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern MethodInfo SynchronizationAttribute__ctor_m8968_MethodInfo;
extern "C" void SynchronizationAttribute__ctor_m8968 (SynchronizationAttribute_t1606 * __this, MethodInfo* method)
{
	{
		SynchronizationAttribute__ctor_m8969(__this, 8, 0, /*hidden argument*/&SynchronizationAttribute__ctor_m8969_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern "C" void SynchronizationAttribute__ctor_m8969 (SynchronizationAttribute_t1606 * __this, int32_t ___flag, bool ___reEntrant, MethodInfo* method)
{
	{
		Mutex_t1604 * L_0 = (Mutex_t1604 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Mutex_t1604_il2cpp_TypeInfo));
		Mutex__ctor_m10152(L_0, 0, /*hidden argument*/&Mutex__ctor_m10152_MethodInfo);
		__this->____mutex_4 = L_0;
		ContextAttribute__ctor_m8961(__this, (String_t*) &_stringLiteral2025, /*hidden argument*/&ContextAttribute__ctor_m8961_MethodInfo);
		int32_t L_1 = ___flag;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = ___flag;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_3 = ___flag;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_4 = ___flag;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_t445 * L_5 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_5, (String_t*) &_stringLiteral465, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0032:
	{
		bool L_6 = ___reEntrant;
		__this->____bReEntrant_1 = L_6;
		int32_t L_7 = ___flag;
		__this->____flavor_2 = L_7;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern "C" void SynchronizationAttribute_set_Locked_m8970 (SynchronizationAttribute_t1606 * __this, bool ___value, MethodInfo* method)
{
	SynchronizationAttribute_t1606 * V_0 = {0};
	SynchronizationAttribute_t1606 * V_1 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		Mutex_t1604 * L_1 = (__this->____mutex_4);
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(&WaitHandle_WaitOne_m6030_MethodInfo, L_1);
		V_0 = __this;
		SynchronizationAttribute_t1606 * L_2 = V_0;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_2, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
			int32_t L_4 = (__this->____lockCount_3);
			if ((((int32_t)L_4) <= ((int32_t)1)))
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			SynchronizationAttribute_ReleaseLock_m8971(__this, /*hidden argument*/&SynchronizationAttribute_ReleaseLock_m8971_MethodInfo);
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1605_il2cpp_TypeInfo));
			Thread_t1605 * L_5 = Thread_get_CurrentThread_m10170(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentThread_m10170_MethodInfo);
			__this->____ownerThread_5 = L_5;
			IL2CPP_LEAVE(0x48, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1606 * L_6 = V_0;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_6, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0048:
	{
		goto IL_0093;
	}

IL_004a:
	{
		V_1 = __this;
		SynchronizationAttribute_t1606 * L_7 = V_1;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_7, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_0054:
		{
			int32_t L_8 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_8-(int32_t)1));
			Mutex_t1604 * L_9 = (__this->____mutex_4);
			NullCheck(L_9);
			Mutex_ReleaseMutex_m10155(L_9, /*hidden argument*/&Mutex_ReleaseMutex_m10155_MethodInfo);
			__this->____ownerThread_5 = (Thread_t1605 *)NULL;
		}

IL_0074:
		{
			int32_t L_10 = (__this->____lockCount_3);
			if ((((int32_t)L_10) <= ((int32_t)0)))
			{
				goto IL_008a;
			}
		}

IL_007d:
		{
			Thread_t1605 * L_11 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1605_il2cpp_TypeInfo));
			Thread_t1605 * L_12 = Thread_get_CurrentThread_m10170(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentThread_m10170_MethodInfo);
			if ((((Object_t*)(Thread_t1605 *)L_11) == ((Object_t*)(Thread_t1605 *)L_12)))
			{
				goto IL_0054;
			}
		}

IL_008a:
		{
			IL2CPP_LEAVE(0x93, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1606 * L_13 = V_1;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_13, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(140)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0093:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern "C" void SynchronizationAttribute_ReleaseLock_m8971 (SynchronizationAttribute_t1606 * __this, MethodInfo* method)
{
	SynchronizationAttribute_t1606 * V_0 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizationAttribute_t1606 * L_0 = V_0;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = (__this->____lockCount_3);
			if ((((int32_t)L_1) <= ((int32_t)0)))
			{
				goto IL_003e;
			}
		}

IL_0011:
		{
			Thread_t1605 * L_2 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1605_il2cpp_TypeInfo));
			Thread_t1605 * L_3 = Thread_get_CurrentThread_m10170(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentThread_m10170_MethodInfo);
			if ((!(((Object_t*)(Thread_t1605 *)L_2) == ((Object_t*)(Thread_t1605 *)L_3))))
			{
				goto IL_003e;
			}
		}

IL_001e:
		{
			int32_t L_4 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_4-(int32_t)1));
			Mutex_t1604 * L_5 = (__this->____mutex_4);
			NullCheck(L_5);
			Mutex_ReleaseMutex_m10155(L_5, /*hidden argument*/&Mutex_ReleaseMutex_m10155_MethodInfo);
			__this->____ownerThread_5 = (Thread_t1605 *)NULL;
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1606 * L_6 = V_0;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_6, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0047:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo SynchronizationAttribute_GetPropertiesForNewContext_m8972_MethodInfo;
extern "C" void SynchronizationAttribute_GetPropertiesForNewContext_m8972 (SynchronizationAttribute_t1606 * __this, Object_t * ___ctorMsg, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____flavor_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___ctorMsg;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IConstructionCallMessage_get_ContextProperties_m11194_MethodInfo, L_1);
		NullCheck(L_2);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IList_Add_m5001_MethodInfo, L_2, __this);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo SynchronizationAttribute_IsContextOK_m8973_MethodInfo;
extern "C" bool SynchronizationAttribute_IsContextOK_m8973 (SynchronizationAttribute_t1606 * __this, Context_t1595 * ___ctx, Object_t * ___msg, MethodInfo* method)
{
	SynchronizationAttribute_t1606 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Context_t1595 * L_0 = ___ctx;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&Context_GetProperty_m8958_MethodInfo, L_0, (String_t*) &_stringLiteral2025);
		V_0 = ((SynchronizationAttribute_t1606 *)IsInst(L_1, InitializedTypeInfo(&SynchronizationAttribute_t1606_il2cpp_TypeInfo)));
		int32_t L_2 = (__this->____flavor_2);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0042;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 4)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 5)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 6)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 7)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0053;
	}

IL_0042:
	{
		SynchronizationAttribute_t1606 * L_4 = V_0;
		return ((((Object_t*)(SynchronizationAttribute_t1606 *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0047:
	{
		SynchronizationAttribute_t1606 * L_5 = V_0;
		return ((((int32_t)((((Object_t*)(SynchronizationAttribute_t1606 *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004f:
	{
		return 0;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern MethodInfo SynchronizationAttribute_ExitContext_m8974_MethodInfo;
extern "C" void SynchronizationAttribute_ExitContext_m8974 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	SynchronizationAttribute_t1606 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1605_il2cpp_TypeInfo));
		Context_t1595 * L_0 = Thread_get_CurrentContext_m10168(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m10168_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m8957(L_0, /*hidden argument*/&Context_get_IsDefaultContext_m8957_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1605_il2cpp_TypeInfo));
		Context_t1595 * L_2 = Thread_get_CurrentContext_m10168(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m10168_MethodInfo);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&Context_GetProperty_m8958_MethodInfo, L_2, (String_t*) &_stringLiteral2025);
		V_0 = ((SynchronizationAttribute_t1606 *)IsInst(L_3, InitializedTypeInfo(&SynchronizationAttribute_t1606_il2cpp_TypeInfo)));
		SynchronizationAttribute_t1606 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		SynchronizationAttribute_t1606 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(&SynchronizationAttribute_set_Locked_m8970_MethodInfo, L_5, 0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern MethodInfo SynchronizationAttribute_EnterContext_m8975_MethodInfo;
extern "C" void SynchronizationAttribute_EnterContext_m8975 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	SynchronizationAttribute_t1606 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1605_il2cpp_TypeInfo));
		Context_t1595 * L_0 = Thread_get_CurrentContext_m10168(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m10168_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m8957(L_0, /*hidden argument*/&Context_get_IsDefaultContext_m8957_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1605_il2cpp_TypeInfo));
		Context_t1595 * L_2 = Thread_get_CurrentContext_m10168(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m10168_MethodInfo);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&Context_GetProperty_m8958_MethodInfo, L_2, (String_t*) &_stringLiteral2025);
		V_0 = ((SynchronizationAttribute_t1606 *)IsInst(L_3, InitializedTypeInfo(&SynchronizationAttribute_t1606_il2cpp_TypeInfo)));
		SynchronizationAttribute_t1606 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		SynchronizationAttribute_t1606 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(&SynchronizationAttribute_set_Locked_m8970_MethodInfo, L_5, 1);
		return;
	}
}
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
#include "mscorlib_System_Runtime_Remoting_Lifetime_Lease_RenewalDeleg.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenewalDelegate_t1608_il2cpp_TypeInfo;
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
#include "mscorlib_System_Runtime_Remoting_Lifetime_Lease_RenewalDelegMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo RenewalDelegate__ctor_m8976_MethodInfo;
extern "C" void RenewalDelegate__ctor_m8976 (RenewalDelegate_t1608 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::Invoke(System.Runtime.Remoting.Lifetime.ILease)
extern MethodInfo RenewalDelegate_Invoke_m8977_MethodInfo;
extern "C" TimeSpan_t980  RenewalDelegate_Invoke_m8977 (RenewalDelegate_t1608 * __this, Object_t * ___lease, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		RenewalDelegate_Invoke_m8977((RenewalDelegate_t1608 *)__this->___prev_9,___lease, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef TimeSpan_t980  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___lease, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___lease,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef TimeSpan_t980  (*FunctionPointerType) (Object_t * __this, Object_t * ___lease, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___lease,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef TimeSpan_t980  (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___lease,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" TimeSpan_t980  pinvoke_delegate_wrapper_RenewalDelegate_t1608(Il2CppObject* delegate, Object_t * ___lease)
{
	// Marshaling of parameter '___lease' to native representation
	Object_t * ____lease_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Lifetime.ILease'."));
}
// System.IAsyncResult System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::BeginInvoke(System.Runtime.Remoting.Lifetime.ILease,System.AsyncCallback,System.Object)
extern MethodInfo RenewalDelegate_BeginInvoke_m8978_MethodInfo;
extern "C" Object_t * RenewalDelegate_BeginInvoke_m8978 (RenewalDelegate_t1608 * __this, Object_t * ___lease, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___lease;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo RenewalDelegate_EndInvoke_m8979_MethodInfo;
extern "C" TimeSpan_t980  RenewalDelegate_EndInvoke_m8979 (RenewalDelegate_t1608 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(TimeSpan_t980 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Runtime.Remoting.Lifetime.Lease
#include "mscorlib_System_Runtime_Remoting_Lifetime_Lease.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Lease_t1609_il2cpp_TypeInfo;
// System.Runtime.Remoting.Lifetime.Lease
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseMethodDeclarations.h"

// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Queue
#include "mscorlib_System_Collections_Queue.h"
// System.Threading.WaitOrTimerCallback
#include "mscorlib_System_Threading_WaitOrTimerCallback.h"
// System.Threading.RegisteredWaitHandle
#include "mscorlib_System_Threading_RegisteredWaitHandle.h"
extern TypeInfo DateTime_t579_il2cpp_TypeInfo;
extern TypeInfo LifetimeServices_t1614_il2cpp_TypeInfo;
extern TypeInfo Queue_t1413_il2cpp_TypeInfo;
extern TypeInfo ISponsor_t1610_il2cpp_TypeInfo;
extern TypeInfo IAsyncResult_t310_il2cpp_TypeInfo;
extern TypeInfo AsyncCallback_t311_il2cpp_TypeInfo;
extern TypeInfo WaitOrTimerCallback_t1808_il2cpp_TypeInfo;
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServicesMethodDeclarations.h"
// System.Collections.Queue
#include "mscorlib_System_Collections_QueueMethodDeclarations.h"
// System.Threading.WaitOrTimerCallback
#include "mscorlib_System_Threading_WaitOrTimerCallbackMethodDeclarations.h"
// System.Threading.ThreadPool
#include "mscorlib_System_Threading_ThreadPoolMethodDeclarations.h"
extern MethodInfo DateTime_get_Now_m3617_MethodInfo;
extern MethodInfo DateTime_op_Subtraction_m10598_MethodInfo;
extern MethodInfo DateTime_op_Addition_m10595_MethodInfo;
extern MethodInfo TimeSpan_op_Equality_m10977_MethodInfo;
extern MethodInfo MarshalByRefObject__ctor_m4826_MethodInfo;
extern MethodInfo LifetimeServices_get_LeaseTime_m8999_MethodInfo;
extern MethodInfo LifetimeServices_get_RenewOnCallTime_m9000_MethodInfo;
extern MethodInfo LifetimeServices_get_SponsorshipTimeout_m9001_MethodInfo;
extern MethodInfo DateTime_op_GreaterThan_m4911_MethodInfo;
extern MethodInfo Lease_get_CurrentLeaseTime_m8981_MethodInfo;
extern MethodInfo Object_ReferenceEquals_m3638_MethodInfo;
extern MethodInfo ArrayList_RemoveAt_m4996_MethodInfo;
extern MethodInfo TimeSpan_op_GreaterThan_m10978_MethodInfo;
extern MethodInfo Queue__ctor_m7663_MethodInfo;
extern MethodInfo Lease_CheckNextSponsor_m8990_MethodInfo;
extern MethodInfo Queue_get_Count_m7665_MethodInfo;
extern MethodInfo Queue_Peek_m7673_MethodInfo;
extern MethodInfo ISponsor_Renewal_m11196_MethodInfo;
extern MethodInfo IAsyncResult_get_AsyncWaitHandle_m6062_MethodInfo;
extern MethodInfo Lease_ProcessSponsorResponse_m8991_MethodInfo;
extern MethodInfo WaitOrTimerCallback__ctor_m11071_MethodInfo;
extern MethodInfo ThreadPool_RegisterWaitForSingleObject_m10203_MethodInfo;
extern MethodInfo TimeSpan_op_Inequality_m10980_MethodInfo;
extern MethodInfo Lease_Renew_m8987_MethodInfo;
extern MethodInfo Queue_Dequeue_m7671_MethodInfo;
extern MethodInfo Lease_Unregister_m8988_MethodInfo;


// System.Void System.Runtime.Remoting.Lifetime.Lease::.ctor()
extern MethodInfo Lease__ctor_m8980_MethodInfo;
extern "C" void Lease__ctor_m8980 (Lease_t1609 * __this, MethodInfo* method)
{
	{
		MarshalByRefObject__ctor_m4826(__this, /*hidden argument*/&MarshalByRefObject__ctor_m4826_MethodInfo);
		__this->____currentState_2 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo));
		TimeSpan_t980  L_0 = LifetimeServices_get_LeaseTime_m8999(NULL /*static, unused*/, /*hidden argument*/&LifetimeServices_get_LeaseTime_m8999_MethodInfo);
		__this->____initialLeaseTime_3 = L_0;
		TimeSpan_t980  L_1 = LifetimeServices_get_RenewOnCallTime_m9000(NULL /*static, unused*/, /*hidden argument*/&LifetimeServices_get_RenewOnCallTime_m9000_MethodInfo);
		__this->____renewOnCallTime_4 = L_1;
		TimeSpan_t980  L_2 = LifetimeServices_get_SponsorshipTimeout_m9001(NULL /*static, unused*/, /*hidden argument*/&LifetimeServices_get_SponsorshipTimeout_m9001_MethodInfo);
		__this->____sponsorshipTimeout_5 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t579_il2cpp_TypeInfo));
		DateTime_t579  L_3 = DateTime_get_Now_m3617(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m3617_MethodInfo);
		TimeSpan_t980  L_4 = (__this->____initialLeaseTime_3);
		DateTime_t579  L_5 = DateTime_op_Addition_m10595(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&DateTime_op_Addition_m10595_MethodInfo);
		__this->____leaseExpireTime_1 = L_5;
		return;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime()
extern "C" TimeSpan_t980  Lease_get_CurrentLeaseTime_m8981 (Lease_t1609 * __this, MethodInfo* method)
{
	{
		DateTime_t579  L_0 = (__this->____leaseExpireTime_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t579_il2cpp_TypeInfo));
		DateTime_t579  L_1 = DateTime_get_Now_m3617(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m3617_MethodInfo);
		TimeSpan_t980  L_2 = DateTime_op_Subtraction_m10598(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&DateTime_op_Subtraction_m10598_MethodInfo);
		return L_2;
	}
}
// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::get_CurrentState()
extern MethodInfo Lease_get_CurrentState_m8982_MethodInfo;
extern "C" int32_t Lease_get_CurrentState_m8982 (Lease_t1609 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____currentState_2);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::Activate()
extern MethodInfo Lease_Activate_m8983_MethodInfo;
extern "C" void Lease_Activate_m8983 (Lease_t1609 * __this, MethodInfo* method)
{
	{
		__this->____currentState_2 = 2;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_InitialLeaseTime(System.TimeSpan)
extern MethodInfo Lease_set_InitialLeaseTime_m8984_MethodInfo;
extern "C" void Lease_set_InitialLeaseTime_m8984 (Lease_t1609 * __this, TimeSpan_t980  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____currentState_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->____currentState_2);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&LeaseState_t1613_il2cpp_TypeInfo), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m577(NULL /*static, unused*/, (String_t*) &_stringLiteral2026, L_3, (String_t*) &_stringLiteral135, /*hidden argument*/&String_Concat_m577_MethodInfo);
		RemotingException_t1660 * L_5 = (RemotingException_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1660_il2cpp_TypeInfo));
		RemotingException__ctor_m9209(L_5, L_4, /*hidden argument*/&RemotingException__ctor_m9209_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		TimeSpan_t980  L_6 = ___value;
		__this->____initialLeaseTime_3 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t579_il2cpp_TypeInfo));
		DateTime_t579  L_7 = DateTime_get_Now_m3617(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m3617_MethodInfo);
		TimeSpan_t980  L_8 = (__this->____initialLeaseTime_3);
		DateTime_t579  L_9 = DateTime_op_Addition_m10595(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&DateTime_op_Addition_m10595_MethodInfo);
		__this->____leaseExpireTime_1 = L_9;
		TimeSpan_t980  L_10 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t980_il2cpp_TypeInfo));
		TimeSpan_t980  L_11 = ((TimeSpan_t980_StaticFields*)InitializedTypeInfo(&TimeSpan_t980_il2cpp_TypeInfo)->static_fields)->___Zero_2;
		bool L_12 = TimeSpan_op_Equality_m10977(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&TimeSpan_op_Equality_m10977_MethodInfo);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		__this->____currentState_2 = 0;
	}

IL_005a:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_RenewOnCallTime(System.TimeSpan)
extern MethodInfo Lease_set_RenewOnCallTime_m8985_MethodInfo;
extern "C" void Lease_set_RenewOnCallTime_m8985 (Lease_t1609 * __this, TimeSpan_t980  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____currentState_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->____currentState_2);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&LeaseState_t1613_il2cpp_TypeInfo), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m577(NULL /*static, unused*/, (String_t*) &_stringLiteral2027, L_3, (String_t*) &_stringLiteral135, /*hidden argument*/&String_Concat_m577_MethodInfo);
		RemotingException_t1660 * L_5 = (RemotingException_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1660_il2cpp_TypeInfo));
		RemotingException__ctor_m9209(L_5, L_4, /*hidden argument*/&RemotingException__ctor_m9209_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		TimeSpan_t980  L_6 = ___value;
		__this->____renewOnCallTime_4 = L_6;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_SponsorshipTimeout(System.TimeSpan)
extern MethodInfo Lease_set_SponsorshipTimeout_m8986_MethodInfo;
extern "C" void Lease_set_SponsorshipTimeout_m8986 (Lease_t1609 * __this, TimeSpan_t980  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____currentState_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->____currentState_2);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&LeaseState_t1613_il2cpp_TypeInfo), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m577(NULL /*static, unused*/, (String_t*) &_stringLiteral2028, L_3, (String_t*) &_stringLiteral135, /*hidden argument*/&String_Concat_m577_MethodInfo);
		RemotingException_t1660 * L_5 = (RemotingException_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1660_il2cpp_TypeInfo));
		RemotingException__ctor_m9209(L_5, L_4, /*hidden argument*/&RemotingException__ctor_m9209_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		TimeSpan_t980  L_6 = ___value;
		__this->____sponsorshipTimeout_5 = L_6;
		return;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::Renew(System.TimeSpan)
extern "C" TimeSpan_t980  Lease_Renew_m8987 (Lease_t1609 * __this, TimeSpan_t980  ___renewalTime, MethodInfo* method)
{
	DateTime_t579  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t579_il2cpp_TypeInfo));
		DateTime_t579  L_0 = DateTime_get_Now_m3617(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m3617_MethodInfo);
		TimeSpan_t980  L_1 = ___renewalTime;
		DateTime_t579  L_2 = DateTime_op_Addition_m10595(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&DateTime_op_Addition_m10595_MethodInfo);
		V_0 = L_2;
		DateTime_t579  L_3 = V_0;
		DateTime_t579  L_4 = (__this->____leaseExpireTime_1);
		bool L_5 = DateTime_op_GreaterThan_m4911(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&DateTime_op_GreaterThan_m4911_MethodInfo);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		DateTime_t579  L_6 = V_0;
		__this->____leaseExpireTime_1 = L_6;
	}

IL_0021:
	{
		TimeSpan_t980  L_7 = (TimeSpan_t980 )VirtFuncInvoker0< TimeSpan_t980  >::Invoke(&Lease_get_CurrentLeaseTime_m8981_MethodInfo, __this);
		return L_7;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::Unregister(System.Runtime.Remoting.Lifetime.ISponsor)
extern "C" void Lease_Unregister_m8988 (Lease_t1609 * __this, Object_t * ___obj, MethodInfo* method)
{
	Lease_t1609 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		Lease_t1609 * L_0 = V_0;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			ArrayList_t906 * L_1 = (__this->____sponsors_6);
			if (L_1)
			{
				goto IL_0012;
			}
		}

IL_0010:
		{
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}

IL_0012:
		{
			V_1 = 0;
			goto IL_003c;
		}

IL_0016:
		{
			ArrayList_t906 * L_2 = (__this->____sponsors_6);
			int32_t L_3 = V_1;
			NullCheck(L_2);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m4774_MethodInfo, L_2, L_3);
			Object_t * L_5 = ___obj;
			bool L_6 = Object_ReferenceEquals_m3638(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Object_ReferenceEquals_m3638_MethodInfo);
			if (!L_6)
			{
				goto IL_0038;
			}
		}

IL_002a:
		{
			ArrayList_t906 * L_7 = (__this->____sponsors_6);
			int32_t L_8 = V_1;
			NullCheck(L_7);
			VirtActionInvoker1< int32_t >::Invoke(&ArrayList_RemoveAt_m4996_MethodInfo, L_7, L_8);
			goto IL_004a;
		}

IL_0038:
		{
			int32_t L_9 = V_1;
			V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		}

IL_003c:
		{
			int32_t L_10 = V_1;
			ArrayList_t906 * L_11 = (__this->____sponsors_6);
			NullCheck(L_11);
			int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_11);
			if ((((int32_t)L_10) < ((int32_t)L_12)))
			{
				goto IL_0016;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Lease_t1609 * L_13 = V_0;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_13, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0053:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::UpdateState()
extern MethodInfo Lease_UpdateState_m8989_MethodInfo;
extern "C" void Lease_UpdateState_m8989 (Lease_t1609 * __this, MethodInfo* method)
{
	Lease_t1609 * V_0 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->____currentState_2);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		TimeSpan_t980  L_1 = (TimeSpan_t980 )VirtFuncInvoker0< TimeSpan_t980  >::Invoke(&Lease_get_CurrentLeaseTime_m8981_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t980_il2cpp_TypeInfo));
		TimeSpan_t980  L_2 = ((TimeSpan_t980_StaticFields*)InitializedTypeInfo(&TimeSpan_t980_il2cpp_TypeInfo)->static_fields)->___Zero_2;
		bool L_3 = TimeSpan_op_GreaterThan_m10978(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&TimeSpan_op_GreaterThan_m10978_MethodInfo);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		ArrayList_t906 * L_4 = (__this->____sponsors_6);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		__this->____currentState_2 = 3;
		V_0 = __this;
		Lease_t1609 * L_5 = V_0;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_5, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		ArrayList_t906 * L_6 = (__this->____sponsors_6);
		Queue_t1413 * L_7 = (Queue_t1413 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Queue_t1413_il2cpp_TypeInfo));
		Queue__ctor_m7663(L_7, L_6, /*hidden argument*/&Queue__ctor_m7663_MethodInfo);
		__this->____renewingSponsors_7 = L_7;
		IL2CPP_LEAVE(0x4E, FINALLY_0047);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		Lease_t1609 * L_8 = V_0;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_8, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_004e:
	{
		Lease_CheckNextSponsor_m8990(__this, /*hidden argument*/&Lease_CheckNextSponsor_m8990_MethodInfo);
		goto IL_005d;
	}

IL_0056:
	{
		__this->____currentState_2 = 4;
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::CheckNextSponsor()
extern "C" void Lease_CheckNextSponsor_m8990 (Lease_t1609 * __this, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Queue_t1413 * L_0 = (__this->____renewingSponsors_7);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Queue_get_Count_m7665_MethodInfo, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		__this->____currentState_2 = 4;
		__this->____renewingSponsors_7 = (Queue_t1413 *)NULL;
		return;
	}

IL_001c:
	{
		Queue_t1413 * L_2 = (__this->____renewingSponsors_7);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Queue_Peek_m7673_MethodInfo, L_2);
		V_0 = ((Object_t *)Castclass(L_3, InitializedTypeInfo(&ISponsor_t1610_il2cpp_TypeInfo)));
		Object_t * L_4 = V_0;
		Object_t * L_5 = L_4;
		IntPtr_t L_6 = { GetInterfaceMethodInfo(L_5, &ISponsor_Renewal_m11196_MethodInfo) };
		RenewalDelegate_t1608 * L_7 = (RenewalDelegate_t1608 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RenewalDelegate_t1608_il2cpp_TypeInfo));
		RenewalDelegate__ctor_m8976(L_7, L_5, L_6, /*hidden argument*/&RenewalDelegate__ctor_m8976_MethodInfo);
		__this->____renewalDelegate_8 = L_7;
		RenewalDelegate_t1608 * L_8 = (__this->____renewalDelegate_8);
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, AsyncCallback_t311 *, Object_t * >::Invoke(&RenewalDelegate_BeginInvoke_m8978_MethodInfo, L_8, __this, (AsyncCallback_t311 *)NULL, NULL);
		V_1 = L_9;
		Object_t * L_10 = V_1;
		NullCheck(L_10);
		WaitHandle_t1211 * L_11 = (WaitHandle_t1211 *)InterfaceFuncInvoker0< WaitHandle_t1211 * >::Invoke(&IAsyncResult_get_AsyncWaitHandle_m6062_MethodInfo, L_10);
		IntPtr_t L_12 = { &Lease_ProcessSponsorResponse_m8991_MethodInfo };
		WaitOrTimerCallback_t1808 * L_13 = (WaitOrTimerCallback_t1808 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitOrTimerCallback_t1808_il2cpp_TypeInfo));
		WaitOrTimerCallback__ctor_m11071(L_13, __this, L_12, /*hidden argument*/&WaitOrTimerCallback__ctor_m11071_MethodInfo);
		Object_t * L_14 = V_1;
		TimeSpan_t980  L_15 = (__this->____sponsorshipTimeout_5);
		ThreadPool_RegisterWaitForSingleObject_m10203(NULL /*static, unused*/, L_11, L_13, L_14, L_15, 1, /*hidden argument*/&ThreadPool_RegisterWaitForSingleObject_m10203_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::ProcessSponsorResponse(System.Object,System.Boolean)
extern "C" void Lease_ProcessSponsorResponse_m8991 (Lease_t1609 * __this, Object_t * ___state, bool ___timedOut, MethodInfo* method)
{
	Object_t * V_0 = {0};
	TimeSpan_t980  V_1 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___timedOut;
		if (L_0)
		{
			goto IL_0041;
		}
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_1 = ___state;
			V_0 = ((Object_t *)Castclass(L_1, InitializedTypeInfo(&IAsyncResult_t310_il2cpp_TypeInfo)));
			RenewalDelegate_t1608 * L_2 = (__this->____renewalDelegate_8);
			Object_t * L_3 = V_0;
			NullCheck(L_2);
			TimeSpan_t980  L_4 = (TimeSpan_t980 )VirtFuncInvoker1< TimeSpan_t980 , Object_t * >::Invoke(&RenewalDelegate_EndInvoke_m8979_MethodInfo, L_2, L_3);
			V_1 = L_4;
			TimeSpan_t980  L_5 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t980_il2cpp_TypeInfo));
			TimeSpan_t980  L_6 = ((TimeSpan_t980_StaticFields*)InitializedTypeInfo(&TimeSpan_t980_il2cpp_TypeInfo)->static_fields)->___Zero_2;
			bool L_7 = TimeSpan_op_Inequality_m10980(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&TimeSpan_op_Inequality_m10980_MethodInfo);
			if (!L_7)
			{
				goto IL_003c;
			}
		}

IL_0024:
		{
			TimeSpan_t980  L_8 = V_1;
			VirtFuncInvoker1< TimeSpan_t980 , TimeSpan_t980  >::Invoke(&Lease_Renew_m8987_MethodInfo, __this, L_8);
			__this->____currentState_2 = 2;
			__this->____renewingSponsors_7 = (Queue_t1413 *)NULL;
			goto IL_005d;
		}

IL_003c:
		{
			goto IL_0041;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t163 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Object_t_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_003e;
		throw e;
	}

CATCH_003e:
	{ // begin catch(System.Object)
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		Queue_t1413 * L_9 = (__this->____renewingSponsors_7);
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Queue_Dequeue_m7671_MethodInfo, L_9);
		VirtActionInvoker1< Object_t * >::Invoke(&Lease_Unregister_m8988_MethodInfo, __this, ((Object_t *)Castclass(L_10, InitializedTypeInfo(&ISponsor_t1610_il2cpp_TypeInfo))));
		Lease_CheckNextSponsor_m8990(__this, /*hidden argument*/&Lease_CheckNextSponsor_m8990_MethodInfo);
	}

IL_005d:
	{
		return;
	}
}
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManager.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LeaseManager_t1612_il2cpp_TypeInfo;
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManagerMethodDeclarations.h"

// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentity.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_Timer.h"
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallback.h"
extern TypeInfo TimerCallback_t1821_il2cpp_TypeInfo;
extern TypeInfo Timer_t1611_il2cpp_TypeInfo;
extern TypeInfo ServerIdentity_t1307_il2cpp_TypeInfo;
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentityMethodDeclarations.h"
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallbackMethodDeclarations.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_TimerMethodDeclarations.h"
extern MethodInfo ServerIdentity_get_Lease_m9246_MethodInfo;
extern MethodInfo LeaseManager_StartManager_m8994_MethodInfo;
extern MethodInfo LeaseManager_ManageLeases_m8996_MethodInfo;
extern MethodInfo TimerCallback__ctor_m11063_MethodInfo;
extern MethodInfo LifetimeServices_get_LeaseManagerPollTime_m8998_MethodInfo;
extern MethodInfo Timer__ctor_m10218_MethodInfo;
extern MethodInfo Timer_Dispose_m10221_MethodInfo;
extern MethodInfo ServerIdentity_OnLifetimeExpired_m9243_MethodInfo;
extern MethodInfo LeaseManager_StopManager_m8995_MethodInfo;


// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern MethodInfo LeaseManager__ctor_m8992_MethodInfo;
extern "C" void LeaseManager__ctor_m8992 (LeaseManager_t1612 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList_t906 * L_0 = (ArrayList_t906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList__ctor_m4776(L_0, /*hidden argument*/&ArrayList__ctor_m4776_MethodInfo);
		__this->____objects_0 = L_0;
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern MethodInfo LeaseManager_TrackLifetime_m8993_MethodInfo;
extern "C" void LeaseManager_TrackLifetime_m8993 (LeaseManager_t1612 * __this, ServerIdentity_t1307 * ___identity, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t906 * L_0 = (__this->____objects_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_get_SyncRoot_m4935_MethodInfo, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_2, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			ServerIdentity_t1307 * L_3 = ___identity;
			NullCheck(L_3);
			Lease_t1609 * L_4 = ServerIdentity_get_Lease_m9246(L_3, /*hidden argument*/&ServerIdentity_get_Lease_m9246_MethodInfo);
			NullCheck(L_4);
			Lease_Activate_m8983(L_4, /*hidden argument*/&Lease_Activate_m8983_MethodInfo);
			ArrayList_t906 * L_5 = (__this->____objects_0);
			ServerIdentity_t1307 * L_6 = ___identity;
			NullCheck(L_5);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_5, L_6);
			Timer_t1611 * L_7 = (__this->____timer_1);
			if (L_7)
			{
				goto IL_0038;
			}
		}

IL_0032:
		{
			LeaseManager_StartManager_m8994(__this, /*hidden argument*/&LeaseManager_StartManager_m8994_MethodInfo);
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x41, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_0;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_8, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0041:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StartManager()
extern "C" void LeaseManager_StartManager_m8994 (LeaseManager_t1612 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = { &LeaseManager_ManageLeases_m8996_MethodInfo };
		TimerCallback_t1821 * L_1 = (TimerCallback_t1821 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TimerCallback_t1821_il2cpp_TypeInfo));
		TimerCallback__ctor_m11063(L_1, __this, L_0, /*hidden argument*/&TimerCallback__ctor_m11063_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo));
		TimeSpan_t980  L_2 = LifetimeServices_get_LeaseManagerPollTime_m8998(NULL /*static, unused*/, /*hidden argument*/&LifetimeServices_get_LeaseManagerPollTime_m8998_MethodInfo);
		TimeSpan_t980  L_3 = LifetimeServices_get_LeaseManagerPollTime_m8998(NULL /*static, unused*/, /*hidden argument*/&LifetimeServices_get_LeaseManagerPollTime_m8998_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Timer_t1611_il2cpp_TypeInfo));
		Timer_t1611 * L_4 = (Timer_t1611 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Timer_t1611_il2cpp_TypeInfo));
		Timer__ctor_m10218(L_4, L_1, NULL, L_2, L_3, /*hidden argument*/&Timer__ctor_m10218_MethodInfo);
		__this->____timer_1 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StopManager()
extern "C" void LeaseManager_StopManager_m8995 (LeaseManager_t1612 * __this, MethodInfo* method)
{
	Timer_t1611 * V_0 = {0};
	{
		Timer_t1611 * L_0 = (__this->____timer_1);
		V_0 = L_0;
		__this->____timer_1 = (Timer_t1611 *)NULL;
		Timer_t1611 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&Timer_Dispose_m10221_MethodInfo, L_1);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::ManageLeases(System.Object)
extern "C" void LeaseManager_ManageLeases_m8996 (LeaseManager_t1612 * __this, Object_t * ___state, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	ServerIdentity_t1307 * V_2 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t906 * L_0 = (__this->____objects_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_get_SyncRoot_m4935_MethodInfo, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_2, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0059;
		}

IL_0016:
		{
			ArrayList_t906 * L_3 = (__this->____objects_0);
			int32_t L_4 = V_1;
			NullCheck(L_3);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m4774_MethodInfo, L_3, L_4);
			V_2 = ((ServerIdentity_t1307 *)Castclass(L_5, InitializedTypeInfo(&ServerIdentity_t1307_il2cpp_TypeInfo)));
			ServerIdentity_t1307 * L_6 = V_2;
			NullCheck(L_6);
			Lease_t1609 * L_7 = ServerIdentity_get_Lease_m9246(L_6, /*hidden argument*/&ServerIdentity_get_Lease_m9246_MethodInfo);
			NullCheck(L_7);
			Lease_UpdateState_m8989(L_7, /*hidden argument*/&Lease_UpdateState_m8989_MethodInfo);
			ServerIdentity_t1307 * L_8 = V_2;
			NullCheck(L_8);
			Lease_t1609 * L_9 = ServerIdentity_get_Lease_m9246(L_8, /*hidden argument*/&ServerIdentity_get_Lease_m9246_MethodInfo);
			NullCheck(L_9);
			int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Lease_get_CurrentState_m8982_MethodInfo, L_9);
			if ((!(((uint32_t)L_10) == ((uint32_t)4))))
			{
				goto IL_0055;
			}
		}

IL_0041:
		{
			ArrayList_t906 * L_11 = (__this->____objects_0);
			int32_t L_12 = V_1;
			NullCheck(L_11);
			VirtActionInvoker1< int32_t >::Invoke(&ArrayList_RemoveAt_m4996_MethodInfo, L_11, L_12);
			ServerIdentity_t1307 * L_13 = V_2;
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(&ServerIdentity_OnLifetimeExpired_m9243_MethodInfo, L_13);
			goto IL_0059;
		}

IL_0055:
		{
			int32_t L_14 = V_1;
			V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
		}

IL_0059:
		{
			int32_t L_15 = V_1;
			ArrayList_t906 * L_16 = (__this->____objects_0);
			NullCheck(L_16);
			int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_16);
			if ((((int32_t)L_15) < ((int32_t)L_17)))
			{
				goto IL_0016;
			}
		}

IL_0067:
		{
			ArrayList_t906 * L_18 = (__this->____objects_0);
			NullCheck(L_18);
			int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_18);
			if (L_19)
			{
				goto IL_007a;
			}
		}

IL_0074:
		{
			LeaseManager_StopManager_m8995(__this, /*hidden argument*/&LeaseManager_StopManager_m8995_MethodInfo);
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x83, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_0;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_20, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x83, IL_0083)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0083:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Lifetime.LeaseState
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseStateMethodDeclarations.h"



// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo TimeSpan_FromSeconds_m10970_MethodInfo;


// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::.cctor()
extern MethodInfo LifetimeServices__cctor_m8997_MethodInfo;
extern "C" void LifetimeServices__cctor_m8997 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		LeaseManager_t1612 * L_0 = (LeaseManager_t1612 *)il2cpp_codegen_object_new (InitializedTypeInfo(&LeaseManager_t1612_il2cpp_TypeInfo));
		LeaseManager__ctor_m8992(L_0, /*hidden argument*/&LeaseManager__ctor_m8992_MethodInfo);
		((LifetimeServices_t1614_StaticFields*)InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo)->static_fields)->____leaseManager_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TimeSpan_t980_il2cpp_TypeInfo));
		TimeSpan_t980  L_1 = TimeSpan_FromSeconds_m10970(NULL /*static, unused*/, (10.0), /*hidden argument*/&TimeSpan_FromSeconds_m10970_MethodInfo);
		((LifetimeServices_t1614_StaticFields*)InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo)->static_fields)->____leaseManagerPollTime_0 = L_1;
		TimeSpan_t980  L_2 = TimeSpan_FromMinutes_m10969(NULL /*static, unused*/, (5.0), /*hidden argument*/&TimeSpan_FromMinutes_m10969_MethodInfo);
		((LifetimeServices_t1614_StaticFields*)InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo)->static_fields)->____leaseTime_1 = L_2;
		TimeSpan_t980  L_3 = TimeSpan_FromMinutes_m10969(NULL /*static, unused*/, (2.0), /*hidden argument*/&TimeSpan_FromMinutes_m10969_MethodInfo);
		((LifetimeServices_t1614_StaticFields*)InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo)->static_fields)->____renewOnCallTime_2 = L_3;
		TimeSpan_t980  L_4 = TimeSpan_FromMinutes_m10969(NULL /*static, unused*/, (2.0), /*hidden argument*/&TimeSpan_FromMinutes_m10969_MethodInfo);
		((LifetimeServices_t1614_StaticFields*)InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo)->static_fields)->____sponsorshipTimeout_3 = L_4;
		return;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseManagerPollTime()
extern "C" TimeSpan_t980  LifetimeServices_get_LeaseManagerPollTime_m8998 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo));
		TimeSpan_t980  L_0 = ((LifetimeServices_t1614_StaticFields*)InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo)->static_fields)->____leaseManagerPollTime_0;
		return L_0;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseTime()
extern "C" TimeSpan_t980  LifetimeServices_get_LeaseTime_m8999 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo));
		TimeSpan_t980  L_0 = ((LifetimeServices_t1614_StaticFields*)InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo)->static_fields)->____leaseTime_1;
		return L_0;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_RenewOnCallTime()
extern "C" TimeSpan_t980  LifetimeServices_get_RenewOnCallTime_m9000 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo));
		TimeSpan_t980  L_0 = ((LifetimeServices_t1614_StaticFields*)InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo)->static_fields)->____renewOnCallTime_2;
		return L_0;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_SponsorshipTimeout()
extern "C" TimeSpan_t980  LifetimeServices_get_SponsorshipTimeout_m9001 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo));
		TimeSpan_t980  L_0 = ((LifetimeServices_t1614_StaticFields*)InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo)->static_fields)->____sponsorshipTimeout_3;
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern MethodInfo LifetimeServices_TrackLifetime_m9002_MethodInfo;
extern "C" void LifetimeServices_TrackLifetime_m9002 (Object_t * __this /* static, unused */, ServerIdentity_t1307 * ___identity, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo));
		LeaseManager_t1612 * L_0 = ((LifetimeServices_t1614_StaticFields*)InitializedTypeInfo(&LifetimeServices_t1614_il2cpp_TypeInfo)->static_fields)->____leaseManager_4;
		ServerIdentity_t1307 * L_1 = ___identity;
		NullCheck(L_0);
		LeaseManager_TrackLifetime_m8993(L_0, L_1, /*hidden argument*/&LeaseManager_TrackLifetime_m8993_MethodInfo);
		return;
	}
}
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArgInfoType_t1615_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoTypeMethodDeclarations.h"



// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArgInfo_t1616_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoMethodDeclarations.h"

extern TypeInfo Int32U5BU5D_t38_il2cpp_TypeInfo;
extern Il2CppType Int32U5BU5D_t38_0_0_0;


// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern MethodInfo ArgInfo__ctor_m9003_MethodInfo;
extern TypeInfo* Int32U5BU5D_t38_il2cpp_TypeInfo_var;
extern "C" void ArgInfo__ctor_m9003 (ArgInfo_t1616 * __this, MethodBase_t750 * ___method, uint8_t ___type, MethodInfo* method)
{
	static bool ArgInfo__ctor_m9003_init;
	if (!ArgInfo__ctor_m9003_init)
	{
		Int32U5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t38_0_0_0);
		ArgInfo__ctor_m9003_init = true;
	}
	ParameterInfoU5BU5D_t751* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		MethodBase_t750 * L_0 = ___method;
		__this->____method_2 = L_0;
		MethodBase_t750 * L_1 = (__this->____method_2);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t751* L_2 = (ParameterInfoU5BU5D_t751*)VirtFuncInvoker0< ParameterInfoU5BU5D_t751* >::Invoke(&MethodBase_GetParameters_m3694_MethodInfo, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t751* L_3 = V_0;
		NullCheck(L_3);
		__this->____paramMap_0 = ((Int32U5BU5D_t38*)SZArrayNew(Int32U5BU5D_t38_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		__this->____inoutArgCount_1 = 0;
		uint8_t L_4 = ___type;
		if (L_4)
		{
			goto IL_0069;
		}
	}
	{
		V_1 = 0;
		goto IL_0061;
	}

IL_0035:
	{
		ParameterInfoU5BU5D_t751* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_5, L_7)));
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3695_MethodInfo, (*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_5, L_7)));
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6809_MethodInfo, L_8);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		Int32U5BU5D_t38* L_10 = (__this->____paramMap_0);
		int32_t L_11 = (__this->____inoutArgCount_1);
		int32_t L_12 = L_11;
		V_3 = L_12;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_13);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_13)) = (int32_t)L_14;
	}

IL_005d:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		ParameterInfoU5BU5D_t751* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00a9;
	}

IL_0069:
	{
		V_2 = 0;
		goto IL_00a3;
	}

IL_006d:
	{
		ParameterInfoU5BU5D_t751* L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck((*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_18, L_20)));
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3695_MethodInfo, (*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_18, L_20)));
		NullCheck(L_21);
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6809_MethodInfo, L_21);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		ParameterInfoU5BU5D_t751* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_23, L_25)));
		bool L_26 = ParameterInfo_get_IsOut_m8826((*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_23, L_25)), /*hidden argument*/&ParameterInfo_get_IsOut_m8826_MethodInfo);
		if (!L_26)
		{
			goto IL_009f;
		}
	}

IL_0086:
	{
		Int32U5BU5D_t38* L_27 = (__this->____paramMap_0);
		int32_t L_28 = (__this->____inoutArgCount_1);
		int32_t L_29 = L_28;
		V_3 = L_29;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_3;
		int32_t L_31 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, L_30)) = (int32_t)L_31;
	}

IL_009f:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_33 = V_2;
		ParameterInfoU5BU5D_t751* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_006d;
		}
	}

IL_00a9:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgCount()
extern MethodInfo ArgInfo_GetInOutArgCount_m9004_MethodInfo;
extern "C" int32_t ArgInfo_GetInOutArgCount_m9004 (ArgInfo_t1616 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____inoutArgCount_1);
		return L_0;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern MethodInfo ArgInfo_GetInOutArgs_m9005_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t148* ArgInfo_GetInOutArgs_m9005 (ArgInfo_t1616 * __this, ObjectU5BU5D_t148* ___args, MethodInfo* method)
{
	static bool ArgInfo_GetInOutArgs_m9005_init;
	if (!ArgInfo_GetInOutArgs_m9005_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		ArgInfo_GetInOutArgs_m9005_init = true;
	}
	ObjectU5BU5D_t148* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->____inoutArgCount_1);
		V_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		ObjectU5BU5D_t148* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t148* L_3 = ___args;
		Int32U5BU5D_t38* L_4 = (__this->____paramMap_0);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6)));
		int32_t L_7 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, L_2)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (__this->____inoutArgCount_1);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0010;
		}
	}
	{
		ObjectU5BU5D_t148* L_11 = V_0;
		return L_11;
	}
}
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResult.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AsyncResult_t1621_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResultMethodDeclarations.h"

// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessage.h"
extern TypeInfo ManualResetEvent_t1209_il2cpp_TypeInfo;
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"
extern MethodInfo ManualResetEvent__ctor_m6019_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m591_MethodInfo;
extern MethodInfo AsyncResult_get_AsyncWaitHandle_m9008_MethodInfo;
extern MethodInfo EventWaitHandle_Set_m6020_MethodInfo;
extern MethodInfo AsyncCallback_Invoke_m6893_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
extern MethodInfo AsyncResult__ctor_m9006_MethodInfo;
extern "C" void AsyncResult__ctor_m9006 (AsyncResult_t1621 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern MethodInfo AsyncResult_get_AsyncState_m9007_MethodInfo;
extern "C" Object_t * AsyncResult_get_AsyncState_m9007 (AsyncResult_t1621 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1211 * AsyncResult_get_AsyncWaitHandle_m9008 (AsyncResult_t1621 * __this, MethodInfo* method)
{
	AsyncResult_t1621 * V_0 = {0};
	WaitHandle_t1211 * V_1 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t1621 * L_0 = V_0;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			WaitHandle_t1211 * L_1 = (__this->___handle_1);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->___completed_6);
			ManualResetEvent_t1209 * L_3 = (ManualResetEvent_t1209 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ManualResetEvent_t1209_il2cpp_TypeInfo));
			ManualResetEvent__ctor_m6019(L_3, L_2, /*hidden argument*/&ManualResetEvent__ctor_m6019_MethodInfo);
			__this->___handle_1 = L_3;
		}

IL_0021:
		{
			WaitHandle_t1211 * L_4 = (__this->___handle_1);
			V_1 = L_4;
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		AsyncResult_t1621 * L_5 = V_0;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_5, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0033:
	{
		WaitHandle_t1211 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern MethodInfo AsyncResult_get_CompletedSynchronously_m9009_MethodInfo;
extern "C" bool AsyncResult_get_CompletedSynchronously_m9009 (AsyncResult_t1621 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___sync_completed_5);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern MethodInfo AsyncResult_get_IsCompleted_m9010_MethodInfo;
extern "C" bool AsyncResult_get_IsCompleted_m9010 (AsyncResult_t1621 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_6);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern MethodInfo AsyncResult_get_EndInvokeCalled_m9011_MethodInfo;
extern "C" bool AsyncResult_get_EndInvokeCalled_m9011 (AsyncResult_t1621 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___endinvoke_called_7);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
extern MethodInfo AsyncResult_set_EndInvokeCalled_m9012_MethodInfo;
extern "C" void AsyncResult_set_EndInvokeCalled_m9012 (AsyncResult_t1621 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___endinvoke_called_7 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern MethodInfo AsyncResult_get_AsyncDelegate_m9013_MethodInfo;
extern "C" Object_t * AsyncResult_get_AsyncDelegate_m9013 (AsyncResult_t1621 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_delegate_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern MethodInfo AsyncResult_get_NextSink_m9014_MethodInfo;
extern "C" Object_t * AsyncResult_get_NextSink_m9014 (AsyncResult_t1621 * __this, MethodInfo* method)
{
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
extern MethodInfo AsyncResult_AsyncProcessMessage_m9015_MethodInfo;
extern "C" Object_t * AsyncResult_AsyncProcessMessage_m9015 (AsyncResult_t1621 * __this, Object_t * ___msg, Object_t * ___replySink, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern MethodInfo AsyncResult_GetReplyMessage_m9016_MethodInfo;
extern "C" Object_t * AsyncResult_GetReplyMessage_m9016 (AsyncResult_t1621 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___reply_message_14);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern MethodInfo AsyncResult_SetMessageCtrl_m9017_MethodInfo;
extern "C" void AsyncResult_SetMessageCtrl_m9017 (AsyncResult_t1621 * __this, Object_t * ___mc, MethodInfo* method)
{
	{
		Object_t * L_0 = ___mc;
		__this->___message_ctrl_13 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern MethodInfo AsyncResult_SetCompletedSynchronously_m9018_MethodInfo;
extern "C" void AsyncResult_SetCompletedSynchronously_m9018 (AsyncResult_t1621 * __this, bool ___completed, MethodInfo* method)
{
	{
		bool L_0 = ___completed;
		__this->___sync_completed_5 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern MethodInfo AsyncResult_EndInvoke_m9019_MethodInfo;
extern "C" Object_t * AsyncResult_EndInvoke_m9019 (AsyncResult_t1621 * __this, MethodInfo* method)
{
	AsyncResult_t1621 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t1621 * L_0 = V_0;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			bool L_1 = (__this->___completed_6);
			if (!L_1)
			{
				goto IL_0019;
			}
		}

IL_0010:
		{
			Object_t * L_2 = (__this->___reply_message_14);
			V_1 = L_2;
			IL2CPP_LEAVE(0x35, FINALLY_001b);
		}

IL_0019:
		{
			IL2CPP_LEAVE(0x22, FINALLY_001b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		AsyncResult_t1621 * L_3 = V_0;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0022:
	{
		WaitHandle_t1211 * L_4 = (WaitHandle_t1211 *)VirtFuncInvoker0< WaitHandle_t1211 * >::Invoke(&AsyncResult_get_AsyncWaitHandle_m9008_MethodInfo, __this);
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(&WaitHandle_WaitOne_m6030_MethodInfo, L_4);
		Object_t * L_5 = (__this->___reply_message_14);
		return L_5;
	}

IL_0035:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
extern MethodInfo AsyncResult_SyncProcessMessage_m9020_MethodInfo;
extern "C" Object_t * AsyncResult_SyncProcessMessage_m9020 (AsyncResult_t1621 * __this, Object_t * ___msg, MethodInfo* method)
{
	AsyncResult_t1621 * V_0 = {0};
	AsyncCallback_t311 * V_1 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___msg;
		__this->___reply_message_14 = L_0;
		V_0 = __this;
		AsyncResult_t1621 * L_1 = V_0;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_1, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->___completed_6 = 1;
			WaitHandle_t1211 * L_2 = (__this->___handle_1);
			if (!L_2)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			WaitHandle_t1211 * L_3 = (WaitHandle_t1211 *)VirtFuncInvoker0< WaitHandle_t1211 * >::Invoke(&AsyncResult_get_AsyncWaitHandle_m9008_MethodInfo, __this);
			NullCheck(((ManualResetEvent_t1209 *)Castclass(L_3, InitializedTypeInfo(&ManualResetEvent_t1209_il2cpp_TypeInfo))));
			EventWaitHandle_Set_m6020(((ManualResetEvent_t1209 *)Castclass(L_3, InitializedTypeInfo(&ManualResetEvent_t1209_il2cpp_TypeInfo))), /*hidden argument*/&EventWaitHandle_Set_m6020_MethodInfo);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x38, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		AsyncResult_t1621 * L_4 = V_0;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_4, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0038:
	{
		Object_t * L_5 = (__this->___async_callback_8);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_6 = (__this->___async_callback_8);
		V_1 = ((AsyncCallback_t311 *)Castclass(L_6, InitializedTypeInfo(&AsyncCallback_t311_il2cpp_TypeInfo)));
		AsyncCallback_t311 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker1< Object_t * >::Invoke(&AsyncCallback_Invoke_m6893_MethodInfo, L_7, __this);
	}

IL_0053:
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern MethodInfo AsyncResult_get_CallMessage_m9021_MethodInfo;
extern "C" MonoMethodMessage_t1618 * AsyncResult_get_CallMessage_m9021 (AsyncResult_t1621 * __this, MethodInfo* method)
{
	{
		MonoMethodMessage_t1618 * L_0 = (__this->___call_message_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
extern MethodInfo AsyncResult_set_CallMessage_m9022_MethodInfo;
extern "C" void AsyncResult_set_CallMessage_m9022 (AsyncResult_t1621 * __this, MonoMethodMessage_t1618 * ___value, MethodInfo* method)
{
	{
		MonoMethodMessage_t1618 * L_0 = ___value;
		__this->___call_message_12 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallD.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
extern TypeInfo MethodCall_t1622_il2cpp_TypeInfo;
extern TypeInfo IDictionary_t896_il2cpp_TypeInfo;
extern TypeInfo ConstructionCallDictionary_t1623_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t600_il2cpp_TypeInfo;
extern TypeInfo SerializationInfo_t700_il2cpp_TypeInfo;
extern TypeInfo StreamingContext_t701_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallDMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"
extern Il2CppType Dictionary_2_t600_0_0_0;
extern MethodInfo Type_GetType_m6828_MethodInfo;
extern MethodInfo MethodCall_get_Properties_m9064_MethodInfo;
extern MethodInfo MethodCall__ctor_m9054_MethodInfo;
extern MethodInfo MethodCall__ctor_m9053_MethodInfo;
extern MethodInfo ConstructionCallDictionary__ctor_m9037_MethodInfo;
extern MethodInfo MethodDictionary_GetInternalProperties_m9087_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m4831_MethodInfo;
extern MethodInfo Dictionary_2_Add_m4832_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m4833_MethodInfo;
extern MethodInfo MethodCall_InitMethodProperty_m9056_MethodInfo;
extern MethodInfo MethodCall_GetObjectData_m9057_MethodInfo;
extern MethodInfo ICollection_get_Count_m4749_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m4831_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m4832_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m4833_GenericMethod;


// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C" void ConstructionCall__ctor_m9023 (ConstructionCall_t1587 * __this, Type_t * ___type, MethodInfo* method)
{
	{
		MethodCall__ctor_m9054(__this, /*hidden argument*/&MethodCall__ctor_m9054_MethodInfo);
		Type_t * L_0 = ___type;
		__this->____activationType_14 = L_0;
		Type_t * L_1 = ___type;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3735_MethodInfo, L_1);
		__this->____activationTypeName_15 = L_2;
		__this->____isContextOk_16 = 1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo ConstructionCall__ctor_m9024_MethodInfo;
extern "C" void ConstructionCall__ctor_m9024 (ConstructionCall_t1587 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t700 * L_0 = ___info;
		StreamingContext_t701  L_1 = ___context;
		MethodCall__ctor_m9053(__this, L_0, L_1, /*hidden argument*/&MethodCall__ctor_m9053_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern MethodInfo ConstructionCall_InitDictionary_m9025_MethodInfo;
extern "C" void ConstructionCall_InitDictionary_m9025 (ConstructionCall_t1587 * __this, MethodInfo* method)
{
	ConstructionCallDictionary_t1623 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo));
		ConstructionCallDictionary_t1623 * L_0 = (ConstructionCallDictionary_t1623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo));
		ConstructionCallDictionary__ctor_m9037(L_0, __this, /*hidden argument*/&ConstructionCallDictionary__ctor_m9037_MethodInfo);
		V_0 = L_0;
		ConstructionCallDictionary_t1623 * L_1 = V_0;
		__this->___ExternalProperties_8 = L_1;
		ConstructionCallDictionary_t1623 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m9087(L_2, /*hidden argument*/&MethodDictionary_GetInternalProperties_m9087_MethodInfo);
		__this->___InternalProperties_9 = L_3;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C" void ConstructionCall_set_IsContextOk_m9026 (ConstructionCall_t1587 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____isContextOk_16 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern MethodInfo ConstructionCall_get_ActivationType_m9027_MethodInfo;
extern "C" Type_t * ConstructionCall_get_ActivationType_m9027 (ConstructionCall_t1587 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____activationType_14);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = (__this->____activationTypeName_15);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetType_m6828(NULL /*static, unused*/, L_1, /*hidden argument*/&Type_GetType_m6828_MethodInfo);
		__this->____activationType_14 = L_2;
	}

IL_0019:
	{
		Type_t * L_3 = (__this->____activationType_14);
		return L_3;
	}
}
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern MethodInfo ConstructionCall_get_ActivationTypeName_m9028_MethodInfo;
extern "C" String_t* ConstructionCall_get_ActivationTypeName_m9028 (ConstructionCall_t1587 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____activationTypeName_15);
		return L_0;
	}
}
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern MethodInfo ConstructionCall_get_Activator_m9029_MethodInfo;
extern "C" Object_t * ConstructionCall_get_Activator_m9029 (ConstructionCall_t1587 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____activator_11);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ConstructionCall_set_Activator_m9030 (ConstructionCall_t1587 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____activator_11 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern MethodInfo ConstructionCall_get_CallSiteActivationAttributes_m9031_MethodInfo;
extern "C" ObjectU5BU5D_t148* ConstructionCall_get_CallSiteActivationAttributes_m9031 (ConstructionCall_t1587 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->____activationAttributes_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C" void ConstructionCall_SetActivationAttributes_m9032 (ConstructionCall_t1587 * __this, ObjectU5BU5D_t148* ___attributes, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = ___attributes;
		__this->____activationAttributes_12 = L_0;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern MethodInfo ConstructionCall_get_ContextProperties_m9033_MethodInfo;
extern "C" Object_t * ConstructionCall_get_ContextProperties_m9033 (ConstructionCall_t1587 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____contextProperties_13);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList_t906 * L_1 = (ArrayList_t906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList__ctor_m4776(L_1, /*hidden argument*/&ArrayList__ctor_m4776_MethodInfo);
		__this->____contextProperties_13 = L_1;
	}

IL_0013:
	{
		Object_t * L_2 = (__this->____contextProperties_13);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern MethodInfo ConstructionCall_InitMethodProperty_m9034_MethodInfo;
extern TypeInfo* Dictionary_2_t600_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4831_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m4832_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m4833_MethodInfo_var;
extern "C" void ConstructionCall_InitMethodProperty_m9034 (ConstructionCall_t1587 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool ConstructionCall_InitMethodProperty_m9034_init;
	if (!ConstructionCall_InitMethodProperty_m9034_init)
	{
		Dictionary_2_t600_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t600_0_0_0);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		Dictionary_2__ctor_m4831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4831_GenericMethod);
		Dictionary_2_Add_m4832_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m4832_GenericMethod);
		Dictionary_2_TryGetValue_m4833_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m4833_GenericMethod);
		ConstructionCall_InitMethodProperty_m9034_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t600 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c4;
		}
	}
	{
		Dictionary_2_t600 * L_2 = ((ConstructionCall_t1587_StaticFields*)InitializedTypeInfo(&ConstructionCall_t1587_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map20_17;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t600 * L_3 = (Dictionary_2_t600 *)il2cpp_codegen_object_new (Dictionary_2_t600_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4831(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m4831_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t600 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_4, (String_t*) &_stringLiteral2029, 0);
		Dictionary_2_t600 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_5, (String_t*) &_stringLiteral2030, 1);
		Dictionary_2_t600 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_6, (String_t*) &_stringLiteral2031, 2);
		Dictionary_2_t600 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_7, (String_t*) &_stringLiteral2032, 3);
		Dictionary_2_t600 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_8, (String_t*) &_stringLiteral2033, 4);
		Dictionary_2_t600 * L_9 = V_1;
		((ConstructionCall_t1587_StaticFields*)InitializedTypeInfo(&ConstructionCall_t1587_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map20_17 = L_9;
	}

IL_0058:
	{
		Dictionary_2_t600 * L_10 = ((ConstructionCall_t1587_StaticFields*)InitializedTypeInfo(&ConstructionCall_t1587_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map20_17;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m4833_MethodInfo_var, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_0083;
		}
		if (L_13 == 1)
		{
			goto IL_0090;
		}
		if (L_13 == 2)
		{
			goto IL_009d;
		}
		if (L_13 == 3)
		{
			goto IL_00aa;
		}
		if (L_13 == 4)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00c4;
	}

IL_0083:
	{
		Object_t * L_14 = ___value;
		__this->____activator_11 = ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IActivator_t1585_il2cpp_TypeInfo)));
		return;
	}

IL_0090:
	{
		Object_t * L_15 = ___value;
		__this->____activationAttributes_12 = ((ObjectU5BU5D_t148*)Castclass(L_15, ObjectU5BU5D_t148_il2cpp_TypeInfo_var));
		return;
	}

IL_009d:
	{
		Object_t * L_16 = ___value;
		__this->____activationType_14 = ((Type_t *)Castclass(L_16, InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)));
		return;
	}

IL_00aa:
	{
		Object_t * L_17 = ___value;
		__this->____contextProperties_13 = ((Object_t *)Castclass(L_17, InitializedTypeInfo(&IList_t1035_il2cpp_TypeInfo)));
		return;
	}

IL_00b7:
	{
		Object_t * L_18 = ___value;
		__this->____activationTypeName_15 = ((String_t*)Castclass(L_18, (&String_t_il2cpp_TypeInfo)));
		return;
	}

IL_00c4:
	{
		String_t* L_19 = ___key;
		Object_t * L_20 = ___value;
		MethodCall_InitMethodProperty_m9056(__this, L_19, L_20, /*hidden argument*/&MethodCall_InitMethodProperty_m9056_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo ConstructionCall_GetObjectData_m9035_MethodInfo;
extern "C" void ConstructionCall_GetObjectData_m9035 (ConstructionCall_t1587 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		SerializationInfo_t700 * L_0 = ___info;
		StreamingContext_t701  L_1 = ___context;
		MethodCall_GetObjectData_m9057(__this, L_0, L_1, /*hidden argument*/&MethodCall_GetObjectData_m9057_MethodInfo);
		Object_t * L_2 = (__this->____contextProperties_13);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ICollection_get_Count_m4749_MethodInfo, L_4);
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (Object_t *)NULL;
	}

IL_001c:
	{
		SerializationInfo_t700 * L_6 = ___info;
		Object_t * L_7 = (__this->____activator_11);
		NullCheck(L_6);
		SerializationInfo_AddValue_m4793(L_6, (String_t*) &_stringLiteral2029, L_7, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		SerializationInfo_t700 * L_8 = ___info;
		ObjectU5BU5D_t148* L_9 = (__this->____activationAttributes_12);
		NullCheck(L_8);
		SerializationInfo_AddValue_m4793(L_8, (String_t*) &_stringLiteral2030, (Object_t *)(Object_t *)L_9, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		SerializationInfo_t700 * L_10 = ___info;
		NullCheck(L_10);
		SerializationInfo_AddValue_m4793(L_10, (String_t*) &_stringLiteral2031, NULL, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		SerializationInfo_t700 * L_11 = ___info;
		Object_t * L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m4793(L_11, (String_t*) &_stringLiteral2032, L_12, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		SerializationInfo_t700 * L_13 = ___info;
		String_t* L_14 = (__this->____activationTypeName_15);
		NullCheck(L_13);
		SerializationInfo_AddValue_m4793(L_13, (String_t*) &_stringLiteral2033, L_14, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern MethodInfo ConstructionCall_get_Properties_m9036_MethodInfo;
extern "C" Object_t * ConstructionCall_get_Properties_m9036 (ConstructionCall_t1587 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = MethodCall_get_Properties_m9064(__this, /*hidden argument*/&MethodCall_get_Properties_m9064_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary.h"
extern TypeInfo MethodDictionary_t1624_il2cpp_TypeInfo;
extern MethodInfo MethodDictionary__ctor_m9083_MethodInfo;
extern MethodInfo MethodDictionary_set_MethodKeys_m9085_MethodInfo;
extern MethodInfo IConstructionCallMessage_get_Activator_m11197_MethodInfo;
extern MethodInfo IConstructionCallMessage_get_CallSiteActivationAttributes_m11198_MethodInfo;
extern MethodInfo IConstructionCallMessage_get_ActivationTypeName_m11199_MethodInfo;
extern MethodInfo MethodDictionary_GetMethodProperty_m9091_MethodInfo;
extern MethodInfo IConstructionCallMessage_set_Activator_m11200_MethodInfo;
extern MethodInfo MethodDictionary_SetMethodProperty_m9092_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ConstructionCallDictionary__ctor_m9037 (ConstructionCallDictionary_t1623 * __this, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m9083(__this, L_0, /*hidden argument*/&MethodDictionary__ctor_m9083_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo));
		StringU5BU5D_t34* L_1 = ((ConstructionCallDictionary_t1623_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo)->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m9085(__this, L_1, /*hidden argument*/&MethodDictionary_set_MethodKeys_m9085_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.cctor()
extern MethodInfo ConstructionCallDictionary__cctor_m9038_MethodInfo;
extern TypeInfo* StringU5BU5D_t34_il2cpp_TypeInfo_var;
extern "C" void ConstructionCallDictionary__cctor_m9038 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool ConstructionCallDictionary__cctor_m9038_init;
	if (!ConstructionCallDictionary__cctor_m9038_init)
	{
		StringU5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t34_0_0_0);
		ConstructionCallDictionary__cctor_m9038_init = true;
	}
	{
		StringU5BU5D_t34* L_0 = ((StringU5BU5D_t34*)SZArrayNew(StringU5BU5D_t34_il2cpp_TypeInfo_var, ((int32_t)11)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral2034);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral2034;
		StringU5BU5D_t34* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral2035);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral2035;
		StringU5BU5D_t34* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral2036);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral2036;
		StringU5BU5D_t34* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral2037);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral2037;
		StringU5BU5D_t34* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral2038);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral2038;
		StringU5BU5D_t34* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral2039);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral2039;
		StringU5BU5D_t34* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral2030);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)(String_t*) &_stringLiteral2030;
		StringU5BU5D_t34* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 7);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral2031);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 7)) = (String_t*)(String_t*) &_stringLiteral2031;
		StringU5BU5D_t34* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 8);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral2032);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 8)) = (String_t*)(String_t*) &_stringLiteral2032;
		StringU5BU5D_t34* L_9 = L_8;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral2029);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, ((int32_t)9))) = (String_t*)(String_t*) &_stringLiteral2029;
		StringU5BU5D_t34* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)10));
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral2033);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, ((int32_t)10))) = (String_t*)(String_t*) &_stringLiteral2033;
		((ConstructionCallDictionary_t1623_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo)->static_fields)->___InternalKeys_6 = L_10;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ConstructionCallDictionary::GetMethodProperty(System.String)
extern MethodInfo ConstructionCallDictionary_GetMethodProperty_m9039_MethodInfo;
extern TypeInfo* Dictionary_2_t600_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4831_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m4832_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m4833_MethodInfo_var;
extern "C" Object_t * ConstructionCallDictionary_GetMethodProperty_m9039 (ConstructionCallDictionary_t1623 * __this, String_t* ___key, MethodInfo* method)
{
	static bool ConstructionCallDictionary_GetMethodProperty_m9039_init;
	if (!ConstructionCallDictionary_GetMethodProperty_m9039_init)
	{
		Dictionary_2_t600_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t600_0_0_0);
		Dictionary_2__ctor_m4831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4831_GenericMethod);
		Dictionary_2_Add_m4832_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m4832_GenericMethod);
		Dictionary_2_TryGetValue_m4833_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m4833_GenericMethod);
		ConstructionCallDictionary_GetMethodProperty_m9039_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t600 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo));
		Dictionary_2_t600 * L_2 = ((ConstructionCallDictionary_t1623_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map23_7;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t600 * L_3 = (Dictionary_2_t600 *)il2cpp_codegen_object_new (Dictionary_2_t600_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4831(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m4831_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t600 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_4, (String_t*) &_stringLiteral2029, 0);
		Dictionary_2_t600 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_5, (String_t*) &_stringLiteral2030, 1);
		Dictionary_2_t600 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_6, (String_t*) &_stringLiteral2031, 2);
		Dictionary_2_t600 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_7, (String_t*) &_stringLiteral2032, 3);
		Dictionary_2_t600 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_8, (String_t*) &_stringLiteral2033, 4);
		Dictionary_2_t600 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo));
		((ConstructionCallDictionary_t1623_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map23_7 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo));
		Dictionary_2_t600 * L_10 = ((ConstructionCallDictionary_t1623_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map23_7;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m4833_MethodInfo_var, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_0083;
		}
		if (L_13 == 1)
		{
			goto IL_0094;
		}
		if (L_13 == 2)
		{
			goto IL_00a5;
		}
		if (L_13 == 3)
		{
			goto IL_00b6;
		}
		if (L_13 == 4)
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d8;
	}

IL_0083:
	{
		Object_t * L_14 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IConstructionCallMessage_t1594_il2cpp_TypeInfo))));
		Object_t * L_15 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IConstructionCallMessage_get_Activator_m11197_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IConstructionCallMessage_t1594_il2cpp_TypeInfo))));
		return L_15;
	}

IL_0094:
	{
		Object_t * L_16 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_16, InitializedTypeInfo(&IConstructionCallMessage_t1594_il2cpp_TypeInfo))));
		ObjectU5BU5D_t148* L_17 = (ObjectU5BU5D_t148*)InterfaceFuncInvoker0< ObjectU5BU5D_t148* >::Invoke(&IConstructionCallMessage_get_CallSiteActivationAttributes_m11198_MethodInfo, ((Object_t *)Castclass(L_16, InitializedTypeInfo(&IConstructionCallMessage_t1594_il2cpp_TypeInfo))));
		return (Object_t *)L_17;
	}

IL_00a5:
	{
		Object_t * L_18 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_18, InitializedTypeInfo(&IConstructionCallMessage_t1594_il2cpp_TypeInfo))));
		Type_t * L_19 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(&IConstructionCallMessage_get_ActivationType_m11195_MethodInfo, ((Object_t *)Castclass(L_18, InitializedTypeInfo(&IConstructionCallMessage_t1594_il2cpp_TypeInfo))));
		return L_19;
	}

IL_00b6:
	{
		Object_t * L_20 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_20, InitializedTypeInfo(&IConstructionCallMessage_t1594_il2cpp_TypeInfo))));
		Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IConstructionCallMessage_get_ContextProperties_m11194_MethodInfo, ((Object_t *)Castclass(L_20, InitializedTypeInfo(&IConstructionCallMessage_t1594_il2cpp_TypeInfo))));
		return L_21;
	}

IL_00c7:
	{
		Object_t * L_22 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_22, InitializedTypeInfo(&IConstructionCallMessage_t1594_il2cpp_TypeInfo))));
		String_t* L_23 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IConstructionCallMessage_get_ActivationTypeName_m11199_MethodInfo, ((Object_t *)Castclass(L_22, InitializedTypeInfo(&IConstructionCallMessage_t1594_il2cpp_TypeInfo))));
		return L_23;
	}

IL_00d8:
	{
		String_t* L_24 = ___key;
		Object_t * L_25 = MethodDictionary_GetMethodProperty_m9091(__this, L_24, /*hidden argument*/&MethodDictionary_GetMethodProperty_m9091_MethodInfo);
		return L_25;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::SetMethodProperty(System.String,System.Object)
extern MethodInfo ConstructionCallDictionary_SetMethodProperty_m9040_MethodInfo;
extern TypeInfo* Dictionary_2_t600_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4831_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m4832_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m4833_MethodInfo_var;
extern "C" void ConstructionCallDictionary_SetMethodProperty_m9040 (ConstructionCallDictionary_t1623 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool ConstructionCallDictionary_SetMethodProperty_m9040_init;
	if (!ConstructionCallDictionary_SetMethodProperty_m9040_init)
	{
		Dictionary_2_t600_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t600_0_0_0);
		Dictionary_2__ctor_m4831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4831_GenericMethod);
		Dictionary_2_Add_m4832_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m4832_GenericMethod);
		Dictionary_2_TryGetValue_m4833_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m4833_GenericMethod);
		ConstructionCallDictionary_SetMethodProperty_m9040_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t600 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo));
		Dictionary_2_t600 * L_2 = ((ConstructionCallDictionary_t1623_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map24_8;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t600 * L_3 = (Dictionary_2_t600 *)il2cpp_codegen_object_new (Dictionary_2_t600_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4831(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m4831_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t600 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_4, (String_t*) &_stringLiteral2029, 0);
		Dictionary_2_t600 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_5, (String_t*) &_stringLiteral2030, 1);
		Dictionary_2_t600 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_6, (String_t*) &_stringLiteral2031, 1);
		Dictionary_2_t600 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_7, (String_t*) &_stringLiteral2032, 1);
		Dictionary_2_t600 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_8, (String_t*) &_stringLiteral2033, 1);
		Dictionary_2_t600 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo));
		((ConstructionCallDictionary_t1623_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map24_8 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo));
		Dictionary_2_t600 * L_10 = ((ConstructionCallDictionary_t1623_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1623_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map24_8;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m4833_MethodInfo_var, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0093;
	}

IL_0070:
	{
		Object_t * L_15 = (__this->____message_1);
		Object_t * L_16 = ___value;
		NullCheck(((Object_t *)Castclass(L_15, InitializedTypeInfo(&IConstructionCallMessage_t1594_il2cpp_TypeInfo))));
		InterfaceActionInvoker1< Object_t * >::Invoke(&IConstructionCallMessage_set_Activator_m11200_MethodInfo, ((Object_t *)Castclass(L_15, InitializedTypeInfo(&IConstructionCallMessage_t1594_il2cpp_TypeInfo))), ((Object_t *)Castclass(L_16, InitializedTypeInfo(&IActivator_t1585_il2cpp_TypeInfo))));
		goto IL_009d;
	}

IL_0088:
	{
		ArgumentException_t445 * L_17 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_17, (String_t*) &_stringLiteral2040, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0093:
	{
		String_t* L_18 = ___key;
		Object_t * L_19 = ___value;
		MethodDictionary_SetMethodProperty_m9092(__this, L_18, L_19, /*hidden argument*/&MethodDictionary_SetMethodProperty_m9092_MethodInfo);
		goto IL_009d;
	}

IL_009d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo EnvoyTerminatorSink__ctor_m9041_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.ctor()
extern "C" void EnvoyTerminatorSink__ctor_m9041 (EnvoyTerminatorSink_t1625 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.cctor()
extern MethodInfo EnvoyTerminatorSink__cctor_m9042_MethodInfo;
extern "C" void EnvoyTerminatorSink__cctor_m9042 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		EnvoyTerminatorSink_t1625 * L_0 = (EnvoyTerminatorSink_t1625 *)il2cpp_codegen_object_new (InitializedTypeInfo(&EnvoyTerminatorSink_t1625_il2cpp_TypeInfo));
		EnvoyTerminatorSink__ctor_m9041(L_0, /*hidden argument*/&EnvoyTerminatorSink__ctor_m9041_MethodInfo);
		((EnvoyTerminatorSink_t1625_StaticFields*)InitializedTypeInfo(&EnvoyTerminatorSink_t1625_il2cpp_TypeInfo)->static_fields)->___Instance_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Header_t1626_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderMethodDeclarations.h"

extern MethodInfo Header__ctor_m9044_MethodInfo;
extern MethodInfo Header__ctor_m9045_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object)
extern MethodInfo Header__ctor_m9043_MethodInfo;
extern "C" void Header__ctor_m9043 (Header_t1626 * __this, String_t* ____Name, Object_t * ____Value, MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		Header__ctor_m9044(__this, L_0, L_1, 1, /*hidden argument*/&Header__ctor_m9044_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean)
extern "C" void Header__ctor_m9044 (Header_t1626 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		bool L_2 = ____MustUnderstand;
		Header__ctor_m9045(__this, L_0, L_1, L_2, (String_t*)NULL, /*hidden argument*/&Header__ctor_m9045_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean,System.String)
extern "C" void Header__ctor_m9045 (Header_t1626 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, String_t* ____HeaderNamespace, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		String_t* L_0 = ____Name;
		__this->___Name_2 = L_0;
		Object_t * L_1 = ____Value;
		__this->___Value_3 = L_1;
		bool L_2 = ____MustUnderstand;
		__this->___MustUnderstand_1 = L_2;
		String_t* L_3 = ____HeaderNamespace;
		__this->___HeaderNamespace_0 = L_3;
		return;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContex.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LogicalCallContext_t1628_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemoti.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnume.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
extern TypeInfo CallContextRemotingData_t1627_il2cpp_TypeInfo;
extern TypeInfo SerializationInfoEnumerator_t1710_il2cpp_TypeInfo;
extern TypeInfo IDictionaryEnumerator_t897_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t900_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemotiMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern MethodInfo Hashtable_get_Count_m4978_MethodInfo;
extern MethodInfo CallContextRemotingData__ctor_m9051_MethodInfo;
extern MethodInfo SerializationInfo_GetEnumerator_m9448_MethodInfo;
extern MethodInfo SerializationInfoEnumerator_get_Current_m9456_MethodInfo;
extern MethodInfo SerializationEntry_get_Name_m9438_MethodInfo;
extern MethodInfo SerializationEntry_get_Value_m9440_MethodInfo;
extern MethodInfo LogicalCallContext_SetData_m9050_MethodInfo;
extern MethodInfo SerializationInfoEnumerator_MoveNext_m9460_MethodInfo;
extern MethodInfo Hashtable_GetEnumerator_m7643_MethodInfo;
extern MethodInfo DictionaryEntry_get_Key_m7605_MethodInfo;
extern MethodInfo DictionaryEntry_get_Value_m7606_MethodInfo;
extern MethodInfo Hashtable_set_Item_m4976_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
extern MethodInfo LogicalCallContext__ctor_m9046_MethodInfo;
extern "C" void LogicalCallContext__ctor_m9046 (LogicalCallContext_t1628 * __this, MethodInfo* method)
{
	{
		CallContextRemotingData_t1627 * L_0 = (CallContextRemotingData_t1627 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CallContextRemotingData_t1627_il2cpp_TypeInfo));
		CallContextRemotingData__ctor_m9051(L_0, /*hidden argument*/&CallContextRemotingData__ctor_m9051_MethodInfo);
		__this->____remotingData_1 = L_0;
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo LogicalCallContext__ctor_m9047_MethodInfo;
extern "C" void LogicalCallContext__ctor_m9047 (LogicalCallContext_t1628 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	SerializationEntry_t1708  V_0 = {0};
	SerializationInfoEnumerator_t1710 * V_1 = {0};
	{
		CallContextRemotingData_t1627 * L_0 = (CallContextRemotingData_t1627 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CallContextRemotingData_t1627_il2cpp_TypeInfo));
		CallContextRemotingData__ctor_m9051(L_0, /*hidden argument*/&CallContextRemotingData__ctor_m9051_MethodInfo);
		__this->____remotingData_1 = L_0;
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		SerializationInfo_t700 * L_1 = ___info;
		NullCheck(L_1);
		SerializationInfoEnumerator_t1710 * L_2 = SerializationInfo_GetEnumerator_m9448(L_1, /*hidden argument*/&SerializationInfo_GetEnumerator_m9448_MethodInfo);
		V_1 = L_2;
		goto IL_005c;
	}

IL_001a:
	{
		SerializationInfoEnumerator_t1710 * L_3 = V_1;
		NullCheck(L_3);
		SerializationEntry_t1708  L_4 = SerializationInfoEnumerator_get_Current_m9456(L_3, /*hidden argument*/&SerializationInfoEnumerator_get_Current_m9456_MethodInfo);
		V_0 = L_4;
		String_t* L_5 = SerializationEntry_get_Name_m9438((&V_0), /*hidden argument*/&SerializationEntry_get_Name_m9438_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_6 = String_op_Equality_m641(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral2041, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		Object_t * L_7 = SerializationEntry_get_Value_m9440((&V_0), /*hidden argument*/&SerializationEntry_get_Value_m9440_MethodInfo);
		__this->____remotingData_1 = ((CallContextRemotingData_t1627 *)Castclass(L_7, InitializedTypeInfo(&CallContextRemotingData_t1627_il2cpp_TypeInfo)));
		goto IL_005c;
	}

IL_0048:
	{
		String_t* L_8 = SerializationEntry_get_Name_m9438((&V_0), /*hidden argument*/&SerializationEntry_get_Name_m9438_MethodInfo);
		Object_t * L_9 = SerializationEntry_get_Value_m9440((&V_0), /*hidden argument*/&SerializationEntry_get_Value_m9440_MethodInfo);
		LogicalCallContext_SetData_m9050(__this, L_8, L_9, /*hidden argument*/&LogicalCallContext_SetData_m9050_MethodInfo);
	}

IL_005c:
	{
		SerializationInfoEnumerator_t1710 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&SerializationInfoEnumerator_MoveNext_m9460_MethodInfo, L_10);
		if (L_11)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.LogicalCallContext::get_HasInfo()
extern MethodInfo LogicalCallContext_get_HasInfo_m9048_MethodInfo;
extern "C" bool LogicalCallContext_get_HasInfo_m9048 (LogicalCallContext_t1628 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Hashtable_t893 * L_0 = (__this->____data_0);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Hashtable_t893 * L_1 = (__this->____data_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Hashtable_get_Count_m4978_MethodInfo, L_1);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo LogicalCallContext_GetObjectData_m9049_MethodInfo;
extern "C" void LogicalCallContext_GetObjectData_m9049 (LogicalCallContext_t1628 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	DictionaryEntry_t900  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t700 * L_0 = ___info;
		CallContextRemotingData_t1627 * L_1 = (__this->____remotingData_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m4793(L_0, (String_t*) &_stringLiteral2041, L_1, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		Hashtable_t893 * L_2 = (__this->____data_0);
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		Hashtable_t893 * L_3 = (__this->____data_0);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Hashtable_GetEnumerator_m7643_MethodInfo, L_3);
		V_1 = L_4;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_0027:
		{
			Object_t * L_5 = V_1;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_5);
			V_0 = ((*(DictionaryEntry_t900 *)((DictionaryEntry_t900 *)UnBox (L_6, InitializedTypeInfo(&DictionaryEntry_t900_il2cpp_TypeInfo)))));
			SerializationInfo_t700 * L_7 = ___info;
			Object_t * L_8 = DictionaryEntry_get_Key_m7605((&V_0), /*hidden argument*/&DictionaryEntry_get_Key_m7605_MethodInfo);
			Object_t * L_9 = DictionaryEntry_get_Value_m7606((&V_0), /*hidden argument*/&DictionaryEntry_get_Value_m7606_MethodInfo);
			NullCheck(L_7);
			SerializationInfo_AddValue_m4793(L_7, ((String_t*)Castclass(L_8, (&String_t_il2cpp_TypeInfo))), L_9, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		}

IL_004c:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_10);
			if (L_11)
			{
				goto IL_0027;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_2 = ((Object_t *)IsInst(L_12, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_13 = V_2;
			if (L_13)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(86)
		}

IL_0061:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_14);
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::SetData(System.String,System.Object)
extern "C" void LogicalCallContext_SetData_m9050 (LogicalCallContext_t1628 * __this, String_t* ___name, Object_t * ___data, MethodInfo* method)
{
	{
		Hashtable_t893 * L_0 = (__this->____data_0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable_t893 * L_1 = (Hashtable_t893 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable__ctor_m4969(L_1, /*hidden argument*/&Hashtable__ctor_m4969_MethodInfo);
		__this->____data_0 = L_1;
	}

IL_0013:
	{
		Hashtable_t893 * L_2 = (__this->____data_0);
		String_t* L_3 = ___name;
		Object_t * L_4 = ___data;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_set_Item_m4976_MethodInfo, L_2, L_3, L_4);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.CallContextRemotingData::.ctor()
extern "C" void CallContextRemotingData__ctor_m9051 (CallContextRemotingData_t1627 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDiction.h"
extern TypeInfo MethodCallDictionary_t1630_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDictionMethodDeclarations.h"
extern MethodInfo MethodCall_set_Uri_m9068_MethodInfo;
extern MethodInfo MethodCall_ResolveMethod_m9071_MethodInfo;
extern MethodInfo MethodCall_InitDictionary_m9065_MethodInfo;
extern MethodInfo MethodCall_get_MethodBase_m9061_MethodInfo;
extern MethodInfo MethodBase_GetGenericArguments_m8670_MethodInfo;
extern MethodInfo MethodCall_Init_m9070_MethodInfo;
extern MethodInfo IDictionary_set_Item_m4751_MethodInfo;
extern MethodInfo IDictionary_GetEnumerator_m4757_MethodInfo;
extern MethodInfo MethodCallDictionary__ctor_m9075_MethodInfo;
extern MethodInfo RemotingServices_GetServerTypeForUri_m9214_MethodInfo;
extern MethodInfo String_Concat_m3681_MethodInfo;
extern MethodInfo MethodCall_CastTo_m9072_MethodInfo;
extern MethodInfo String_Concat_m97_MethodInfo;
extern MethodInfo RemotingServices_GetMethodBaseFromName_m9222_MethodInfo;
extern MethodInfo String_Concat_m557_MethodInfo;
extern MethodInfo Type_get_IsInterface_m6814_MethodInfo;
extern MethodInfo RemotingServices_GetVirtualMethod_m9212_MethodInfo;
extern MethodInfo RemotingServices_GetMethodBaseFromMethodMessage_m9221_MethodInfo;
extern MethodInfo MethodCall_get_TypeName_m9066_MethodInfo;
extern MethodInfo MethodBase_get_IsGenericMethod_m8673_MethodInfo;
extern MethodInfo MethodBase_get_ContainsGenericParameters_m8671_MethodInfo;
extern MethodInfo MethodCall_get_GenericArguments_m9074_MethodInfo;
extern MethodInfo MethodCall_GetTypeNameFromAssemblyQualifiedName_m9073_MethodInfo;
extern MethodInfo String_IndexOf_m3684_MethodInfo;
extern MethodInfo String_IndexOf_m5042_MethodInfo;
extern MethodInfo String_Substring_m2201_MethodInfo;
extern MethodInfo String_Trim_m3680_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
extern MethodInfo MethodCall__ctor_m9052_MethodInfo;
extern "C" void MethodCall__ctor_m9052 (MethodCall_t1622 * __this, HeaderU5BU5D_t1629* ___h1, MethodInfo* method)
{
	Header_t1626 * V_0 = {0};
	HeaderU5BU5D_t1629* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		VirtActionInvoker0::Invoke(&MethodCall_Init_m9070_MethodInfo, __this);
		HeaderU5BU5D_t1629* L_0 = ___h1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		HeaderU5BU5D_t1629* L_1 = ___h1;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0015;
		}
	}

IL_0014:
	{
		return;
	}

IL_0015:
	{
		HeaderU5BU5D_t1629* L_2 = ___h1;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0035;
	}

IL_001b:
	{
		HeaderU5BU5D_t1629* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Header_t1626 **)(Header_t1626 **)SZArrayLdElema(L_3, L_5));
		Header_t1626 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (L_6->___Name_2);
		Header_t1626 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___Value_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(&MethodCall_InitMethodProperty_m9056_MethodInfo, __this, L_7, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		HeaderU5BU5D_t1629* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		MethodCall_ResolveMethod_m9071(__this, /*hidden argument*/&MethodCall_ResolveMethod_m9071_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MethodCall__ctor_m9053 (MethodCall_t1622 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	SerializationEntry_t1708  V_0 = {0};
	SerializationInfoEnumerator_t1710 * V_1 = {0};
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		VirtActionInvoker0::Invoke(&MethodCall_Init_m9070_MethodInfo, __this);
		SerializationInfo_t700 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t1710 * L_1 = SerializationInfo_GetEnumerator_m9448(L_0, /*hidden argument*/&SerializationInfo_GetEnumerator_m9448_MethodInfo);
		V_1 = L_1;
		goto IL_0030;
	}

IL_0015:
	{
		SerializationInfoEnumerator_t1710 * L_2 = V_1;
		NullCheck(L_2);
		SerializationEntry_t1708  L_3 = SerializationInfoEnumerator_get_Current_m9456(L_2, /*hidden argument*/&SerializationInfoEnumerator_get_Current_m9456_MethodInfo);
		V_0 = L_3;
		String_t* L_4 = SerializationEntry_get_Name_m9438((&V_0), /*hidden argument*/&SerializationEntry_get_Name_m9438_MethodInfo);
		Object_t * L_5 = SerializationEntry_get_Value_m9440((&V_0), /*hidden argument*/&SerializationEntry_get_Value_m9440_MethodInfo);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(&MethodCall_InitMethodProperty_m9056_MethodInfo, __this, L_4, L_5);
	}

IL_0030:
	{
		SerializationInfoEnumerator_t1710 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&SerializationInfoEnumerator_MoveNext_m9460_MethodInfo, L_6);
		if (L_7)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
extern "C" void MethodCall__ctor_m9054 (MethodCall_t1622 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern MethodInfo MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m9055_MethodInfo;
extern "C" void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m9055 (MethodCall_t1622 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(&MethodCall_set_Uri_m9068_MethodInfo, __this, L_0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
extern TypeInfo* Dictionary_2_t600_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t670_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4831_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m4832_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m4833_MethodInfo_var;
extern "C" void MethodCall_InitMethodProperty_m9056 (MethodCall_t1622 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool MethodCall_InitMethodProperty_m9056_init;
	if (!MethodCall_InitMethodProperty_m9056_init)
	{
		Dictionary_2_t600_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t600_0_0_0);
		TypeU5BU5D_t670_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t670_0_0_0);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		Dictionary_2__ctor_m4831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4831_GenericMethod);
		Dictionary_2_Add_m4832_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m4832_GenericMethod);
		Dictionary_2_TryGetValue_m4833_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m4833_GenericMethod);
		MethodCall_InitMethodProperty_m9056_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t600 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0101;
		}
	}
	{
		Dictionary_2_t600 * L_2 = ((MethodCall_t1622_StaticFields*)InitializedTypeInfo(&MethodCall_t1622_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map1F_10;
		if (L_2)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_t600 * L_3 = (Dictionary_2_t600 *)il2cpp_codegen_object_new (Dictionary_2_t600_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4831(L_3, 7, /*hidden argument*/Dictionary_2__ctor_m4831_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t600 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_4, (String_t*) &_stringLiteral2036, 0);
		Dictionary_2_t600 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_5, (String_t*) &_stringLiteral2035, 1);
		Dictionary_2_t600 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_6, (String_t*) &_stringLiteral2037, 2);
		Dictionary_2_t600 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_7, (String_t*) &_stringLiteral2038, 3);
		Dictionary_2_t600 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_8, (String_t*) &_stringLiteral2039, 4);
		Dictionary_2_t600 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_9, (String_t*) &_stringLiteral2034, 5);
		Dictionary_2_t600 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_10, (String_t*) &_stringLiteral2042, 6);
		Dictionary_2_t600 * L_11 = V_1;
		((MethodCall_t1622_StaticFields*)InitializedTypeInfo(&MethodCall_t1622_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map1F_10 = L_11;
	}

IL_0070:
	{
		Dictionary_2_t600 * L_12 = ((MethodCall_t1622_StaticFields*)InitializedTypeInfo(&MethodCall_t1622_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map1F_10;
		String_t* L_13 = V_0;
		NullCheck(L_12);
		bool L_14 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m4833_MethodInfo_var, L_12, L_13, (&V_2));
		if (!L_14)
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_15 = V_2;
		if (L_15 == 0)
		{
			goto IL_00a6;
		}
		if (L_15 == 1)
		{
			goto IL_00b3;
		}
		if (L_15 == 2)
		{
			goto IL_00c0;
		}
		if (L_15 == 3)
		{
			goto IL_00cd;
		}
		if (L_15 == 4)
		{
			goto IL_00da;
		}
		if (L_15 == 5)
		{
			goto IL_00e7;
		}
		if (L_15 == 6)
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_0101;
	}

IL_00a6:
	{
		Object_t * L_16 = ___value;
		__this->____typeName_1 = ((String_t*)Castclass(L_16, (&String_t_il2cpp_TypeInfo)));
		return;
	}

IL_00b3:
	{
		Object_t * L_17 = ___value;
		__this->____methodName_2 = ((String_t*)Castclass(L_17, (&String_t_il2cpp_TypeInfo)));
		return;
	}

IL_00c0:
	{
		Object_t * L_18 = ___value;
		__this->____methodSignature_4 = ((TypeU5BU5D_t670*)Castclass(L_18, TypeU5BU5D_t670_il2cpp_TypeInfo_var));
		return;
	}

IL_00cd:
	{
		Object_t * L_19 = ___value;
		__this->____args_3 = ((ObjectU5BU5D_t148*)Castclass(L_19, ObjectU5BU5D_t148_il2cpp_TypeInfo_var));
		return;
	}

IL_00da:
	{
		Object_t * L_20 = ___value;
		__this->____callContext_6 = ((LogicalCallContext_t1628 *)Castclass(L_20, InitializedTypeInfo(&LogicalCallContext_t1628_il2cpp_TypeInfo)));
		return;
	}

IL_00e7:
	{
		Object_t * L_21 = ___value;
		__this->____uri_0 = ((String_t*)Castclass(L_21, (&String_t_il2cpp_TypeInfo)));
		return;
	}

IL_00f4:
	{
		Object_t * L_22 = ___value;
		__this->____genericArguments_7 = ((TypeU5BU5D_t670*)Castclass(L_22, TypeU5BU5D_t670_il2cpp_TypeInfo_var));
		return;
	}

IL_0101:
	{
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&MethodCall_get_Properties_m9064_MethodInfo, __this);
		String_t* L_24 = ___key;
		Object_t * L_25 = ___value;
		NullCheck(L_23);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(&IDictionary_set_Item_m4751_MethodInfo, L_23, L_24, L_25);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MethodCall_GetObjectData_m9057 (MethodCall_t1622 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	DictionaryEntry_t900  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t700 * L_0 = ___info;
		String_t* L_1 = (__this->____typeName_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m4793(L_0, (String_t*) &_stringLiteral2036, L_1, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		SerializationInfo_t700 * L_2 = ___info;
		String_t* L_3 = (__this->____methodName_2);
		NullCheck(L_2);
		SerializationInfo_AddValue_m4793(L_2, (String_t*) &_stringLiteral2035, L_3, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		SerializationInfo_t700 * L_4 = ___info;
		TypeU5BU5D_t670* L_5 = (__this->____methodSignature_4);
		NullCheck(L_4);
		SerializationInfo_AddValue_m4793(L_4, (String_t*) &_stringLiteral2037, (Object_t *)(Object_t *)L_5, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		SerializationInfo_t700 * L_6 = ___info;
		ObjectU5BU5D_t148* L_7 = (__this->____args_3);
		NullCheck(L_6);
		SerializationInfo_AddValue_m4793(L_6, (String_t*) &_stringLiteral2038, (Object_t *)(Object_t *)L_7, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		SerializationInfo_t700 * L_8 = ___info;
		LogicalCallContext_t1628 * L_9 = (__this->____callContext_6);
		NullCheck(L_8);
		SerializationInfo_AddValue_m4793(L_8, (String_t*) &_stringLiteral2039, L_9, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		SerializationInfo_t700 * L_10 = ___info;
		String_t* L_11 = (__this->____uri_0);
		NullCheck(L_10);
		SerializationInfo_AddValue_m4793(L_10, (String_t*) &_stringLiteral2034, L_11, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		SerializationInfo_t700 * L_12 = ___info;
		TypeU5BU5D_t670* L_13 = (__this->____genericArguments_7);
		NullCheck(L_12);
		SerializationInfo_AddValue_m4793(L_12, (String_t*) &_stringLiteral2042, (Object_t *)(Object_t *)L_13, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		Object_t * L_14 = (__this->___InternalProperties_9);
		if (!L_14)
		{
			goto IL_00ce;
		}
	}
	{
		Object_t * L_15 = (__this->___InternalProperties_9);
		NullCheck(L_15);
		Object_t * L_16 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IDictionary_GetEnumerator_m4757_MethodInfo, L_15);
		V_1 = L_16;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b2;
		}

IL_008d:
		{
			Object_t * L_17 = V_1;
			NullCheck(L_17);
			Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_17);
			V_0 = ((*(DictionaryEntry_t900 *)((DictionaryEntry_t900 *)UnBox (L_18, InitializedTypeInfo(&DictionaryEntry_t900_il2cpp_TypeInfo)))));
			SerializationInfo_t700 * L_19 = ___info;
			Object_t * L_20 = DictionaryEntry_get_Key_m7605((&V_0), /*hidden argument*/&DictionaryEntry_get_Key_m7605_MethodInfo);
			Object_t * L_21 = DictionaryEntry_get_Value_m7606((&V_0), /*hidden argument*/&DictionaryEntry_get_Value_m7606_MethodInfo);
			NullCheck(L_19);
			SerializationInfo_AddValue_m4793(L_19, ((String_t*)Castclass(L_20, (&String_t_il2cpp_TypeInfo))), L_21, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		}

IL_00b2:
		{
			Object_t * L_22 = V_1;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_22);
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_00ba:
		{
			IL2CPP_LEAVE(0xCE, FINALLY_00bc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_00bc;
	}

FINALLY_00bc:
	{ // begin finally (depth: 1)
		{
			Object_t * L_24 = V_1;
			V_2 = ((Object_t *)IsInst(L_24, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_25 = V_2;
			if (L_25)
			{
				goto IL_00c7;
			}
		}

IL_00c6:
		{
			IL2CPP_END_FINALLY(188)
		}

IL_00c7:
		{
			Object_t * L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_26);
			IL2CPP_END_FINALLY(188)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(188)
	{
		IL2CPP_JUMP_TBL(0xCE, IL_00ce)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_00ce:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MethodCall::get_ArgCount()
extern MethodInfo MethodCall_get_ArgCount_m9058_MethodInfo;
extern "C" int32_t MethodCall_get_ArgCount_m9058 (MethodCall_t1622 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->____args_3);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern MethodInfo MethodCall_get_Args_m9059_MethodInfo;
extern "C" ObjectU5BU5D_t148* MethodCall_get_Args_m9059 (MethodCall_t1622 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->____args_3);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
extern MethodInfo MethodCall_get_LogicalCallContext_m9060_MethodInfo;
extern "C" LogicalCallContext_t1628 * MethodCall_get_LogicalCallContext_m9060 (MethodCall_t1622 * __this, MethodInfo* method)
{
	{
		LogicalCallContext_t1628 * L_0 = (__this->____callContext_6);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		LogicalCallContext_t1628 * L_1 = (LogicalCallContext_t1628 *)il2cpp_codegen_object_new (InitializedTypeInfo(&LogicalCallContext_t1628_il2cpp_TypeInfo));
		LogicalCallContext__ctor_m9046(L_1, /*hidden argument*/&LogicalCallContext__ctor_m9046_MethodInfo);
		__this->____callContext_6 = L_1;
	}

IL_0013:
	{
		LogicalCallContext_t1628 * L_2 = (__this->____callContext_6);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern "C" MethodBase_t750 * MethodCall_get_MethodBase_m9061 (MethodCall_t1622 * __this, MethodInfo* method)
{
	{
		MethodBase_t750 * L_0 = (__this->____methodBase_5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MethodCall_ResolveMethod_m9071(__this, /*hidden argument*/&MethodCall_ResolveMethod_m9071_MethodInfo);
	}

IL_000e:
	{
		MethodBase_t750 * L_1 = (__this->____methodBase_5);
		return L_1;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern MethodInfo MethodCall_get_MethodName_m9062_MethodInfo;
extern "C" String_t* MethodCall_get_MethodName_m9062 (MethodCall_t1622 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____methodName_2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		MethodBase_t750 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3679_MethodInfo, L_1);
		__this->____methodName_2 = L_2;
	}

IL_0019:
	{
		String_t* L_3 = (__this->____methodName_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
extern MethodInfo MethodCall_get_MethodSignature_m9063_MethodInfo;
extern TypeInfo* TypeU5BU5D_t670_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodCall_get_MethodSignature_m9063 (MethodCall_t1622 * __this, MethodInfo* method)
{
	static bool MethodCall_get_MethodSignature_m9063_init;
	if (!MethodCall_get_MethodSignature_m9063_init)
	{
		TypeU5BU5D_t670_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t670_0_0_0);
		MethodCall_get_MethodSignature_m9063_init = true;
	}
	ParameterInfoU5BU5D_t751* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t670* L_0 = (__this->____methodSignature_4);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t750 * L_1 = (__this->____methodBase_5);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t750 * L_2 = (__this->____methodBase_5);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t751* L_3 = (ParameterInfoU5BU5D_t751*)VirtFuncInvoker0< ParameterInfoU5BU5D_t751* >::Invoke(&MethodBase_GetParameters_m3694_MethodInfo, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t751* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_4 = ((TypeU5BU5D_t670*)SZArrayNew(TypeU5BU5D_t670_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		TypeU5BU5D_t670* L_5 = (__this->____methodSignature_4);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t751* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3695_MethodInfo, (*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6)) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t751* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		TypeU5BU5D_t670* L_14 = (__this->____methodSignature_4);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern "C" Object_t * MethodCall_get_Properties_m9064 (MethodCall_t1622 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___ExternalProperties_8);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(&MethodCall_InitDictionary_m9065_MethodInfo, __this);
	}

IL_000e:
	{
		Object_t * L_1 = (__this->___ExternalProperties_8);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
extern "C" void MethodCall_InitDictionary_m9065 (MethodCall_t1622 * __this, MethodInfo* method)
{
	MethodCallDictionary_t1630 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MethodCallDictionary_t1630_il2cpp_TypeInfo));
		MethodCallDictionary_t1630 * L_0 = (MethodCallDictionary_t1630 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MethodCallDictionary_t1630_il2cpp_TypeInfo));
		MethodCallDictionary__ctor_m9075(L_0, __this, /*hidden argument*/&MethodCallDictionary__ctor_m9075_MethodInfo);
		V_0 = L_0;
		MethodCallDictionary_t1630 * L_1 = V_0;
		__this->___ExternalProperties_8 = L_1;
		MethodCallDictionary_t1630 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m9087(L_2, /*hidden argument*/&MethodDictionary_GetInternalProperties_m9087_MethodInfo);
		__this->___InternalProperties_9 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern "C" String_t* MethodCall_get_TypeName_m9066 (MethodCall_t1622 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____typeName_1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		MethodBase_t750 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3692_MethodInfo, L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3735_MethodInfo, L_2);
		__this->____typeName_1 = L_3;
	}

IL_001e:
	{
		String_t* L_4 = (__this->____typeName_1);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
extern MethodInfo MethodCall_get_Uri_m9067_MethodInfo;
extern "C" String_t* MethodCall_get_Uri_m9067 (MethodCall_t1622 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern "C" void MethodCall_set_Uri_m9068 (MethodCall_t1622 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_0 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodCall::GetArg(System.Int32)
extern MethodInfo MethodCall_GetArg_m9069_MethodInfo;
extern "C" Object_t * MethodCall_GetArg_m9069 (MethodCall_t1622 * __this, int32_t ___argNum, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->____args_3);
		int32_t L_1 = ___argNum;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern "C" void MethodCall_Init_m9070 (MethodCall_t1622 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
extern TypeInfo* StringU5BU5D_t34_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void MethodCall_ResolveMethod_m9071 (MethodCall_t1622 * __this, MethodInfo* method)
{
	static bool MethodCall_ResolveMethod_m9071_init;
	if (!MethodCall_ResolveMethod_m9071_init)
	{
		StringU5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t34_0_0_0);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		MethodCall_ResolveMethod_m9071_init = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	Type_t * V_2 = {0};
	String_t* G_B5_0 = {0};
	{
		String_t* L_0 = (__this->____uri_0);
		if (!L_0)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_1 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1661_il2cpp_TypeInfo));
		Type_t * L_2 = RemotingServices_GetServerTypeForUri_m9214(NULL /*static, unused*/, L_1, /*hidden argument*/&RemotingServices_GetServerTypeForUri_m9214_MethodInfo);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_4 = (__this->____typeName_1);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_5 = (__this->____typeName_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral142, L_5, (String_t*) &_stringLiteral143, /*hidden argument*/&String_Concat_m98_MethodInfo);
		G_B5_0 = L_6;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B5_0 = L_7;
	}

IL_003e:
	{
		V_1 = G_B5_0;
		String_t* L_8 = V_1;
		String_t* L_9 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = String_Concat_m3681(NULL /*static, unused*/, (String_t*) &_stringLiteral2043, L_8, (String_t*) &_stringLiteral2044, L_9, /*hidden argument*/&String_Concat_m3681_MethodInfo);
		RemotingException_t1660 * L_11 = (RemotingException_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1660_il2cpp_TypeInfo));
		RemotingException__ctor_m9209(L_11, L_10, /*hidden argument*/&RemotingException__ctor_m9209_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005b:
	{
		String_t* L_12 = (__this->____typeName_1);
		Type_t * L_13 = V_0;
		Type_t * L_14 = MethodCall_CastTo_m9072(__this, L_12, L_13, /*hidden argument*/&MethodCall_CastTo_m9072_MethodInfo);
		V_2 = L_14;
		Type_t * L_15 = V_2;
		if (L_15)
		{
			goto IL_00a7;
		}
	}
	{
		StringU5BU5D_t34* L_16 = ((StringU5BU5D_t34*)SZArrayNew(StringU5BU5D_t34_il2cpp_TypeInfo_var, 5));
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral2045);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 0)) = (String_t*)(String_t*) &_stringLiteral2045;
		StringU5BU5D_t34* L_17 = L_16;
		String_t* L_18 = (__this->____typeName_1);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, 1)) = (String_t*)L_18;
		StringU5BU5D_t34* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral2046);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 2)) = (String_t*)(String_t*) &_stringLiteral2046;
		StringU5BU5D_t34* L_20 = L_19;
		Type_t * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3737_MethodInfo, L_21);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_22);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, 3)) = (String_t*)L_22;
		StringU5BU5D_t34* L_23 = L_20;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 4);
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral136);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, 4)) = (String_t*)(String_t*) &_stringLiteral136;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_24 = String_Concat_m97(NULL /*static, unused*/, L_23, /*hidden argument*/&String_Concat_m97_MethodInfo);
		RemotingException_t1660 * L_25 = (RemotingException_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1660_il2cpp_TypeInfo));
		RemotingException__ctor_m9209(L_25, L_24, /*hidden argument*/&RemotingException__ctor_m9209_MethodInfo);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00a7:
	{
		Type_t * L_26 = V_2;
		String_t* L_27 = (__this->____methodName_2);
		TypeU5BU5D_t670* L_28 = (__this->____methodSignature_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1661_il2cpp_TypeInfo));
		MethodBase_t750 * L_29 = RemotingServices_GetMethodBaseFromName_m9222(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/&RemotingServices_GetMethodBaseFromName_m9222_MethodInfo);
		__this->____methodBase_5 = L_29;
		MethodBase_t750 * L_30 = (__this->____methodBase_5);
		if (L_30)
		{
			goto IL_00f5;
		}
	}
	{
		ObjectU5BU5D_t148* L_31 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 4));
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, (String_t*) &_stringLiteral2047);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)(String_t*) &_stringLiteral2047;
		ObjectU5BU5D_t148* L_32 = L_31;
		String_t* L_33 = (__this->____methodName_2);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 1);
		ArrayElementTypeCheck (L_32, L_33);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 1)) = (Object_t *)L_33;
		ObjectU5BU5D_t148* L_34 = L_32;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 2);
		ArrayElementTypeCheck (L_34, (String_t*) &_stringLiteral2048);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, 2)) = (Object_t *)(String_t*) &_stringLiteral2048;
		ObjectU5BU5D_t148* L_35 = L_34;
		Type_t * L_36 = V_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 3);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 3)) = (Object_t *)L_36;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_37 = String_Concat_m557(NULL /*static, unused*/, L_35, /*hidden argument*/&String_Concat_m557_MethodInfo);
		RemotingException_t1660 * L_38 = (RemotingException_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1660_il2cpp_TypeInfo));
		RemotingException__ctor_m9209(L_38, L_37, /*hidden argument*/&RemotingException__ctor_m9209_MethodInfo);
		il2cpp_codegen_raise_exception(L_38);
	}

IL_00f5:
	{
		Type_t * L_39 = V_2;
		Type_t * L_40 = V_0;
		if ((((Object_t*)(Type_t *)L_39) == ((Object_t*)(Type_t *)L_40)))
		{
			goto IL_0151;
		}
	}
	{
		Type_t * L_41 = V_2;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m6814_MethodInfo, L_41);
		if (!L_42)
		{
			goto IL_0151;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck(L_43);
		bool L_44 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m6814_MethodInfo, L_43);
		if (L_44)
		{
			goto IL_0151;
		}
	}
	{
		Type_t * L_45 = V_0;
		MethodBase_t750 * L_46 = (__this->____methodBase_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1661_il2cpp_TypeInfo));
		MethodBase_t750 * L_47 = RemotingServices_GetVirtualMethod_m9212(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/&RemotingServices_GetVirtualMethod_m9212_MethodInfo);
		__this->____methodBase_5 = L_47;
		MethodBase_t750 * L_48 = (__this->____methodBase_5);
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		ObjectU5BU5D_t148* L_49 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 4));
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 0);
		ArrayElementTypeCheck (L_49, (String_t*) &_stringLiteral2047);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 0)) = (Object_t *)(String_t*) &_stringLiteral2047;
		ObjectU5BU5D_t148* L_50 = L_49;
		String_t* L_51 = (__this->____methodName_2);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 1);
		ArrayElementTypeCheck (L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 1)) = (Object_t *)L_51;
		ObjectU5BU5D_t148* L_52 = L_50;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 2);
		ArrayElementTypeCheck (L_52, (String_t*) &_stringLiteral2048);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 2)) = (Object_t *)(String_t*) &_stringLiteral2048;
		ObjectU5BU5D_t148* L_53 = L_52;
		Type_t * L_54 = V_0;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 3);
		ArrayElementTypeCheck (L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 3)) = (Object_t *)L_54;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_55 = String_Concat_m557(NULL /*static, unused*/, L_53, /*hidden argument*/&String_Concat_m557_MethodInfo);
		RemotingException_t1660 * L_56 = (RemotingException_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1660_il2cpp_TypeInfo));
		RemotingException__ctor_m9209(L_56, L_55, /*hidden argument*/&RemotingException__ctor_m9209_MethodInfo);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_0151:
	{
		goto IL_0188;
	}

IL_0153:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1661_il2cpp_TypeInfo));
		MethodBase_t750 * L_57 = RemotingServices_GetMethodBaseFromMethodMessage_m9221(NULL /*static, unused*/, __this, /*hidden argument*/&RemotingServices_GetMethodBaseFromMethodMessage_m9221_MethodInfo);
		__this->____methodBase_5 = L_57;
		MethodBase_t750 * L_58 = (__this->____methodBase_5);
		if (L_58)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_59 = (__this->____methodName_2);
		String_t* L_60 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MethodCall_get_TypeName_m9066_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_61 = String_Concat_m3681(NULL /*static, unused*/, (String_t*) &_stringLiteral2047, L_59, (String_t*) &_stringLiteral2048, L_60, /*hidden argument*/&String_Concat_m3681_MethodInfo);
		RemotingException_t1660 * L_62 = (RemotingException_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1660_il2cpp_TypeInfo));
		RemotingException__ctor_m9209(L_62, L_61, /*hidden argument*/&RemotingException__ctor_m9209_MethodInfo);
		il2cpp_codegen_raise_exception(L_62);
	}

IL_0188:
	{
		MethodBase_t750 * L_63 = (__this->____methodBase_5);
		NullCheck(L_63);
		bool L_64 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethod_m8673_MethodInfo, L_63);
		if (!L_64)
		{
			goto IL_01d1;
		}
	}
	{
		MethodBase_t750 * L_65 = (__this->____methodBase_5);
		NullCheck(L_65);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_ContainsGenericParameters_m8671_MethodInfo, L_65);
		if (!L_66)
		{
			goto IL_01d1;
		}
	}
	{
		TypeU5BU5D_t670* L_67 = MethodCall_get_GenericArguments_m9074(__this, /*hidden argument*/&MethodCall_get_GenericArguments_m9074_MethodInfo);
		if (L_67)
		{
			goto IL_01b5;
		}
	}
	{
		RemotingException_t1660 * L_68 = (RemotingException_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1660_il2cpp_TypeInfo));
		RemotingException__ctor_m9209(L_68, (String_t*) &_stringLiteral2049, /*hidden argument*/&RemotingException__ctor_m9209_MethodInfo);
		il2cpp_codegen_raise_exception(L_68);
	}

IL_01b5:
	{
		MethodBase_t750 * L_69 = (__this->____methodBase_5);
		TypeU5BU5D_t670* L_70 = MethodCall_get_GenericArguments_m9074(__this, /*hidden argument*/&MethodCall_get_GenericArguments_m9074_MethodInfo);
		NullCheck(((MethodInfo_t *)Castclass(L_69, InitializedTypeInfo(&MethodInfo_t_il2cpp_TypeInfo))));
		MethodInfo_t * L_71 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t670* >::Invoke(&MethodInfo_MakeGenericMethod_m8677_MethodInfo, ((MethodInfo_t *)Castclass(L_69, InitializedTypeInfo(&MethodInfo_t_il2cpp_TypeInfo))), L_70);
		__this->____methodBase_5 = L_71;
	}

IL_01d1:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
extern "C" Type_t * MethodCall_CastTo_m9072 (MethodCall_t1622 * __this, String_t* ___clientType, Type_t * ___serverType, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t670* V_1 = {0};
	Type_t * V_2 = {0};
	TypeU5BU5D_t670* V_3 = {0};
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___clientType;
		String_t* L_1 = MethodCall_GetTypeNameFromAssemblyQualifiedName_m9073(NULL /*static, unused*/, L_0, /*hidden argument*/&MethodCall_GetTypeNameFromAssemblyQualifiedName_m9073_MethodInfo);
		___clientType = L_1;
		String_t* L_2 = ___clientType;
		Type_t * L_3 = ___serverType;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3737_MethodInfo, L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_op_Equality_m641(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_6 = ___serverType;
		return L_6;
	}

IL_001a:
	{
		Type_t * L_7 = ___serverType;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3661_MethodInfo, L_7);
		V_0 = L_8;
		goto IL_003a;
	}

IL_0023:
	{
		String_t* L_9 = ___clientType;
		Type_t * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3737_MethodInfo, L_10);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_12 = String_op_Equality_m641(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_12)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_13 = V_0;
		return L_13;
	}

IL_0033:
	{
		Type_t * L_14 = V_0;
		NullCheck(L_14);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3661_MethodInfo, L_14);
		V_0 = L_15;
	}

IL_003a:
	{
		Type_t * L_16 = V_0;
		if (L_16)
		{
			goto IL_0023;
		}
	}
	{
		Type_t * L_17 = ___serverType;
		NullCheck(L_17);
		TypeU5BU5D_t670* L_18 = (TypeU5BU5D_t670*)VirtFuncInvoker0< TypeU5BU5D_t670* >::Invoke(&Type_GetInterfaces_m11165_MethodInfo, L_17);
		V_1 = L_18;
		TypeU5BU5D_t670* L_19 = V_1;
		V_3 = L_19;
		V_4 = 0;
		goto IL_0066;
	}

IL_004b:
	{
		TypeU5BU5D_t670* L_20 = V_3;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_2 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_20, L_22));
		String_t* L_23 = ___clientType;
		Type_t * L_24 = V_2;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3737_MethodInfo, L_24);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_26 = String_op_Equality_m641(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_26)
		{
			goto IL_0060;
		}
	}
	{
		Type_t * L_27 = V_2;
		return L_27;
	}

IL_0060:
	{
		int32_t L_28 = V_4;
		V_4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_0066:
	{
		int32_t L_29 = V_4;
		TypeU5BU5D_t670* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((Array_t *)L_30)->max_length))))))
		{
			goto IL_004b;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
extern "C" String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m9073 (Object_t * __this /* static, unused */, String_t* ___aqname, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	String_t* G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = ___aqname;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m3684(L_0, (String_t*) &_stringLiteral2050, /*hidden argument*/&String_IndexOf_m3684_MethodInfo);
		V_0 = L_1;
		String_t* L_2 = ___aqname;
		int32_t L_3 = V_0;
		G_B1_0 = ((int32_t)44);
		G_B1_1 = L_2;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			G_B2_0 = ((int32_t)44);
			G_B2_1 = L_2;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		G_B3_0 = ((int32_t)((int32_t)L_4+(int32_t)2));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		NullCheck(G_B3_2);
		int32_t L_5 = String_IndexOf_m5042(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/&String_IndexOf_m5042_MethodInfo);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_7 = ___aqname;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m2201(L_7, 0, L_8, /*hidden argument*/&String_Substring_m2201_MethodInfo);
		NullCheck(L_9);
		String_t* L_10 = String_Trim_m3680(L_9, /*hidden argument*/&String_Trim_m3680_MethodInfo);
		___aqname = L_10;
	}

IL_0034:
	{
		String_t* L_11 = ___aqname;
		return L_11;
	}
}
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
extern "C" TypeU5BU5D_t670* MethodCall_get_GenericArguments_m9074 (MethodCall_t1622 * __this, MethodInfo* method)
{
	TypeU5BU5D_t670* V_0 = {0};
	{
		TypeU5BU5D_t670* L_0 = (__this->____genericArguments_7);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		TypeU5BU5D_t670* L_1 = (__this->____genericArguments_7);
		return L_1;
	}

IL_000f:
	{
		MethodBase_t750 * L_2 = (MethodBase_t750 *)VirtFuncInvoker0< MethodBase_t750 * >::Invoke(&MethodCall_get_MethodBase_m9061_MethodInfo, __this);
		NullCheck(L_2);
		TypeU5BU5D_t670* L_3 = (TypeU5BU5D_t670*)VirtFuncInvoker0< TypeU5BU5D_t670* >::Invoke(&MethodBase_GetGenericArguments_m8670_MethodInfo, L_2);
		TypeU5BU5D_t670* L_4 = L_3;
		V_0 = L_4;
		__this->____genericArguments_7 = L_4;
		TypeU5BU5D_t670* L_5 = V_0;
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" void MethodCallDictionary__ctor_m9075 (MethodCallDictionary_t1630 * __this, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m9083(__this, L_0, /*hidden argument*/&MethodDictionary__ctor_m9083_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MethodCallDictionary_t1630_il2cpp_TypeInfo));
		StringU5BU5D_t34* L_1 = ((MethodCallDictionary_t1630_StaticFields*)InitializedTypeInfo(&MethodCallDictionary_t1630_il2cpp_TypeInfo)->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m9085(__this, L_1, /*hidden argument*/&MethodDictionary_set_MethodKeys_m9085_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.cctor()
extern MethodInfo MethodCallDictionary__cctor_m9076_MethodInfo;
extern TypeInfo* StringU5BU5D_t34_il2cpp_TypeInfo_var;
extern "C" void MethodCallDictionary__cctor_m9076 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool MethodCallDictionary__cctor_m9076_init;
	if (!MethodCallDictionary__cctor_m9076_init)
	{
		StringU5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t34_0_0_0);
		MethodCallDictionary__cctor_m9076_init = true;
	}
	{
		StringU5BU5D_t34* L_0 = ((StringU5BU5D_t34*)SZArrayNew(StringU5BU5D_t34_il2cpp_TypeInfo_var, 6));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral2034);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral2034;
		StringU5BU5D_t34* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral2035);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral2035;
		StringU5BU5D_t34* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral2036);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral2036;
		StringU5BU5D_t34* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral2037);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral2037;
		StringU5BU5D_t34* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral2038);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral2038;
		StringU5BU5D_t34* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral2039);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral2039;
		((MethodCallDictionary_t1630_StaticFields*)InitializedTypeInfo(&MethodCallDictionary_t1630_il2cpp_TypeInfo)->static_fields)->___InternalKeys_6 = L_5;
		return;
	}
}
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DictionaryEnumerator_t1632_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_MethodDeclarations.h"

extern MethodInfo DictionaryEnumerator_get_Entry_m9080_MethodInfo;
extern MethodInfo DictionaryEntry__ctor_m4761_MethodInfo;
extern MethodInfo IDictionaryEnumerator_get_Entry_m11144_MethodInfo;
extern MethodInfo IDictionaryEnumerator_get_Key_m4813_MethodInfo;
extern MethodInfo MethodDictionary_IsOverridenKey_m9088_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
extern MethodInfo DictionaryEnumerator__ctor_m9077_MethodInfo;
extern "C" void DictionaryEnumerator__ctor_m9077 (DictionaryEnumerator_t1632 * __this, MethodDictionary_t1624 * ___methodDictionary, MethodInfo* method)
{
	Object_t * V_0 = {0};
	DictionaryEnumerator_t1632 * G_B2_0 = {0};
	DictionaryEnumerator_t1632 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	DictionaryEnumerator_t1632 * G_B3_1 = {0};
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		MethodDictionary_t1624 * L_0 = ___methodDictionary;
		__this->____methodDictionary_0 = L_0;
		MethodDictionary_t1624 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		Object_t * L_2 = (L_1->____internalProperties_0);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		MethodDictionary_t1624 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->____internalProperties_0);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IDictionary_GetEnumerator_m4757_MethodInfo, L_4);
		V_0 = L_5;
		Object_t * L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		NullCheck(G_B3_1);
		G_B3_1->____hashtableEnum_1 = G_B3_0;
		__this->____posMethod_2 = (-1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
extern MethodInfo DictionaryEnumerator_get_Current_m9078_MethodInfo;
extern "C" Object_t * DictionaryEnumerator_get_Current_m9078 (DictionaryEnumerator_t1632 * __this, MethodInfo* method)
{
	DictionaryEntry_t900  V_0 = {0};
	{
		DictionaryEntry_t900  L_0 = (DictionaryEntry_t900 )VirtFuncInvoker0< DictionaryEntry_t900  >::Invoke(&DictionaryEnumerator_get_Entry_m9080_MethodInfo, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m7606((&V_0), /*hidden argument*/&DictionaryEntry_get_Value_m7606_MethodInfo);
		return L_1;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
extern MethodInfo DictionaryEnumerator_MoveNext_m9079_MethodInfo;
extern "C" bool DictionaryEnumerator_MoveNext_m9079 (DictionaryEnumerator_t1632 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)-2))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = (__this->____posMethod_2);
		__this->____posMethod_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = (__this->____posMethod_2);
		MethodDictionary_t1624 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		StringU5BU5D_t34* L_4 = (L_3->____methodKeys_2);
		NullCheck(L_4);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return 1;
	}

IL_002f:
	{
		__this->____posMethod_2 = ((int32_t)-2);
	}

IL_0037:
	{
		Object_t * L_5 = (__this->____hashtableEnum_1);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		goto IL_0062;
	}

IL_0043:
	{
		MethodDictionary_t1624 * L_6 = (__this->____methodDictionary_0);
		Object_t * L_7 = (__this->____hashtableEnum_1);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IDictionaryEnumerator_get_Key_m4813_MethodInfo, L_7);
		NullCheck(L_6);
		bool L_9 = MethodDictionary_IsOverridenKey_m9088(L_6, ((String_t*)Castclass(L_8, (&String_t_il2cpp_TypeInfo))), /*hidden argument*/&MethodDictionary_IsOverridenKey_m9088_MethodInfo);
		if (L_9)
		{
			goto IL_0062;
		}
	}
	{
		return 1;
	}

IL_0062:
	{
		Object_t * L_10 = (__this->____hashtableEnum_1);
		NullCheck(L_10);
		bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_10);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}
}
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
extern "C" DictionaryEntry_t900  DictionaryEnumerator_get_Entry_m9080 (DictionaryEnumerator_t1632 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		MethodDictionary_t1624 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		StringU5BU5D_t34* L_2 = (L_1->____methodKeys_2);
		int32_t L_3 = (__this->____posMethod_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		MethodDictionary_t1624 * L_5 = (__this->____methodDictionary_0);
		MethodDictionary_t1624 * L_6 = (__this->____methodDictionary_0);
		NullCheck(L_6);
		StringU5BU5D_t34* L_7 = (L_6->____methodKeys_2);
		int32_t L_8 = (__this->____posMethod_2);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck(L_5);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&MethodDictionary_GetMethodProperty_m9091_MethodInfo, L_5, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9)));
		DictionaryEntry_t900  L_11 = {0};
		DictionaryEntry__ctor_m4761(&L_11, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)), L_10, /*hidden argument*/&DictionaryEntry__ctor_m4761_MethodInfo);
		return L_11;
	}

IL_003e:
	{
		int32_t L_12 = (__this->____posMethod_2);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_004f;
		}
	}
	{
		Object_t * L_13 = (__this->____hashtableEnum_1);
		if (L_13)
		{
			goto IL_005a;
		}
	}

IL_004f:
	{
		InvalidOperationException_t1076 * L_14 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4760(L_14, (String_t*) &_stringLiteral2053, /*hidden argument*/&InvalidOperationException__ctor_m4760_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		Object_t * L_15 = (__this->____hashtableEnum_1);
		NullCheck(L_15);
		DictionaryEntry_t900  L_16 = (DictionaryEntry_t900 )InterfaceFuncInvoker0< DictionaryEntry_t900  >::Invoke(&IDictionaryEnumerator_get_Entry_m11144_MethodInfo, L_15);
		return L_16;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern MethodInfo DictionaryEnumerator_get_Key_m9081_MethodInfo;
extern "C" Object_t * DictionaryEnumerator_get_Key_m9081 (DictionaryEnumerator_t1632 * __this, MethodInfo* method)
{
	DictionaryEntry_t900  V_0 = {0};
	{
		DictionaryEntry_t900  L_0 = (DictionaryEntry_t900 )VirtFuncInvoker0< DictionaryEntry_t900  >::Invoke(&DictionaryEnumerator_get_Entry_m9080_MethodInfo, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Key_m7605((&V_0), /*hidden argument*/&DictionaryEntry_get_Key_m7605_MethodInfo);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern MethodInfo DictionaryEnumerator_get_Value_m9082_MethodInfo;
extern "C" Object_t * DictionaryEnumerator_get_Value_m9082 (DictionaryEnumerator_t1632 * __this, MethodInfo* method)
{
	DictionaryEntry_t900  V_0 = {0};
	{
		DictionaryEntry_t900  L_0 = (DictionaryEntry_t900 )VirtFuncInvoker0< DictionaryEntry_t900  >::Invoke(&DictionaryEnumerator_get_Entry_m9080_MethodInfo, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m7606((&V_0), /*hidden argument*/&DictionaryEntry_get_Value_m7606_MethodInfo);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IMethodMessage_t1631_il2cpp_TypeInfo;
extern TypeInfo IMethodReturnMessage_t1634_il2cpp_TypeInfo;
extern TypeInfo IInternalMessage_t1934_il2cpp_TypeInfo;
extern MethodInfo IDictionary_get_Item_m4750_MethodInfo;
extern MethodInfo MethodDictionary_Add_m9094_MethodInfo;
extern MethodInfo MethodDictionary_AllocInternalProperties_m9086_MethodInfo;
extern MethodInfo IMethodMessage_get_Uri_m11201_MethodInfo;
extern MethodInfo IMethodMessage_get_MethodName_m11202_MethodInfo;
extern MethodInfo IMethodMessage_get_TypeName_m11203_MethodInfo;
extern MethodInfo IMethodMessage_get_MethodSignature_m11204_MethodInfo;
extern MethodInfo IMethodMessage_get_LogicalCallContext_m11205_MethodInfo;
extern MethodInfo IMethodMessage_get_Args_m11206_MethodInfo;
extern MethodInfo IMethodReturnMessage_get_OutArgs_m11207_MethodInfo;
extern MethodInfo IMethodReturnMessage_get_ReturnValue_m11208_MethodInfo;
extern MethodInfo IInternalMessage_set_Uri_m11209_MethodInfo;
extern MethodInfo IDictionary_Remove_m4758_MethodInfo;
extern MethodInfo MethodDictionary_get_Values_m9093_MethodInfo;
extern MethodInfo ICollection_CopyTo_m4756_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" void MethodDictionary__ctor_m9083 (MethodDictionary_t1624 * __this, Object_t * ___message, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		Object_t * L_0 = ___message;
		__this->____message_1 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m9084_MethodInfo;
extern "C" Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m9084 (MethodDictionary_t1624 * __this, MethodInfo* method)
{
	{
		DictionaryEnumerator_t1632 * L_0 = (DictionaryEnumerator_t1632 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DictionaryEnumerator_t1632_il2cpp_TypeInfo));
		DictionaryEnumerator__ctor_m9077(L_0, __this, /*hidden argument*/&DictionaryEnumerator__ctor_m9077_MethodInfo);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C" void MethodDictionary_set_MethodKeys_m9085 (MethodDictionary_t1624 * __this, StringU5BU5D_t34* ___value, MethodInfo* method)
{
	{
		StringU5BU5D_t34* L_0 = ___value;
		__this->____methodKeys_2 = L_0;
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern "C" Object_t * MethodDictionary_AllocInternalProperties_m9086 (MethodDictionary_t1624 * __this, MethodInfo* method)
{
	{
		__this->____ownProperties_3 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable_t893 * L_0 = (Hashtable_t893 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable__ctor_m4969(L_0, /*hidden argument*/&Hashtable__ctor_m4969_MethodInfo);
		return L_0;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C" Object_t * MethodDictionary_GetInternalProperties_m9087 (MethodDictionary_t1624 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&MethodDictionary_AllocInternalProperties_m9086_MethodInfo, __this);
		__this->____internalProperties_0 = L_1;
	}

IL_0014:
	{
		Object_t * L_2 = (__this->____internalProperties_0);
		return L_2;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern "C" bool MethodDictionary_IsOverridenKey_m9088 (MethodDictionary_t1624 * __this, String_t* ___key, MethodInfo* method)
{
	String_t* V_0 = {0};
	StringU5BU5D_t34* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->____ownProperties_3);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		StringU5BU5D_t34* L_1 = (__this->____methodKeys_2);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		StringU5BU5D_t34* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4));
		String_t* L_5 = ___key;
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_7 = String_op_Equality_m641(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_2;
		StringU5BU5D_t34* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern MethodInfo MethodDictionary_get_Item_m9089_MethodInfo;
extern "C" Object_t * MethodDictionary_get_Item_m9089 (MethodDictionary_t1624 * __this, Object_t * ___key, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		V_1 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		StringU5BU5D_t34* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_op_Equality_m641(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&MethodDictionary_GetMethodProperty_m9091_MethodInfo, __this, L_6);
		return L_7;
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t34* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_12 = (__this->____internalProperties_0);
		Object_t * L_13 = ___key;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(&IDictionary_get_Item_m4750_MethodInfo, L_12, L_13);
		return L_14;
	}

IL_0047:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern MethodInfo MethodDictionary_set_Item_m9090_MethodInfo;
extern "C" void MethodDictionary_set_Item_m9090 (MethodDictionary_t1624 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&MethodDictionary_Add_m9094_MethodInfo, __this, L_0, L_1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern TypeInfo* Dictionary_2_t600_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4831_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m4832_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m4833_MethodInfo_var;
extern "C" Object_t * MethodDictionary_GetMethodProperty_m9091 (MethodDictionary_t1624 * __this, String_t* ___key, MethodInfo* method)
{
	static bool MethodDictionary_GetMethodProperty_m9091_init;
	if (!MethodDictionary_GetMethodProperty_m9091_init)
	{
		Dictionary_2_t600_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t600_0_0_0);
		Dictionary_2__ctor_m4831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4831_GenericMethod);
		Dictionary_2_Add_m4832_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m4832_GenericMethod);
		Dictionary_2_TryGetValue_m4833_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m4833_GenericMethod);
		MethodDictionary_GetMethodProperty_m9091_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t600 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0120;
		}
	}
	{
		Dictionary_2_t600 * L_2 = ((MethodDictionary_t1624_StaticFields*)InitializedTypeInfo(&MethodDictionary_t1624_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map21_4;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		Dictionary_2_t600 * L_3 = (Dictionary_2_t600 *)il2cpp_codegen_object_new (Dictionary_2_t600_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4831(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m4831_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t600 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_4, (String_t*) &_stringLiteral2034, 0);
		Dictionary_2_t600 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_5, (String_t*) &_stringLiteral2035, 1);
		Dictionary_2_t600 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_6, (String_t*) &_stringLiteral2036, 2);
		Dictionary_2_t600 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_7, (String_t*) &_stringLiteral2037, 3);
		Dictionary_2_t600 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_8, (String_t*) &_stringLiteral2039, 4);
		Dictionary_2_t600 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_9, (String_t*) &_stringLiteral2038, 5);
		Dictionary_2_t600 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_10, (String_t*) &_stringLiteral2051, 6);
		Dictionary_2_t600 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_11, (String_t*) &_stringLiteral2052, 7);
		Dictionary_2_t600 * L_12 = V_1;
		((MethodDictionary_t1624_StaticFields*)InitializedTypeInfo(&MethodDictionary_t1624_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map21_4 = L_12;
	}

IL_007c:
	{
		Dictionary_2_t600 * L_13 = ((MethodDictionary_t1624_StaticFields*)InitializedTypeInfo(&MethodDictionary_t1624_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map21_4;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m4833_MethodInfo_var, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_00b6;
		}
		if (L_16 == 1)
		{
			goto IL_00c2;
		}
		if (L_16 == 2)
		{
			goto IL_00ce;
		}
		if (L_16 == 3)
		{
			goto IL_00da;
		}
		if (L_16 == 4)
		{
			goto IL_00e6;
		}
		if (L_16 == 5)
		{
			goto IL_00f2;
		}
		if (L_16 == 6)
		{
			goto IL_00fe;
		}
		if (L_16 == 7)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_0120;
	}

IL_00b6:
	{
		Object_t * L_17 = (__this->____message_1);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IMethodMessage_get_Uri_m11201_MethodInfo, L_17);
		return L_18;
	}

IL_00c2:
	{
		Object_t * L_19 = (__this->____message_1);
		NullCheck(L_19);
		String_t* L_20 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IMethodMessage_get_MethodName_m11202_MethodInfo, L_19);
		return L_20;
	}

IL_00ce:
	{
		Object_t * L_21 = (__this->____message_1);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IMethodMessage_get_TypeName_m11203_MethodInfo, L_21);
		return L_22;
	}

IL_00da:
	{
		Object_t * L_23 = (__this->____message_1);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IMethodMessage_get_MethodSignature_m11204_MethodInfo, L_23);
		return L_24;
	}

IL_00e6:
	{
		Object_t * L_25 = (__this->____message_1);
		NullCheck(L_25);
		LogicalCallContext_t1628 * L_26 = (LogicalCallContext_t1628 *)InterfaceFuncInvoker0< LogicalCallContext_t1628 * >::Invoke(&IMethodMessage_get_LogicalCallContext_m11205_MethodInfo, L_25);
		return L_26;
	}

IL_00f2:
	{
		Object_t * L_27 = (__this->____message_1);
		NullCheck(L_27);
		ObjectU5BU5D_t148* L_28 = (ObjectU5BU5D_t148*)InterfaceFuncInvoker0< ObjectU5BU5D_t148* >::Invoke(&IMethodMessage_get_Args_m11206_MethodInfo, L_27);
		return (Object_t *)L_28;
	}

IL_00fe:
	{
		Object_t * L_29 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_29, InitializedTypeInfo(&IMethodReturnMessage_t1634_il2cpp_TypeInfo))));
		ObjectU5BU5D_t148* L_30 = (ObjectU5BU5D_t148*)InterfaceFuncInvoker0< ObjectU5BU5D_t148* >::Invoke(&IMethodReturnMessage_get_OutArgs_m11207_MethodInfo, ((Object_t *)Castclass(L_29, InitializedTypeInfo(&IMethodReturnMessage_t1634_il2cpp_TypeInfo))));
		return (Object_t *)L_30;
	}

IL_010f:
	{
		Object_t * L_31 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_31, InitializedTypeInfo(&IMethodReturnMessage_t1634_il2cpp_TypeInfo))));
		Object_t * L_32 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IMethodReturnMessage_get_ReturnValue_m11208_MethodInfo, ((Object_t *)Castclass(L_31, InitializedTypeInfo(&IMethodReturnMessage_t1634_il2cpp_TypeInfo))));
		return L_32;
	}

IL_0120:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern TypeInfo* Dictionary_2_t600_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4831_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m4832_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m4833_MethodInfo_var;
extern "C" void MethodDictionary_SetMethodProperty_m9092 (MethodDictionary_t1624 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool MethodDictionary_SetMethodProperty_m9092_init;
	if (!MethodDictionary_SetMethodProperty_m9092_init)
	{
		Dictionary_2_t600_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t600_0_0_0);
		Dictionary_2__ctor_m4831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4831_GenericMethod);
		Dictionary_2_Add_m4832_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m4832_GenericMethod);
		Dictionary_2_TryGetValue_m4833_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m4833_GenericMethod);
		MethodDictionary_SetMethodProperty_m9092_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t600 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c2;
		}
	}
	{
		Dictionary_2_t600 * L_2 = ((MethodDictionary_t1624_StaticFields*)InitializedTypeInfo(&MethodDictionary_t1624_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map22_5;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		Dictionary_2_t600 * L_3 = (Dictionary_2_t600 *)il2cpp_codegen_object_new (Dictionary_2_t600_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4831(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m4831_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t600 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_4, (String_t*) &_stringLiteral2039, 0);
		Dictionary_2_t600 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_5, (String_t*) &_stringLiteral2051, 0);
		Dictionary_2_t600 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_6, (String_t*) &_stringLiteral2052, 0);
		Dictionary_2_t600 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_7, (String_t*) &_stringLiteral2035, 1);
		Dictionary_2_t600 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_8, (String_t*) &_stringLiteral2036, 1);
		Dictionary_2_t600 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_9, (String_t*) &_stringLiteral2037, 1);
		Dictionary_2_t600 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_10, (String_t*) &_stringLiteral2038, 1);
		Dictionary_2_t600 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_11, (String_t*) &_stringLiteral2034, 2);
		Dictionary_2_t600 * L_12 = V_1;
		((MethodDictionary_t1624_StaticFields*)InitializedTypeInfo(&MethodDictionary_t1624_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map22_5 = L_12;
	}

IL_007c:
	{
		Dictionary_2_t600 * L_13 = ((MethodDictionary_t1624_StaticFields*)InitializedTypeInfo(&MethodDictionary_t1624_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map22_5;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m4833_MethodInfo_var, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_009f;
		}
		if (L_16 == 1)
		{
			goto IL_00a0;
		}
		if (L_16 == 2)
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00c2;
	}

IL_009f:
	{
		return;
	}

IL_00a0:
	{
		ArgumentException_t445 * L_17 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_17, (String_t*) &_stringLiteral2040, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00ab:
	{
		Object_t * L_18 = (__this->____message_1);
		Object_t * L_19 = ___value;
		NullCheck(((Object_t *)Castclass(L_18, InitializedTypeInfo(&IInternalMessage_t1934_il2cpp_TypeInfo))));
		InterfaceActionInvoker1< String_t* >::Invoke(&IInternalMessage_set_Uri_m11209_MethodInfo, ((Object_t *)Castclass(L_18, InitializedTypeInfo(&IInternalMessage_t1934_il2cpp_TypeInfo))), ((String_t*)Castclass(L_19, (&String_t_il2cpp_TypeInfo))));
		return;
	}

IL_00c2:
	{
		return;
	}
}
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern "C" Object_t * MethodDictionary_get_Values_m9093 (MethodDictionary_t1624 * __this, MethodInfo* method)
{
	ArrayList_t906 * V_0 = {0};
	int32_t V_1 = 0;
	DictionaryEntry_t900  V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList_t906 * L_0 = (ArrayList_t906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList__ctor_m4776(L_0, /*hidden argument*/&ArrayList__ctor_m4776_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		ArrayList_t906 * L_1 = V_0;
		StringU5BU5D_t34* L_2 = (__this->____methodKeys_2);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&MethodDictionary_GetMethodProperty_m9091_MethodInfo, __this, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)));
		NullCheck(L_1);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_1, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t34* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IDictionary_GetEnumerator_m4757_MethodInfo, L_10);
		V_3 = L_11;
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0044:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_12);
			V_2 = ((*(DictionaryEntry_t900 *)((DictionaryEntry_t900 *)UnBox (L_13, InitializedTypeInfo(&DictionaryEntry_t900_il2cpp_TypeInfo)))));
			Object_t * L_14 = DictionaryEntry_get_Key_m7605((&V_2), /*hidden argument*/&DictionaryEntry_get_Key_m7605_MethodInfo);
			bool L_15 = MethodDictionary_IsOverridenKey_m9088(__this, ((String_t*)Castclass(L_14, (&String_t_il2cpp_TypeInfo))), /*hidden argument*/&MethodDictionary_IsOverridenKey_m9088_MethodInfo);
			if (L_15)
			{
				goto IL_0072;
			}
		}

IL_0064:
		{
			ArrayList_t906 * L_16 = V_0;
			Object_t * L_17 = DictionaryEntry_get_Value_m7606((&V_2), /*hidden argument*/&DictionaryEntry_get_Value_m7606_MethodInfo);
			NullCheck(L_16);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_16, L_17);
		}

IL_0072:
		{
			Object_t * L_18 = V_3;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_18);
			if (L_19)
			{
				goto IL_0044;
			}
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x91, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_3;
			V_4 = ((Object_t *)IsInst(L_20, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_21 = V_4;
			if (L_21)
			{
				goto IL_0089;
			}
		}

IL_0088:
		{
			IL2CPP_END_FINALLY(124)
		}

IL_0089:
		{
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_22);
			IL2CPP_END_FINALLY(124)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0091:
	{
		ArrayList_t906 * L_23 = V_0;
		return L_23;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern "C" void MethodDictionary_Add_m9094 (MethodDictionary_t1624 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		V_1 = 0;
		goto IL_0028;
	}

IL_000b:
	{
		StringU5BU5D_t34* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_op_Equality_m641(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = ___value;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(&MethodDictionary_SetMethodProperty_m9092_MethodInfo, __this, L_6, L_7);
		return;
	}

IL_0024:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t34* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (L_11)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&MethodDictionary_AllocInternalProperties_m9086_MethodInfo, __this);
		__this->____internalProperties_0 = L_12;
	}

IL_0047:
	{
		Object_t * L_13 = (__this->____internalProperties_0);
		Object_t * L_14 = ___key;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(&IDictionary_set_Item_m4751_MethodInfo, L_13, L_14, L_15);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern MethodInfo MethodDictionary_Remove_m9095_MethodInfo;
extern "C" void MethodDictionary_Remove_m9095 (MethodDictionary_t1624 * __this, Object_t * ___key, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		V_1 = 0;
		goto IL_002a;
	}

IL_000b:
	{
		StringU5BU5D_t34* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_op_Equality_m641(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t445 * L_6 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_6, (String_t*) &_stringLiteral2040, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_8 = V_1;
		StringU5BU5D_t34* L_9 = (__this->____methodKeys_2);
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		Object_t * L_12 = ___key;
		NullCheck(L_11);
		InterfaceActionInvoker1< Object_t * >::Invoke(&IDictionary_Remove_m4758_MethodInfo, L_11, L_12);
	}

IL_0049:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern MethodInfo MethodDictionary_get_Count_m9096_MethodInfo;
extern "C" int32_t MethodDictionary_get_Count_m9096 (MethodDictionary_t1624 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Object_t * L_1 = (__this->____internalProperties_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ICollection_get_Count_m4749_MethodInfo, L_1);
		StringU5BU5D_t34* L_3 = (__this->____methodKeys_2);
		NullCheck(L_3);
		return ((int32_t)((int32_t)L_2+(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
	}

IL_001d:
	{
		StringU5BU5D_t34* L_4 = (__this->____methodKeys_2);
		NullCheck(L_4);
		return (((int32_t)(((Array_t *)L_4)->max_length)));
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
extern MethodInfo MethodDictionary_get_IsSynchronized_m9097_MethodInfo;
extern "C" bool MethodDictionary_get_IsSynchronized_m9097 (MethodDictionary_t1624 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern MethodInfo MethodDictionary_get_SyncRoot_m9098_MethodInfo;
extern "C" Object_t * MethodDictionary_get_SyncRoot_m9098 (MethodDictionary_t1624 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern MethodInfo MethodDictionary_CopyTo_m9099_MethodInfo;
extern "C" void MethodDictionary_CopyTo_m9099 (MethodDictionary_t1624 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&MethodDictionary_get_Values_m9093_MethodInfo, __this);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m4756_MethodInfo, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern MethodInfo MethodDictionary_GetEnumerator_m9100_MethodInfo;
extern "C" Object_t * MethodDictionary_GetEnumerator_m9100 (MethodDictionary_t1624 * __this, MethodInfo* method)
{
	{
		DictionaryEnumerator_t1632 * L_0 = (DictionaryEnumerator_t1632 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DictionaryEnumerator_t1632_il2cpp_TypeInfo));
		DictionaryEnumerator__ctor_m9077(L_0, __this, /*hidden argument*/&DictionaryEnumerator__ctor_m9077_MethodInfo);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDicti.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MethodReturnDictionary_t1633_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDictiMethodDeclarations.h"

extern MethodInfo IMethodReturnMessage_get_Exception_m11210_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage)
extern MethodInfo MethodReturnDictionary__ctor_m9101_MethodInfo;
extern "C" void MethodReturnDictionary__ctor_m9101 (MethodReturnDictionary_t1633 * __this, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m9083(__this, L_0, /*hidden argument*/&MethodDictionary__ctor_m9083_MethodInfo);
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		Exception_t163 * L_2 = (Exception_t163 *)InterfaceFuncInvoker0< Exception_t163 * >::Invoke(&IMethodReturnMessage_get_Exception_m11210_MethodInfo, L_1);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MethodReturnDictionary_t1633_il2cpp_TypeInfo));
		StringU5BU5D_t34* L_3 = ((MethodReturnDictionary_t1633_StaticFields*)InitializedTypeInfo(&MethodReturnDictionary_t1633_il2cpp_TypeInfo)->static_fields)->___InternalReturnKeys_6;
		MethodDictionary_set_MethodKeys_m9085(__this, L_3, /*hidden argument*/&MethodDictionary_set_MethodKeys_m9085_MethodInfo);
		goto IL_0027;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MethodReturnDictionary_t1633_il2cpp_TypeInfo));
		StringU5BU5D_t34* L_4 = ((MethodReturnDictionary_t1633_StaticFields*)InitializedTypeInfo(&MethodReturnDictionary_t1633_il2cpp_TypeInfo)->static_fields)->___InternalExceptionKeys_7;
		MethodDictionary_set_MethodKeys_m9085(__this, L_4, /*hidden argument*/&MethodDictionary_set_MethodKeys_m9085_MethodInfo);
	}

IL_0027:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.cctor()
extern MethodInfo MethodReturnDictionary__cctor_m9102_MethodInfo;
extern TypeInfo* StringU5BU5D_t34_il2cpp_TypeInfo_var;
extern "C" void MethodReturnDictionary__cctor_m9102 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool MethodReturnDictionary__cctor_m9102_init;
	if (!MethodReturnDictionary__cctor_m9102_init)
	{
		StringU5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t34_0_0_0);
		MethodReturnDictionary__cctor_m9102_init = true;
	}
	{
		StringU5BU5D_t34* L_0 = ((StringU5BU5D_t34*)SZArrayNew(StringU5BU5D_t34_il2cpp_TypeInfo_var, 7));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral2034);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral2034;
		StringU5BU5D_t34* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral2035);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral2035;
		StringU5BU5D_t34* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral2036);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral2036;
		StringU5BU5D_t34* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral2037);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral2037;
		StringU5BU5D_t34* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral2051);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral2051;
		StringU5BU5D_t34* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral2052);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral2052;
		StringU5BU5D_t34* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral2039);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)(String_t*) &_stringLiteral2039;
		((MethodReturnDictionary_t1633_StaticFields*)InitializedTypeInfo(&MethodReturnDictionary_t1633_il2cpp_TypeInfo)->static_fields)->___InternalReturnKeys_6 = L_6;
		StringU5BU5D_t34* L_7 = ((StringU5BU5D_t34*)SZArrayNew(StringU5BU5D_t34_il2cpp_TypeInfo_var, 1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral2039);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 0)) = (String_t*)(String_t*) &_stringLiteral2039;
		((MethodReturnDictionary_t1633_StaticFields*)InitializedTypeInfo(&MethodReturnDictionary_t1633_il2cpp_TypeInfo)->static_fields)->___InternalExceptionKeys_7 = L_7;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoMethodMessage_t1618_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessageMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.CallType
#include "mscorlib_System_Runtime_Remoting_Messaging_CallType.h"
extern MethodInfo MonoMethodMessage_get_CallType_m9118_MethodInfo;
extern MethodInfo MonoMethodMessage_get_OutArgCount_m9115_MethodInfo;
extern MethodInfo RemotingServices_IsOneWay_m9226_MethodInfo;


// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Properties()
extern MethodInfo MonoMethodMessage_get_Properties_m9103_MethodInfo;
extern "C" Object_t * MonoMethodMessage_get_Properties_m9103 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	{
		MethodCallDictionary_t1630 * L_0 = (__this->___properties_8);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MethodCallDictionary_t1630_il2cpp_TypeInfo));
		MethodCallDictionary_t1630 * L_1 = (MethodCallDictionary_t1630 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MethodCallDictionary_t1630_il2cpp_TypeInfo));
		MethodCallDictionary__ctor_m9075(L_1, __this, /*hidden argument*/&MethodCallDictionary__ctor_m9075_MethodInfo);
		__this->___properties_8 = L_1;
	}

IL_0014:
	{
		MethodCallDictionary_t1630 * L_2 = (__this->___properties_8);
		return L_2;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ArgCount()
extern MethodInfo MonoMethodMessage_get_ArgCount_m9104_MethodInfo;
extern "C" int32_t MonoMethodMessage_get_ArgCount_m9104 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = MonoMethodMessage_get_CallType_m9118(__this, /*hidden argument*/&MonoMethodMessage_get_CallType_m9118_MethodInfo);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		ObjectU5BU5D_t148* L_1 = (__this->___args_1);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		ObjectU5BU5D_t148* L_2 = (__this->___args_1);
		NullCheck(L_2);
		return (((int32_t)(((Array_t *)L_2)->max_length)));
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern MethodInfo MonoMethodMessage_get_Args_m9105_MethodInfo;
extern "C" ObjectU5BU5D_t148* MonoMethodMessage_get_Args_m9105 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->___args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern MethodInfo MonoMethodMessage_get_LogicalCallContext_m9106_MethodInfo;
extern "C" LogicalCallContext_t1628 * MonoMethodMessage_get_LogicalCallContext_m9106 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	{
		LogicalCallContext_t1628 * L_0 = (__this->___ctx_3);
		return L_0;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern MethodInfo MonoMethodMessage_get_MethodBase_m9107_MethodInfo;
extern "C" MethodBase_t750 * MonoMethodMessage_get_MethodBase_m9107 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern MethodInfo MonoMethodMessage_get_MethodName_m9108_MethodInfo;
extern "C" String_t* MonoMethodMessage_get_MethodName_m9108 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_get_Name_m8758_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern MethodInfo MonoMethodMessage_get_MethodSignature_m9109_MethodInfo;
extern TypeInfo* TypeU5BU5D_t670_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m9109 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	static bool MonoMethodMessage_get_MethodSignature_m9109_init;
	if (!MonoMethodMessage_get_MethodSignature_m9109_init)
	{
		TypeU5BU5D_t670_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t670_0_0_0);
		MonoMethodMessage_get_MethodSignature_m9109_init = true;
	}
	ParameterInfoU5BU5D_t751* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t670* L_0 = (__this->___methodSignature_9);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		MonoMethod_t * L_1 = (__this->___method_0);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t751* L_2 = (ParameterInfoU5BU5D_t751*)VirtFuncInvoker0< ParameterInfoU5BU5D_t751* >::Invoke(&MonoMethod_GetParameters_m8750_MethodInfo, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t751* L_3 = V_0;
		NullCheck(L_3);
		__this->___methodSignature_9 = ((TypeU5BU5D_t670*)SZArrayNew(TypeU5BU5D_t670_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		V_1 = 0;
		goto IL_003a;
	}

IL_0026:
	{
		TypeU5BU5D_t670* L_4 = (__this->___methodSignature_9);
		int32_t L_5 = V_1;
		ParameterInfoU5BU5D_t751* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_6, L_8)));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3695_MethodInfo, (*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_6, L_8)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, L_5)) = (Type_t *)L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		ParameterInfoU5BU5D_t751* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0026;
		}
	}

IL_0040:
	{
		TypeU5BU5D_t670* L_13 = (__this->___methodSignature_9);
		return (Object_t *)L_13;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern MethodInfo MonoMethodMessage_get_TypeName_m9110_MethodInfo;
extern "C" String_t* MonoMethodMessage_get_TypeName_m9110 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_DeclaringType_m8757_MethodInfo, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3735_MethodInfo, L_3);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern MethodInfo MonoMethodMessage_get_Uri_m9111_MethodInfo;
extern "C" String_t* MonoMethodMessage_get_Uri_m9111 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_7);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern MethodInfo MonoMethodMessage_set_Uri_m9112_MethodInfo;
extern "C" void MonoMethodMessage_set_Uri_m9112 (MonoMethodMessage_t1618 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_7 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::GetArg(System.Int32)
extern MethodInfo MonoMethodMessage_GetArg_m9113_MethodInfo;
extern "C" Object_t * MonoMethodMessage_GetArg_m9113 (MonoMethodMessage_t1618 * __this, int32_t ___arg_num, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return NULL;
	}

IL_000a:
	{
		ObjectU5BU5D_t148* L_1 = (__this->___args_1);
		int32_t L_2 = ___arg_num;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3));
	}
}
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern MethodInfo MonoMethodMessage_get_Exception_m9114_MethodInfo;
extern "C" Exception_t163 * MonoMethodMessage_get_Exception_m9114 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	{
		Exception_t163 * L_0 = (__this->___exc_5);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m9115 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_t952* V_2 = {0};
	int32_t V_3 = 0;
	{
		ObjectU5BU5D_t148* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		ByteU5BU5D_t952* L_1 = (__this->___arg_types_2);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0028;
	}

IL_0017:
	{
		ByteU5BU5D_t952* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		uint8_t L_5 = V_1;
		if (!((int32_t)((int32_t)L_5&(int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		ByteU5BU5D_t952* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern MethodInfo MonoMethodMessage_get_OutArgs_m9116_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t148* MonoMethodMessage_get_OutArgs_m9116 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	static bool MonoMethodMessage_get_OutArgs_m9116_init;
	if (!MonoMethodMessage_get_OutArgs_m9116_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		MonoMethodMessage_get_OutArgs_m9116_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ObjectU5BU5D_t148* V_3 = {0};
	uint8_t V_4 = 0x0;
	ByteU5BU5D_t952* V_5 = {0};
	int32_t V_6 = 0;
	{
		ObjectU5BU5D_t148* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ObjectU5BU5D_t148*)NULL;
	}

IL_000a:
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MonoMethodMessage_get_OutArgCount_m9115_MethodInfo, __this);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = 0;
		V_1 = L_3;
		V_0 = L_3;
		ByteU5BU5D_t952* L_4 = (__this->___arg_types_2);
		V_5 = L_4;
		V_6 = 0;
		goto IL_004f;
	}

IL_0029:
	{
		ByteU5BU5D_t952* L_5 = V_5;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		uint8_t L_8 = V_4;
		if (!((int32_t)((int32_t)L_8&(int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t148* L_9 = V_3;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
		ObjectU5BU5D_t148* L_12 = (__this->___args_1);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_11);
		ArrayElementTypeCheck (L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14));
	}

IL_0045:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
		int32_t L_16 = V_6;
		V_6 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_17 = V_6;
		ByteU5BU5D_t952* L_18 = V_5;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t148* L_19 = V_3;
		return L_19;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern MethodInfo MonoMethodMessage_get_ReturnValue_m9117_MethodInfo;
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m9117 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___rval_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.CallType System.Runtime.Remoting.Messaging.MonoMethodMessage::get_CallType()
extern "C" int32_t MonoMethodMessage_get_CallType_m9118 (MonoMethodMessage_t1618 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___call_type_6);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		MonoMethod_t * L_1 = (__this->___method_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1661_il2cpp_TypeInfo));
		bool L_2 = RemotingServices_IsOneWay_m9226(NULL /*static, unused*/, L_1, /*hidden argument*/&RemotingServices_IsOneWay_m9226_MethodInfo);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		__this->___call_type_6 = 3;
	}

IL_001c:
	{
		int32_t L_3 = (__this->___call_type_6);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CallType_t1635_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.CallType
#include "mscorlib_System_Runtime_Remoting_Messaging_CallTypeMethodDeclarations.h"



// System.Runtime.Remoting.Messaging.OneWayAttribute
#include "mscorlib_System_Runtime_Remoting_Messaging_OneWayAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo OneWayAttribute_t1636_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.OneWayAttribute
#include "mscorlib_System_Runtime_Remoting_Messaging_OneWayAttributeMethodDeclarations.h"



// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RemotingSurrogate_t1637_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateMethodDeclarations.h"

// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
extern TypeInfo RealProxy_t1645_il2cpp_TypeInfo;
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"
extern MethodInfo RemotingServices_IsTransparentProxy_m9213_MethodInfo;
extern MethodInfo RemotingServices_GetRealProxy_m9220_MethodInfo;
extern MethodInfo RealProxy_GetObjectData_m9155_MethodInfo;
extern MethodInfo RemotingServices_GetObjectData_m9224_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern MethodInfo RemotingSurrogate__ctor_m9119_MethodInfo;
extern "C" void RemotingSurrogate__ctor_m9119 (RemotingSurrogate_t1637 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo RemotingSurrogate_GetObjectData_m9120_MethodInfo;
extern "C" void RemotingSurrogate_GetObjectData_m9120 (RemotingSurrogate_t1637 * __this, Object_t * ___obj, SerializationInfo_t700 * ___si, StreamingContext_t701  ___sc, MethodInfo* method)
{
	RealProxy_t1645 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		SerializationInfo_t700 * L_1 = ___si;
		if (L_1)
		{
			goto IL_000c;
		}
	}

IL_0006:
	{
		ArgumentNullException_t753 * L_2 = (ArgumentNullException_t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t753_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m10273(L_2, /*hidden argument*/&ArgumentNullException__ctor_m10273_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000c:
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1661_il2cpp_TypeInfo));
		bool L_4 = RemotingServices_IsTransparentProxy_m9213(NULL /*static, unused*/, L_3, /*hidden argument*/&RemotingServices_IsTransparentProxy_m9213_MethodInfo);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		Object_t * L_5 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1661_il2cpp_TypeInfo));
		RealProxy_t1645 * L_6 = RemotingServices_GetRealProxy_m9220(NULL /*static, unused*/, L_5, /*hidden argument*/&RemotingServices_GetRealProxy_m9220_MethodInfo);
		V_0 = L_6;
		RealProxy_t1645 * L_7 = V_0;
		SerializationInfo_t700 * L_8 = ___si;
		StreamingContext_t701  L_9 = ___sc;
		NullCheck(L_7);
		VirtActionInvoker2< SerializationInfo_t700 *, StreamingContext_t701  >::Invoke(&RealProxy_GetObjectData_m9155_MethodInfo, L_7, L_8, L_9);
		goto IL_002d;
	}

IL_0025:
	{
		Object_t * L_10 = ___obj;
		SerializationInfo_t700 * L_11 = ___si;
		StreamingContext_t701  L_12 = ___sc;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1661_il2cpp_TypeInfo));
		RemotingServices_GetObjectData_m9224(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/&RemotingServices_GetObjectData_m9224_MethodInfo);
	}

IL_002d:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern MethodInfo RemotingSurrogate_SetObjectData_m9121_MethodInfo;
extern "C" Object_t * RemotingSurrogate_SetObjectData_m9121 (RemotingSurrogate_t1637 * __this, Object_t * ___obj, SerializationInfo_t700 * ___si, StreamingContext_t701  ___sc, Object_t * ___selector, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m591(L_0, /*hidden argument*/&NotSupportedException__ctor_m591_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ObjRefSurrogate_t1639_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogateMethodDeclarations.h"

// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"
extern TypeInfo ObjRef_t1308_il2cpp_TypeInfo;
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRefMethodDeclarations.h"
extern MethodInfo ObjRef_GetObjectData_m9200_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4780_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern MethodInfo ObjRefSurrogate__ctor_m9122_MethodInfo;
extern "C" void ObjRefSurrogate__ctor_m9122 (ObjRefSurrogate_t1639 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo ObjRefSurrogate_GetObjectData_m9123_MethodInfo;
extern "C" void ObjRefSurrogate_GetObjectData_m9123 (ObjRefSurrogate_t1639 * __this, Object_t * ___obj, SerializationInfo_t700 * ___si, StreamingContext_t701  ___sc, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		SerializationInfo_t700 * L_1 = ___si;
		if (L_1)
		{
			goto IL_000c;
		}
	}

IL_0006:
	{
		ArgumentNullException_t753 * L_2 = (ArgumentNullException_t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t753_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m10273(L_2, /*hidden argument*/&ArgumentNullException__ctor_m10273_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000c:
	{
		Object_t * L_3 = ___obj;
		SerializationInfo_t700 * L_4 = ___si;
		StreamingContext_t701  L_5 = ___sc;
		NullCheck(((ObjRef_t1308 *)Castclass(L_3, InitializedTypeInfo(&ObjRef_t1308_il2cpp_TypeInfo))));
		VirtActionInvoker2< SerializationInfo_t700 *, StreamingContext_t701  >::Invoke(&ObjRef_GetObjectData_m9200_MethodInfo, ((ObjRef_t1308 *)Castclass(L_3, InitializedTypeInfo(&ObjRef_t1308_il2cpp_TypeInfo))), L_4, L_5);
		SerializationInfo_t700 * L_6 = ___si;
		NullCheck(L_6);
		SerializationInfo_AddValue_m4780(L_6, (String_t*) &_stringLiteral2054, 0, /*hidden argument*/&SerializationInfo_AddValue_m4780_MethodInfo);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern MethodInfo ObjRefSurrogate_SetObjectData_m9124_MethodInfo;
extern "C" Object_t * ObjRefSurrogate_SetObjectData_m9124 (ObjRefSurrogate_t1639 * __this, Object_t * ___obj, SerializationInfo_t700 * ___si, StreamingContext_t701  ___sc, Object_t * ___selector, MethodInfo* method)
{
	{
		NotSupportedException_t158 * L_0 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4784(L_0, (String_t*) &_stringLiteral2055, /*hidden argument*/&NotSupportedException__ctor_m4784_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RemotingSurrogateSelector_t1640_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0MethodDeclarations.h"

extern TypeInfo ISurrogateSelector_t1638_il2cpp_TypeInfo;
extern TypeInfo ISerializationSurrogate_t1641_il2cpp_TypeInfo;
extern Il2CppType ObjRef_t1308_0_0_0;
extern MethodInfo Type_get_IsMarshalByRef_m6815_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m3718_MethodInfo;
extern MethodInfo ISurrogateSelector_GetSurrogate_m11211_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
extern MethodInfo RemotingSurrogateSelector__ctor_m9125_MethodInfo;
extern "C" void RemotingSurrogateSelector__ctor_m9125 (RemotingSurrogateSelector_t1640 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
extern MethodInfo RemotingSurrogateSelector__cctor_m9126_MethodInfo;
extern "C" void RemotingSurrogateSelector__cctor_m9126 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&ObjRef_t1308_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		((RemotingSurrogateSelector_t1640_StaticFields*)InitializedTypeInfo(&RemotingSurrogateSelector_t1640_il2cpp_TypeInfo)->static_fields)->___s_cachedTypeObjRef_0 = L_0;
		ObjRefSurrogate_t1639 * L_1 = (ObjRefSurrogate_t1639 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjRefSurrogate_t1639_il2cpp_TypeInfo));
		ObjRefSurrogate__ctor_m9122(L_1, /*hidden argument*/&ObjRefSurrogate__ctor_m9122_MethodInfo);
		((RemotingSurrogateSelector_t1640_StaticFields*)InitializedTypeInfo(&RemotingSurrogateSelector_t1640_il2cpp_TypeInfo)->static_fields)->____objRefSurrogate_1 = L_1;
		RemotingSurrogate_t1637 * L_2 = (RemotingSurrogate_t1637 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingSurrogate_t1637_il2cpp_TypeInfo));
		RemotingSurrogate__ctor_m9119(L_2, /*hidden argument*/&RemotingSurrogate__ctor_m9119_MethodInfo);
		((RemotingSurrogateSelector_t1640_StaticFields*)InitializedTypeInfo(&RemotingSurrogateSelector_t1640_il2cpp_TypeInfo)->static_fields)->____objRemotingSurrogate_2 = L_2;
		return;
	}
}
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern MethodInfo RemotingSurrogateSelector_GetSurrogate_m9127_MethodInfo;
extern "C" Object_t * RemotingSurrogateSelector_GetSurrogate_m9127 (RemotingSurrogateSelector_t1640 * __this, Type_t * ___type, StreamingContext_t701  ___context, Object_t ** ___ssout, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsMarshalByRef_m6815_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Object_t ** L_2 = ___ssout;
		*((Object_t **)(L_2)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingSurrogateSelector_t1640_il2cpp_TypeInfo));
		RemotingSurrogate_t1637 * L_3 = ((RemotingSurrogateSelector_t1640_StaticFields*)InitializedTypeInfo(&RemotingSurrogateSelector_t1640_il2cpp_TypeInfo)->static_fields)->____objRemotingSurrogate_2;
		return L_3;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingSurrogateSelector_t1640_il2cpp_TypeInfo));
		Type_t * L_4 = ((RemotingSurrogateSelector_t1640_StaticFields*)InitializedTypeInfo(&RemotingSurrogateSelector_t1640_il2cpp_TypeInfo)->static_fields)->___s_cachedTypeObjRef_0;
		Type_t * L_5 = ___type;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m3718_MethodInfo, L_4, L_5);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		Object_t ** L_7 = ___ssout;
		*((Object_t **)(L_7)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingSurrogateSelector_t1640_il2cpp_TypeInfo));
		ObjRefSurrogate_t1639 * L_8 = ((RemotingSurrogateSelector_t1640_StaticFields*)InitializedTypeInfo(&RemotingSurrogateSelector_t1640_il2cpp_TypeInfo)->static_fields)->____objRefSurrogate_1;
		return L_8;
	}

IL_0027:
	{
		Object_t * L_9 = (__this->____next_3);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Object_t * L_10 = (__this->____next_3);
		Type_t * L_11 = ___type;
		StreamingContext_t701  L_12 = ___context;
		Object_t ** L_13 = ___ssout;
		NullCheck(L_10);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t701 , Object_t ** >::Invoke(&ISurrogateSelector_GetSurrogate_m11211_MethodInfo, L_10, L_11, L_12, L_13);
		return L_14;
	}

IL_003e:
	{
		Object_t ** L_15 = ___ssout;
		*((Object_t **)(L_15)) = (Object_t *)NULL;
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessage.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReturnMessage_t1642_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessageMethodDeclarations.h"

extern MethodInfo ReturnMessage_set_Uri_m9140_MethodInfo;
extern MethodInfo ReturnMessage_get_MethodBase_m9134_MethodInfo;
extern MethodInfo IMethodMessage_get_MethodBase_m11212_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern MethodInfo ReturnMessage__ctor_m9128_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m9128 (ReturnMessage_t1642 * __this, Object_t * ___ret, ObjectU5BU5D_t148* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t1628 * ___callCtx, Object_t * ___mcm, MethodInfo* method)
{
	static bool ReturnMessage__ctor_m9128_init;
	if (!ReturnMessage__ctor_m9128_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		ReturnMessage__ctor_m9128_init = true;
	}
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		Object_t * L_0 = ___ret;
		__this->____returnValue_4 = L_0;
		ObjectU5BU5D_t148* L_1 = ___outArgs;
		__this->____args_1 = L_1;
		int32_t L_2 = ___outArgsCount;
		__this->____outArgsCount_2 = L_2;
		LogicalCallContext_t1628 * L_3 = ___callCtx;
		__this->____callCtx_3 = L_3;
		Object_t * L_4 = ___mcm;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_5 = ___mcm;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IMethodMessage_get_Uri_m11201_MethodInfo, L_5);
		__this->____uri_5 = L_6;
		Object_t * L_7 = ___mcm;
		NullCheck(L_7);
		MethodBase_t750 * L_8 = (MethodBase_t750 *)InterfaceFuncInvoker0< MethodBase_t750 * >::Invoke(&IMethodMessage_get_MethodBase_m11212_MethodInfo, L_7);
		__this->____methodBase_7 = L_8;
	}

IL_0041:
	{
		ObjectU5BU5D_t148* L_9 = (__this->____args_1);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_10 = ___outArgsCount;
		__this->____args_1 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, L_10));
	}

IL_0055:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern MethodInfo ReturnMessage__ctor_m9129_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m9129 (ReturnMessage_t1642 * __this, Exception_t163 * ___e, Object_t * ___mcm, MethodInfo* method)
{
	static bool ReturnMessage__ctor_m9129_init;
	if (!ReturnMessage__ctor_m9129_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		ReturnMessage__ctor_m9129_init = true;
	}
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		Exception_t163 * L_0 = ___e;
		__this->____exception_6 = L_0;
		Object_t * L_1 = ___mcm;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_2 = ___mcm;
		NullCheck(L_2);
		MethodBase_t750 * L_3 = (MethodBase_t750 *)InterfaceFuncInvoker0< MethodBase_t750 * >::Invoke(&IMethodMessage_get_MethodBase_m11212_MethodInfo, L_2);
		__this->____methodBase_7 = L_3;
		Object_t * L_4 = ___mcm;
		NullCheck(L_4);
		LogicalCallContext_t1628 * L_5 = (LogicalCallContext_t1628 *)InterfaceFuncInvoker0< LogicalCallContext_t1628 * >::Invoke(&IMethodMessage_get_LogicalCallContext_m11205_MethodInfo, L_4);
		__this->____callCtx_3 = L_5;
	}

IL_0028:
	{
		__this->____args_1 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern MethodInfo ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m9130_MethodInfo;
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m9130 (ReturnMessage_t1642 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(&ReturnMessage_set_Uri_m9140_MethodInfo, __this, L_0);
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::get_ArgCount()
extern MethodInfo ReturnMessage_get_ArgCount_m9131_MethodInfo;
extern "C" int32_t ReturnMessage_get_ArgCount_m9131 (ReturnMessage_t1642 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->____args_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern MethodInfo ReturnMessage_get_Args_m9132_MethodInfo;
extern "C" ObjectU5BU5D_t148* ReturnMessage_get_Args_m9132 (ReturnMessage_t1642 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->____args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern MethodInfo ReturnMessage_get_LogicalCallContext_m9133_MethodInfo;
extern "C" LogicalCallContext_t1628 * ReturnMessage_get_LogicalCallContext_m9133 (ReturnMessage_t1642 * __this, MethodInfo* method)
{
	{
		LogicalCallContext_t1628 * L_0 = (__this->____callCtx_3);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		LogicalCallContext_t1628 * L_1 = (LogicalCallContext_t1628 *)il2cpp_codegen_object_new (InitializedTypeInfo(&LogicalCallContext_t1628_il2cpp_TypeInfo));
		LogicalCallContext__ctor_m9046(L_1, /*hidden argument*/&LogicalCallContext__ctor_m9046_MethodInfo);
		__this->____callCtx_3 = L_1;
	}

IL_0013:
	{
		LogicalCallContext_t1628 * L_2 = (__this->____callCtx_3);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t750 * ReturnMessage_get_MethodBase_m9134 (ReturnMessage_t1642 * __this, MethodInfo* method)
{
	{
		MethodBase_t750 * L_0 = (__this->____methodBase_7);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern MethodInfo ReturnMessage_get_MethodName_m9135_MethodInfo;
extern "C" String_t* ReturnMessage_get_MethodName_m9135 (ReturnMessage_t1642 * __this, MethodInfo* method)
{
	{
		MethodBase_t750 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_1 = (__this->____methodName_8);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		MethodBase_t750 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3679_MethodInfo, L_2);
		__this->____methodName_8 = L_3;
	}

IL_0021:
	{
		String_t* L_4 = (__this->____methodName_8);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern MethodInfo ReturnMessage_get_MethodSignature_m9136_MethodInfo;
extern TypeInfo* TypeU5BU5D_t670_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_MethodSignature_m9136 (ReturnMessage_t1642 * __this, MethodInfo* method)
{
	static bool ReturnMessage_get_MethodSignature_m9136_init;
	if (!ReturnMessage_get_MethodSignature_m9136_init)
	{
		TypeU5BU5D_t670_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t670_0_0_0);
		ReturnMessage_get_MethodSignature_m9136_init = true;
	}
	ParameterInfoU5BU5D_t751* V_0 = {0};
	int32_t V_1 = 0;
	{
		MethodBase_t750 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		TypeU5BU5D_t670* L_1 = (__this->____methodSignature_9);
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t750 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t751* L_3 = (ParameterInfoU5BU5D_t751*)VirtFuncInvoker0< ParameterInfoU5BU5D_t751* >::Invoke(&MethodBase_GetParameters_m3694_MethodInfo, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t751* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_9 = ((TypeU5BU5D_t670*)SZArrayNew(TypeU5BU5D_t670_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		TypeU5BU5D_t670* L_5 = (__this->____methodSignature_9);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t751* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3695_MethodInfo, (*(ParameterInfo_t752 **)(ParameterInfo_t752 **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6)) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t751* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		TypeU5BU5D_t670* L_14 = (__this->____methodSignature_9);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern MethodInfo ReturnMessage_get_Properties_m9137_MethodInfo;
extern "C" Object_t * ReturnMessage_get_Properties_m9137 (ReturnMessage_t1642 * __this, MethodInfo* method)
{
	{
		MethodReturnDictionary_t1633 * L_0 = (__this->____properties_11);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MethodReturnDictionary_t1633_il2cpp_TypeInfo));
		MethodReturnDictionary_t1633 * L_1 = (MethodReturnDictionary_t1633 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MethodReturnDictionary_t1633_il2cpp_TypeInfo));
		MethodReturnDictionary__ctor_m9101(L_1, __this, /*hidden argument*/&MethodReturnDictionary__ctor_m9101_MethodInfo);
		__this->____properties_11 = L_1;
	}

IL_0014:
	{
		MethodReturnDictionary_t1633 * L_2 = (__this->____properties_11);
		return L_2;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern MethodInfo ReturnMessage_get_TypeName_m9138_MethodInfo;
extern "C" String_t* ReturnMessage_get_TypeName_m9138 (ReturnMessage_t1642 * __this, MethodInfo* method)
{
	{
		MethodBase_t750 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_1 = (__this->____typeName_10);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		MethodBase_t750 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3692_MethodInfo, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3735_MethodInfo, L_3);
		__this->____typeName_10 = L_4;
	}

IL_0026:
	{
		String_t* L_5 = (__this->____typeName_10);
		return L_5;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern MethodInfo ReturnMessage_get_Uri_m9139_MethodInfo;
extern "C" String_t* ReturnMessage_get_Uri_m9139 (ReturnMessage_t1642 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_5);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m9140 (ReturnMessage_t1642 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_5 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::GetArg(System.Int32)
extern MethodInfo ReturnMessage_GetArg_m9141_MethodInfo;
extern "C" Object_t * ReturnMessage_GetArg_m9141 (ReturnMessage_t1642 * __this, int32_t ___argNum, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->____args_1);
		int32_t L_1 = ___argNum;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_0, L_2));
	}
}
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern MethodInfo ReturnMessage_get_Exception_m9142_MethodInfo;
extern "C" Exception_t163 * ReturnMessage_get_Exception_m9142 (ReturnMessage_t1642 * __this, MethodInfo* method)
{
	{
		Exception_t163 * L_0 = (__this->____exception_6);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgCount()
extern MethodInfo ReturnMessage_get_OutArgCount_m9143_MethodInfo;
extern "C" int32_t ReturnMessage_get_OutArgCount_m9143 (ReturnMessage_t1642 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->____args_1);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectU5BU5D_t148* L_1 = (__this->____args_1);
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return 0;
	}

IL_0014:
	{
		ArgInfo_t1616 * L_2 = (__this->____inArgInfo_12);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		MethodBase_t750 * L_3 = (MethodBase_t750 *)VirtFuncInvoker0< MethodBase_t750 * >::Invoke(&ReturnMessage_get_MethodBase_m9134_MethodInfo, __this);
		ArgInfo_t1616 * L_4 = (ArgInfo_t1616 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgInfo_t1616_il2cpp_TypeInfo));
		ArgInfo__ctor_m9003(L_4, L_3, 1, /*hidden argument*/&ArgInfo__ctor_m9003_MethodInfo);
		__this->____inArgInfo_12 = L_4;
	}

IL_002e:
	{
		ArgInfo_t1616 * L_5 = (__this->____inArgInfo_12);
		NullCheck(L_5);
		int32_t L_6 = ArgInfo_GetInOutArgCount_m9004(L_5, /*hidden argument*/&ArgInfo_GetInOutArgCount_m9004_MethodInfo);
		return L_6;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern MethodInfo ReturnMessage_get_OutArgs_m9144_MethodInfo;
extern "C" ObjectU5BU5D_t148* ReturnMessage_get_OutArgs_m9144 (ReturnMessage_t1642 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->____outArgs_0);
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		ObjectU5BU5D_t148* L_1 = (__this->____args_1);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		ArgInfo_t1616 * L_2 = (__this->____inArgInfo_12);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		MethodBase_t750 * L_3 = (MethodBase_t750 *)VirtFuncInvoker0< MethodBase_t750 * >::Invoke(&ReturnMessage_get_MethodBase_m9134_MethodInfo, __this);
		ArgInfo_t1616 * L_4 = (ArgInfo_t1616 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgInfo_t1616_il2cpp_TypeInfo));
		ArgInfo__ctor_m9003(L_4, L_3, 1, /*hidden argument*/&ArgInfo__ctor_m9003_MethodInfo);
		__this->____inArgInfo_12 = L_4;
	}

IL_002a:
	{
		ArgInfo_t1616 * L_5 = (__this->____inArgInfo_12);
		ObjectU5BU5D_t148* L_6 = (__this->____args_1);
		NullCheck(L_5);
		ObjectU5BU5D_t148* L_7 = ArgInfo_GetInOutArgs_m9005(L_5, L_6, /*hidden argument*/&ArgInfo_GetInOutArgs_m9005_MethodInfo);
		__this->____outArgs_0 = L_7;
	}

IL_0041:
	{
		ObjectU5BU5D_t148* L_8 = (__this->____outArgs_0);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern MethodInfo ReturnMessage_get_ReturnValue_m9145_MethodInfo;
extern "C" Object_t * ReturnMessage_get_ReturnValue_m9145 (ReturnMessage_t1642 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____returnValue_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ProxyAttribute_t1644_il2cpp_TypeInfo;
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttributeMethodDeclarations.h"

// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxy.h"
extern TypeInfo RemotingProxy_t1649_il2cpp_TypeInfo;
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxyMethodDeclarations.h"
extern MethodInfo RemotingProxy__ctor_m9162_MethodInfo;
extern MethodInfo RealProxy_GetTransparentProxy_m9159_MethodInfo;
extern MethodInfo RemotingServices_GetProxyForRemoteObject_m9235_MethodInfo;


// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern MethodInfo ProxyAttribute_CreateInstance_m9146_MethodInfo;
extern "C" MarshalByRefObject_t945 * ProxyAttribute_CreateInstance_m9146 (ProxyAttribute_t1644 * __this, Type_t * ___serverType, MethodInfo* method)
{
	RemotingProxy_t1649 * V_0 = {0};
	{
		Type_t * L_0 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo));
		String_t* L_1 = ((ChannelServices_t1598_StaticFields*)InitializedTypeInfo(&ChannelServices_t1598_il2cpp_TypeInfo)->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingProxy_t1649_il2cpp_TypeInfo));
		RemotingProxy_t1649 * L_2 = (RemotingProxy_t1649 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingProxy_t1649_il2cpp_TypeInfo));
		RemotingProxy__ctor_m9162(L_2, L_0, L_1, (ObjectU5BU5D_t148*)(ObjectU5BU5D_t148*)NULL, /*hidden argument*/&RemotingProxy__ctor_m9162_MethodInfo);
		V_0 = L_2;
		RemotingProxy_t1649 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&RealProxy_GetTransparentProxy_m9159_MethodInfo, L_3);
		return ((MarshalByRefObject_t945 *)Castclass(L_4, InitializedTypeInfo(&MarshalByRefObject_t945_il2cpp_TypeInfo)));
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern MethodInfo ProxyAttribute_CreateProxy_m9147_MethodInfo;
extern "C" RealProxy_t1645 * ProxyAttribute_CreateProxy_m9147 (ProxyAttribute_t1644 * __this, ObjRef_t1308 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t1595 * ___serverContext, MethodInfo* method)
{
	{
		ObjRef_t1308 * L_0 = ___objRef;
		Type_t * L_1 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1661_il2cpp_TypeInfo));
		Object_t * L_2 = RemotingServices_GetProxyForRemoteObject_m9235(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&RemotingServices_GetProxyForRemoteObject_m9235_MethodInfo);
		RealProxy_t1645 * L_3 = RemotingServices_GetRealProxy_m9220(NULL /*static, unused*/, L_2, /*hidden argument*/&RemotingServices_GetRealProxy_m9220_MethodInfo);
		return L_3;
	}
}
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo ProxyAttribute_GetPropertiesForNewContext_m9148_MethodInfo;
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m9148 (ProxyAttribute_t1644 * __this, Object_t * ___msg, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo ProxyAttribute_IsContextOK_m9149_MethodInfo;
extern "C" bool ProxyAttribute_IsContextOK_m9149 (ProxyAttribute_t1644 * __this, Context_t1595 * ___ctx, Object_t * ___msg, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxy.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TransparentProxy_t1646_il2cpp_TypeInfo;
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxyMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentity.h"
extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
extern TypeInfo IRemotingTypeInfo_t1657_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern Il2CppType MarshalByRefObject_t945_0_0_0;
extern MethodInfo RealProxy__ctor_m9152_MethodInfo;
extern MethodInfo IntPtr_op_Inequality_m3654_MethodInfo;
extern MethodInfo RealProxy_InternalGetProxyType_m9153_MethodInfo;
extern MethodInfo IRemotingTypeInfo_get_TypeName_m11213_MethodInfo;
extern MethodInfo RealProxy_InternalGetTransparentProxy_m9158_MethodInfo;


// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern MethodInfo RealProxy__ctor_m9150_MethodInfo;
extern "C" void RealProxy__ctor_m9150 (RealProxy_t1645 * __this, Type_t * ___classToProxy, MethodInfo* method)
{
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		RealProxy__ctor_m9152(__this, L_0, L_1, NULL, /*hidden argument*/&RealProxy__ctor_m9152_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern MethodInfo RealProxy__ctor_m9151_MethodInfo;
extern "C" void RealProxy__ctor_m9151 (RealProxy_t1645 * __this, Type_t * ___classToProxy, ClientIdentity_t1648 * ___identity, MethodInfo* method)
{
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		RealProxy__ctor_m9152(__this, L_0, L_1, NULL, /*hidden argument*/&RealProxy__ctor_m9152_MethodInfo);
		ClientIdentity_t1648 * L_2 = ___identity;
		__this->____objectIdentity_3 = L_2;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern "C" void RealProxy__ctor_m9152 (RealProxy_t1645 * __this, Type_t * ___classToProxy, IntPtr_t ___stub, Object_t * ___stubData, MethodInfo* method)
{
	{
		__this->____targetDomainId_1 = (-1);
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		Type_t * L_0 = ___classToProxy;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsMarshalByRef_m6815_MethodInfo, L_0);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		Type_t * L_2 = ___classToProxy;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m6814_MethodInfo, L_2);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_t445 * L_4 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_4, (String_t*) &_stringLiteral2056, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	{
		Type_t * L_5 = ___classToProxy;
		__this->___class_to_proxy_0 = L_5;
		IntPtr_t L_6 = ___stub;
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Inequality_m3654(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&IntPtr_op_Inequality_m3654_MethodInfo);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		NotSupportedException_t158 * L_9 = (NotSupportedException_t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t158_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4784(L_9, (String_t*) &_stringLiteral2057, /*hidden argument*/&NotSupportedException__ctor_m4784_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C" Type_t * RealProxy_InternalGetProxyType_m9153 (Object_t * __this /* static, unused */, Object_t * ___transparentProxy, MethodInfo* method)
{
	typedef Type_t * (*RealProxy_InternalGetProxyType_m9153_ftn) (Object_t *);
	static RealProxy_InternalGetProxyType_m9153_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RealProxy_InternalGetProxyType_m9153_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)");
	return _il2cpp_icall_func(___transparentProxy);
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern MethodInfo RealProxy_GetProxiedType_m9154_MethodInfo;
extern "C" Type_t * RealProxy_GetProxiedType_m9154 (RealProxy_t1645 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_1 = (__this->___class_to_proxy_0);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m6814_MethodInfo, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&MarshalByRefObject_t945_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		return L_3;
	}

IL_0020:
	{
		Type_t * L_4 = (__this->___class_to_proxy_0);
		return L_4;
	}

IL_0027:
	{
		Object_t * L_5 = (__this->____objTP_4);
		Type_t * L_6 = RealProxy_InternalGetProxyType_m9153(NULL /*static, unused*/, L_5, /*hidden argument*/&RealProxy_InternalGetProxyType_m9153_MethodInfo);
		return L_6;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RealProxy_GetObjectData_m9155 (RealProxy_t1645 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&RealProxy_GetTransparentProxy_m9159_MethodInfo, __this);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		SerializationInfo_t700 * L_2 = ___info;
		StreamingContext_t701  L_3 = ___context;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1661_il2cpp_TypeInfo));
		RemotingServices_GetObjectData_m9224(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/&RemotingServices_GetObjectData_m9224_MethodInfo);
		return;
	}
}
// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::get_ObjectIdentity()
extern MethodInfo RealProxy_get_ObjectIdentity_m9156_MethodInfo;
extern "C" Identity_t1647 * RealProxy_get_ObjectIdentity_m9156 (RealProxy_t1645 * __this, MethodInfo* method)
{
	{
		Identity_t1647 * L_0 = (__this->____objectIdentity_3);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::set_ObjectIdentity(System.Runtime.Remoting.Identity)
extern MethodInfo RealProxy_set_ObjectIdentity_m9157_MethodInfo;
extern "C" void RealProxy_set_ObjectIdentity_m9157 (RealProxy_t1645 * __this, Identity_t1647 * ___value, MethodInfo* method)
{
	{
		Identity_t1647 * L_0 = ___value;
		__this->____objectIdentity_3 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern "C" Object_t * RealProxy_InternalGetTransparentProxy_m9158 (RealProxy_t1645 * __this, String_t* ___className, MethodInfo* method)
{
	typedef Object_t * (*RealProxy_InternalGetTransparentProxy_m9158_ftn) (RealProxy_t1645 *, String_t*);
	static RealProxy_InternalGetTransparentProxy_m9158_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RealProxy_InternalGetTransparentProxy_m9158_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)");
	return _il2cpp_icall_func(__this, ___className);
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern "C" Object_t * RealProxy_GetTransparentProxy_m9159 (RealProxy_t1645 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_005a;
		}
	}
	{
		V_1 = ((Object_t *)IsInst(__this, InitializedTypeInfo(&IRemotingTypeInfo_t1657_il2cpp_TypeInfo)));
		Object_t * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IRemotingTypeInfo_get_TypeName_m11213_MethodInfo, L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&MarshalByRefObject_t945_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3735_MethodInfo, L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_8 = String_op_Equality_m641(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_8)
		{
			goto IL_003f;
		}
	}

IL_0033:
	{
		Type_t * L_9 = (__this->___class_to_proxy_0);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3735_MethodInfo, L_9);
		V_0 = L_10;
	}

IL_003f:
	{
		goto IL_004d;
	}

IL_0041:
	{
		Type_t * L_11 = (__this->___class_to_proxy_0);
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3735_MethodInfo, L_11);
		V_0 = L_12;
	}

IL_004d:
	{
		String_t* L_13 = V_0;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&RealProxy_InternalGetTransparentProxy_m9158_MethodInfo, __this, L_13);
		__this->____objTP_4 = L_14;
	}

IL_005a:
	{
		Object_t * L_15 = (__this->____objTP_4);
		return L_15;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern MethodInfo RealProxy_SetTargetDomain_m9160_MethodInfo;
extern "C" void RealProxy_SetTargetDomain_m9160 (RealProxy_t1645 * __this, int32_t ___domainId, MethodInfo* method)
{
	{
		int32_t L_0 = ___domainId;
		__this->____targetDomainId_1 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentity.h"
extern TypeInfo ClientIdentity_t1648_il2cpp_TypeInfo;
extern TypeInfo Identity_t1647_il2cpp_TypeInfo;
extern TypeInfo ClientActivatedIdentity_t1662_il2cpp_TypeInfo;
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentityMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Identity_CreateObjRef_m11214_MethodInfo;
extern MethodInfo ObjRef_get_TypeInfo_m9196_MethodInfo;
extern MethodInfo Identity_get_ChannelSink_m9177_MethodInfo;
extern MethodInfo ClientIdentity_get_TargetUri_m9188_MethodInfo;
extern MethodInfo Type_GetMethod_m6839_MethodInfo;
extern MethodInfo RemotingServices_DisposeIdentity_m9238_MethodInfo;


// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern MethodInfo RemotingProxy__ctor_m9161_MethodInfo;
extern "C" void RemotingProxy__ctor_m9161 (RemotingProxy_t1649 * __this, Type_t * ___type, ClientIdentity_t1648 * ___identity, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ClientIdentity_t1648 * L_1 = ___identity;
		RealProxy__ctor_m9151(__this, L_0, L_1, /*hidden argument*/&RealProxy__ctor_m9151_MethodInfo);
		ClientIdentity_t1648 * L_2 = ___identity;
		NullCheck(L_2);
		Object_t * L_3 = Identity_get_ChannelSink_m9177(L_2, /*hidden argument*/&Identity_get_ChannelSink_m9177_MethodInfo);
		__this->____sink_7 = L_3;
		__this->____hasEnvoySink_8 = 0;
		ClientIdentity_t1648 * L_4 = ___identity;
		NullCheck(L_4);
		String_t* L_5 = ClientIdentity_get_TargetUri_m9188(L_4, /*hidden argument*/&ClientIdentity_get_TargetUri_m9188_MethodInfo);
		__this->____targetUri_2 = L_5;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
extern "C" void RemotingProxy__ctor_m9162 (RemotingProxy_t1649 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t148* ___activationAttributes, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		RealProxy__ctor_m9150(__this, L_0, /*hidden argument*/&RealProxy__ctor_m9150_MethodInfo);
		__this->____hasEnvoySink_8 = 0;
		Type_t * L_1 = ___type;
		String_t* L_2 = ___activationUrl;
		ObjectU5BU5D_t148* L_3 = ___activationAttributes;
		ConstructionCall_t1587 * L_4 = ActivationServices_CreateConstructionCall_m8927(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/&ActivationServices_CreateConstructionCall_m8927_MethodInfo);
		__this->____ctorCall_9 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
extern MethodInfo RemotingProxy__cctor_m9163_MethodInfo;
extern "C" void RemotingProxy__cctor_m9163 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(&Type_GetMethod_m6839_MethodInfo, L_0, (String_t*) &_stringLiteral2058);
		((RemotingProxy_t1649_StaticFields*)InitializedTypeInfo(&RemotingProxy_t1649_il2cpp_TypeInfo)->static_fields)->____cache_GetTypeMethod_5 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		NullCheck(L_2);
		MethodInfo_t * L_3 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(&Type_GetMethod_m6839_MethodInfo, L_2, (String_t*) &_stringLiteral2059);
		((RemotingProxy_t1649_StaticFields*)InitializedTypeInfo(&RemotingProxy_t1649_il2cpp_TypeInfo)->static_fields)->____cache_GetHashCodeMethod_6 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern MethodInfo RemotingProxy_get_TypeName_m9164_MethodInfo;
extern "C" String_t* RemotingProxy_get_TypeName_m9164 (RemotingProxy_t1649 * __this, MethodInfo* method)
{
	ObjRef_t1308 * V_0 = {0};
	{
		Identity_t1647 * L_0 = (__this->____objectIdentity_3);
		if (!((ClientIdentity_t1648 *)IsInst(L_0, InitializedTypeInfo(&ClientIdentity_t1648_il2cpp_TypeInfo))))
		{
			goto IL_002e;
		}
	}
	{
		Identity_t1647 * L_1 = (__this->____objectIdentity_3);
		NullCheck(L_1);
		ObjRef_t1308 * L_2 = (ObjRef_t1308 *)VirtFuncInvoker1< ObjRef_t1308 *, Type_t * >::Invoke(&Identity_CreateObjRef_m11214_MethodInfo, L_1, (Type_t *)NULL);
		V_0 = L_2;
		ObjRef_t1308 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ObjRef_get_TypeInfo_m9196_MethodInfo, L_3);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		ObjRef_t1308 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ObjRef_get_TypeInfo_m9196_MethodInfo, L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IRemotingTypeInfo_get_TypeName_m11213_MethodInfo, L_6);
		return L_7;
	}

IL_002e:
	{
		Type_t * L_8 = RealProxy_GetProxiedType_m9154(__this, /*hidden argument*/&RealProxy_GetProxiedType_m9154_MethodInfo);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3735_MethodInfo, L_8);
		return L_9;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
extern MethodInfo RemotingProxy_Finalize_m9165_MethodInfo;
extern "C" void RemotingProxy_Finalize_m9165 (RemotingProxy_t1649 * __this, MethodInfo* method)
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
			Identity_t1647 * L_0 = (__this->____objectIdentity_3);
			if (!L_0)
			{
				goto IL_0020;
			}
		}

IL_0008:
		{
			Identity_t1647 * L_1 = (__this->____objectIdentity_3);
			if (((ClientActivatedIdentity_t1662 *)IsInst(L_1, InitializedTypeInfo(&ClientActivatedIdentity_t1662_il2cpp_TypeInfo))))
			{
				goto IL_0020;
			}
		}

IL_0015:
		{
			Identity_t1647 * L_2 = (__this->____objectIdentity_3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1661_il2cpp_TypeInfo));
			RemotingServices_DisposeIdentity_m9238(NULL /*static, unused*/, L_2, /*hidden argument*/&RemotingServices_DisposeIdentity_m9238_MethodInfo);
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x29, FINALLY_0022);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		Object_Finalize_m138(__this, /*hidden argument*/&Object_Finalize_m138_MethodInfo);
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_JUMP_TBL(0x29, IL_0029)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0029:
	{
		return;
	}
}
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServices.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TrackingServices_t1650_il2cpp_TypeInfo;
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServicesMethodDeclarations.h"

extern TypeInfo ITrackingHandlerU5BU5D_t1935_il2cpp_TypeInfo;
extern TypeInfo ITrackingHandler_t1936_il2cpp_TypeInfo;
extern Il2CppType ITrackingHandler_t1936_0_0_0;
extern Il2CppType ITrackingHandlerU5BU5D_t1935_0_0_0;
extern MethodInfo ArrayList_ToArray_m4916_MethodInfo;
extern MethodInfo ITrackingHandler_MarshaledObject_m11215_MethodInfo;
extern MethodInfo ITrackingHandler_UnmarshaledObject_m11216_MethodInfo;
extern MethodInfo ITrackingHandler_DisconnectedObject_m11217_MethodInfo;


// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern MethodInfo TrackingServices__cctor_m9166_MethodInfo;
extern "C" void TrackingServices__cctor_m9166 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList_t906 * L_0 = (ArrayList_t906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList__ctor_m4776(L_0, /*hidden argument*/&ArrayList__ctor_m4776_MethodInfo);
		((TrackingServices_t1650_StaticFields*)InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo)->static_fields)->____handlers_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyMarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern MethodInfo TrackingServices_NotifyMarshaledObject_m9167_MethodInfo;
extern TypeInfo* ITrackingHandlerU5BU5D_t1935_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyMarshaledObject_m9167 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t1308 * ___or, MethodInfo* method)
{
	static bool TrackingServices_NotifyMarshaledObject_m9167_init;
	if (!TrackingServices_NotifyMarshaledObject_m9167_init)
	{
		ITrackingHandlerU5BU5D_t1935_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ITrackingHandlerU5BU5D_t1935_0_0_0);
		TrackingServices_NotifyMarshaledObject_m9167_init = true;
	}
	ITrackingHandlerU5BU5D_t1935* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo));
		ArrayList_t906 * L_0 = ((TrackingServices_t1650_StaticFields*)InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo)->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_get_SyncRoot_m4935_MethodInfo, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_2, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo));
			ArrayList_t906 * L_3 = ((TrackingServices_t1650_StaticFields*)InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo)->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_3);
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_003b);
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo));
			ArrayList_t906 * L_5 = ((TrackingServices_t1650_StaticFields*)InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo)->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
			Type_t * L_6 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&ITrackingHandler_t1936_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m4916_MethodInfo, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t1935*)Castclass(L_7, ITrackingHandlerU5BU5D_t1935_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_1;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_8, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0042:
	{
		V_2 = 0;
		goto IL_0054;
	}

IL_0046:
	{
		ITrackingHandlerU5BU5D_t1935* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		ObjRef_t1308 * L_13 = ___or;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)));
		InterfaceActionInvoker2< Object_t *, ObjRef_t1308 * >::Invoke(&ITrackingHandler_MarshaledObject_m11215_MethodInfo, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		ITrackingHandlerU5BU5D_t1935* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_005a:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern MethodInfo TrackingServices_NotifyUnmarshaledObject_m9168_MethodInfo;
extern TypeInfo* ITrackingHandlerU5BU5D_t1935_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyUnmarshaledObject_m9168 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t1308 * ___or, MethodInfo* method)
{
	static bool TrackingServices_NotifyUnmarshaledObject_m9168_init;
	if (!TrackingServices_NotifyUnmarshaledObject_m9168_init)
	{
		ITrackingHandlerU5BU5D_t1935_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ITrackingHandlerU5BU5D_t1935_0_0_0);
		TrackingServices_NotifyUnmarshaledObject_m9168_init = true;
	}
	ITrackingHandlerU5BU5D_t1935* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo));
		ArrayList_t906 * L_0 = ((TrackingServices_t1650_StaticFields*)InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo)->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_get_SyncRoot_m4935_MethodInfo, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_2, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo));
			ArrayList_t906 * L_3 = ((TrackingServices_t1650_StaticFields*)InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo)->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_3);
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_003b);
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo));
			ArrayList_t906 * L_5 = ((TrackingServices_t1650_StaticFields*)InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo)->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
			Type_t * L_6 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&ITrackingHandler_t1936_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m4916_MethodInfo, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t1935*)Castclass(L_7, ITrackingHandlerU5BU5D_t1935_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_1;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_8, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0042:
	{
		V_2 = 0;
		goto IL_0054;
	}

IL_0046:
	{
		ITrackingHandlerU5BU5D_t1935* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		ObjRef_t1308 * L_13 = ___or;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)));
		InterfaceActionInvoker2< Object_t *, ObjRef_t1308 * >::Invoke(&ITrackingHandler_UnmarshaledObject_m11216_MethodInfo, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		ITrackingHandlerU5BU5D_t1935* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_005a:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyDisconnectedObject(System.Object)
extern MethodInfo TrackingServices_NotifyDisconnectedObject_m9169_MethodInfo;
extern TypeInfo* ITrackingHandlerU5BU5D_t1935_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyDisconnectedObject_m9169 (Object_t * __this /* static, unused */, Object_t * ___obj, MethodInfo* method)
{
	static bool TrackingServices_NotifyDisconnectedObject_m9169_init;
	if (!TrackingServices_NotifyDisconnectedObject_m9169_init)
	{
		ITrackingHandlerU5BU5D_t1935_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ITrackingHandlerU5BU5D_t1935_0_0_0);
		TrackingServices_NotifyDisconnectedObject_m9169_init = true;
	}
	ITrackingHandlerU5BU5D_t1935* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo));
		ArrayList_t906 * L_0 = ((TrackingServices_t1650_StaticFields*)InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo)->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_get_SyncRoot_m4935_MethodInfo, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_2, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo));
			ArrayList_t906 * L_3 = ((TrackingServices_t1650_StaticFields*)InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo)->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_3);
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x59, FINALLY_003b);
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo));
			ArrayList_t906 * L_5 = ((TrackingServices_t1650_StaticFields*)InitializedTypeInfo(&TrackingServices_t1650_il2cpp_TypeInfo)->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
			Type_t * L_6 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&ITrackingHandler_t1936_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m4916_MethodInfo, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t1935*)Castclass(L_7, ITrackingHandlerU5BU5D_t1935_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_1;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_8, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0042:
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_0046:
	{
		ITrackingHandlerU5BU5D_t1935* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)));
		InterfaceActionInvoker1< Object_t * >::Invoke(&ITrackingHandler_DisconnectedObject_m11217_MethodInfo, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_14 = V_2;
		ITrackingHandlerU5BU5D_t1935* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_0059:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ActivatedClientTypeEntry_t1651_il2cpp_TypeInfo;
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"

// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntryMethodDeclarations.h"
extern MethodInfo TypeEntry_get_TypeName_m9254_MethodInfo;
extern MethodInfo TypeEntry_get_AssemblyName_m9253_MethodInfo;
extern MethodInfo ActivatedClientTypeEntry_get_ApplicationUrl_m9170_MethodInfo;


// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::get_ApplicationUrl()
extern "C" String_t* ActivatedClientTypeEntry_get_ApplicationUrl_m9170 (ActivatedClientTypeEntry_t1651 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___applicationUrl_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.IContextAttribute[] System.Runtime.Remoting.ActivatedClientTypeEntry::get_ContextAttributes()
extern MethodInfo ActivatedClientTypeEntry_get_ContextAttributes_m9171_MethodInfo;
extern "C" IContextAttributeU5BU5D_t1653* ActivatedClientTypeEntry_get_ContextAttributes_m9171 (ActivatedClientTypeEntry_t1651 * __this, MethodInfo* method)
{
	{
		return (IContextAttributeU5BU5D_t1653*)NULL;
	}
}
// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::get_ObjectType()
extern MethodInfo ActivatedClientTypeEntry_get_ObjectType_m9172_MethodInfo;
extern "C" Type_t * ActivatedClientTypeEntry_get_ObjectType_m9172 (ActivatedClientTypeEntry_t1651 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___obj_type_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::ToString()
extern MethodInfo ActivatedClientTypeEntry_ToString_m9173_MethodInfo;
extern "C" String_t* ActivatedClientTypeEntry_ToString_m9173 (ActivatedClientTypeEntry_t1651 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = TypeEntry_get_TypeName_m9254(__this, /*hidden argument*/&TypeEntry_get_TypeName_m9254_MethodInfo);
		String_t* L_1 = TypeEntry_get_AssemblyName_m9253(__this, /*hidden argument*/&TypeEntry_get_AssemblyName_m9253_MethodInfo);
		String_t* L_2 = ActivatedClientTypeEntry_get_ApplicationUrl_m9170(__this, /*hidden argument*/&ActivatedClientTypeEntry_get_ApplicationUrl_m9170_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m98(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&String_Concat_m98_MethodInfo);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t1558;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1358;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t219;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t818;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t809;
// System.Globalization.CultureInfo
struct CultureInfo_t812;
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Emit.DynamicMethod::create_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethod_create_dynamic_method_m8510 (DynamicMethod_t1558 * __this, DynamicMethod_t1558 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::destroy_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethod_destroy_dynamic_method_m8511 (DynamicMethod_t1558 * __this, DynamicMethod_t1558 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::CreateDynMethod()
extern "C" void DynamicMethod_CreateDynMethod_m8512 (DynamicMethod_t1558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::Finalize()
extern "C" void DynamicMethod_Finalize_m8513 (DynamicMethod_t1558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.DynamicMethod::GetBaseDefinition()
extern "C" MethodInfo_t * DynamicMethod_GetBaseDefinition_m8514 (DynamicMethod_t1558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t219* DynamicMethod_GetCustomAttributes_m8515 (DynamicMethod_t1558 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t219* DynamicMethod_GetCustomAttributes_m8516 (DynamicMethod_t1558 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.DynamicMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t818* DynamicMethod_GetParameters_m8517 (DynamicMethod_t1558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.DynamicMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * DynamicMethod_Invoke_m8518 (DynamicMethod_t1558 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t809 * ___binder, ObjectU5BU5D_t219* ___parameters, CultureInfo_t812 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DynamicMethod::IsDefined(System.Type,System.Boolean)
extern "C" bool DynamicMethod_IsDefined_m8519 (DynamicMethod_t1558 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::ToString()
extern "C" String_t* DynamicMethod_ToString_m8520 (DynamicMethod_t1558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::get_Attributes()
extern "C" int32_t DynamicMethod_get_Attributes_m8521 (DynamicMethod_t1558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::get_CallingConvention()
extern "C" int32_t DynamicMethod_get_CallingConvention_m8522 (DynamicMethod_t1558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_DeclaringType()
extern "C" Type_t * DynamicMethod_get_DeclaringType_m8523 (DynamicMethod_t1558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1556  DynamicMethod_get_MethodHandle_m8524 (DynamicMethod_t1558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.DynamicMethod::get_Module()
extern "C" Module_t1358 * DynamicMethod_get_Module_m8525 (DynamicMethod_t1558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::get_Name()
extern "C" String_t* DynamicMethod_get_Name_m8526 (DynamicMethod_t1558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReflectedType()
extern "C" Type_t * DynamicMethod_get_ReflectedType_m8527 (DynamicMethod_t1558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReturnType()
extern "C" Type_t * DynamicMethod_get_ReturnType_m8528 (DynamicMethod_t1558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

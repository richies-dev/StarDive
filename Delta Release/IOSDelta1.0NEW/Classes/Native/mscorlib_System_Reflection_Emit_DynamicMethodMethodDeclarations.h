#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t1491;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1291;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t751;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t742;
// System.Globalization.CultureInfo
struct CultureInfo_t745;
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Emit.DynamicMethod::create_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethod_create_dynamic_method_m8274 (DynamicMethod_t1491 * __this, DynamicMethod_t1491 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::destroy_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethod_destroy_dynamic_method_m8275 (DynamicMethod_t1491 * __this, DynamicMethod_t1491 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::CreateDynMethod()
extern "C" void DynamicMethod_CreateDynMethod_m8276 (DynamicMethod_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::Finalize()
extern "C" void DynamicMethod_Finalize_m8277 (DynamicMethod_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.DynamicMethod::GetBaseDefinition()
extern "C" MethodInfo_t * DynamicMethod_GetBaseDefinition_m8278 (DynamicMethod_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t148* DynamicMethod_GetCustomAttributes_m8279 (DynamicMethod_t1491 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t148* DynamicMethod_GetCustomAttributes_m8280 (DynamicMethod_t1491 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.DynamicMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t751* DynamicMethod_GetParameters_m8281 (DynamicMethod_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.DynamicMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * DynamicMethod_Invoke_m8282 (DynamicMethod_t1491 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t742 * ___binder, ObjectU5BU5D_t148* ___parameters, CultureInfo_t745 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DynamicMethod::IsDefined(System.Type,System.Boolean)
extern "C" bool DynamicMethod_IsDefined_m8283 (DynamicMethod_t1491 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::ToString()
extern "C" String_t* DynamicMethod_ToString_m8284 (DynamicMethod_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::get_Attributes()
extern "C" int32_t DynamicMethod_get_Attributes_m8285 (DynamicMethod_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::get_CallingConvention()
extern "C" int32_t DynamicMethod_get_CallingConvention_m8286 (DynamicMethod_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_DeclaringType()
extern "C" Type_t * DynamicMethod_get_DeclaringType_m8287 (DynamicMethod_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1489  DynamicMethod_get_MethodHandle_m8288 (DynamicMethod_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.DynamicMethod::get_Module()
extern "C" Module_t1291 * DynamicMethod_get_Module_m8289 (DynamicMethod_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::get_Name()
extern "C" String_t* DynamicMethod_get_Name_m8290 (DynamicMethod_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReflectedType()
extern "C" Type_t * DynamicMethod_get_ReflectedType_m8291 (DynamicMethod_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReturnType()
extern "C" Type_t * DynamicMethod_get_ReturnType_m8292 (DynamicMethod_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

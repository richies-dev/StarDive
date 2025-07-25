﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t1495;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1291;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1485;
// System.Type[]
struct TypeU5BU5D_t670;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t1487;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t751;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t742;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Globalization.CultureInfo
struct CultureInfo_t745;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1484;
// System.Exception
struct Exception_t163;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.Emit.MethodToken
#include "mscorlib_System_Reflection_Emit_MethodToken.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Emit.MethodBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type[],System.Type[],System.Type[][],System.Type[][])
extern "C" void MethodBuilder__ctor_m8417 (MethodBuilder_t1495 * __this, TypeBuilder_t1485 * ___tb, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t670* ___returnModReq, TypeU5BU5D_t670* ___returnModOpt, TypeU5BU5D_t670* ___parameterTypes, TypeU5BU5DU5BU5D_t1487* ___paramModReq, TypeU5BU5DU5BU5D_t1487* ___paramModOpt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
extern "C" bool MethodBuilder_get_ContainsGenericParameters_m8418 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1489  MethodBuilder_get_MethodHandle_m8419 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
extern "C" Type_t * MethodBuilder_get_ReturnType_m8420 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
extern "C" Type_t * MethodBuilder_get_ReflectedType_m8421 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
extern "C" Type_t * MethodBuilder_get_DeclaringType_m8422 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
extern "C" String_t* MethodBuilder_get_Name_m8423 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
extern "C" int32_t MethodBuilder_get_Attributes_m8424 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
extern "C" int32_t MethodBuilder_get_CallingConvention_m8425 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodToken System.Reflection.Emit.MethodBuilder::GetToken()
extern "C" MethodToken_t1490  MethodBuilder_GetToken_m8426 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
extern "C" MethodInfo_t * MethodBuilder_GetBaseDefinition_m8427 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
extern "C" ParameterInfoU5BU5D_t751* MethodBuilder_GetParameters_m8428 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetParameterCount()
extern "C" int32_t MethodBuilder_GetParameterCount_m8429 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MethodBuilder_Invoke_m8430 (MethodBuilder_t1495 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t742 * ___binder, ObjectU5BU5D_t148* ___parameters, CultureInfo_t745 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool MethodBuilder_IsDefined_m8431 (MethodBuilder_t1495 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t148* MethodBuilder_GetCustomAttributes_m8432 (MethodBuilder_t1495 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t148* MethodBuilder_GetCustomAttributes_m8433 (MethodBuilder_t1495 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::GetILGenerator()
extern "C" ILGenerator_t1484 * MethodBuilder_GetILGenerator_m8434 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::GetILGenerator(System.Int32)
extern "C" ILGenerator_t1484 * MethodBuilder_GetILGenerator_m8435 (MethodBuilder_t1495 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::ToString()
extern "C" String_t* MethodBuilder_ToString_m8436 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
extern "C" bool MethodBuilder_Equals_m8437 (MethodBuilder_t1495 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
extern "C" int32_t MethodBuilder_GetHashCode_m8438 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t MethodBuilder_get_next_table_index_m8439 (MethodBuilder_t1495 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::set_override(System.Reflection.MethodInfo)
extern "C" void MethodBuilder_set_override_m8440 (MethodBuilder_t1495 * __this, MethodInfo_t * ___mdecl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
extern "C" Exception_t163 * MethodBuilder_NotSupported_m8441 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
extern "C" MethodInfo_t * MethodBuilder_MakeGenericMethod_m8442 (MethodBuilder_t1495 * __this, TypeU5BU5D_t670* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
extern "C" bool MethodBuilder_get_IsGenericMethodDefinition_m8443 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
extern "C" bool MethodBuilder_get_IsGenericMethod_m8444 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t670* MethodBuilder_GetGenericArguments_m8445 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
extern "C" Module_t1291 * MethodBuilder_get_Module_m8446 (MethodBuilder_t1495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

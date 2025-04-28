#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1488;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1485;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1291;
// System.Type[]
struct TypeU5BU5D_t670;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t1487;
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
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Emit.MethodToken
#include "mscorlib_System_Reflection_Emit_MethodToken.h"

// System.Void System.Reflection.Emit.ConstructorBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C" void ConstructorBuilder__ctor_m8249 (ConstructorBuilder_t1488 * __this, TypeBuilder_t1485 * ___tb, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t670* ___parameterTypes, TypeU5BU5DU5BU5D_t1487* ___paramModReq, TypeU5BU5DU5BU5D_t1487* ___paramModOpt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern "C" int32_t ConstructorBuilder_get_CallingConvention_m8250 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C" TypeBuilder_t1485 * ConstructorBuilder_get_TypeBuilder_m8251 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern "C" ParameterInfoU5BU5D_t751* ConstructorBuilder_GetParameters_m8252 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern "C" ParameterInfoU5BU5D_t751* ConstructorBuilder_GetParametersInternal_m8253 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::GetParameterCount()
extern "C" int32_t ConstructorBuilder_GetParameterCount_m8254 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m8255 (ConstructorBuilder_t1488 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t742 * ___binder, ObjectU5BU5D_t148* ___parameters, CultureInfo_t745 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m8256 (ConstructorBuilder_t1488 * __this, int32_t ___invokeAttr, Binder_t742 * ___binder, ObjectU5BU5D_t148* ___parameters, CultureInfo_t745 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1489  ConstructorBuilder_get_MethodHandle_m8257 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern "C" int32_t ConstructorBuilder_get_Attributes_m8258 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern "C" Type_t * ConstructorBuilder_get_ReflectedType_m8259 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern "C" Type_t * ConstructorBuilder_get_DeclaringType_m8260 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern "C" String_t* ConstructorBuilder_get_Name_m8261 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool ConstructorBuilder_IsDefined_m8262 (ConstructorBuilder_t1488 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t148* ConstructorBuilder_GetCustomAttributes_m8263 (ConstructorBuilder_t1488 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t148* ConstructorBuilder_GetCustomAttributes_m8264 (ConstructorBuilder_t1488 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator()
extern "C" ILGenerator_t1484 * ConstructorBuilder_GetILGenerator_m8265 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator(System.Int32)
extern "C" ILGenerator_t1484 * ConstructorBuilder_GetILGenerator_m8266 (ConstructorBuilder_t1488 * __this, int32_t ___streamSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodToken System.Reflection.Emit.ConstructorBuilder::GetToken()
extern "C" MethodToken_t1490  ConstructorBuilder_GetToken_m8267 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern "C" Module_t1291 * ConstructorBuilder_get_Module_m8268 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern "C" String_t* ConstructorBuilder_ToString_m8269 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t ConstructorBuilder_get_next_table_index_m8270 (ConstructorBuilder_t1488 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern "C" bool ConstructorBuilder_get_IsCompilerContext_m8271 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern "C" Exception_t163 * ConstructorBuilder_not_supported_m8272 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern "C" Exception_t163 * ConstructorBuilder_not_created_m8273 (ConstructorBuilder_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

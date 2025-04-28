#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1481;
// System.String
struct String_t;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1479;
// System.Type
struct Type_t;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1485;
// System.Type[]
struct TypeU5BU5D_t670;
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t1510;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t1504;
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.Emit.PackingSize
#include "mscorlib_System_Reflection_Emit_PackingSize.h"

// System.Void System.Reflection.Emit.ModuleBuilder::.ctor(System.Reflection.Emit.AssemblyBuilder,System.String,System.String,System.Boolean,System.Boolean)
extern "C" void ModuleBuilder__ctor_m8452 (ModuleBuilder_t1481 * __this, AssemblyBuilder_t1479 * ___assb, String_t* ___name, String_t* ___fullyqname, bool ___emitSymbolInfo, bool ___transient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::.cctor()
extern "C" void ModuleBuilder__cctor_m8453 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::basic_init(System.Reflection.Emit.ModuleBuilder)
extern "C" void ModuleBuilder_basic_init_m8454 (Object_t * __this /* static, unused */, ModuleBuilder_t1481 * ___ab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::set_wrappers_type(System.Reflection.Emit.ModuleBuilder,System.Type)
extern "C" void ModuleBuilder_set_wrappers_type_m8455 (Object_t * __this /* static, unused */, ModuleBuilder_t1481 * ___mb, Type_t * ___ab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ModuleBuilder::IsTransient()
extern "C" bool ModuleBuilder_IsTransient_m8456 (ModuleBuilder_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type)
extern "C" TypeBuilder_t1485 * ModuleBuilder_DefineType_m8457 (ModuleBuilder_t1481 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::AddType(System.Reflection.Emit.TypeBuilder)
extern "C" void ModuleBuilder_AddType_m8458 (ModuleBuilder_t1481 * __this, TypeBuilder_t1485 * ___tb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type,System.Type[],System.Reflection.Emit.PackingSize,System.Int32)
extern "C" TypeBuilder_t1485 * ModuleBuilder_DefineType_m8459 (ModuleBuilder_t1481 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t670* ___interfaces, int32_t ___packingSize, int32_t ___typesize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type,System.Type[])
extern "C" TypeBuilder_t1485 * ModuleBuilder_DefineType_m8460 (ModuleBuilder_t1481 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t670* ___interfaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String)
extern "C" Type_t * ModuleBuilder_GetType_m8461 (ModuleBuilder_t1481 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::search_in_array(System.Reflection.Emit.TypeBuilder[],System.Int32,System.String)
extern "C" TypeBuilder_t1485 * ModuleBuilder_search_in_array_m8462 (ModuleBuilder_t1481 * __this, TypeBuilderU5BU5D_t1510* ___arr, int32_t ___validElementsInArray, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::search_nested_in_array(System.Reflection.Emit.TypeBuilder[],System.Int32,System.String)
extern "C" TypeBuilder_t1485 * ModuleBuilder_search_nested_in_array_m8463 (ModuleBuilder_t1481 * __this, TypeBuilderU5BU5D_t1510* ___arr, int32_t ___validElementsInArray, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::create_modified_type(System.Reflection.Emit.TypeBuilder,System.String)
extern "C" Type_t * ModuleBuilder_create_modified_type_m8464 (Object_t * __this /* static, unused */, TypeBuilder_t1485 * ___tb, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::GetMaybeNested(System.Reflection.Emit.TypeBuilder,System.String)
extern "C" TypeBuilder_t1485 * ModuleBuilder_GetMaybeNested_m8465 (ModuleBuilder_t1481 * __this, TypeBuilder_t1485 * ___t, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * ModuleBuilder_GetType_m8466 (ModuleBuilder_t1481 * __this, String_t* ___className, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t ModuleBuilder_get_next_table_index_m8467 (ModuleBuilder_t1481 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getUSIndex(System.Reflection.Emit.ModuleBuilder,System.String)
extern "C" int32_t ModuleBuilder_getUSIndex_m8468 (Object_t * __this /* static, unused */, ModuleBuilder_t1481 * ___mb, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getToken(System.Reflection.Emit.ModuleBuilder,System.Object)
extern "C" int32_t ModuleBuilder_getToken_m8469 (Object_t * __this /* static, unused */, ModuleBuilder_t1481 * ___mb, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getMethodToken(System.Reflection.Emit.ModuleBuilder,System.Reflection.MethodInfo,System.Type[])
extern "C" int32_t ModuleBuilder_getMethodToken_m8470 (Object_t * __this /* static, unused */, ModuleBuilder_t1481 * ___mb, MethodInfo_t * ___method, TypeU5BU5D_t670* ___opt_param_types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.String)
extern "C" int32_t ModuleBuilder_GetToken_m8471 (ModuleBuilder_t1481 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MemberInfo)
extern "C" int32_t ModuleBuilder_GetToken_m8472 (ModuleBuilder_t1481 * __this, MemberInfo_t * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C" int32_t ModuleBuilder_GetToken_m8473 (ModuleBuilder_t1481 * __this, MethodInfo_t * ___method, TypeU5BU5D_t670* ___opt_param_types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::RegisterToken(System.Object,System.Int32)
extern "C" void ModuleBuilder_RegisterToken_m8474 (ModuleBuilder_t1481 * __this, Object_t * ___obj, int32_t ___token, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ModuleBuilder::GetTokenGenerator()
extern "C" Object_t * ModuleBuilder_GetTokenGenerator_m8475 (ModuleBuilder_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ModuleBuilder::get_FileName()
extern "C" String_t* ModuleBuilder_get_FileName_m8476 (ModuleBuilder_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::CreateGlobalType()
extern "C" void ModuleBuilder_CreateGlobalType_m8477 (ModuleBuilder_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t1511;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1481;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t670;

// System.Void System.Reflection.Emit.ModuleBuilderTokenGenerator::.ctor(System.Reflection.Emit.ModuleBuilder)
extern "C" void ModuleBuilderTokenGenerator__ctor_m8478 (ModuleBuilderTokenGenerator_t1511 * __this, ModuleBuilder_t1481 * ___mb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.String)
extern "C" int32_t ModuleBuilderTokenGenerator_GetToken_m8479 (ModuleBuilderTokenGenerator_t1511 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C" int32_t ModuleBuilderTokenGenerator_GetToken_m8480 (ModuleBuilderTokenGenerator_t1511 * __this, MemberInfo_t * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C" int32_t ModuleBuilderTokenGenerator_GetToken_m8481 (ModuleBuilderTokenGenerator_t1511 * __this, MethodInfo_t * ___method, TypeU5BU5D_t670* ___opt_param_types, MethodInfo* method) IL2CPP_METHOD_ATTR;

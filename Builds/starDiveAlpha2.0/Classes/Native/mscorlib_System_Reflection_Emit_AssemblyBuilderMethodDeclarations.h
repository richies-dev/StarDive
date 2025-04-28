#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1546;
// System.String
struct String_t;
// System.Reflection.AssemblyName
struct AssemblyName_t1547;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1548;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1549;
// System.Exception
struct Exception_t234;
// System.Reflection.Emit.AssemblyBuilderAccess
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h"

// System.Void System.Reflection.Emit.AssemblyBuilder::.ctor(System.Reflection.AssemblyName,System.String,System.Reflection.Emit.AssemblyBuilderAccess,System.Boolean)
extern "C" void AssemblyBuilder__ctor_m8472 (AssemblyBuilder_t1546 * __this, AssemblyName_t1547 * ___n, String_t* ___directory, int32_t ___access, bool ___corlib_internal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)
extern "C" void AssemblyBuilder_basic_init_m8473 (Object_t * __this /* static, unused */, AssemblyBuilder_t1546 * ___ab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m8474 (AssemblyBuilder_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.Boolean)
extern "C" ModuleBuilder_t1548 * AssemblyBuilder_DefineDynamicModule_m8475 (AssemblyBuilder_t1546 * __this, String_t* ___name, bool ___emitSymbolInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.String,System.Boolean,System.Boolean)
extern "C" ModuleBuilder_t1548 * AssemblyBuilder_DefineDynamicModule_m8476 (AssemblyBuilder_t1546 * __this, String_t* ___name, String_t* ___fileName, bool ___emitSymbolInfo, bool ___transient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1549* AssemblyBuilder_GetModulesInternal_m8477 (AssemblyBuilder_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m8478 (AssemblyBuilder_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsSave()
extern "C" bool AssemblyBuilder_get_IsSave_m8479 (AssemblyBuilder_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsRun()
extern "C" bool AssemblyBuilder_get_IsRun_m8480 (AssemblyBuilder_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_AssemblyDir()
extern "C" String_t* AssemblyBuilder_get_AssemblyDir_m8481 (AssemblyBuilder_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t234 * AssemblyBuilder_not_supported_m8482 (AssemblyBuilder_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::check_name_and_filename(System.String,System.String,System.Boolean)
extern "C" void AssemblyBuilder_check_name_and_filename_m8483 (AssemblyBuilder_t1546 * __this, String_t* ___name, String_t* ___fileName, bool ___fileNeedsToExists, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1547 * AssemblyBuilder_UnprotectedGetName_m8484 (AssemblyBuilder_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

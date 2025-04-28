#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.CodeGenerator
struct CodeGenerator_t1674;
// System.Type
struct Type_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1484;
// System.String
struct String_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::.cctor()
extern "C" void CodeGenerator__cctor_m9274 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataType(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C" Type_t * CodeGenerator_GenerateMetadataType_m9275 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataTypeInternal(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C" Type_t * CodeGenerator_GenerateMetadataTypeInternal_m9276 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::LoadFromPtr(System.Reflection.Emit.ILGenerator,System.Type)
extern "C" void CodeGenerator_LoadFromPtr_m9277 (Object_t * __this /* static, unused */, ILGenerator_t1484 * ___ig, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWriteTypeSpec(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern "C" void CodeGenerator_EmitWriteTypeSpec_m9278 (Object_t * __this /* static, unused */, ILGenerator_t1484 * ___gen, Type_t * ___type, String_t* ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitLoadTypeAssembly(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern "C" void CodeGenerator_EmitLoadTypeAssembly_m9279 (Object_t * __this /* static, unused */, ILGenerator_t1484 * ___gen, Type_t * ___type, String_t* ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWrite(System.Reflection.Emit.ILGenerator,System.Type)
extern "C" void CodeGenerator_EmitWrite_m9280 (Object_t * __this /* static, unused */, ILGenerator_t1484 * ___gen, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWritePrimitiveValue(System.Reflection.Emit.ILGenerator,System.Type)
extern "C" void CodeGenerator_EmitWritePrimitiveValue_m9281 (Object_t * __this /* static, unused */, ILGenerator_t1484 * ___gen, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EnumToUnderlying(System.Type)
extern "C" Type_t * CodeGenerator_EnumToUnderlying_m9282 (Object_t * __this /* static, unused */, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;

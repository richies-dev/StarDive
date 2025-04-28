#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct MemberTypeMetadata_t1751;
// System.Type
struct Type_t;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t1748;
// System.IO.BinaryWriter
struct BinaryWriter_t1510;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C" void MemberTypeMetadata__ctor_m9566 (MemberTypeMetadata_t1751 * __this, Type_t * ___type, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C" void MemberTypeMetadata_WriteAssemblies_m9567 (MemberTypeMetadata_t1751 * __this, ObjectWriter_t1748 * ___ow, BinaryWriter_t1510 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C" void MemberTypeMetadata_WriteTypeData_m9568 (MemberTypeMetadata_t1751 * __this, ObjectWriter_t1748 * ___ow, BinaryWriter_t1510 * ___writer, bool ___writeTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C" void MemberTypeMetadata_WriteObjectData_m9569 (MemberTypeMetadata_t1751 * __this, ObjectWriter_t1748 * ___ow, BinaryWriter_t1510 * ___writer, Object_t * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;

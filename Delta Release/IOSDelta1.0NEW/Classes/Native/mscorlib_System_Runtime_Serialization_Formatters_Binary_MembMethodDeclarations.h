#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct MemberTypeMetadata_t1685;
// System.Type
struct Type_t;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t1682;
// System.IO.BinaryWriter
struct BinaryWriter_t1443;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C" void MemberTypeMetadata__ctor_m9330 (MemberTypeMetadata_t1685 * __this, Type_t * ___type, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C" void MemberTypeMetadata_WriteAssemblies_m9331 (MemberTypeMetadata_t1685 * __this, ObjectWriter_t1682 * ___ow, BinaryWriter_t1443 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C" void MemberTypeMetadata_WriteTypeData_m9332 (MemberTypeMetadata_t1685 * __this, ObjectWriter_t1682 * ___ow, BinaryWriter_t1443 * ___writer, bool ___writeTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C" void MemberTypeMetadata_WriteObjectData_m9333 (MemberTypeMetadata_t1685 * __this, ObjectWriter_t1682 * ___ow, BinaryWriter_t1443 * ___writer, Object_t * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;

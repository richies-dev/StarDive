#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct SerializableTypeMetadata_t1684;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t1681;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t1682;
// System.IO.BinaryWriter
struct BinaryWriter_t1443;
// System.Object
struct Object_t;

// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.SerializationInfo)
extern "C" void SerializableTypeMetadata__ctor_m9324 (SerializableTypeMetadata_t1684 * __this, Type_t * ___itype, SerializationInfo_t700 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::IsCompatible(System.Runtime.Serialization.Formatters.Binary.TypeMetadata)
extern "C" bool SerializableTypeMetadata_IsCompatible_m9325 (SerializableTypeMetadata_t1684 * __this, TypeMetadata_t1681 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C" void SerializableTypeMetadata_WriteAssemblies_m9326 (SerializableTypeMetadata_t1684 * __this, ObjectWriter_t1682 * ___ow, BinaryWriter_t1443 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C" void SerializableTypeMetadata_WriteTypeData_m9327 (SerializableTypeMetadata_t1684 * __this, ObjectWriter_t1682 * ___ow, BinaryWriter_t1443 * ___writer, bool ___writeTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C" void SerializableTypeMetadata_WriteObjectData_m9328 (SerializableTypeMetadata_t1684 * __this, ObjectWriter_t1682 * ___ow, BinaryWriter_t1443 * ___writer, Object_t * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::get_RequiresTypes()
extern "C" bool SerializableTypeMetadata_get_RequiresTypes_m9329 (SerializableTypeMetadata_t1684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

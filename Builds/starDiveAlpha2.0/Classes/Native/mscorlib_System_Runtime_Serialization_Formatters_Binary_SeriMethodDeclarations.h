#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct SerializableTypeMetadata_t1750;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t1747;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t1748;
// System.IO.BinaryWriter
struct BinaryWriter_t1510;
// System.Object
struct Object_t;

// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.SerializationInfo)
extern "C" void SerializableTypeMetadata__ctor_m9560 (SerializableTypeMetadata_t1750 * __this, Type_t * ___itype, SerializationInfo_t766 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::IsCompatible(System.Runtime.Serialization.Formatters.Binary.TypeMetadata)
extern "C" bool SerializableTypeMetadata_IsCompatible_m9561 (SerializableTypeMetadata_t1750 * __this, TypeMetadata_t1747 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C" void SerializableTypeMetadata_WriteAssemblies_m9562 (SerializableTypeMetadata_t1750 * __this, ObjectWriter_t1748 * ___ow, BinaryWriter_t1510 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C" void SerializableTypeMetadata_WriteTypeData_m9563 (SerializableTypeMetadata_t1750 * __this, ObjectWriter_t1748 * ___ow, BinaryWriter_t1510 * ___writer, bool ___writeTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C" void SerializableTypeMetadata_WriteObjectData_m9564 (SerializableTypeMetadata_t1750 * __this, ObjectWriter_t1748 * ___ow, BinaryWriter_t1510 * ___writer, Object_t * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::get_RequiresTypes()
extern "C" bool SerializableTypeMetadata_get_RequiresTypes_m9565 (SerializableTypeMetadata_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

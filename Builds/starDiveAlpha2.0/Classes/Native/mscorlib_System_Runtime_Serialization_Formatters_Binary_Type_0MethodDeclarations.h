#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t1747;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t1748;
// System.IO.BinaryWriter
struct BinaryWriter_t1510;
// System.Object
struct Object_t;

// System.Void System.Runtime.Serialization.Formatters.Binary.TypeMetadata::.ctor()
extern "C" void TypeMetadata__ctor_m9556 (TypeMetadata_t1747 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.TypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
// System.Void System.Runtime.Serialization.Formatters.Binary.TypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
// System.Void System.Runtime.Serialization.Formatters.Binary.TypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
// System.Boolean System.Runtime.Serialization.Formatters.Binary.TypeMetadata::IsCompatible(System.Runtime.Serialization.Formatters.Binary.TypeMetadata)
extern "C" bool TypeMetadata_IsCompatible_m9557 (TypeMetadata_t1747 * __this, TypeMetadata_t1747 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.TypeMetadata::get_RequiresTypes()

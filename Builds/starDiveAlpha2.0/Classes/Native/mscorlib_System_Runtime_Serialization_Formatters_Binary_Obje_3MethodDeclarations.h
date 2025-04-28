#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t1748;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1704;
// System.IO.BinaryWriter
struct BinaryWriter_t1510;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t1695;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t1747;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1149;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C" void ObjectWriter__ctor_m9571 (ObjectWriter_t1748 * __this, Object_t * ___surrogateSelector, StreamingContext_t767  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.cctor()
extern "C" void ObjectWriter__cctor_m9572 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectGraph(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[])
extern "C" void ObjectWriter_WriteObjectGraph_m9573 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, Object_t * ___obj, HeaderU5BU5D_t1695* ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::QueueObject(System.Object)
extern "C" void ObjectWriter_QueueObject_m9574 (ObjectWriter_t1748 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteQueuedObjects(System.IO.BinaryWriter)
extern "C" void ObjectWriter_WriteQueuedObjects_m9575 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectInstance(System.IO.BinaryWriter,System.Object,System.Boolean)
extern "C" void ObjectWriter_WriteObjectInstance_m9576 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, Object_t * ___obj, bool ___isValueObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSerializationEnd(System.IO.BinaryWriter)
extern "C" void ObjectWriter_WriteSerializationEnd_m9577 (Object_t * __this /* static, unused */, BinaryWriter_t1510 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObject(System.IO.BinaryWriter,System.Int64,System.Object)
extern "C" void ObjectWriter_WriteObject_m9578 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, int64_t ___id, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetObjectData(System.Object,System.Runtime.Serialization.Formatters.Binary.TypeMetadata&,System.Object&)
extern "C" void ObjectWriter_GetObjectData_m9579 (ObjectWriter_t1748 * __this, Object_t * ___obj, TypeMetadata_t1747 ** ___metadata, Object_t ** ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CreateMemberTypeMetadata(System.Type)
extern "C" TypeMetadata_t1747 * ObjectWriter_CreateMemberTypeMetadata_m9580 (ObjectWriter_t1748 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteArray_m9581 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, int64_t ___id, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteGenericArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteGenericArray_m9582 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, int64_t ___id, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteObjectArray_m9583 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, int64_t ___id, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteStringArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteStringArray_m9584 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, int64_t ___id, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveTypeArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WritePrimitiveTypeArray_m9585 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, int64_t ___id, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::BlockWrite(System.IO.BinaryWriter,System.Array,System.Int32)
extern "C" void ObjectWriter_BlockWrite_m9586 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, Array_t * ___array, int32_t ___dataSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSingleDimensionArrayElements(System.IO.BinaryWriter,System.Array,System.Type)
extern "C" void ObjectWriter_WriteSingleDimensionArrayElements_m9587 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, Array_t * ___array, Type_t * ___elementType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteNullFiller(System.IO.BinaryWriter,System.Int32)
extern "C" void ObjectWriter_WriteNullFiller_m9588 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, int32_t ___numNulls, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectReference(System.IO.BinaryWriter,System.Int64)
extern "C" void ObjectWriter_WriteObjectReference_m9589 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, int64_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteValue(System.IO.BinaryWriter,System.Type,System.Object)
extern "C" void ObjectWriter_WriteValue_m9590 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, Type_t * ___valueType, Object_t * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteString(System.IO.BinaryWriter,System.Int64,System.String)
extern "C" void ObjectWriter_WriteString_m9591 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, int64_t ___id, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssembly(System.IO.BinaryWriter,System.Reflection.Assembly)
extern "C" int32_t ObjectWriter_WriteAssembly_m9592 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, Assembly_t1149 * ___assembly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssemblyName(System.IO.BinaryWriter,System.String)
extern "C" int32_t ObjectWriter_WriteAssemblyName_m9593 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, String_t* ___assembly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyId(System.Reflection.Assembly)
extern "C" int32_t ObjectWriter_GetAssemblyId_m9594 (ObjectWriter_t1748 * __this, Assembly_t1149 * ___assembly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyNameId(System.String)
extern "C" int32_t ObjectWriter_GetAssemblyNameId_m9595 (ObjectWriter_t1748 * __this, String_t* ___assembly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::RegisterAssembly(System.String,System.Boolean&)
extern "C" int32_t ObjectWriter_RegisterAssembly_m9596 (ObjectWriter_t1748 * __this, String_t* ___assembly, bool* ___firstTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveValue(System.IO.BinaryWriter,System.Object)
extern "C" void ObjectWriter_WritePrimitiveValue_m9597 (Object_t * __this /* static, unused */, BinaryWriter_t1510 * ___writer, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeCode(System.IO.BinaryWriter,System.Type)
extern "C" void ObjectWriter_WriteTypeCode_m9598 (Object_t * __this /* static, unused */, BinaryWriter_t1510 * ___writer, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeTag System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetTypeTag(System.Type)
extern "C" uint8_t ObjectWriter_GetTypeTag_m9599 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeSpec(System.IO.BinaryWriter,System.Type)
extern "C" void ObjectWriter_WriteTypeSpec_m9600 (ObjectWriter_t1748 * __this, BinaryWriter_t1510 * ___writer, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;

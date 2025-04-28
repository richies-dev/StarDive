#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.BinaryWriter
struct BinaryWriter_t1510;
// System.IO.Stream
struct Stream_t233;
// System.Text.Encoding
struct Encoding_t1159;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.Char[]
struct CharU5BU5D_t387;
// System.String
struct String_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.IO.BinaryWriter::.ctor()
extern "C" void BinaryWriter__ctor_m8171 (BinaryWriter_t1510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C" void BinaryWriter__ctor_m8172 (BinaryWriter_t1510 * __this, Stream_t233 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void BinaryWriter__ctor_m8173 (BinaryWriter_t1510 * __this, Stream_t233 * ___output, Encoding_t1159 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
extern "C" void BinaryWriter__cctor_m8174 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
extern "C" void BinaryWriter_System_IDisposable_Dispose_m8175 (BinaryWriter_t1510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
extern "C" void BinaryWriter_Dispose_m8176 (BinaryWriter_t1510 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Flush()
extern "C" void BinaryWriter_Flush_m8177 (BinaryWriter_t1510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Boolean)
extern "C" void BinaryWriter_Write_m8178 (BinaryWriter_t1510 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte)
extern "C" void BinaryWriter_Write_m8179 (BinaryWriter_t1510 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[])
extern "C" void BinaryWriter_Write_m8180 (BinaryWriter_t1510 * __this, ByteU5BU5D_t1019* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void BinaryWriter_Write_m8181 (BinaryWriter_t1510 * __this, ByteU5BU5D_t1019* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Char)
extern "C" void BinaryWriter_Write_m8182 (BinaryWriter_t1510 * __this, uint16_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Char[])
extern "C" void BinaryWriter_Write_m8183 (BinaryWriter_t1510 * __this, CharU5BU5D_t387* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Decimal)
extern "C" void BinaryWriter_Write_m8184 (BinaryWriter_t1510 * __this, Decimal_t1347  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Double)
extern "C" void BinaryWriter_Write_m8185 (BinaryWriter_t1510 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int16)
extern "C" void BinaryWriter_Write_m8186 (BinaryWriter_t1510 * __this, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int32)
extern "C" void BinaryWriter_Write_m8187 (BinaryWriter_t1510 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int64)
extern "C" void BinaryWriter_Write_m8188 (BinaryWriter_t1510 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.SByte)
extern "C" void BinaryWriter_Write_m8189 (BinaryWriter_t1510 * __this, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Single)
extern "C" void BinaryWriter_Write_m8190 (BinaryWriter_t1510 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.String)
extern "C" void BinaryWriter_Write_m8191 (BinaryWriter_t1510 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt16)
extern "C" void BinaryWriter_Write_m8192 (BinaryWriter_t1510 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt32)
extern "C" void BinaryWriter_Write_m8193 (BinaryWriter_t1510 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt64)
extern "C" void BinaryWriter_Write_m8194 (BinaryWriter_t1510 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write7BitEncodedInt(System.Int32)
extern "C" void BinaryWriter_Write7BitEncodedInt_m8195 (BinaryWriter_t1510 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;

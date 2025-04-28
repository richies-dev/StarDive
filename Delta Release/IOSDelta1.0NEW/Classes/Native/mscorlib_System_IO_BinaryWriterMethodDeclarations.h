#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.BinaryWriter
struct BinaryWriter_t1443;
// System.IO.Stream
struct Stream_t162;
// System.Text.Encoding
struct Encoding_t1092;
// System.Byte[]
struct ByteU5BU5D_t952;
// System.Char[]
struct CharU5BU5D_t318;
// System.String
struct String_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.IO.BinaryWriter::.ctor()
extern "C" void BinaryWriter__ctor_m7935 (BinaryWriter_t1443 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C" void BinaryWriter__ctor_m7936 (BinaryWriter_t1443 * __this, Stream_t162 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void BinaryWriter__ctor_m7937 (BinaryWriter_t1443 * __this, Stream_t162 * ___output, Encoding_t1092 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
extern "C" void BinaryWriter__cctor_m7938 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
extern "C" void BinaryWriter_System_IDisposable_Dispose_m7939 (BinaryWriter_t1443 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
extern "C" void BinaryWriter_Dispose_m7940 (BinaryWriter_t1443 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Flush()
extern "C" void BinaryWriter_Flush_m7941 (BinaryWriter_t1443 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Boolean)
extern "C" void BinaryWriter_Write_m7942 (BinaryWriter_t1443 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte)
extern "C" void BinaryWriter_Write_m7943 (BinaryWriter_t1443 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[])
extern "C" void BinaryWriter_Write_m7944 (BinaryWriter_t1443 * __this, ByteU5BU5D_t952* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void BinaryWriter_Write_m7945 (BinaryWriter_t1443 * __this, ByteU5BU5D_t952* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Char)
extern "C" void BinaryWriter_Write_m7946 (BinaryWriter_t1443 * __this, uint16_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Char[])
extern "C" void BinaryWriter_Write_m7947 (BinaryWriter_t1443 * __this, CharU5BU5D_t318* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Decimal)
extern "C" void BinaryWriter_Write_m7948 (BinaryWriter_t1443 * __this, Decimal_t1280  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Double)
extern "C" void BinaryWriter_Write_m7949 (BinaryWriter_t1443 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int16)
extern "C" void BinaryWriter_Write_m7950 (BinaryWriter_t1443 * __this, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int32)
extern "C" void BinaryWriter_Write_m7951 (BinaryWriter_t1443 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int64)
extern "C" void BinaryWriter_Write_m7952 (BinaryWriter_t1443 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.SByte)
extern "C" void BinaryWriter_Write_m7953 (BinaryWriter_t1443 * __this, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Single)
extern "C" void BinaryWriter_Write_m7954 (BinaryWriter_t1443 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.String)
extern "C" void BinaryWriter_Write_m7955 (BinaryWriter_t1443 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt16)
extern "C" void BinaryWriter_Write_m7956 (BinaryWriter_t1443 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt32)
extern "C" void BinaryWriter_Write_m7957 (BinaryWriter_t1443 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt64)
extern "C" void BinaryWriter_Write_m7958 (BinaryWriter_t1443 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write7BitEncodedInt(System.Int32)
extern "C" void BinaryWriter_Write7BitEncodedInt_m7959 (BinaryWriter_t1443 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;

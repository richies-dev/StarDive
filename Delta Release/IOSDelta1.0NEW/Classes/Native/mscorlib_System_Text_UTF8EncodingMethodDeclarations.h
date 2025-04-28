#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF8Encoding
struct UTF8Encoding_t1800;
// System.Char[]
struct CharU5BU5D_t318;
// System.Byte[]
struct ByteU5BU5D_t952;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1779;
// System.Text.Decoder
struct Decoder_t1441;

// System.Void System.Text.UTF8Encoding::.ctor()
extern "C" void UTF8Encoding__ctor_m10077 (UTF8Encoding_t1800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
extern "C" void UTF8Encoding__ctor_m10078 (UTF8Encoding_t1800 * __this, bool ___encoderShouldEmitUTF8Identifier, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
extern "C" void UTF8Encoding__ctor_m10079 (UTF8Encoding_t1800 * __this, bool ___encoderShouldEmitUTF8Identifier, bool ___throwOnInvalidBytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetByteCount_m10080 (Object_t * __this /* static, unused */, CharU5BU5D_t318* ___chars, int32_t ___index, int32_t ___count, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char*,System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetByteCount_m10081 (Object_t * __this /* static, unused */, uint16_t* ___chars, int32_t ___count, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UTF8Encoding_GetByteCount_m10082 (UTF8Encoding_t1800 * __this, CharU5BU5D_t318* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t UTF8Encoding_GetByteCount_m10083 (UTF8Encoding_t1800 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetBytes_m10084 (Object_t * __this /* static, unused */, CharU5BU5D_t318* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t952* ___bytes, int32_t ___byteIndex, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetBytes_m10085 (Object_t * __this /* static, unused */, uint16_t* ___chars, int32_t ___count, uint8_t* ___bytes, int32_t ___bcount, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF8Encoding_GetBytes_m10086 (UTF8Encoding_t1800 * __this, CharU5BU5D_t318* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t952* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF8Encoding_GetBytes_m10087 (UTF8Encoding_t1800 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t952* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UTF8Encoding_GetBytes_m10088 (UTF8Encoding_t1800 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetCharCount_m10089 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___bytes, int32_t ___index, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1779 ** ___fallbackBuffer, ByteU5BU5D_t952** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte*,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetCharCount_m10090 (Object_t * __this /* static, unused */, uint8_t* ___bytes, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1779 ** ___fallbackBuffer, ByteU5BU5D_t952** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32)
extern "C" int32_t UTF8Encoding_Fallback_m10091 (Object_t * __this /* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t1779 ** ___buffer, ByteU5BU5D_t952** ___bufferArg, uint8_t* ___bytes, int64_t ___index, uint32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32,System.Char*,System.Int32&)
extern "C" void UTF8Encoding_Fallback_m10092 (Object_t * __this /* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t1779 ** ___buffer, ByteU5BU5D_t952** ___bufferArg, uint8_t* ___bytes, int64_t ___byteIndex, uint32_t ___size, uint16_t* ___chars, int32_t* ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UTF8Encoding_GetCharCount_m10093 (UTF8Encoding_t1800 * __this, ByteU5BU5D_t952* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetChars_m10094 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t318* ___chars, int32_t ___charIndex, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1779 ** ___fallbackBuffer, ByteU5BU5D_t952** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetChars_m10095 (Object_t * __this /* static, unused */, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1779 ** ___fallbackBuffer, ByteU5BU5D_t952** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF8Encoding_GetChars_m10096 (UTF8Encoding_t1800 * __this, ByteU5BU5D_t952* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t318* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t UTF8Encoding_GetMaxByteCount_m10097 (UTF8Encoding_t1800 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t UTF8Encoding_GetMaxCharCount_m10098 (UTF8Encoding_t1800 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF8Encoding::GetDecoder()
extern "C" Decoder_t1441 * UTF8Encoding_GetDecoder_m10099 (UTF8Encoding_t1800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF8Encoding::GetPreamble()
extern "C" ByteU5BU5D_t952* UTF8Encoding_GetPreamble_m10100 (UTF8Encoding_t1800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF8Encoding::Equals(System.Object)
extern "C" bool UTF8Encoding_Equals_m10101 (UTF8Encoding_t1800 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetHashCode()
extern "C" int32_t UTF8Encoding_GetHashCode_m10102 (UTF8Encoding_t1800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.String)
extern "C" int32_t UTF8Encoding_GetByteCount_m10103 (UTF8Encoding_t1800 * __this, String_t* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF8Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UTF8Encoding_GetString_m10104 (UTF8Encoding_t1800 * __this, ByteU5BU5D_t952* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF8Encoding
struct UTF8Encoding_t1866;
// System.Char[]
struct CharU5BU5D_t387;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1845;
// System.Text.Decoder
struct Decoder_t1508;

// System.Void System.Text.UTF8Encoding::.ctor()
extern "C" void UTF8Encoding__ctor_m10313 (UTF8Encoding_t1866 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
extern "C" void UTF8Encoding__ctor_m10314 (UTF8Encoding_t1866 * __this, bool ___encoderShouldEmitUTF8Identifier, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
extern "C" void UTF8Encoding__ctor_m10315 (UTF8Encoding_t1866 * __this, bool ___encoderShouldEmitUTF8Identifier, bool ___throwOnInvalidBytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetByteCount_m10316 (Object_t * __this /* static, unused */, CharU5BU5D_t387* ___chars, int32_t ___index, int32_t ___count, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char*,System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetByteCount_m10317 (Object_t * __this /* static, unused */, uint16_t* ___chars, int32_t ___count, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UTF8Encoding_GetByteCount_m10318 (UTF8Encoding_t1866 * __this, CharU5BU5D_t387* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t UTF8Encoding_GetByteCount_m10319 (UTF8Encoding_t1866 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetBytes_m10320 (Object_t * __this /* static, unused */, CharU5BU5D_t387* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1019* ___bytes, int32_t ___byteIndex, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetBytes_m10321 (Object_t * __this /* static, unused */, uint16_t* ___chars, int32_t ___count, uint8_t* ___bytes, int32_t ___bcount, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF8Encoding_GetBytes_m10322 (UTF8Encoding_t1866 * __this, CharU5BU5D_t387* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1019* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF8Encoding_GetBytes_m10323 (UTF8Encoding_t1866 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1019* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UTF8Encoding_GetBytes_m10324 (UTF8Encoding_t1866 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetCharCount_m10325 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___bytes, int32_t ___index, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1845 ** ___fallbackBuffer, ByteU5BU5D_t1019** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte*,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetCharCount_m10326 (Object_t * __this /* static, unused */, uint8_t* ___bytes, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1845 ** ___fallbackBuffer, ByteU5BU5D_t1019** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32)
extern "C" int32_t UTF8Encoding_Fallback_m10327 (Object_t * __this /* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t1845 ** ___buffer, ByteU5BU5D_t1019** ___bufferArg, uint8_t* ___bytes, int64_t ___index, uint32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32,System.Char*,System.Int32&)
extern "C" void UTF8Encoding_Fallback_m10328 (Object_t * __this /* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t1845 ** ___buffer, ByteU5BU5D_t1019** ___bufferArg, uint8_t* ___bytes, int64_t ___byteIndex, uint32_t ___size, uint16_t* ___chars, int32_t* ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UTF8Encoding_GetCharCount_m10329 (UTF8Encoding_t1866 * __this, ByteU5BU5D_t1019* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetChars_m10330 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t387* ___chars, int32_t ___charIndex, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1845 ** ___fallbackBuffer, ByteU5BU5D_t1019** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetChars_m10331 (Object_t * __this /* static, unused */, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1845 ** ___fallbackBuffer, ByteU5BU5D_t1019** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF8Encoding_GetChars_m10332 (UTF8Encoding_t1866 * __this, ByteU5BU5D_t1019* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t387* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t UTF8Encoding_GetMaxByteCount_m10333 (UTF8Encoding_t1866 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t UTF8Encoding_GetMaxCharCount_m10334 (UTF8Encoding_t1866 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF8Encoding::GetDecoder()
extern "C" Decoder_t1508 * UTF8Encoding_GetDecoder_m10335 (UTF8Encoding_t1866 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF8Encoding::GetPreamble()
extern "C" ByteU5BU5D_t1019* UTF8Encoding_GetPreamble_m10336 (UTF8Encoding_t1866 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF8Encoding::Equals(System.Object)
extern "C" bool UTF8Encoding_Equals_m10337 (UTF8Encoding_t1866 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetHashCode()
extern "C" int32_t UTF8Encoding_GetHashCode_m10338 (UTF8Encoding_t1866 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.String)
extern "C" int32_t UTF8Encoding_GetByteCount_m10339 (UTF8Encoding_t1866 * __this, String_t* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF8Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UTF8Encoding_GetString_m10340 (UTF8Encoding_t1866 * __this, ByteU5BU5D_t1019* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF32Encoding/UTF32Decoder
struct UTF32Decoder_t1794;
// System.Byte[]
struct ByteU5BU5D_t952;
// System.Char[]
struct CharU5BU5D_t318;

// System.Void System.Text.UTF32Encoding/UTF32Decoder::.ctor(System.Boolean)
extern "C" void UTF32Decoder__ctor_m10032 (UTF32Decoder_t1794 * __this, bool ___bigEndian, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF32Decoder_GetChars_m10033 (UTF32Decoder_t1794 * __this, ByteU5BU5D_t952* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t318* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;

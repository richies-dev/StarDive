#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1508;
// System.Text.DecoderFallback
struct DecoderFallback_t1846;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1845;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.Char[]
struct CharU5BU5D_t387;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m10139 (Decoder_t1508 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m10140 (Decoder_t1508 * __this, DecoderFallback_t1846 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1845 * Decoder_get_FallbackBuffer_m10141 (Decoder_t1508 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)

﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MD5SHA1
struct MD5SHA1_t1247;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.Security.Cryptography.RSA
struct RSA_t1021;

// System.Void Mono.Security.Cryptography.MD5SHA1::.ctor()
extern "C" void MD5SHA1__ctor_m5654 (MD5SHA1_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::Initialize()
extern "C" void MD5SHA1_Initialize_m5655 (MD5SHA1_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::HashFinal()
extern "C" ByteU5BU5D_t1019* MD5SHA1_HashFinal_m5656 (MD5SHA1_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MD5SHA1_HashCore_m5657 (MD5SHA1_t1247 * __this, ByteU5BU5D_t1019* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::CreateSignature(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t1019* MD5SHA1_CreateSignature_m5658 (MD5SHA1_t1247 * __this, RSA_t1021 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.MD5SHA1::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
extern "C" bool MD5SHA1_VerifySignature_m5659 (MD5SHA1_t1247 * __this, RSA_t1021 * ___rsa, ByteU5BU5D_t1019* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;

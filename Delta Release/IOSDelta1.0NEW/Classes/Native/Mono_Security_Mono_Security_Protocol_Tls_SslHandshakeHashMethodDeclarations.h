﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t1224;
// System.Byte[]
struct ByteU5BU5D_t952;
// System.Security.Cryptography.RSA
struct RSA_t954;

// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
extern "C" void SslHandshakeHash__ctor_m5699 (SslHandshakeHash_t1224 * __this, ByteU5BU5D_t952* ___secret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
extern "C" void SslHandshakeHash_Initialize_m5700 (SslHandshakeHash_t1224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
extern "C" ByteU5BU5D_t952* SslHandshakeHash_HashFinal_m5701 (SslHandshakeHash_t1224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SslHandshakeHash_HashCore_m5702 (SslHandshakeHash_t1224 * __this, ByteU5BU5D_t952* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t952* SslHandshakeHash_CreateSignature_m5703 (SslHandshakeHash_t1224 * __this, RSA_t954 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
extern "C" void SslHandshakeHash_initializePad_m5704 (SslHandshakeHash_t1224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

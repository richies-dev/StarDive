#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1366;
// System.Byte[]
struct ByteU5BU5D_t952;
// System.Security.Cryptography.RSA
struct RSA_t954;
// System.Security.Cryptography.DSA
struct DSA_t953;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m7262 (PrivateKeyInfo_t1366 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m7263 (PrivateKeyInfo_t1366 * __this, ByteU5BU5D_t952* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t952* PrivateKeyInfo_get_PrivateKey_m7264 (PrivateKeyInfo_t1366 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m7265 (PrivateKeyInfo_t1366 * __this, ByteU5BU5D_t952* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t952* PrivateKeyInfo_RemoveLeadingZero_m7266 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___bigInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t952* PrivateKeyInfo_Normalize_m7267 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___bigInt, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t954 * PrivateKeyInfo_DecodeRSA_m7268 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___keypair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t953 * PrivateKeyInfo_DecodeDSA_m7269 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___privateKey, DSAParameters_t1088  ___dsaParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;

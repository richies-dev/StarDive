#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t1365;
// System.Byte[]
struct ByteU5BU5D_t952;
// System.Security.Cryptography.RSA
struct RSA_t954;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1138;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1155;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m7250 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m7251 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___array1, ByteU5BU5D_t952* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t952* PKCS1_I2OSP_m7252 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___x, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t952* PKCS1_OS2IP_m7253 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t952* PKCS1_RSAEP_m7254 (Object_t * __this /* static, unused */, RSA_t954 * ___rsa, ByteU5BU5D_t952* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t952* PKCS1_RSASP1_m7255 (Object_t * __this /* static, unused */, RSA_t954 * ___rsa, ByteU5BU5D_t952* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t952* PKCS1_RSAVP1_m7256 (Object_t * __this /* static, unused */, RSA_t954 * ___rsa, ByteU5BU5D_t952* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C" ByteU5BU5D_t952* PKCS1_Encrypt_v15_m7257 (Object_t * __this /* static, unused */, RSA_t954 * ___rsa, RandomNumberGenerator_t1138 * ___rng, ByteU5BU5D_t952* ___M, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t952* PKCS1_Sign_v15_m7258 (Object_t * __this /* static, unused */, RSA_t954 * ___rsa, HashAlgorithm_t1155 * ___hash, ByteU5BU5D_t952* ___hashValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m7259 (Object_t * __this /* static, unused */, RSA_t954 * ___rsa, HashAlgorithm_t1155 * ___hash, ByteU5BU5D_t952* ___hashValue, ByteU5BU5D_t952* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m7260 (Object_t * __this /* static, unused */, RSA_t954 * ___rsa, HashAlgorithm_t1155 * ___hash, ByteU5BU5D_t952* ___hashValue, ByteU5BU5D_t952* ___signature, bool ___tryNonStandardEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t952* PKCS1_Encode_v15_m7261 (Object_t * __this /* static, unused */, HashAlgorithm_t1155 * ___hash, ByteU5BU5D_t952* ___hashValue, int32_t ___emLength, MethodInfo* method) IL2CPP_METHOD_ATTR;

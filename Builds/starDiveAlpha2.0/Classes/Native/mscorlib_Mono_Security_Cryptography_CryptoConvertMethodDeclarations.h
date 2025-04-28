#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.CryptoConvert
struct CryptoConvert_t1425;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.Security.Cryptography.RSA
struct RSA_t1021;

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C" int32_t CryptoConvert_ToInt32LE_m7412 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___bytes, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C" uint32_t CryptoConvert_ToUInt32LE_m7413 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___bytes, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C" ByteU5BU5D_t1019* CryptoConvert_GetBytesLE_m7414 (Object_t * __this /* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::Trim(System.Byte[])
extern "C" ByteU5BU5D_t1019* CryptoConvert_Trim_m7415 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t1021 * CryptoConvert_FromCapiPrivateKeyBlob_m7416 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___blob, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t1019* CryptoConvert_ToCapiPrivateKeyBlob_m7417 (Object_t * __this /* static, unused */, RSA_t1021 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C" RSA_t1021 * CryptoConvert_FromCapiPublicKeyBlob_m7418 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___blob, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t1021 * CryptoConvert_FromCapiPublicKeyBlob_m7419 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___blob, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t1019* CryptoConvert_ToCapiPublicKeyBlob_m7420 (Object_t * __this /* static, unused */, RSA_t1021 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[])
extern "C" RSA_t1021 * CryptoConvert_FromCapiKeyBlob_m7421 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___blob, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t1021 * CryptoConvert_FromCapiKeyBlob_m7422 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___blob, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C" ByteU5BU5D_t1019* CryptoConvert_ToCapiKeyBlob_m7423 (Object_t * __this /* static, unused */, RSA_t1021 * ___rsa, bool ___includePrivateKey, MethodInfo* method) IL2CPP_METHOD_ATTR;

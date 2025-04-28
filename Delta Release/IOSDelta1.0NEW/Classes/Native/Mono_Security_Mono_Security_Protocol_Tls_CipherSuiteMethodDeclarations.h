#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1186;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1151;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t1179;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.Context
struct Context_t1185;
// System.Byte[]
struct ByteU5BU5D_t952;
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C" void CipherSuite__ctor_m5431 (CipherSuite_t1186 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBits, uint8_t ___ivSize, uint8_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::.cctor()
extern "C" void CipherSuite__cctor_m5432 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_EncryptionCipher()
extern "C" Object_t * CipherSuite_get_EncryptionCipher_m5433 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_DecryptionCipher()
extern "C" Object_t * CipherSuite_get_DecryptionCipher_m5434 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ClientHMAC()
extern "C" KeyedHashAlgorithm_t1179 * CipherSuite_get_ClientHMAC_m5435 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ServerHMAC()
extern "C" KeyedHashAlgorithm_t1179 * CipherSuite_get_ServerHMAC_m5436 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_CipherAlgorithmType()
extern "C" int32_t CipherSuite_get_CipherAlgorithmType_m5437 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmName()
extern "C" String_t* CipherSuite_get_HashAlgorithmName_m5438 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmType()
extern "C" int32_t CipherSuite_get_HashAlgorithmType_m5439 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_HashSize()
extern "C" int32_t CipherSuite_get_HashSize_m5440 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_ExchangeAlgorithmType()
extern "C" int32_t CipherSuite_get_ExchangeAlgorithmType_m5441 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::get_CipherMode()
extern "C" int32_t CipherSuite_get_CipherMode_m5442 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_Code()
extern "C" int16_t CipherSuite_get_Code_m5443 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_Name()
extern "C" String_t* CipherSuite_get_Name_m5444 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::get_IsExportable()
extern "C" bool CipherSuite_get_IsExportable_m5445 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_KeyMaterialSize()
extern "C" uint8_t CipherSuite_get_KeyMaterialSize_m5446 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_KeyBlockSize()
extern "C" int32_t CipherSuite_get_KeyBlockSize_m5447 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_ExpandedKeyMaterialSize()
extern "C" uint8_t CipherSuite_get_ExpandedKeyMaterialSize_m5448 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_EffectiveKeyBits()
extern "C" int16_t CipherSuite_get_EffectiveKeyBits_m5449 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_IvSize()
extern "C" uint8_t CipherSuite_get_IvSize_m5450 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::get_Context()
extern "C" Context_t1185 * CipherSuite_get_Context_m5451 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::set_Context(Mono.Security.Protocol.Tls.Context)
extern "C" void CipherSuite_set_Context_m5452 (CipherSuite_t1186 * __this, Context_t1185 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.Int16)
extern "C" void CipherSuite_Write_m5453 (CipherSuite_t1186 * __this, ByteU5BU5D_t952* ___array, int32_t ___offset, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.UInt64)
extern "C" void CipherSuite_Write_m5454 (CipherSuite_t1186 * __this, ByteU5BU5D_t952* ___array, int32_t ___offset, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::InitializeCipher()
extern "C" void CipherSuite_InitializeCipher_m5455 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EncryptRecord(System.Byte[],System.Byte[])
extern "C" ByteU5BU5D_t952* CipherSuite_EncryptRecord_m5456 (CipherSuite_t1186 * __this, ByteU5BU5D_t952* ___fragment, ByteU5BU5D_t952* ___mac, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::DecryptRecord(System.Byte[],System.Byte[]&,System.Byte[]&)
extern "C" void CipherSuite_DecryptRecord_m5457 (CipherSuite_t1186 * __this, ByteU5BU5D_t952* ___fragment, ByteU5BU5D_t952** ___dcrFragment, ByteU5BU5D_t952** ___dcrMAC, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::ComputeClientRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::ComputeServerRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
// System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeMasterSecret(System.Byte[])
// System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeKeys()
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::CreatePremasterSecret()
extern "C" ByteU5BU5D_t952* CipherSuite_CreatePremasterSecret_m5458 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::PRF(System.Byte[],System.String,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t952* CipherSuite_PRF_m5459 (CipherSuite_t1186 * __this, ByteU5BU5D_t952* ___secret, String_t* ___label, ByteU5BU5D_t952* ___data, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::Expand(System.String,System.Byte[],System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t952* CipherSuite_Expand_m5460 (CipherSuite_t1186 * __this, String_t* ___hashName, ByteU5BU5D_t952* ___secret, ByteU5BU5D_t952* ___seed, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createEncryptionCipher()
extern "C" void CipherSuite_createEncryptionCipher_m5461 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createDecryptionCipher()
extern "C" void CipherSuite_createDecryptionCipher_m5462 (CipherSuite_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1017;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1015;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1014;
// System.Security.Cryptography.Oid
struct Oid_t1016;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1018;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.Security.Cryptography.DSA
struct DSA_t1020;
// System.Security.Cryptography.RSA
struct RSA_t1021;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4328 (PublicKey_t1017 * __this, X509Certificate_t1018 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1015 * PublicKey_get_EncodedKeyValue_m4329 (PublicKey_t1017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1015 * PublicKey_get_EncodedParameters_m4330 (PublicKey_t1017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1014 * PublicKey_get_Key_m4331 (PublicKey_t1017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1016 * PublicKey_get_Oid_m4332 (PublicKey_t1017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t1019* PublicKey_GetUnsignedBigInteger_m4333 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1020 * PublicKey_DecodeDSA_m4334 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___rawPublicKey, ByteU5BU5D_t1019* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1021 * PublicKey_DecodeRSA_m4335 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;

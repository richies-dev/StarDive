#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t950;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t948;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t947;
// System.Security.Cryptography.Oid
struct Oid_t949;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t951;
// System.Byte[]
struct ByteU5BU5D_t952;
// System.Security.Cryptography.DSA
struct DSA_t953;
// System.Security.Cryptography.RSA
struct RSA_t954;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4091 (PublicKey_t950 * __this, X509Certificate_t951 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t948 * PublicKey_get_EncodedKeyValue_m4092 (PublicKey_t950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t948 * PublicKey_get_EncodedParameters_m4093 (PublicKey_t950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t947 * PublicKey_get_Key_m4094 (PublicKey_t950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t949 * PublicKey_get_Oid_m4095 (PublicKey_t950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t952* PublicKey_GetUnsignedBigInteger_m4096 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t953 * PublicKey_DecodeDSA_m4097 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___rawPublicKey, ByteU5BU5D_t952* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t954 * PublicKey_DecodeRSA_m4098 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;

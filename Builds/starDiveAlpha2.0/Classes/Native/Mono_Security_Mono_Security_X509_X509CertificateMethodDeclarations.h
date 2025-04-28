#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Certificate
struct X509Certificate_t1018;
// System.Security.Cryptography.DSA
struct DSA_t1020;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1165;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t1021;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1014;
// Mono.Security.ASN1
struct ASN1_t1030;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m5132 (X509Certificate_t1018 * __this, ByteU5BU5D_t1019* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C" void X509Certificate__cctor_m5548 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" void X509Certificate_Parse_m5549 (X509Certificate_t1018 * __this, ByteU5BU5D_t1019* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t1019* X509Certificate_GetUnsignedBigInteger_m5550 (X509Certificate_t1018 * __this, ByteU5BU5D_t1019* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" DSA_t1020 * X509Certificate_get_DSA_m5078 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
extern "C" void X509Certificate_set_DSA_m5130 (X509Certificate_t1018 * __this, DSA_t1020 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C" X509ExtensionCollection_t1165 * X509Certificate_get_Extensions_m5156 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C" ByteU5BU5D_t1019* X509Certificate_get_Hash_m5551 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C" String_t* X509Certificate_get_IssuerName_m5552 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
extern "C" String_t* X509Certificate_get_KeyAlgorithm_m5071 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C" ByteU5BU5D_t1019* X509Certificate_get_KeyAlgorithmParameters_m5084 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
extern "C" void X509Certificate_set_KeyAlgorithmParameters_m5154 (X509Certificate_t1018 * __this, ByteU5BU5D_t1019* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C" ByteU5BU5D_t1019* X509Certificate_get_PublicKey_m5083 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern "C" RSA_t1021 * X509Certificate_get_RSA_m5072 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
extern "C" void X509Certificate_set_RSA_m5129 (X509Certificate_t1018 * __this, RSA_t1021 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C" ByteU5BU5D_t1019* X509Certificate_get_RawData_m5188 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern "C" ByteU5BU5D_t1019* X509Certificate_get_SerialNumber_m5112 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
extern "C" ByteU5BU5D_t1019* X509Certificate_get_Signature_m5553 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
extern "C" String_t* X509Certificate_get_SignatureAlgorithm_m5114 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C" String_t* X509Certificate_get_SubjectName_m5554 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C" DateTime_t650  X509Certificate_get_ValidFrom_m5111 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C" DateTime_t650  X509Certificate_get_ValidUntil_m5109 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C" int32_t X509Certificate_get_Version_m5117 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C" bool X509Certificate_get_IsCurrent_m5555 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern "C" bool X509Certificate_WasCurrent_m5556 (X509Certificate_t1018 * __this, DateTime_t650  ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Certificate_VerifySignature_m5557 (X509Certificate_t1018 * __this, DSA_t1020 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Certificate_VerifySignature_m5558 (X509Certificate_t1018 * __this, RSA_t1021 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Certificate_VerifySignature_m5155 (X509Certificate_t1018 * __this, AsymmetricAlgorithm_t1014 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C" bool X509Certificate_get_IsSelfSigned_m5559 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C" ASN1_t1030 * X509Certificate_GetIssuerName_m5108 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C" ASN1_t1030 * X509Certificate_GetSubjectName_m5115 (X509Certificate_t1018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_GetObjectData_m5560 (X509Certificate_t1018 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" ByteU5BU5D_t1019* X509Certificate_PEM_m5561 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t1019* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;

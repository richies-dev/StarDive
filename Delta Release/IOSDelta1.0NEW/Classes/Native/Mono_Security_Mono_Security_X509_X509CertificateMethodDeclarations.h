#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Certificate
struct X509Certificate_t951;
// System.Security.Cryptography.DSA
struct DSA_t953;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1098;
// System.Byte[]
struct ByteU5BU5D_t952;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t954;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t947;
// Mono.Security.ASN1
struct ASN1_t963;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m4895 (X509Certificate_t951 * __this, ByteU5BU5D_t952* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C" void X509Certificate__cctor_m5311 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" void X509Certificate_Parse_m5312 (X509Certificate_t951 * __this, ByteU5BU5D_t952* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t952* X509Certificate_GetUnsignedBigInteger_m5313 (X509Certificate_t951 * __this, ByteU5BU5D_t952* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" DSA_t953 * X509Certificate_get_DSA_m4841 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
extern "C" void X509Certificate_set_DSA_m4893 (X509Certificate_t951 * __this, DSA_t953 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C" X509ExtensionCollection_t1098 * X509Certificate_get_Extensions_m4919 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C" ByteU5BU5D_t952* X509Certificate_get_Hash_m5314 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C" String_t* X509Certificate_get_IssuerName_m5315 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
extern "C" String_t* X509Certificate_get_KeyAlgorithm_m4834 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C" ByteU5BU5D_t952* X509Certificate_get_KeyAlgorithmParameters_m4847 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
extern "C" void X509Certificate_set_KeyAlgorithmParameters_m4917 (X509Certificate_t951 * __this, ByteU5BU5D_t952* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C" ByteU5BU5D_t952* X509Certificate_get_PublicKey_m4846 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern "C" RSA_t954 * X509Certificate_get_RSA_m4835 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
extern "C" void X509Certificate_set_RSA_m4892 (X509Certificate_t951 * __this, RSA_t954 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C" ByteU5BU5D_t952* X509Certificate_get_RawData_m4951 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern "C" ByteU5BU5D_t952* X509Certificate_get_SerialNumber_m4875 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
extern "C" ByteU5BU5D_t952* X509Certificate_get_Signature_m5316 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
extern "C" String_t* X509Certificate_get_SignatureAlgorithm_m4877 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C" String_t* X509Certificate_get_SubjectName_m5317 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C" DateTime_t579  X509Certificate_get_ValidFrom_m4874 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C" DateTime_t579  X509Certificate_get_ValidUntil_m4872 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C" int32_t X509Certificate_get_Version_m4880 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C" bool X509Certificate_get_IsCurrent_m5318 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern "C" bool X509Certificate_WasCurrent_m5319 (X509Certificate_t951 * __this, DateTime_t579  ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Certificate_VerifySignature_m5320 (X509Certificate_t951 * __this, DSA_t953 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Certificate_VerifySignature_m5321 (X509Certificate_t951 * __this, RSA_t954 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Certificate_VerifySignature_m4918 (X509Certificate_t951 * __this, AsymmetricAlgorithm_t947 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C" bool X509Certificate_get_IsSelfSigned_m5322 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C" ASN1_t963 * X509Certificate_GetIssuerName_m4871 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C" ASN1_t963 * X509Certificate_GetSubjectName_m4878 (X509Certificate_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_GetObjectData_m5323 (X509Certificate_t951 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" ByteU5BU5D_t952* X509Certificate_PEM_m5324 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t952* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;

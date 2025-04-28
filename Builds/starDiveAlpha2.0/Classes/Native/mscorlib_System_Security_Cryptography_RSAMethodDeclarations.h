#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSA
struct RSA_t1021;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSA::.ctor()
extern "C" void RSA__ctor_m6179 (RSA_t1021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
extern "C" RSA_t1021 * RSA_Create_m5076 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create(System.String)
extern "C" RSA_t1021 * RSA_Create_m9875 (Object_t * __this /* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSA::EncryptValue(System.Byte[])
// System.Byte[] System.Security.Cryptography.RSA::DecryptValue(System.Byte[])
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean)
// System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters)
// System.Void System.Security.Cryptography.RSA::ZeroizePrivateKey(System.Security.Cryptography.RSAParameters)
extern "C" void RSA_ZeroizePrivateKey_m9876 (RSA_t1021 * __this, RSAParameters_t1153  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::FromXmlString(System.String)
extern "C" void RSA_FromXmlString_m6328 (RSA_t1021 * __this, String_t* ___xmlString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSA::ToXmlString(System.Boolean)
extern "C" String_t* RSA_ToXmlString_m9877 (RSA_t1021 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;

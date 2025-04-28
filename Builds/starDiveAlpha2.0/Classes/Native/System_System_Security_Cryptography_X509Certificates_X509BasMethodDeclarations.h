#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t1026;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1015;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.String
struct String_t;
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
extern "C" void X509BasicConstraintsExtension__ctor_m4342 (X509BasicConstraintsExtension_t1026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509BasicConstraintsExtension__ctor_m4343 (X509BasicConstraintsExtension_t1026 * __this, AsnEncodedData_t1015 * ___encodedBasicConstraints, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
extern "C" void X509BasicConstraintsExtension__ctor_m4344 (X509BasicConstraintsExtension_t1026 * __this, bool ___certificateAuthority, bool ___hasPathLengthConstraint, int32_t ___pathLengthConstraint, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
extern "C" bool X509BasicConstraintsExtension_get_CertificateAuthority_m4345 (X509BasicConstraintsExtension_t1026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
extern "C" bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m4346 (X509BasicConstraintsExtension_t1026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
extern "C" int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m4347 (X509BasicConstraintsExtension_t1026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509BasicConstraintsExtension_CopyFrom_m4348 (X509BasicConstraintsExtension_t1026 * __this, AsnEncodedData_t1015 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
extern "C" int32_t X509BasicConstraintsExtension_Decode_m4349 (X509BasicConstraintsExtension_t1026 * __this, ByteU5BU5D_t1019* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
extern "C" ByteU5BU5D_t1019* X509BasicConstraintsExtension_Encode_m4350 (X509BasicConstraintsExtension_t1026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
extern "C" String_t* X509BasicConstraintsExtension_ToString_m4351 (X509BasicConstraintsExtension_t1026 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Store
struct X509Store_t990;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1095;
// System.Collections.ArrayList
struct ArrayList_t906;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t952;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t951;
// Mono.Security.X509.X509Crl
struct X509Crl_t975;

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C" void X509Store__ctor_m5370 (X509Store_t990 * __this, String_t* ___path, bool ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C" X509CertificateCollection_t1095 * X509Store_get_Certificates_m4948 (X509Store_t990 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C" ArrayList_t906 * X509Store_get_Crls_m4928 (X509Store_t990 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C" ByteU5BU5D_t952* X509Store_Load_m5371 (X509Store_t990 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C" X509Certificate_t951 * X509Store_LoadCertificate_m5372 (X509Store_t990 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C" X509Crl_t975 * X509Store_LoadCrl_m5373 (X509Store_t990 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C" bool X509Store_CheckStore_m5374 (X509Store_t990 * __this, String_t* ___path, bool ___throwException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C" X509CertificateCollection_t1095 * X509Store_BuildCertificatesCollection_m5375 (X509Store_t990 * __this, String_t* ___storeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C" ArrayList_t906 * X509Store_BuildCrlsCollection_m5376 (X509Store_t990 * __this, String_t* ___storeName, MethodInfo* method) IL2CPP_METHOD_ATTR;

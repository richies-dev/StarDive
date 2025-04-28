#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t1239;
// System.String[]
struct StringU5BU5D_t104;
// Mono.Security.ASN1
struct ASN1_t1030;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m5629 (GeneralNames_t1239 * __this, ASN1_t1030 * ___sequence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t104* GeneralNames_get_DNSNames_m5630 (GeneralNames_t1239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t104* GeneralNames_get_IPAddresses_m5631 (GeneralNames_t1239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m5632 (GeneralNames_t1239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

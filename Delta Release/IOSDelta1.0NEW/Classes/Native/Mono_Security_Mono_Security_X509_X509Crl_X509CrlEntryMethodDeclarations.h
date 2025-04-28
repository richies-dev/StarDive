#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t977;
// System.Byte[]
struct ByteU5BU5D_t952;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1098;
// Mono.Security.ASN1
struct ASN1_t963;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" void X509CrlEntry__ctor_m5348 (X509CrlEntry_t977 * __this, ASN1_t963 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" ByteU5BU5D_t952* X509CrlEntry_get_SerialNumber_m5349 (X509CrlEntry_t977 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" DateTime_t579  X509CrlEntry_get_RevocationDate_m4926 (X509CrlEntry_t977 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" X509ExtensionCollection_t1098 * X509CrlEntry_get_Extensions_m4933 (X509CrlEntry_t977 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

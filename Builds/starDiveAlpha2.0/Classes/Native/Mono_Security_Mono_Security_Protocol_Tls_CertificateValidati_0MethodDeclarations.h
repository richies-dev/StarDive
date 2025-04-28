#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1289;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1287;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1162;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback2__ctor_m6142 (CertificateValidationCallback2_t1289 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t1287 * CertificateValidationCallback2_Invoke_m6143 (CertificateValidationCallback2_t1289 * __this, X509CertificateCollection_t1162 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" ValidationResult_t1287 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t1289(Il2CppObject* delegate, X509CertificateCollection_t1162 * ___collection);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback2_BeginInvoke_m6144 (CertificateValidationCallback2_t1289 * __this, X509CertificateCollection_t1162 * ___collection, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern "C" ValidationResult_t1287 * CertificateValidationCallback2_EndInvoke_m6145 (CertificateValidationCallback2_t1289 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;

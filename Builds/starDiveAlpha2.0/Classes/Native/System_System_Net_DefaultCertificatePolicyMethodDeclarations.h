#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t983;
// System.Net.ServicePoint
struct ServicePoint_t984;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t985;
// System.Net.WebRequest
struct WebRequest_t986;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m4205 (DefaultCertificatePolicy_t983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m4206 (DefaultCertificatePolicy_t983 * __this, ServicePoint_t984 * ___point, X509Certificate_t985 * ___certificate, WebRequest_t986 * ___request, int32_t ___certificateProblem, MethodInfo* method) IL2CPP_METHOD_ATTR;

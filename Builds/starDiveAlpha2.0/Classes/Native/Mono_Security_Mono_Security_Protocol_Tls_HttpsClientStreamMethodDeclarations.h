#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t1275;
// System.IO.Stream
struct Stream_t233;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1000;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1001;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t985;
// System.Int32[]
struct Int32U5BU5D_t102;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1014;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m5820 (HttpsClientStream_t1275 * __this, Stream_t233 * ___stream, X509CertificateCollection_t1000 * ___clientCertificates, HttpWebRequest_t1001 * ___request, ByteU5BU5D_t1019* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m5821 (HttpsClientStream_t1275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m5822 (HttpsClientStream_t1275 * __this, X509Certificate_t985 * ___certificate, Int32U5BU5D_t102* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t985 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m5823 (Object_t * __this /* static, unused */, X509CertificateCollection_t1000 * ___clientCerts, X509Certificate_t985 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1000 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1014 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m5824 (Object_t * __this /* static, unused */, X509Certificate_t985 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;

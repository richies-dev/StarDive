#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t1208;
// System.IO.Stream
struct Stream_t162;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t933;
// System.Net.HttpWebRequest
struct HttpWebRequest_t934;
// System.Byte[]
struct ByteU5BU5D_t952;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t918;
// System.Int32[]
struct Int32U5BU5D_t38;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t947;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m5583 (HttpsClientStream_t1208 * __this, Stream_t162 * ___stream, X509CertificateCollection_t933 * ___clientCertificates, HttpWebRequest_t934 * ___request, ByteU5BU5D_t952* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m5584 (HttpsClientStream_t1208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m5585 (HttpsClientStream_t1208 * __this, X509Certificate_t918 * ___certificate, Int32U5BU5D_t38* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t918 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m5586 (Object_t * __this /* static, unused */, X509CertificateCollection_t933 * ___clientCerts, X509Certificate_t918 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t933 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t947 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m5587 (Object_t * __this /* static, unused */, X509Certificate_t918 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;

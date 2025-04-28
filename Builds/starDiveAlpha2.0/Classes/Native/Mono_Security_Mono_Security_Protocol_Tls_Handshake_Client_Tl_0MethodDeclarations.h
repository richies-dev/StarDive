#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t1299;
// Mono.Security.Protocol.Tls.Context
struct Context_t1252;
// System.Security.Cryptography.RSA
struct RSA_t1021;
// System.Byte[]
struct ByteU5BU5D_t1019;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificateVerify__ctor_m6084 (TlsClientCertificateVerify_t1299 * __this, Context_t1252 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C" void TlsClientCertificateVerify_Update_m6085 (TlsClientCertificateVerify_t1299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m6086 (TlsClientCertificateVerify_t1299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m6087 (TlsClientCertificateVerify_t1299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C" RSA_t1021 * TlsClientCertificateVerify_getClientCertRSA_m6088 (TlsClientCertificateVerify_t1299 * __this, RSA_t1021 * ___privKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t1019* TlsClientCertificateVerify_getUnsignedBigInteger_m6089 (TlsClientCertificateVerify_t1299 * __this, ByteU5BU5D_t1019* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;

﻿#pragma once
#include <stdint.h>
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1095;
// System.Security.Cryptography.RSA
struct RSA_t954;
// System.Byte[]
struct ByteU5BU5D_t952;
// System.String[]
struct StringU5BU5D_t34;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t1228;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
struct  TlsServerSettings_t1200  : public Object_t
{
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::certificates
	X509CertificateCollection_t1095 * ___certificates_0;
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::certificateRSA
	RSA_t954 * ___certificateRSA_1;
	// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::rsaParameters
	RSAParameters_t1086  ___rsaParameters_2;
	// System.Byte[] Mono.Security.Protocol.Tls.TlsServerSettings::signedParams
	ByteU5BU5D_t952* ___signedParams_3;
	// System.String[] Mono.Security.Protocol.Tls.TlsServerSettings::distinguisedNames
	StringU5BU5D_t34* ___distinguisedNames_4;
	// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::serverKeyExchange
	bool ___serverKeyExchange_5;
	// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::certificateRequest
	bool ___certificateRequest_6;
	// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[] Mono.Security.Protocol.Tls.TlsServerSettings::certificateTypes
	ClientCertificateTypeU5BU5D_t1228* ___certificateTypes_7;
};

﻿#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t1228;
// System.String[]
struct StringU5BU5D_t34;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct  TlsServerCertificateRequest_t1237  : public HandshakeMessage_t1195
{
	// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::certificateTypes
	ClientCertificateTypeU5BU5D_t1228* ___certificateTypes_9;
	// System.String[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::distinguisedNames
	StringU5BU5D_t34* ___distinguisedNames_10;
};

﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1162;
// System.Collections.ArrayList
struct ArrayList_t973;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.X509Store
struct  X509Store_t1057  : public Object_t
{
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t1162 * ____certificates_1;
	// System.Collections.ArrayList Mono.Security.X509.X509Store::_crls
	ArrayList_t973 * ____crls_2;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_3;
};

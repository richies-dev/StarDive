﻿#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.Collections.ArrayList
struct ArrayList_t973;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1162;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t671;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.PKCS12
struct  PKCS12_t1160  : public Object_t
{
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t1019* ____password_1;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t973 * ____keyBags_2;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t973 * ____secretBags_3;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t1162 * ____certs_4;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_5;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_6;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_7;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_8;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t973 * ____safeBags_9;
};
struct PKCS12_t1160_StaticFields{
	// System.Int32 Mono.Security.X509.PKCS12::recommendedIterationCount
	int32_t ___recommendedIterationCount_0;
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map5
	Dictionary_2_t671 * ___U3CU3Ef__switch$map5_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map6
	Dictionary_2_t671 * ___U3CU3Ef__switch$map6_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map7
	Dictionary_2_t671 * ___U3CU3Ef__switch$map7_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map8
	Dictionary_2_t671 * ___U3CU3Ef__switch$map8_14;
};

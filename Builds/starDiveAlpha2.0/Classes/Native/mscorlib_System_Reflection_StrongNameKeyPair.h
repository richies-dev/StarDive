#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t1021;
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t1594  : public Object_t
{
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t1019* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t1019* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t1021 * ____rsa_4;
};

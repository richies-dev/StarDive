#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t954;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1138;
// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricKeyExchangeF.h"
// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t1274  : public AsymmetricKeyExchangeFormatter_t1713
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t954 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t1138 * ___random_1;
};

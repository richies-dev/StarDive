#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1274;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t947;
// System.Byte[]
struct ByteU5BU5D_t952;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m6073 (RSAPKCS1KeyExchangeFormatter_t1274 * __this, AsymmetricAlgorithm_t947 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t952* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m6074 (RSAPKCS1KeyExchangeFormatter_t1274 * __this, ByteU5BU5D_t952* ___rgbData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m9653 (RSAPKCS1KeyExchangeFormatter_t1274 * __this, AsymmetricAlgorithm_t947 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;

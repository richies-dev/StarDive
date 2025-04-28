#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1341;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1014;
// System.Byte[]
struct ByteU5BU5D_t1019;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m6309 (RSAPKCS1KeyExchangeFormatter_t1341 * __this, AsymmetricAlgorithm_t1014 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t1019* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m6310 (RSAPKCS1KeyExchangeFormatter_t1341 * __this, ByteU5BU5D_t1019* ___rgbData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m9889 (RSAPKCS1KeyExchangeFormatter_t1341 * __this, AsymmetricAlgorithm_t1014 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;

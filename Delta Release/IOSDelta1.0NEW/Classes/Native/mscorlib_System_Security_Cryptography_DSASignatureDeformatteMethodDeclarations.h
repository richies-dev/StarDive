#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t1260;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t947;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t952;

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C" void DSASignatureDeformatter__ctor_m9529 (DSASignatureDeformatter_t1260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter__ctor_m5971 (DSASignatureDeformatter_t1260 * __this, AsymmetricAlgorithm_t947 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureDeformatter_SetHashAlgorithm_m5972 (DSASignatureDeformatter_t1260 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter_SetKey_m9530 (DSASignatureDeformatter_t1260 * __this, AsymmetricAlgorithm_t947 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSASignatureDeformatter_VerifySignature_m5973 (DSASignatureDeformatter_t1260 * __this, ByteU5BU5D_t952* ___rgbHash, ByteU5BU5D_t952* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;

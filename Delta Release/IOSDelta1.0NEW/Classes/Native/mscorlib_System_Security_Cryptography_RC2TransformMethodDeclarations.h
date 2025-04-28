#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2Transform
struct RC2Transform_t1728;
// System.Security.Cryptography.RC2
struct RC2_t1267;
// System.Byte[]
struct ByteU5BU5D_t952;

// System.Void System.Security.Cryptography.RC2Transform::.ctor(System.Security.Cryptography.RC2,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RC2Transform__ctor_m9601 (RC2Transform_t1728 * __this, RC2_t1267 * ___rc2Algo, bool ___encryption, ByteU5BU5D_t952* ___key, ByteU5BU5D_t952* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::.cctor()
extern "C" void RC2Transform__cctor_m9602 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::ECB(System.Byte[],System.Byte[])
extern "C" void RC2Transform_ECB_m9603 (RC2Transform_t1728 * __this, ByteU5BU5D_t952* ___input, ByteU5BU5D_t952* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;

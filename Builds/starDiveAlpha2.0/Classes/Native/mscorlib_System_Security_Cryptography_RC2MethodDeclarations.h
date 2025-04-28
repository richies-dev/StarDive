#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2
struct RC2_t1334;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.RC2::.ctor()
extern "C" void RC2__ctor_m9826 (RC2_t1334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RC2 System.Security.Cryptography.RC2::Create()
extern "C" RC2_t1334 * RC2_Create_m6233 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RC2 System.Security.Cryptography.RC2::Create(System.String)
extern "C" RC2_t1334 * RC2_Create_m9827 (Object_t * __this /* static, unused */, String_t* ___AlgName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2::get_EffectiveKeySize()
extern "C" int32_t RC2_get_EffectiveKeySize_m9828 (RC2_t1334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2::get_KeySize()
extern "C" int32_t RC2_get_KeySize_m9829 (RC2_t1334 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2::set_KeySize(System.Int32)
extern "C" void RC2_set_KeySize_m9830 (RC2_t1334 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1846;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m11289 (Nullable_1_t1846 * __this, TimeSpan_t980  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m11295 (Nullable_1_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t980  Nullable_1_get_Value_m11296 (Nullable_1_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m19432 (Nullable_1_t1846 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m19433 (Nullable_1_t1846 * __this, Nullable_1_t1846  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m19434 (Nullable_1_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t980  Nullable_1_GetValueOrDefault_m19435 (Nullable_1_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m19436 (Nullable_1_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

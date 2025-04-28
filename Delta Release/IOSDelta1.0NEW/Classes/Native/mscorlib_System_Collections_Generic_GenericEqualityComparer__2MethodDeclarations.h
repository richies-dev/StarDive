#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t1951;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11310_gshared (GenericEqualityComparer_1_t1951 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11310(__this, method) (( void (*) (GenericEqualityComparer_1_t1951 *, MethodInfo*))GenericEqualityComparer_1__ctor_m11310_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m19461_gshared (GenericEqualityComparer_1_t1951 * __this, TimeSpan_t980  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m19461(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1951 *, TimeSpan_t980 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m19461_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m19462_gshared (GenericEqualityComparer_1_t1951 * __this, TimeSpan_t980  ___x, TimeSpan_t980  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m19462(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1951 *, TimeSpan_t980 , TimeSpan_t980 , MethodInfo*))GenericEqualityComparer_1_Equals_m19462_gshared)(__this, ___x, ___y, method)

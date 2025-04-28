#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t2017;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11545_gshared (GenericEqualityComparer_1_t2017 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11545(__this, method) (( void (*) (GenericEqualityComparer_1_t2017 *, MethodInfo*))GenericEqualityComparer_1__ctor_m11545_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m19691_gshared (GenericEqualityComparer_1_t2017 * __this, TimeSpan_t1047  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m19691(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2017 *, TimeSpan_t1047 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m19691_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m19692_gshared (GenericEqualityComparer_1_t2017 * __this, TimeSpan_t1047  ___x, TimeSpan_t1047  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m19692(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2017 *, TimeSpan_t1047 , TimeSpan_t1047 , MethodInfo*))GenericEqualityComparer_1_Equals_m19692_gshared)(__this, ___x, ___y, method)

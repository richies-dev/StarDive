#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3245;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m19468_gshared (DefaultComparer_t3245 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m19468(__this, method) (( void (*) (DefaultComparer_t3245 *, MethodInfo*))DefaultComparer__ctor_m19468_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19469_gshared (DefaultComparer_t3245 * __this, TimeSpan_t980  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m19469(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3245 *, TimeSpan_t980 , MethodInfo*))DefaultComparer_GetHashCode_m19469_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19470_gshared (DefaultComparer_t3245 * __this, TimeSpan_t980  ___x, TimeSpan_t980  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m19470(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3245 *, TimeSpan_t980 , TimeSpan_t980 , MethodInfo*))DefaultComparer_Equals_m19470_gshared)(__this, ___x, ___y, method)

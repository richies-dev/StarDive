#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t3237;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m19429_gshared (DefaultComparer_t3237 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m19429(__this, method) (( void (*) (DefaultComparer_t3237 *, MethodInfo*))DefaultComparer__ctor_m19429_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19430_gshared (DefaultComparer_t3237 * __this, DateTimeOffset_t1843  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m19430(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3237 *, DateTimeOffset_t1843 , MethodInfo*))DefaultComparer_GetHashCode_m19430_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19431_gshared (DefaultComparer_t3237 * __this, DateTimeOffset_t1843  ___x, DateTimeOffset_t1843  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m19431(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3237 *, DateTimeOffset_t1843 , DateTimeOffset_t1843 , MethodInfo*))DefaultComparer_Equals_m19431_gshared)(__this, ___x, ___y, method)

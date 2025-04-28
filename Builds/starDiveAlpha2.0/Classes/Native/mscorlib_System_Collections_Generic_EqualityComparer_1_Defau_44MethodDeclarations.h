#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3308;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m19698_gshared (DefaultComparer_t3308 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m19698(__this, method) (( void (*) (DefaultComparer_t3308 *, MethodInfo*))DefaultComparer__ctor_m19698_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19699_gshared (DefaultComparer_t3308 * __this, TimeSpan_t1047  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m19699(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3308 *, TimeSpan_t1047 , MethodInfo*))DefaultComparer_GetHashCode_m19699_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19700_gshared (DefaultComparer_t3308 * __this, TimeSpan_t1047  ___x, TimeSpan_t1047  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m19700(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3308 *, TimeSpan_t1047 , TimeSpan_t1047 , MethodInfo*))DefaultComparer_Equals_m19700_gshared)(__this, ___x, ___y, method)

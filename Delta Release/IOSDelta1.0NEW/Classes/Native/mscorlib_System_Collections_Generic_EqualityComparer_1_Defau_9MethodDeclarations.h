#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
struct DefaultComparer_t2629;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m13918_gshared (DefaultComparer_t2629 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m13918(__this, method) (( void (*) (DefaultComparer_t2629 *, MethodInfo*))DefaultComparer__ctor_m13918_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13919_gshared (DefaultComparer_t2629 * __this, int32_t ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m13919(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2629 *, int32_t, MethodInfo*))DefaultComparer_GetHashCode_m13919_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13920_gshared (DefaultComparer_t2629 * __this, int32_t ___x, int32_t ___y, MethodInfo* method);
#define DefaultComparer_Equals_m13920(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2629 *, int32_t, int32_t, MethodInfo*))DefaultComparer_Equals_m13920_gshared)(__this, ___x, ___y, method)

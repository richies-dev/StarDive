#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3304;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m19681_gshared (DefaultComparer_t3304 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m19681(__this, method) (( void (*) (DefaultComparer_t3304 *, MethodInfo*))DefaultComparer__ctor_m19681_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19682_gshared (DefaultComparer_t3304 * __this, Guid_t1933  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m19682(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3304 *, Guid_t1933 , MethodInfo*))DefaultComparer_GetHashCode_m19682_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19683_gshared (DefaultComparer_t3304 * __this, Guid_t1933  ___x, Guid_t1933  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m19683(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3304 *, Guid_t1933 , Guid_t1933 , MethodInfo*))DefaultComparer_Equals_m19683_gshared)(__this, ___x, ___y, method)

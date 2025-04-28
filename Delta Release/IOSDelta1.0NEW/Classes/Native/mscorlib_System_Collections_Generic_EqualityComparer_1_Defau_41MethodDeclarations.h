#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3233;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m19412_gshared (DefaultComparer_t3233 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m19412(__this, method) (( void (*) (DefaultComparer_t3233 *, MethodInfo*))DefaultComparer__ctor_m19412_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19413_gshared (DefaultComparer_t3233 * __this, DateTime_t579  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m19413(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3233 *, DateTime_t579 , MethodInfo*))DefaultComparer_GetHashCode_m19413_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19414_gshared (DefaultComparer_t3233 * __this, DateTime_t579  ___x, DateTime_t579  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m19414(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3233 *, DateTime_t579 , DateTime_t579 , MethodInfo*))DefaultComparer_Equals_m19414_gshared)(__this, ___x, ___y, method)

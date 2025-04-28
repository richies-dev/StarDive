#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3296;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m19642_gshared (DefaultComparer_t3296 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m19642(__this, method) (( void (*) (DefaultComparer_t3296 *, MethodInfo*))DefaultComparer__ctor_m19642_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19643_gshared (DefaultComparer_t3296 * __this, DateTime_t650  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m19643(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3296 *, DateTime_t650 , MethodInfo*))DefaultComparer_GetHashCode_m19643_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19644_gshared (DefaultComparer_t3296 * __this, DateTime_t650  ___x, DateTime_t650  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m19644(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3296 *, DateTime_t650 , DateTime_t650 , MethodInfo*))DefaultComparer_Equals_m19644_gshared)(__this, ___x, ___y, method)

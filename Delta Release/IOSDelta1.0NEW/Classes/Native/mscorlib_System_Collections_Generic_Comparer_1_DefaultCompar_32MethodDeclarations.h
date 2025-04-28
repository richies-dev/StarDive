#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t3235;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m19420_gshared (DefaultComparer_t3235 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m19420(__this, method) (( void (*) (DefaultComparer_t3235 *, MethodInfo*))DefaultComparer__ctor_m19420_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m19421_gshared (DefaultComparer_t3235 * __this, DateTimeOffset_t1843  ___x, DateTimeOffset_t1843  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m19421(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3235 *, DateTimeOffset_t1843 , DateTimeOffset_t1843 , MethodInfo*))DefaultComparer_Compare_m19421_gshared)(__this, ___x, ___y, method)

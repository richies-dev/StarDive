#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3302;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m19672_gshared (DefaultComparer_t3302 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m19672(__this, method) (( void (*) (DefaultComparer_t3302 *, MethodInfo*))DefaultComparer__ctor_m19672_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m19673_gshared (DefaultComparer_t3302 * __this, Guid_t1933  ___x, Guid_t1933  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m19673(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3302 *, Guid_t1933 , Guid_t1933 , MethodInfo*))DefaultComparer_Compare_m19673_gshared)(__this, ___x, ___y, method)

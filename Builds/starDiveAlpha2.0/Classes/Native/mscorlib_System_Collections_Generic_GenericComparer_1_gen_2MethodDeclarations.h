#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t2016;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m11544_gshared (GenericComparer_1_t2016 * __this, MethodInfo* method);
#define GenericComparer_1__ctor_m11544(__this, method) (( void (*) (GenericComparer_1_t2016 *, MethodInfo*))GenericComparer_1__ctor_m11544_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m19684_gshared (GenericComparer_1_t2016 * __this, TimeSpan_t1047  ___x, TimeSpan_t1047  ___y, MethodInfo* method);
#define GenericComparer_1_Compare_m19684(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2016 *, TimeSpan_t1047 , TimeSpan_t1047 , MethodInfo*))GenericComparer_1_Compare_m19684_gshared)(__this, ___x, ___y, method)

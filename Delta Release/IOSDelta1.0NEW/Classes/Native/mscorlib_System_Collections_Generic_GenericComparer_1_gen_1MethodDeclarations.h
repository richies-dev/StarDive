#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t1948;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m11297_gshared (GenericComparer_1_t1948 * __this, MethodInfo* method);
#define GenericComparer_1__ctor_m11297(__this, method) (( void (*) (GenericComparer_1_t1948 *, MethodInfo*))GenericComparer_1__ctor_m11297_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m19437_gshared (GenericComparer_1_t1948 * __this, Guid_t1867  ___x, Guid_t1867  ___y, MethodInfo* method);
#define GenericComparer_1_Compare_m19437(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1948 *, Guid_t1867 , Guid_t1867 , MethodInfo*))GenericComparer_1_Compare_m19437_gshared)(__this, ___x, ___y, method)

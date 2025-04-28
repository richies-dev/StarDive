#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t2014;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m11532_gshared (GenericComparer_1_t2014 * __this, MethodInfo* method);
#define GenericComparer_1__ctor_m11532(__this, method) (( void (*) (GenericComparer_1_t2014 *, MethodInfo*))GenericComparer_1__ctor_m11532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m19667_gshared (GenericComparer_1_t2014 * __this, Guid_t1933  ___x, Guid_t1933  ___y, MethodInfo* method);
#define GenericComparer_1_Compare_m19667(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2014 *, Guid_t1933 , Guid_t1933 , MethodInfo*))GenericComparer_1_Compare_m19667_gshared)(__this, ___x, ___y, method)

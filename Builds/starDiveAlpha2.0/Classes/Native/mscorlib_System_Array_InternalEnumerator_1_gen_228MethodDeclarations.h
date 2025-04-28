#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Decimal>
struct InternalEnumerator_1_t3269;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19416_gshared (InternalEnumerator_1_t3269 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m19416(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3269 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m19416_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19417_gshared (InternalEnumerator_1_t3269 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19417(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3269 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19417_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19418_gshared (InternalEnumerator_1_t3269 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19418(__this, method) (( void (*) (InternalEnumerator_1_t3269 *, MethodInfo*))InternalEnumerator_1_Dispose_m19418_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19419_gshared (InternalEnumerator_1_t3269 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19419(__this, method) (( bool (*) (InternalEnumerator_1_t3269 *, MethodInfo*))InternalEnumerator_1_MoveNext_m19419_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t1347  InternalEnumerator_1_get_Current_m19420_gshared (InternalEnumerator_1_t3269 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19420(__this, method) (( Decimal_t1347  (*) (InternalEnumerator_1_t3269 *, MethodInfo*))InternalEnumerator_1_get_Current_m19420_gshared)(__this, method)

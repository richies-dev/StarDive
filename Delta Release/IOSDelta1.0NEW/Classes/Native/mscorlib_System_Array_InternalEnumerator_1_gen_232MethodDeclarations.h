#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.TimeSpan>
struct InternalEnumerator_1_t3209;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19201_gshared (InternalEnumerator_1_t3209 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m19201(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3209 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m19201_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19202_gshared (InternalEnumerator_1_t3209 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19202(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3209 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19202_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19203_gshared (InternalEnumerator_1_t3209 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19203(__this, method) (( void (*) (InternalEnumerator_1_t3209 *, MethodInfo*))InternalEnumerator_1_Dispose_m19203_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19204_gshared (InternalEnumerator_1_t3209 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19204(__this, method) (( bool (*) (InternalEnumerator_1_t3209 *, MethodInfo*))InternalEnumerator_1_MoveNext_m19204_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t980  InternalEnumerator_1_get_Current_m19205_gshared (InternalEnumerator_1_t3209 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19205(__this, method) (( TimeSpan_t980  (*) (InternalEnumerator_1_t3209 *, MethodInfo*))InternalEnumerator_1_get_Current_m19205_gshared)(__this, method)

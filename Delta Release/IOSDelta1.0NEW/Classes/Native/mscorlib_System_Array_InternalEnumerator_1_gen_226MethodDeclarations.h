#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t3203;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19171_gshared (InternalEnumerator_1_t3203 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m19171(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3203 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m19171_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19172_gshared (InternalEnumerator_1_t3203 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19172(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3203 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19172_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19173_gshared (InternalEnumerator_1_t3203 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19173(__this, method) (( void (*) (InternalEnumerator_1_t3203 *, MethodInfo*))InternalEnumerator_1_Dispose_m19173_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19174_gshared (InternalEnumerator_1_t3203 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19174(__this, method) (( bool (*) (InternalEnumerator_1_t3203 *, MethodInfo*))InternalEnumerator_1_MoveNext_m19174_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t579  InternalEnumerator_1_get_Current_m19175_gshared (InternalEnumerator_1_t3203 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19175(__this, method) (( DateTime_t579  (*) (InternalEnumerator_1_t3203 *, MethodInfo*))InternalEnumerator_1_get_Current_m19175_gshared)(__this, method)

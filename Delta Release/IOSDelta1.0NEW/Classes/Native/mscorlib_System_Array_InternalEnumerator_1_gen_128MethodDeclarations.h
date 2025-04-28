#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct InternalEnumerator_1_t2965;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17217_gshared (InternalEnumerator_1_t2965 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m17217(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2965 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m17217_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17218_gshared (InternalEnumerator_1_t2965 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17218(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2965 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17218_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17219_gshared (InternalEnumerator_1_t2965 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17219(__this, method) (( void (*) (InternalEnumerator_1_t2965 *, MethodInfo*))InternalEnumerator_1_Dispose_m17219_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17220_gshared (InternalEnumerator_1_t2965 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17220(__this, method) (( bool (*) (InternalEnumerator_1_t2965 *, MethodInfo*))InternalEnumerator_1_MoveNext_m17220_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2964  InternalEnumerator_1_get_Current_m17221_gshared (InternalEnumerator_1_t2965 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17221(__this, method) (( KeyValuePair_2_t2964  (*) (InternalEnumerator_1_t2965 *, MethodInfo*))InternalEnumerator_1_get_Current_m17221_gshared)(__this, method)

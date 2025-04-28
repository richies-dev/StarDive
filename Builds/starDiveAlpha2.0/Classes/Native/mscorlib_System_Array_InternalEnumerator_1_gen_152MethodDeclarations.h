#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct InternalEnumerator_1_t3165;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18800_gshared (InternalEnumerator_1_t3165 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m18800(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3165 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m18800_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18801_gshared (InternalEnumerator_1_t3165 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18801(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3165 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18801_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18802_gshared (InternalEnumerator_1_t3165 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18802(__this, method) (( void (*) (InternalEnumerator_1_t3165 *, MethodInfo*))InternalEnumerator_1_Dispose_m18802_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18803_gshared (InternalEnumerator_1_t3165 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18803(__this, method) (( bool (*) (InternalEnumerator_1_t3165 *, MethodInfo*))InternalEnumerator_1_MoveNext_m18803_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t3164  InternalEnumerator_1_get_Current_m18804_gshared (InternalEnumerator_1_t3165 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18804(__this, method) (( KeyValuePair_2_t3164  (*) (InternalEnumerator_1_t3165 *, MethodInfo*))InternalEnumerator_1_get_Current_m18804_gshared)(__this, method)

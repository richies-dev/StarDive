#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct InternalEnumerator_1_t3102;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18570_gshared (InternalEnumerator_1_t3102 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m18570(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3102 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m18570_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18571_gshared (InternalEnumerator_1_t3102 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18571(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3102 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18571_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18572_gshared (InternalEnumerator_1_t3102 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18572(__this, method) (( void (*) (InternalEnumerator_1_t3102 *, MethodInfo*))InternalEnumerator_1_Dispose_m18572_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18573_gshared (InternalEnumerator_1_t3102 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18573(__this, method) (( bool (*) (InternalEnumerator_1_t3102 *, MethodInfo*))InternalEnumerator_1_MoveNext_m18573_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t3101  InternalEnumerator_1_get_Current_m18574_gshared (InternalEnumerator_1_t3102 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18574(__this, method) (( KeyValuePair_2_t3101  (*) (InternalEnumerator_1_t3102 *, MethodInfo*))InternalEnumerator_1_get_Current_m18574_gshared)(__this, method)

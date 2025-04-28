#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct InternalEnumerator_1_t2725;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14471_gshared (InternalEnumerator_1_t2725 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m14471(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2725 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m14471_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14472_gshared (InternalEnumerator_1_t2725 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14472(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2725 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14472_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14473_gshared (InternalEnumerator_1_t2725 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14473(__this, method) (( void (*) (InternalEnumerator_1_t2725 *, MethodInfo*))InternalEnumerator_1_Dispose_m14473_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14474_gshared (InternalEnumerator_1_t2725 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14474(__this, method) (( bool (*) (InternalEnumerator_1_t2725 *, MethodInfo*))InternalEnumerator_1_MoveNext_m14474_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2724  InternalEnumerator_1_get_Current_m14475_gshared (InternalEnumerator_1_t2725 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14475(__this, method) (( KeyValuePair_2_t2724  (*) (InternalEnumerator_1_t2725 *, MethodInfo*))InternalEnumerator_1_get_Current_m14475_gshared)(__this, method)

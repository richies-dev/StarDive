#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
struct InternalEnumerator_1_t2688;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14130_gshared (InternalEnumerator_1_t2688 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m14130(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2688 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m14130_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14131_gshared (InternalEnumerator_1_t2688 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14131(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2688 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14131_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14132_gshared (InternalEnumerator_1_t2688 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14132(__this, method) (( void (*) (InternalEnumerator_1_t2688 *, MethodInfo*))InternalEnumerator_1_Dispose_m14132_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14133_gshared (InternalEnumerator_1_t2688 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14133(__this, method) (( bool (*) (InternalEnumerator_1_t2688 *, MethodInfo*))InternalEnumerator_1_MoveNext_m14133_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t967  InternalEnumerator_1_get_Current_m14134_gshared (InternalEnumerator_1_t2688 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14134(__this, method) (( DictionaryEntry_t967  (*) (InternalEnumerator_1_t2688 *, MethodInfo*))InternalEnumerator_1_get_Current_m14134_gshared)(__this, method)

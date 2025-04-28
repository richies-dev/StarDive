#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2667;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2656;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14284_gshared (ShimEnumerator_t2667 * __this, Dictionary_2_t2656 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m14284(__this, ___host, method) (( void (*) (ShimEnumerator_t2667 *, Dictionary_2_t2656 *, MethodInfo*))ShimEnumerator__ctor_m14284_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14285_gshared (ShimEnumerator_t2667 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m14285(__this, method) (( bool (*) (ShimEnumerator_t2667 *, MethodInfo*))ShimEnumerator_MoveNext_m14285_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t900  ShimEnumerator_get_Entry_m14286_gshared (ShimEnumerator_t2667 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m14286(__this, method) (( DictionaryEntry_t900  (*) (ShimEnumerator_t2667 *, MethodInfo*))ShimEnumerator_get_Entry_m14286_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14287_gshared (ShimEnumerator_t2667 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m14287(__this, method) (( Object_t * (*) (ShimEnumerator_t2667 *, MethodInfo*))ShimEnumerator_get_Key_m14287_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14288_gshared (ShimEnumerator_t2667 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m14288(__this, method) (( Object_t * (*) (ShimEnumerator_t2667 *, MethodInfo*))ShimEnumerator_get_Value_m14288_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14289_gshared (ShimEnumerator_t2667 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m14289(__this, method) (( Object_t * (*) (ShimEnumerator_t2667 *, MethodInfo*))ShimEnumerator_get_Current_m14289_gshared)(__this, method)

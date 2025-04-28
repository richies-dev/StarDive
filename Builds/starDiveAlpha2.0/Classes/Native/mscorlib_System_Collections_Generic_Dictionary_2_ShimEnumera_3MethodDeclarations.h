#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2766;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2758;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14915_gshared (ShimEnumerator_t2766 * __this, Dictionary_2_t2758 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m14915(__this, ___host, method) (( void (*) (ShimEnumerator_t2766 *, Dictionary_2_t2758 *, MethodInfo*))ShimEnumerator__ctor_m14915_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14916_gshared (ShimEnumerator_t2766 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m14916(__this, method) (( bool (*) (ShimEnumerator_t2766 *, MethodInfo*))ShimEnumerator_MoveNext_m14916_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t967  ShimEnumerator_get_Entry_m14917_gshared (ShimEnumerator_t2766 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m14917(__this, method) (( DictionaryEntry_t967  (*) (ShimEnumerator_t2766 *, MethodInfo*))ShimEnumerator_get_Entry_m14917_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14918_gshared (ShimEnumerator_t2766 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m14918(__this, method) (( Object_t * (*) (ShimEnumerator_t2766 *, MethodInfo*))ShimEnumerator_get_Key_m14918_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14919_gshared (ShimEnumerator_t2766 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m14919(__this, method) (( Object_t * (*) (ShimEnumerator_t2766 *, MethodInfo*))ShimEnumerator_get_Value_m14919_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14920_gshared (ShimEnumerator_t2766 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m14920(__this, method) (( Object_t * (*) (ShimEnumerator_t2766 *, MethodInfo*))ShimEnumerator_get_Current_m14920_gshared)(__this, method)

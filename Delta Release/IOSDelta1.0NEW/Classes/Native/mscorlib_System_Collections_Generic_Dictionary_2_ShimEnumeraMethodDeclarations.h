#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2626;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2616;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13904_gshared (ShimEnumerator_t2626 * __this, Dictionary_2_t2616 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m13904(__this, ___host, method) (( void (*) (ShimEnumerator_t2626 *, Dictionary_2_t2616 *, MethodInfo*))ShimEnumerator__ctor_m13904_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13905_gshared (ShimEnumerator_t2626 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m13905(__this, method) (( bool (*) (ShimEnumerator_t2626 *, MethodInfo*))ShimEnumerator_MoveNext_m13905_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t900  ShimEnumerator_get_Entry_m13906_gshared (ShimEnumerator_t2626 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m13906(__this, method) (( DictionaryEntry_t900  (*) (ShimEnumerator_t2626 *, MethodInfo*))ShimEnumerator_get_Entry_m13906_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13907_gshared (ShimEnumerator_t2626 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m13907(__this, method) (( Object_t * (*) (ShimEnumerator_t2626 *, MethodInfo*))ShimEnumerator_get_Key_m13907_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13908_gshared (ShimEnumerator_t2626 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m13908(__this, method) (( Object_t * (*) (ShimEnumerator_t2626 *, MethodInfo*))ShimEnumerator_get_Value_m13908_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13909_gshared (ShimEnumerator_t2626 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m13909(__this, method) (( Object_t * (*) (ShimEnumerator_t2626 *, MethodInfo*))ShimEnumerator_get_Current_m13909_gshared)(__this, method)

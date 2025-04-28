#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2690;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2680;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14139_gshared (ShimEnumerator_t2690 * __this, Dictionary_2_t2680 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m14139(__this, ___host, method) (( void (*) (ShimEnumerator_t2690 *, Dictionary_2_t2680 *, MethodInfo*))ShimEnumerator__ctor_m14139_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14140_gshared (ShimEnumerator_t2690 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m14140(__this, method) (( bool (*) (ShimEnumerator_t2690 *, MethodInfo*))ShimEnumerator_MoveNext_m14140_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t967  ShimEnumerator_get_Entry_m14141_gshared (ShimEnumerator_t2690 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m14141(__this, method) (( DictionaryEntry_t967  (*) (ShimEnumerator_t2690 *, MethodInfo*))ShimEnumerator_get_Entry_m14141_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14142_gshared (ShimEnumerator_t2690 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m14142(__this, method) (( Object_t * (*) (ShimEnumerator_t2690 *, MethodInfo*))ShimEnumerator_get_Key_m14142_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14143_gshared (ShimEnumerator_t2690 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m14143(__this, method) (( Object_t * (*) (ShimEnumerator_t2690 *, MethodInfo*))ShimEnumerator_get_Value_m14143_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14144_gshared (ShimEnumerator_t2690 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m14144(__this, method) (( Object_t * (*) (ShimEnumerator_t2690 *, MethodInfo*))ShimEnumerator_get_Current_m14144_gshared)(__this, method)

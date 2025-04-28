#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t3160;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3152;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18777_gshared (ShimEnumerator_t3160 * __this, Dictionary_2_t3152 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m18777(__this, ___host, method) (( void (*) (ShimEnumerator_t3160 *, Dictionary_2_t3152 *, MethodInfo*))ShimEnumerator__ctor_m18777_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18778_gshared (ShimEnumerator_t3160 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m18778(__this, method) (( bool (*) (ShimEnumerator_t3160 *, MethodInfo*))ShimEnumerator_MoveNext_m18778_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t967  ShimEnumerator_get_Entry_m18779_gshared (ShimEnumerator_t3160 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m18779(__this, method) (( DictionaryEntry_t967  (*) (ShimEnumerator_t3160 *, MethodInfo*))ShimEnumerator_get_Entry_m18779_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18780_gshared (ShimEnumerator_t3160 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m18780(__this, method) (( Object_t * (*) (ShimEnumerator_t3160 *, MethodInfo*))ShimEnumerator_get_Key_m18780_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18781_gshared (ShimEnumerator_t3160 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m18781(__this, method) (( Object_t * (*) (ShimEnumerator_t3160 *, MethodInfo*))ShimEnumerator_get_Value_m18781_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18782_gshared (ShimEnumerator_t3160 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m18782(__this, method) (( Object_t * (*) (ShimEnumerator_t3160 *, MethodInfo*))ShimEnumerator_get_Current_m18782_gshared)(__this, method)

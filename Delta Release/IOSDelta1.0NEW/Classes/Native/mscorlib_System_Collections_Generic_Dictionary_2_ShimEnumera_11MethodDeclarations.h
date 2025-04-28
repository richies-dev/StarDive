#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t3097;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3089;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18547_gshared (ShimEnumerator_t3097 * __this, Dictionary_2_t3089 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m18547(__this, ___host, method) (( void (*) (ShimEnumerator_t3097 *, Dictionary_2_t3089 *, MethodInfo*))ShimEnumerator__ctor_m18547_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18548_gshared (ShimEnumerator_t3097 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m18548(__this, method) (( bool (*) (ShimEnumerator_t3097 *, MethodInfo*))ShimEnumerator_MoveNext_m18548_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t900  ShimEnumerator_get_Entry_m18549_gshared (ShimEnumerator_t3097 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m18549(__this, method) (( DictionaryEntry_t900  (*) (ShimEnumerator_t3097 *, MethodInfo*))ShimEnumerator_get_Entry_m18549_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18550_gshared (ShimEnumerator_t3097 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m18550(__this, method) (( Object_t * (*) (ShimEnumerator_t3097 *, MethodInfo*))ShimEnumerator_get_Key_m18550_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18551_gshared (ShimEnumerator_t3097 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m18551(__this, method) (( Object_t * (*) (ShimEnumerator_t3097 *, MethodInfo*))ShimEnumerator_get_Value_m18551_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18552_gshared (ShimEnumerator_t3097 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m18552(__this, method) (( Object_t * (*) (ShimEnumerator_t3097 *, MethodInfo*))ShimEnumerator_get_Current_m18552_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t3157;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3152;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18753_gshared (Enumerator_t3157 * __this, Dictionary_2_t3152 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m18753(__this, ___dictionary, method) (( void (*) (Enumerator_t3157 *, Dictionary_2_t3152 *, MethodInfo*))Enumerator__ctor_m18753_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18754_gshared (Enumerator_t3157 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18754(__this, method) (( Object_t * (*) (Enumerator_t3157 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18754_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t967  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18755_gshared (Enumerator_t3157 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18755(__this, method) (( DictionaryEntry_t967  (*) (Enumerator_t3157 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18755_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18756_gshared (Enumerator_t3157 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18756(__this, method) (( Object_t * (*) (Enumerator_t3157 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18756_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18757_gshared (Enumerator_t3157 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18757(__this, method) (( Object_t * (*) (Enumerator_t3157 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18757_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18758_gshared (Enumerator_t3157 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m18758(__this, method) (( bool (*) (Enumerator_t3157 *, MethodInfo*))Enumerator_MoveNext_m18758_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t3153  Enumerator_get_Current_m18759_gshared (Enumerator_t3157 * __this, MethodInfo* method);
#define Enumerator_get_Current_m18759(__this, method) (( KeyValuePair_2_t3153  (*) (Enumerator_t3157 *, MethodInfo*))Enumerator_get_Current_m18759_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18760_gshared (Enumerator_t3157 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m18760(__this, method) (( Object_t * (*) (Enumerator_t3157 *, MethodInfo*))Enumerator_get_CurrentKey_m18760_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m18761_gshared (Enumerator_t3157 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m18761(__this, method) (( uint8_t (*) (Enumerator_t3157 *, MethodInfo*))Enumerator_get_CurrentValue_m18761_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m18762_gshared (Enumerator_t3157 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m18762(__this, method) (( void (*) (Enumerator_t3157 *, MethodInfo*))Enumerator_VerifyState_m18762_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18763_gshared (Enumerator_t3157 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m18763(__this, method) (( void (*) (Enumerator_t3157 *, MethodInfo*))Enumerator_VerifyCurrent_m18763_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m18764_gshared (Enumerator_t3157 * __this, MethodInfo* method);
#define Enumerator_Dispose_m18764(__this, method) (( void (*) (Enumerator_t3157 *, MethodInfo*))Enumerator_Dispose_m18764_gshared)(__this, method)

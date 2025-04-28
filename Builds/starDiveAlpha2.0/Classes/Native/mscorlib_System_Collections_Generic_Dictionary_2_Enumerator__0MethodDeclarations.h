#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t2686;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2680;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14110_gshared (Enumerator_t2686 * __this, Dictionary_2_t2680 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m14110(__this, ___dictionary, method) (( void (*) (Enumerator_t2686 *, Dictionary_2_t2680 *, MethodInfo*))Enumerator__ctor_m14110_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14111_gshared (Enumerator_t2686 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14111(__this, method) (( Object_t * (*) (Enumerator_t2686 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14111_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t967  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14112_gshared (Enumerator_t2686 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14112(__this, method) (( DictionaryEntry_t967  (*) (Enumerator_t2686 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14112_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14113_gshared (Enumerator_t2686 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14113(__this, method) (( Object_t * (*) (Enumerator_t2686 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14113_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14114_gshared (Enumerator_t2686 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14114(__this, method) (( Object_t * (*) (Enumerator_t2686 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14115_gshared (Enumerator_t2686 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14115(__this, method) (( bool (*) (Enumerator_t2686 *, MethodInfo*))Enumerator_MoveNext_m14115_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2681  Enumerator_get_Current_m14116_gshared (Enumerator_t2686 * __this, MethodInfo* method);
#define Enumerator_get_Current_m14116(__this, method) (( KeyValuePair_2_t2681  (*) (Enumerator_t2686 *, MethodInfo*))Enumerator_get_Current_m14116_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m14117_gshared (Enumerator_t2686 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m14117(__this, method) (( int32_t (*) (Enumerator_t2686 *, MethodInfo*))Enumerator_get_CurrentKey_m14117_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14118_gshared (Enumerator_t2686 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m14118(__this, method) (( Object_t * (*) (Enumerator_t2686 *, MethodInfo*))Enumerator_get_CurrentValue_m14118_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14119_gshared (Enumerator_t2686 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m14119(__this, method) (( void (*) (Enumerator_t2686 *, MethodInfo*))Enumerator_VerifyState_m14119_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14120_gshared (Enumerator_t2686 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m14120(__this, method) (( void (*) (Enumerator_t2686 *, MethodInfo*))Enumerator_VerifyCurrent_m14120_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14121_gshared (Enumerator_t2686 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14121(__this, method) (( void (*) (Enumerator_t2686 *, MethodInfo*))Enumerator_Dispose_m14121_gshared)(__this, method)

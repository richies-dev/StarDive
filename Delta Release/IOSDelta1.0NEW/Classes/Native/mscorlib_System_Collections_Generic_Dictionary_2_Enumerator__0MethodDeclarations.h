#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t2622;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2616;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13875_gshared (Enumerator_t2622 * __this, Dictionary_2_t2616 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m13875(__this, ___dictionary, method) (( void (*) (Enumerator_t2622 *, Dictionary_2_t2616 *, MethodInfo*))Enumerator__ctor_m13875_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13876_gshared (Enumerator_t2622 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13876(__this, method) (( Object_t * (*) (Enumerator_t2622 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13876_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t900  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13877_gshared (Enumerator_t2622 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13877(__this, method) (( DictionaryEntry_t900  (*) (Enumerator_t2622 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13877_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13878_gshared (Enumerator_t2622 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13878(__this, method) (( Object_t * (*) (Enumerator_t2622 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13878_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13879_gshared (Enumerator_t2622 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13879(__this, method) (( Object_t * (*) (Enumerator_t2622 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13879_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13880_gshared (Enumerator_t2622 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m13880(__this, method) (( bool (*) (Enumerator_t2622 *, MethodInfo*))Enumerator_MoveNext_m13880_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2617  Enumerator_get_Current_m13881_gshared (Enumerator_t2622 * __this, MethodInfo* method);
#define Enumerator_get_Current_m13881(__this, method) (( KeyValuePair_2_t2617  (*) (Enumerator_t2622 *, MethodInfo*))Enumerator_get_Current_m13881_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m13882_gshared (Enumerator_t2622 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m13882(__this, method) (( int32_t (*) (Enumerator_t2622 *, MethodInfo*))Enumerator_get_CurrentKey_m13882_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13883_gshared (Enumerator_t2622 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m13883(__this, method) (( Object_t * (*) (Enumerator_t2622 *, MethodInfo*))Enumerator_get_CurrentValue_m13883_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m13884_gshared (Enumerator_t2622 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m13884(__this, method) (( void (*) (Enumerator_t2622 *, MethodInfo*))Enumerator_VerifyState_m13884_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13885_gshared (Enumerator_t2622 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m13885(__this, method) (( void (*) (Enumerator_t2622 *, MethodInfo*))Enumerator_VerifyCurrent_m13885_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13886_gshared (Enumerator_t2622 * __this, MethodInfo* method);
#define Enumerator_Dispose_m13886(__this, method) (( void (*) (Enumerator_t2622 *, MethodInfo*))Enumerator_Dispose_m13886_gshared)(__this, method)

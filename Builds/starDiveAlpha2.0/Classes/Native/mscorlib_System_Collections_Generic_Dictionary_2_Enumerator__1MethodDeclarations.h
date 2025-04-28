#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t2728;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2720;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14495_gshared (Enumerator_t2728 * __this, Dictionary_2_t2720 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m14495(__this, ___dictionary, method) (( void (*) (Enumerator_t2728 *, Dictionary_2_t2720 *, MethodInfo*))Enumerator__ctor_m14495_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14496_gshared (Enumerator_t2728 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14496(__this, method) (( Object_t * (*) (Enumerator_t2728 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14496_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t967  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14497_gshared (Enumerator_t2728 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14497(__this, method) (( DictionaryEntry_t967  (*) (Enumerator_t2728 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14497_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14498_gshared (Enumerator_t2728 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14498(__this, method) (( Object_t * (*) (Enumerator_t2728 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14498_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14499_gshared (Enumerator_t2728 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14499(__this, method) (( Object_t * (*) (Enumerator_t2728 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14500_gshared (Enumerator_t2728 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14500(__this, method) (( bool (*) (Enumerator_t2728 *, MethodInfo*))Enumerator_MoveNext_m14500_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2724  Enumerator_get_Current_m14501_gshared (Enumerator_t2728 * __this, MethodInfo* method);
#define Enumerator_get_Current_m14501(__this, method) (( KeyValuePair_2_t2724  (*) (Enumerator_t2728 *, MethodInfo*))Enumerator_get_Current_m14501_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14502_gshared (Enumerator_t2728 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m14502(__this, method) (( Object_t * (*) (Enumerator_t2728 *, MethodInfo*))Enumerator_get_CurrentKey_m14502_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14503_gshared (Enumerator_t2728 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m14503(__this, method) (( int32_t (*) (Enumerator_t2728 *, MethodInfo*))Enumerator_get_CurrentValue_m14503_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m14504_gshared (Enumerator_t2728 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m14504(__this, method) (( void (*) (Enumerator_t2728 *, MethodInfo*))Enumerator_VerifyState_m14504_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14505_gshared (Enumerator_t2728 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m14505(__this, method) (( void (*) (Enumerator_t2728 *, MethodInfo*))Enumerator_VerifyCurrent_m14505_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14506_gshared (Enumerator_t2728 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14506(__this, method) (( void (*) (Enumerator_t2728 *, MethodInfo*))Enumerator_Dispose_m14506_gshared)(__this, method)

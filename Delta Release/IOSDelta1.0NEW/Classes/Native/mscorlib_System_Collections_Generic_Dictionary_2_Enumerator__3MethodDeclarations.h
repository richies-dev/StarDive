#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2699;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2694;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14656_gshared (Enumerator_t2699 * __this, Dictionary_2_t2694 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m14656(__this, ___dictionary, method) (( void (*) (Enumerator_t2699 *, Dictionary_2_t2694 *, MethodInfo*))Enumerator__ctor_m14656_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14657_gshared (Enumerator_t2699 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14657(__this, method) (( Object_t * (*) (Enumerator_t2699 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14657_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t900  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14658_gshared (Enumerator_t2699 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14658(__this, method) (( DictionaryEntry_t900  (*) (Enumerator_t2699 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14658_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14659_gshared (Enumerator_t2699 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14659(__this, method) (( Object_t * (*) (Enumerator_t2699 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14659_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14660_gshared (Enumerator_t2699 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14660(__this, method) (( Object_t * (*) (Enumerator_t2699 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14660_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14661_gshared (Enumerator_t2699 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14661(__this, method) (( bool (*) (Enumerator_t2699 *, MethodInfo*))Enumerator_MoveNext_m14661_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2695  Enumerator_get_Current_m14662_gshared (Enumerator_t2699 * __this, MethodInfo* method);
#define Enumerator_get_Current_m14662(__this, method) (( KeyValuePair_2_t2695  (*) (Enumerator_t2699 *, MethodInfo*))Enumerator_get_Current_m14662_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14663_gshared (Enumerator_t2699 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m14663(__this, method) (( Object_t * (*) (Enumerator_t2699 *, MethodInfo*))Enumerator_get_CurrentKey_m14663_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14664_gshared (Enumerator_t2699 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m14664(__this, method) (( Object_t * (*) (Enumerator_t2699 *, MethodInfo*))Enumerator_get_CurrentValue_m14664_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14665_gshared (Enumerator_t2699 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m14665(__this, method) (( void (*) (Enumerator_t2699 *, MethodInfo*))Enumerator_VerifyState_m14665_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14666_gshared (Enumerator_t2699 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m14666(__this, method) (( void (*) (Enumerator_t2699 *, MethodInfo*))Enumerator_VerifyCurrent_m14666_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14667_gshared (Enumerator_t2699 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14667(__this, method) (( void (*) (Enumerator_t2699 *, MethodInfo*))Enumerator_Dispose_m14667_gshared)(__this, method)

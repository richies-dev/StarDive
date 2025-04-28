#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2763;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2758;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14891_gshared (Enumerator_t2763 * __this, Dictionary_2_t2758 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m14891(__this, ___dictionary, method) (( void (*) (Enumerator_t2763 *, Dictionary_2_t2758 *, MethodInfo*))Enumerator__ctor_m14891_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14892_gshared (Enumerator_t2763 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14892(__this, method) (( Object_t * (*) (Enumerator_t2763 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14892_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t967  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14893_gshared (Enumerator_t2763 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14893(__this, method) (( DictionaryEntry_t967  (*) (Enumerator_t2763 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14893_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14894_gshared (Enumerator_t2763 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14894(__this, method) (( Object_t * (*) (Enumerator_t2763 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14894_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14895_gshared (Enumerator_t2763 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14895(__this, method) (( Object_t * (*) (Enumerator_t2763 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14895_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14896_gshared (Enumerator_t2763 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14896(__this, method) (( bool (*) (Enumerator_t2763 *, MethodInfo*))Enumerator_MoveNext_m14896_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2759  Enumerator_get_Current_m14897_gshared (Enumerator_t2763 * __this, MethodInfo* method);
#define Enumerator_get_Current_m14897(__this, method) (( KeyValuePair_2_t2759  (*) (Enumerator_t2763 *, MethodInfo*))Enumerator_get_Current_m14897_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14898_gshared (Enumerator_t2763 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m14898(__this, method) (( Object_t * (*) (Enumerator_t2763 *, MethodInfo*))Enumerator_get_CurrentKey_m14898_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14899_gshared (Enumerator_t2763 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m14899(__this, method) (( Object_t * (*) (Enumerator_t2763 *, MethodInfo*))Enumerator_get_CurrentValue_m14899_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14900_gshared (Enumerator_t2763 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m14900(__this, method) (( void (*) (Enumerator_t2763 *, MethodInfo*))Enumerator_VerifyState_m14900_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14901_gshared (Enumerator_t2763 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m14901(__this, method) (( void (*) (Enumerator_t2763 *, MethodInfo*))Enumerator_VerifyCurrent_m14901_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14902_gshared (Enumerator_t2763 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14902(__this, method) (( void (*) (Enumerator_t2763 *, MethodInfo*))Enumerator_Dispose_m14902_gshared)(__this, method)

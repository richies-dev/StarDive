﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t2664;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2656;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14260_gshared (Enumerator_t2664 * __this, Dictionary_2_t2656 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m14260(__this, ___dictionary, method) (( void (*) (Enumerator_t2664 *, Dictionary_2_t2656 *, MethodInfo*))Enumerator__ctor_m14260_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14261_gshared (Enumerator_t2664 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14261(__this, method) (( Object_t * (*) (Enumerator_t2664 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14261_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t900  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14262_gshared (Enumerator_t2664 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14262(__this, method) (( DictionaryEntry_t900  (*) (Enumerator_t2664 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14262_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14263_gshared (Enumerator_t2664 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14263(__this, method) (( Object_t * (*) (Enumerator_t2664 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14263_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14264_gshared (Enumerator_t2664 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14264(__this, method) (( Object_t * (*) (Enumerator_t2664 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14264_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14265_gshared (Enumerator_t2664 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14265(__this, method) (( bool (*) (Enumerator_t2664 *, MethodInfo*))Enumerator_MoveNext_m14265_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2660  Enumerator_get_Current_m14266_gshared (Enumerator_t2664 * __this, MethodInfo* method);
#define Enumerator_get_Current_m14266(__this, method) (( KeyValuePair_2_t2660  (*) (Enumerator_t2664 *, MethodInfo*))Enumerator_get_Current_m14266_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14267_gshared (Enumerator_t2664 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m14267(__this, method) (( Object_t * (*) (Enumerator_t2664 *, MethodInfo*))Enumerator_get_CurrentKey_m14267_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14268_gshared (Enumerator_t2664 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m14268(__this, method) (( int32_t (*) (Enumerator_t2664 *, MethodInfo*))Enumerator_get_CurrentValue_m14268_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m14269_gshared (Enumerator_t2664 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m14269(__this, method) (( void (*) (Enumerator_t2664 *, MethodInfo*))Enumerator_VerifyState_m14269_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14270_gshared (Enumerator_t2664 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m14270(__this, method) (( void (*) (Enumerator_t2664 *, MethodInfo*))Enumerator_VerifyCurrent_m14270_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14271_gshared (Enumerator_t2664 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14271(__this, method) (( void (*) (Enumerator_t2664 *, MethodInfo*))Enumerator_Dispose_m14271_gshared)(__this, method)

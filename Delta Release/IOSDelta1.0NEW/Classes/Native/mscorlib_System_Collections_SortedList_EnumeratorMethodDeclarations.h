#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.SortedList/Enumerator
struct Enumerator_t1417;
// System.Object
struct Object_t;
// System.Collections.SortedList
struct SortedList_t1081;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.SortedList/EnumeratorMode
#include "mscorlib_System_Collections_SortedList_EnumeratorMode.h"

// System.Void System.Collections.SortedList/Enumerator::.ctor(System.Collections.SortedList,System.Collections.SortedList/EnumeratorMode)
extern "C" void Enumerator__ctor_m7675 (Enumerator_t1417 * __this, SortedList_t1081 * ___host, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/Enumerator::.cctor()
extern "C" void Enumerator__cctor_m7676 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/Enumerator::Reset()
extern "C" void Enumerator_Reset_m7677 (Enumerator_t1417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m7678 (Enumerator_t1417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.SortedList/Enumerator::get_Entry()
extern "C" DictionaryEntry_t900  Enumerator_get_Entry_m7679 (Enumerator_t1417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/Enumerator::get_Key()
extern "C" Object_t * Enumerator_get_Key_m7680 (Enumerator_t1417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/Enumerator::get_Value()
extern "C" Object_t * Enumerator_get_Value_m7681 (Enumerator_t1417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m7682 (Enumerator_t1417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

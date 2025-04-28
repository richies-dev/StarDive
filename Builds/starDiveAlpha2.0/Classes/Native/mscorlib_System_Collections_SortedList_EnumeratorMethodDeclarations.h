#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.SortedList/Enumerator
struct Enumerator_t1484;
// System.Object
struct Object_t;
// System.Collections.SortedList
struct SortedList_t1148;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.SortedList/EnumeratorMode
#include "mscorlib_System_Collections_SortedList_EnumeratorMode.h"

// System.Void System.Collections.SortedList/Enumerator::.ctor(System.Collections.SortedList,System.Collections.SortedList/EnumeratorMode)
extern "C" void Enumerator__ctor_m7911 (Enumerator_t1484 * __this, SortedList_t1148 * ___host, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/Enumerator::.cctor()
extern "C" void Enumerator__cctor_m7912 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/Enumerator::Reset()
extern "C" void Enumerator_Reset_m7913 (Enumerator_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m7914 (Enumerator_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.SortedList/Enumerator::get_Entry()
extern "C" DictionaryEntry_t967  Enumerator_get_Entry_m7915 (Enumerator_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/Enumerator::get_Key()
extern "C" Object_t * Enumerator_get_Key_m7916 (Enumerator_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/Enumerator::get_Value()
extern "C" Object_t * Enumerator_get_Value_m7917 (Enumerator_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m7918 (Enumerator_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

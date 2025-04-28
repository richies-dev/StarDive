#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t962;
// System.Collections.IDictionary
struct IDictionary_t963;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t964;

// System.Void System.Collections.Specialized.HybridDictionary::.ctor()
extern "C" void HybridDictionary__ctor_m4121 (HybridDictionary_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::.ctor(System.Int32,System.Boolean)
extern "C" void HybridDictionary__ctor_m4122 (HybridDictionary_t962 * __this, int32_t ___initialSize, bool ___caseInsensitive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.HybridDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m4123 (HybridDictionary_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Collections.Specialized.HybridDictionary::get_inner()
extern "C" Object_t * HybridDictionary_get_inner_m4124 (HybridDictionary_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.HybridDictionary::get_Count()
extern "C" int32_t HybridDictionary_get_Count_m4125 (HybridDictionary_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.HybridDictionary::get_IsSynchronized()
extern "C" bool HybridDictionary_get_IsSynchronized_m4126 (HybridDictionary_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.HybridDictionary::get_Item(System.Object)
extern "C" Object_t * HybridDictionary_get_Item_m4127 (HybridDictionary_t962 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::set_Item(System.Object,System.Object)
extern "C" void HybridDictionary_set_Item_m4128 (HybridDictionary_t962 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.HybridDictionary::get_SyncRoot()
extern "C" Object_t * HybridDictionary_get_SyncRoot_m4129 (HybridDictionary_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::Add(System.Object,System.Object)
extern "C" void HybridDictionary_Add_m4130 (HybridDictionary_t962 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::CopyTo(System.Array,System.Int32)
extern "C" void HybridDictionary_CopyTo_m4131 (HybridDictionary_t962 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.HybridDictionary::GetEnumerator()
extern "C" Object_t * HybridDictionary_GetEnumerator_m4132 (HybridDictionary_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::Remove(System.Object)
extern "C" void HybridDictionary_Remove_m4133 (HybridDictionary_t962 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::Switch()
extern "C" void HybridDictionary_Switch_m4134 (HybridDictionary_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

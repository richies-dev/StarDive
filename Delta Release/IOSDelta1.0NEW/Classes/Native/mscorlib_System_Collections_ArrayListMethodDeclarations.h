#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList
struct ArrayList_t906;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t846;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.IComparer
struct IComparer_t901;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Collections.ArrayList::.ctor()
extern "C" void ArrayList__ctor_m4776 (ArrayList_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
extern "C" void ArrayList__ctor_m4824 (ArrayList_t906 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
extern "C" void ArrayList__ctor_m4940 (ArrayList_t906 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Object[],System.Int32,System.Int32)
extern "C" void ArrayList__ctor_m7563 (ArrayList_t906 * __this, ObjectU5BU5D_t148* ___array, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.cctor()
extern "C" void ArrayList__cctor_m7564 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
extern "C" Object_t * ArrayList_get_Item_m4774 (ArrayList_t906 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
extern "C" void ArrayList_set_Item_m4989 (ArrayList_t906 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Count()
extern "C" int32_t ArrayList_get_Count_m4772 (ArrayList_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Capacity()
extern "C" int32_t ArrayList_get_Capacity_m7565 (ArrayList_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Capacity(System.Int32)
extern "C" void ArrayList_set_Capacity_m7566 (ArrayList_t906 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsFixedSize()
extern "C" bool ArrayList_get_IsFixedSize_m6003 (ArrayList_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsReadOnly()
extern "C" bool ArrayList_get_IsReadOnly_m6004 (ArrayList_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsSynchronized()
extern "C" bool ArrayList_get_IsSynchronized_m4934 (ArrayList_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_SyncRoot()
extern "C" Object_t * ArrayList_get_SyncRoot_m4935 (ArrayList_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
extern "C" void ArrayList_EnsureCapacity_m7567 (ArrayList_t906 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Shift(System.Int32,System.Int32)
extern "C" void ArrayList_Shift_m7568 (ArrayList_t906 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::Add(System.Object)
extern "C" int32_t ArrayList_Add_m4787 (ArrayList_t906 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Clear()
extern "C" void ArrayList_Clear_m4937 (ArrayList_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::Contains(System.Object)
extern "C" bool ArrayList_Contains_m6005 (ArrayList_t906 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object)
extern "C" int32_t ArrayList_IndexOf_m6006 (ArrayList_t906 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32)
extern "C" int32_t ArrayList_IndexOf_m7569 (ArrayList_t906 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t ArrayList_IndexOf_m7570 (ArrayList_t906 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object)
extern "C" void ArrayList_Insert_m4915 (ArrayList_t906 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void ArrayList_InsertRange_m7571 (ArrayList_t906 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Remove(System.Object)
extern "C" void ArrayList_Remove_m5978 (ArrayList_t906 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::RemoveAt(System.Int32)
extern "C" void ArrayList_RemoveAt_m4996 (ArrayList_t906 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array)
extern "C" void ArrayList_CopyTo_m4985 (ArrayList_t906 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32)
extern "C" void ArrayList_CopyTo_m4936 (ArrayList_t906 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void ArrayList_CopyTo_m7572 (ArrayList_t906 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
extern "C" Object_t * ArrayList_GetEnumerator_m4777 (ArrayList_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection)
extern "C" void ArrayList_AddRange_m4905 (ArrayList_t906 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort()
extern "C" void ArrayList_Sort_m4995 (ArrayList_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer)
extern "C" void ArrayList_Sort_m7573 (ArrayList_t906 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList::ToArray()
extern "C" ObjectU5BU5D_t148* ArrayList_ToArray_m7574 (ArrayList_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList::ToArray(System.Type)
extern "C" Array_t * ArrayList_ToArray_m4916 (ArrayList_t906 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::Clone()
extern "C" Object_t * ArrayList_Clone_m7575 (ArrayList_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::ThrowNewArgumentOutOfRangeException(System.String,System.Object,System.String)
extern "C" void ArrayList_ThrowNewArgumentOutOfRangeException_m7576 (Object_t * __this /* static, unused */, String_t* ___name, Object_t * ___actual, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::Synchronized(System.Collections.ArrayList)
extern "C" ArrayList_t906 * ArrayList_Synchronized_m7577 (Object_t * __this /* static, unused */, ArrayList_t906 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::ReadOnly(System.Collections.ArrayList)
extern "C" ArrayList_t906 * ArrayList_ReadOnly_m5955 (Object_t * __this /* static, unused */, ArrayList_t906 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;

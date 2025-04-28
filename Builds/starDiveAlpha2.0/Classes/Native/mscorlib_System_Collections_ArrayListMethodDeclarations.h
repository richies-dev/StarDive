#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList
struct ArrayList_t973;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t913;
// System.Object[]
struct ObjectU5BU5D_t219;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.IComparer
struct IComparer_t968;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Collections.ArrayList::.ctor()
extern "C" void ArrayList__ctor_m5013 (ArrayList_t973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
extern "C" void ArrayList__ctor_m5061 (ArrayList_t973 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
extern "C" void ArrayList__ctor_m5177 (ArrayList_t973 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Object[],System.Int32,System.Int32)
extern "C" void ArrayList__ctor_m7799 (ArrayList_t973 * __this, ObjectU5BU5D_t219* ___array, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.cctor()
extern "C" void ArrayList__cctor_m7800 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
extern "C" Object_t * ArrayList_get_Item_m5011 (ArrayList_t973 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
extern "C" void ArrayList_set_Item_m5226 (ArrayList_t973 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Count()
extern "C" int32_t ArrayList_get_Count_m5009 (ArrayList_t973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Capacity()
extern "C" int32_t ArrayList_get_Capacity_m7801 (ArrayList_t973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Capacity(System.Int32)
extern "C" void ArrayList_set_Capacity_m7802 (ArrayList_t973 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsFixedSize()
extern "C" bool ArrayList_get_IsFixedSize_m6239 (ArrayList_t973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsReadOnly()
extern "C" bool ArrayList_get_IsReadOnly_m6240 (ArrayList_t973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsSynchronized()
extern "C" bool ArrayList_get_IsSynchronized_m5171 (ArrayList_t973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_SyncRoot()
extern "C" Object_t * ArrayList_get_SyncRoot_m5172 (ArrayList_t973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
extern "C" void ArrayList_EnsureCapacity_m7803 (ArrayList_t973 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Shift(System.Int32,System.Int32)
extern "C" void ArrayList_Shift_m7804 (ArrayList_t973 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::Add(System.Object)
extern "C" int32_t ArrayList_Add_m5024 (ArrayList_t973 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Clear()
extern "C" void ArrayList_Clear_m5174 (ArrayList_t973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::Contains(System.Object)
extern "C" bool ArrayList_Contains_m6241 (ArrayList_t973 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object)
extern "C" int32_t ArrayList_IndexOf_m6242 (ArrayList_t973 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32)
extern "C" int32_t ArrayList_IndexOf_m7805 (ArrayList_t973 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t ArrayList_IndexOf_m7806 (ArrayList_t973 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object)
extern "C" void ArrayList_Insert_m5152 (ArrayList_t973 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void ArrayList_InsertRange_m7807 (ArrayList_t973 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Remove(System.Object)
extern "C" void ArrayList_Remove_m6214 (ArrayList_t973 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::RemoveAt(System.Int32)
extern "C" void ArrayList_RemoveAt_m5233 (ArrayList_t973 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array)
extern "C" void ArrayList_CopyTo_m5222 (ArrayList_t973 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32)
extern "C" void ArrayList_CopyTo_m5173 (ArrayList_t973 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void ArrayList_CopyTo_m7808 (ArrayList_t973 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
extern "C" Object_t * ArrayList_GetEnumerator_m5014 (ArrayList_t973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection)
extern "C" void ArrayList_AddRange_m5142 (ArrayList_t973 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort()
extern "C" void ArrayList_Sort_m5232 (ArrayList_t973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer)
extern "C" void ArrayList_Sort_m7809 (ArrayList_t973 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList::ToArray()
extern "C" ObjectU5BU5D_t219* ArrayList_ToArray_m7810 (ArrayList_t973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList::ToArray(System.Type)
extern "C" Array_t * ArrayList_ToArray_m5153 (ArrayList_t973 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::Clone()
extern "C" Object_t * ArrayList_Clone_m7811 (ArrayList_t973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::ThrowNewArgumentOutOfRangeException(System.String,System.Object,System.String)
extern "C" void ArrayList_ThrowNewArgumentOutOfRangeException_m7812 (Object_t * __this /* static, unused */, String_t* ___name, Object_t * ___actual, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::Synchronized(System.Collections.ArrayList)
extern "C" ArrayList_t973 * ArrayList_Synchronized_m7813 (Object_t * __this /* static, unused */, ArrayList_t973 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::ReadOnly(System.Collections.ArrayList)
extern "C" ArrayList_t973 * ArrayList_ReadOnly_m6191 (Object_t * __this /* static, unused */, ArrayList_t973 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;

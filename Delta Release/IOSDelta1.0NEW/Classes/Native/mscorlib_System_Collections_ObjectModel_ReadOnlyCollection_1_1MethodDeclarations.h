#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>
struct ReadOnlyCollection_1_t2501;
// SavedData
struct SavedData_t116;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<SavedData>
struct IList_1_t2500;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// SavedData[]
struct SavedDataU5BU5D_t2498;
// System.Collections.Generic.IEnumerator`1<SavedData>
struct IEnumerator_1_t3250;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m12504(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t2501 *, Object_t*, MethodInfo*))ReadOnlyCollection_1__ctor_m12152_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12505(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t2501 *, SavedData_t116 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12153_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m12506(__this, method) (( void (*) (ReadOnlyCollection_1_t2501 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m12154_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m12507(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t2501 *, int32_t, SavedData_t116 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m12155_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m12508(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t2501 *, SavedData_t116 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m12156_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m12509(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2501 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m12157_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m12510(__this, ___index, method) (( SavedData_t116 * (*) (ReadOnlyCollection_1_t2501 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m12158_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m12511(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2501 *, int32_t, SavedData_t116 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m12159_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12512(__this, method) (( bool (*) (ReadOnlyCollection_1_t2501 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12160_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m12513(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2501 *, Array_t *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m12161_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m12514(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2501 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m12162_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m12515(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2501 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m12163_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m12516(__this, method) (( void (*) (ReadOnlyCollection_1_t2501 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m12164_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m12517(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2501 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m12165_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12518(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2501 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12166_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m12519(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2501 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m12167_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m12520(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t2501 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m12168_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12521(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2501 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12169_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12522(__this, method) (( bool (*) (ReadOnlyCollection_1_t2501 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12170_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12523(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2501 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12171_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m12524(__this, method) (( bool (*) (ReadOnlyCollection_1_t2501 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m12172_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m12525(__this, method) (( bool (*) (ReadOnlyCollection_1_t2501 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m12173_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m12526(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2501 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m12174_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m12527(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2501 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m12175_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::Contains(T)
#define ReadOnlyCollection_1_Contains_m12528(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2501 *, SavedData_t116 *, MethodInfo*))ReadOnlyCollection_1_Contains_m12176_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m12529(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2501 *, SavedDataU5BU5D_t2498*, int32_t, MethodInfo*))ReadOnlyCollection_1_CopyTo_m12177_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m12530(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t2501 *, MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m12178_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m12531(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2501 *, SavedData_t116 *, MethodInfo*))ReadOnlyCollection_1_IndexOf_m12179_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::get_Count()
#define ReadOnlyCollection_1_get_Count_m12532(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t2501 *, MethodInfo*))ReadOnlyCollection_1_get_Count_m12180_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m12533(__this, ___index, method) (( SavedData_t116 * (*) (ReadOnlyCollection_1_t2501 *, int32_t, MethodInfo*))ReadOnlyCollection_1_get_Item_m12181_gshared)(__this, ___index, method)

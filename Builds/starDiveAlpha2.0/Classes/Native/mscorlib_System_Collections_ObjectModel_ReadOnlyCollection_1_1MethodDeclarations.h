#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>
struct ReadOnlyCollection_1_t2568;
// SavedData
struct SavedData_t182;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<SavedData>
struct IList_1_t2567;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// SavedData[]
struct SavedDataU5BU5D_t2565;
// System.Collections.Generic.IEnumerator`1<SavedData>
struct IEnumerator_1_t3313;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m12744(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t2568 *, Object_t*, MethodInfo*))ReadOnlyCollection_1__ctor_m12422_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12745(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t2568 *, SavedData_t182 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12423_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m12746(__this, method) (( void (*) (ReadOnlyCollection_1_t2568 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m12424_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m12747(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t2568 *, int32_t, SavedData_t182 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m12425_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m12748(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t2568 *, SavedData_t182 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m12426_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m12749(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2568 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m12427_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m12750(__this, ___index, method) (( SavedData_t182 * (*) (ReadOnlyCollection_1_t2568 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m12428_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m12751(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2568 *, int32_t, SavedData_t182 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m12429_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12752(__this, method) (( bool (*) (ReadOnlyCollection_1_t2568 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12430_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m12753(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2568 *, Array_t *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m12431_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m12754(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2568 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m12432_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m12755(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2568 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m12433_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m12756(__this, method) (( void (*) (ReadOnlyCollection_1_t2568 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m12434_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m12757(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2568 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m12435_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12758(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2568 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12436_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m12759(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2568 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m12437_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m12760(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t2568 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m12438_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12761(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2568 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12439_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12762(__this, method) (( bool (*) (ReadOnlyCollection_1_t2568 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12440_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12763(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2568 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12441_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m12764(__this, method) (( bool (*) (ReadOnlyCollection_1_t2568 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m12442_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m12765(__this, method) (( bool (*) (ReadOnlyCollection_1_t2568 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m12443_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m12766(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2568 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m12444_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m12767(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2568 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m12445_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::Contains(T)
#define ReadOnlyCollection_1_Contains_m12768(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2568 *, SavedData_t182 *, MethodInfo*))ReadOnlyCollection_1_Contains_m12446_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m12769(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2568 *, SavedDataU5BU5D_t2565*, int32_t, MethodInfo*))ReadOnlyCollection_1_CopyTo_m12447_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m12770(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t2568 *, MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m12448_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m12771(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2568 *, SavedData_t182 *, MethodInfo*))ReadOnlyCollection_1_IndexOf_m12449_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::get_Count()
#define ReadOnlyCollection_1_get_Count_m12772(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t2568 *, MethodInfo*))ReadOnlyCollection_1_get_Count_m12450_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m12773(__this, ___index, method) (( SavedData_t182 * (*) (ReadOnlyCollection_1_t2568 *, int32_t, MethodInfo*))ReadOnlyCollection_1_get_Item_m12451_gshared)(__this, ___index, method)

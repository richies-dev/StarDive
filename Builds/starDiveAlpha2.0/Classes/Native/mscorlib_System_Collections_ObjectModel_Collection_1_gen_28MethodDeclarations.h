#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.String>
struct Collection_1_t3195;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.String[]
struct StringU5BU5D_t104;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3429;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t3193;

// System.Void System.Collections.ObjectModel.Collection`1<System.String>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m19026(__this, method) (( void (*) (Collection_1_t3195 *, MethodInfo*))Collection_1__ctor_m12452_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19027(__this, method) (( bool (*) (Collection_1_t3195 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12453_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m19028(__this, ___array, ___index, method) (( void (*) (Collection_1_t3195 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12454_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m19029(__this, method) (( Object_t * (*) (Collection_1_t3195 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12455_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m19030(__this, ___value, method) (( int32_t (*) (Collection_1_t3195 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m12456_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m19031(__this, ___value, method) (( bool (*) (Collection_1_t3195 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m12457_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m19032(__this, ___value, method) (( int32_t (*) (Collection_1_t3195 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12458_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m19033(__this, ___index, ___value, method) (( void (*) (Collection_1_t3195 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m12459_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m19034(__this, ___value, method) (( void (*) (Collection_1_t3195 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m12460_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m19035(__this, method) (( bool (*) (Collection_1_t3195 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12461_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m19036(__this, method) (( Object_t * (*) (Collection_1_t3195 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12462_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m19037(__this, method) (( bool (*) (Collection_1_t3195 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12463_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m19038(__this, method) (( bool (*) (Collection_1_t3195 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12464_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m19039(__this, ___index, method) (( Object_t * (*) (Collection_1_t3195 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12465_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m19040(__this, ___index, ___value, method) (( void (*) (Collection_1_t3195 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12466_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Add(T)
#define Collection_1_Add_m19041(__this, ___item, method) (( void (*) (Collection_1_t3195 *, String_t*, MethodInfo*))Collection_1_Add_m12467_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Clear()
#define Collection_1_Clear_m19042(__this, method) (( void (*) (Collection_1_t3195 *, MethodInfo*))Collection_1_Clear_m12468_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::ClearItems()
#define Collection_1_ClearItems_m19043(__this, method) (( void (*) (Collection_1_t3195 *, MethodInfo*))Collection_1_ClearItems_m12469_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Contains(T)
#define Collection_1_Contains_m19044(__this, ___item, method) (( bool (*) (Collection_1_t3195 *, String_t*, MethodInfo*))Collection_1_Contains_m12470_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m19045(__this, ___array, ___index, method) (( void (*) (Collection_1_t3195 *, StringU5BU5D_t104*, int32_t, MethodInfo*))Collection_1_CopyTo_m12471_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.String>::GetEnumerator()
#define Collection_1_GetEnumerator_m19046(__this, method) (( Object_t* (*) (Collection_1_t3195 *, MethodInfo*))Collection_1_GetEnumerator_m12472_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::IndexOf(T)
#define Collection_1_IndexOf_m19047(__this, ___item, method) (( int32_t (*) (Collection_1_t3195 *, String_t*, MethodInfo*))Collection_1_IndexOf_m12473_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Insert(System.Int32,T)
#define Collection_1_Insert_m19048(__this, ___index, ___item, method) (( void (*) (Collection_1_t3195 *, int32_t, String_t*, MethodInfo*))Collection_1_Insert_m12474_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m19049(__this, ___index, ___item, method) (( void (*) (Collection_1_t3195 *, int32_t, String_t*, MethodInfo*))Collection_1_InsertItem_m12475_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Remove(T)
#define Collection_1_Remove_m19050(__this, ___item, method) (( bool (*) (Collection_1_t3195 *, String_t*, MethodInfo*))Collection_1_Remove_m12476_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m19051(__this, ___index, method) (( void (*) (Collection_1_t3195 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m12477_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m19052(__this, ___index, method) (( void (*) (Collection_1_t3195 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m12478_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::get_Count()
#define Collection_1_get_Count_m19053(__this, method) (( int32_t (*) (Collection_1_t3195 *, MethodInfo*))Collection_1_get_Count_m12479_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::get_Item(System.Int32)
#define Collection_1_get_Item_m19054(__this, ___index, method) (( String_t* (*) (Collection_1_t3195 *, int32_t, MethodInfo*))Collection_1_get_Item_m12480_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m19055(__this, ___index, ___value, method) (( void (*) (Collection_1_t3195 *, int32_t, String_t*, MethodInfo*))Collection_1_set_Item_m12481_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m19056(__this, ___index, ___item, method) (( void (*) (Collection_1_t3195 *, int32_t, String_t*, MethodInfo*))Collection_1_SetItem_m12482_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m19057(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m12483_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m19058(__this /* static, unused */, ___item, method) (( String_t* (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m12484_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m19059(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m12485_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m19060(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m12486_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m19061(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m12487_gshared)(__this /* static, unused */, ___list, method)

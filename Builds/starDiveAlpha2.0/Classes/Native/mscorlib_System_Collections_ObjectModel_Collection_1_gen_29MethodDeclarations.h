#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
struct Collection_1_t3283;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1827;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t3280;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t3432;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1823;

// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m19555(__this, method) (( void (*) (Collection_1_t3283 *, MethodInfo*))Collection_1__ctor_m12452_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19556(__this, method) (( bool (*) (Collection_1_t3283 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12453_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m19557(__this, ___array, ___index, method) (( void (*) (Collection_1_t3283 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12454_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m19558(__this, method) (( Object_t * (*) (Collection_1_t3283 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12455_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m19559(__this, ___value, method) (( int32_t (*) (Collection_1_t3283 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m12456_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m19560(__this, ___value, method) (( bool (*) (Collection_1_t3283 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m12457_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m19561(__this, ___value, method) (( int32_t (*) (Collection_1_t3283 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12458_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m19562(__this, ___index, ___value, method) (( void (*) (Collection_1_t3283 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m12459_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m19563(__this, ___value, method) (( void (*) (Collection_1_t3283 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m12460_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m19564(__this, method) (( bool (*) (Collection_1_t3283 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12461_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m19565(__this, method) (( Object_t * (*) (Collection_1_t3283 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12462_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m19566(__this, method) (( bool (*) (Collection_1_t3283 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12463_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m19567(__this, method) (( bool (*) (Collection_1_t3283 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12464_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m19568(__this, ___index, method) (( Object_t * (*) (Collection_1_t3283 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12465_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m19569(__this, ___index, ___value, method) (( void (*) (Collection_1_t3283 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12466_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Add(T)
#define Collection_1_Add_m19570(__this, ___item, method) (( void (*) (Collection_1_t3283 *, StrongName_t1827 *, MethodInfo*))Collection_1_Add_m12467_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Clear()
#define Collection_1_Clear_m19571(__this, method) (( void (*) (Collection_1_t3283 *, MethodInfo*))Collection_1_Clear_m12468_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ClearItems()
#define Collection_1_ClearItems_m19572(__this, method) (( void (*) (Collection_1_t3283 *, MethodInfo*))Collection_1_ClearItems_m12469_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Contains(T)
#define Collection_1_Contains_m19573(__this, ___item, method) (( bool (*) (Collection_1_t3283 *, StrongName_t1827 *, MethodInfo*))Collection_1_Contains_m12470_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m19574(__this, ___array, ___index, method) (( void (*) (Collection_1_t3283 *, StrongNameU5BU5D_t3280*, int32_t, MethodInfo*))Collection_1_CopyTo_m12471_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::GetEnumerator()
#define Collection_1_GetEnumerator_m19575(__this, method) (( Object_t* (*) (Collection_1_t3283 *, MethodInfo*))Collection_1_GetEnumerator_m12472_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IndexOf(T)
#define Collection_1_IndexOf_m19576(__this, ___item, method) (( int32_t (*) (Collection_1_t3283 *, StrongName_t1827 *, MethodInfo*))Collection_1_IndexOf_m12473_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define Collection_1_Insert_m19577(__this, ___index, ___item, method) (( void (*) (Collection_1_t3283 *, int32_t, StrongName_t1827 *, MethodInfo*))Collection_1_Insert_m12474_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m19578(__this, ___index, ___item, method) (( void (*) (Collection_1_t3283 *, int32_t, StrongName_t1827 *, MethodInfo*))Collection_1_InsertItem_m12475_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Remove(T)
#define Collection_1_Remove_m19579(__this, ___item, method) (( bool (*) (Collection_1_t3283 *, StrongName_t1827 *, MethodInfo*))Collection_1_Remove_m12476_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m19580(__this, ___index, method) (( void (*) (Collection_1_t3283 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m12477_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m19581(__this, ___index, method) (( void (*) (Collection_1_t3283 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m12478_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Count()
#define Collection_1_get_Count_m19582(__this, method) (( int32_t (*) (Collection_1_t3283 *, MethodInfo*))Collection_1_get_Count_m12479_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define Collection_1_get_Item_m19583(__this, ___index, method) (( StrongName_t1827 * (*) (Collection_1_t3283 *, int32_t, MethodInfo*))Collection_1_get_Item_m12480_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m19584(__this, ___index, ___value, method) (( void (*) (Collection_1_t3283 *, int32_t, StrongName_t1827 *, MethodInfo*))Collection_1_set_Item_m12481_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m19585(__this, ___index, ___item, method) (( void (*) (Collection_1_t3283 *, int32_t, StrongName_t1827 *, MethodInfo*))Collection_1_SetItem_m12482_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m19586(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m12483_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m19587(__this /* static, unused */, ___item, method) (( StrongName_t1827 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m12484_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m19588(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m12485_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m19589(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m12486_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m19590(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m12487_gshared)(__this /* static, unused */, ___list, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>
struct Collection_1_t3065;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t712;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t3061;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t3354;
// System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>
struct IList_1_t3063;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m18199(__this, method) (( void (*) (Collection_1_t3065 *, MethodInfo*))Collection_1__ctor_m12182_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18200(__this, method) (( bool (*) (Collection_1_t3065 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12183_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m18201(__this, ___array, ___index, method) (( void (*) (Collection_1_t3065 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12184_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m18202(__this, method) (( Object_t * (*) (Collection_1_t3065 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12185_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m18203(__this, ___value, method) (( int32_t (*) (Collection_1_t3065 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m12186_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m18204(__this, ___value, method) (( bool (*) (Collection_1_t3065 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m12187_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m18205(__this, ___value, method) (( int32_t (*) (Collection_1_t3065 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12188_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m18206(__this, ___index, ___value, method) (( void (*) (Collection_1_t3065 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m12189_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m18207(__this, ___value, method) (( void (*) (Collection_1_t3065 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m12190_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m18208(__this, method) (( bool (*) (Collection_1_t3065 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12191_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m18209(__this, method) (( Object_t * (*) (Collection_1_t3065 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12192_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m18210(__this, method) (( bool (*) (Collection_1_t3065 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12193_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m18211(__this, method) (( bool (*) (Collection_1_t3065 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12194_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m18212(__this, ___index, method) (( Object_t * (*) (Collection_1_t3065 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12195_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m18213(__this, ___index, ___value, method) (( void (*) (Collection_1_t3065 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12196_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Add(T)
#define Collection_1_Add_m18214(__this, ___item, method) (( void (*) (Collection_1_t3065 *, PersistentCall_t712 *, MethodInfo*))Collection_1_Add_m12197_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Clear()
#define Collection_1_Clear_m18215(__this, method) (( void (*) (Collection_1_t3065 *, MethodInfo*))Collection_1_Clear_m12198_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ClearItems()
#define Collection_1_ClearItems_m18216(__this, method) (( void (*) (Collection_1_t3065 *, MethodInfo*))Collection_1_ClearItems_m12199_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define Collection_1_Contains_m18217(__this, ___item, method) (( bool (*) (Collection_1_t3065 *, PersistentCall_t712 *, MethodInfo*))Collection_1_Contains_m12200_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m18218(__this, ___array, ___index, method) (( void (*) (Collection_1_t3065 *, PersistentCallU5BU5D_t3061*, int32_t, MethodInfo*))Collection_1_CopyTo_m12201_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define Collection_1_GetEnumerator_m18219(__this, method) (( Object_t* (*) (Collection_1_t3065 *, MethodInfo*))Collection_1_GetEnumerator_m12202_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define Collection_1_IndexOf_m18220(__this, ___item, method) (( int32_t (*) (Collection_1_t3065 *, PersistentCall_t712 *, MethodInfo*))Collection_1_IndexOf_m12203_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define Collection_1_Insert_m18221(__this, ___index, ___item, method) (( void (*) (Collection_1_t3065 *, int32_t, PersistentCall_t712 *, MethodInfo*))Collection_1_Insert_m12204_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m18222(__this, ___index, ___item, method) (( void (*) (Collection_1_t3065 *, int32_t, PersistentCall_t712 *, MethodInfo*))Collection_1_InsertItem_m12205_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define Collection_1_Remove_m18223(__this, ___item, method) (( bool (*) (Collection_1_t3065 *, PersistentCall_t712 *, MethodInfo*))Collection_1_Remove_m12206_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m18224(__this, ___index, method) (( void (*) (Collection_1_t3065 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m12207_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m18225(__this, ___index, method) (( void (*) (Collection_1_t3065 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m12208_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Count()
#define Collection_1_get_Count_m18226(__this, method) (( int32_t (*) (Collection_1_t3065 *, MethodInfo*))Collection_1_get_Count_m12209_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define Collection_1_get_Item_m18227(__this, ___index, method) (( PersistentCall_t712 * (*) (Collection_1_t3065 *, int32_t, MethodInfo*))Collection_1_get_Item_m12210_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m18228(__this, ___index, ___value, method) (( void (*) (Collection_1_t3065 *, int32_t, PersistentCall_t712 *, MethodInfo*))Collection_1_set_Item_m12211_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m18229(__this, ___index, ___item, method) (( void (*) (Collection_1_t3065 *, int32_t, PersistentCall_t712 *, MethodInfo*))Collection_1_SetItem_m12212_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m18230(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m12213_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m18231(__this /* static, unused */, ___item, method) (( PersistentCall_t712 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m12214_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m18232(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m12215_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m18233(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m12216_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m18234(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m12217_gshared)(__this /* static, unused */, ___list, method)

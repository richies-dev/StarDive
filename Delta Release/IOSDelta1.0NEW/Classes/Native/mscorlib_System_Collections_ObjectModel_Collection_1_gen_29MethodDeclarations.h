#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
struct Collection_1_t3220;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1761;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t3217;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t3369;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1757;

// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m19325(__this, method) (( void (*) (Collection_1_t3220 *, MethodInfo*))Collection_1__ctor_m12182_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19326(__this, method) (( bool (*) (Collection_1_t3220 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12183_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m19327(__this, ___array, ___index, method) (( void (*) (Collection_1_t3220 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12184_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m19328(__this, method) (( Object_t * (*) (Collection_1_t3220 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12185_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m19329(__this, ___value, method) (( int32_t (*) (Collection_1_t3220 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m12186_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m19330(__this, ___value, method) (( bool (*) (Collection_1_t3220 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m12187_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m19331(__this, ___value, method) (( int32_t (*) (Collection_1_t3220 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12188_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m19332(__this, ___index, ___value, method) (( void (*) (Collection_1_t3220 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m12189_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m19333(__this, ___value, method) (( void (*) (Collection_1_t3220 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m12190_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m19334(__this, method) (( bool (*) (Collection_1_t3220 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12191_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m19335(__this, method) (( Object_t * (*) (Collection_1_t3220 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12192_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m19336(__this, method) (( bool (*) (Collection_1_t3220 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12193_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m19337(__this, method) (( bool (*) (Collection_1_t3220 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12194_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m19338(__this, ___index, method) (( Object_t * (*) (Collection_1_t3220 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12195_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m19339(__this, ___index, ___value, method) (( void (*) (Collection_1_t3220 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12196_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Add(T)
#define Collection_1_Add_m19340(__this, ___item, method) (( void (*) (Collection_1_t3220 *, StrongName_t1761 *, MethodInfo*))Collection_1_Add_m12197_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Clear()
#define Collection_1_Clear_m19341(__this, method) (( void (*) (Collection_1_t3220 *, MethodInfo*))Collection_1_Clear_m12198_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ClearItems()
#define Collection_1_ClearItems_m19342(__this, method) (( void (*) (Collection_1_t3220 *, MethodInfo*))Collection_1_ClearItems_m12199_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Contains(T)
#define Collection_1_Contains_m19343(__this, ___item, method) (( bool (*) (Collection_1_t3220 *, StrongName_t1761 *, MethodInfo*))Collection_1_Contains_m12200_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m19344(__this, ___array, ___index, method) (( void (*) (Collection_1_t3220 *, StrongNameU5BU5D_t3217*, int32_t, MethodInfo*))Collection_1_CopyTo_m12201_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::GetEnumerator()
#define Collection_1_GetEnumerator_m19345(__this, method) (( Object_t* (*) (Collection_1_t3220 *, MethodInfo*))Collection_1_GetEnumerator_m12202_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IndexOf(T)
#define Collection_1_IndexOf_m19346(__this, ___item, method) (( int32_t (*) (Collection_1_t3220 *, StrongName_t1761 *, MethodInfo*))Collection_1_IndexOf_m12203_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define Collection_1_Insert_m19347(__this, ___index, ___item, method) (( void (*) (Collection_1_t3220 *, int32_t, StrongName_t1761 *, MethodInfo*))Collection_1_Insert_m12204_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m19348(__this, ___index, ___item, method) (( void (*) (Collection_1_t3220 *, int32_t, StrongName_t1761 *, MethodInfo*))Collection_1_InsertItem_m12205_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Remove(T)
#define Collection_1_Remove_m19349(__this, ___item, method) (( bool (*) (Collection_1_t3220 *, StrongName_t1761 *, MethodInfo*))Collection_1_Remove_m12206_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m19350(__this, ___index, method) (( void (*) (Collection_1_t3220 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m12207_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m19351(__this, ___index, method) (( void (*) (Collection_1_t3220 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m12208_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Count()
#define Collection_1_get_Count_m19352(__this, method) (( int32_t (*) (Collection_1_t3220 *, MethodInfo*))Collection_1_get_Count_m12209_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define Collection_1_get_Item_m19353(__this, ___index, method) (( StrongName_t1761 * (*) (Collection_1_t3220 *, int32_t, MethodInfo*))Collection_1_get_Item_m12210_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m19354(__this, ___index, ___value, method) (( void (*) (Collection_1_t3220 *, int32_t, StrongName_t1761 *, MethodInfo*))Collection_1_set_Item_m12211_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m19355(__this, ___index, ___item, method) (( void (*) (Collection_1_t3220 *, int32_t, StrongName_t1761 *, MethodInfo*))Collection_1_SetItem_m12212_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m19356(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m12213_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m19357(__this /* static, unused */, ___item, method) (( StrongName_t1761 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m12214_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m19358(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m12215_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m19359(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m12216_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m19360(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m12217_gshared)(__this /* static, unused */, ___list, method)

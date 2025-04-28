#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2721;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t238;
// System.Object[]
struct ObjectU5BU5D_t219;
// System.Predicate`1<System.Object>
struct Predicate_1_t2533;
// System.Comparison`1<System.Object>
struct Comparison_1_t2545;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m14396_gshared (IndexedSet_1_t2721 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m14396(__this, method) (( void (*) (IndexedSet_1_t2721 *, MethodInfo*))IndexedSet_1__ctor_m14396_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14398_gshared (IndexedSet_1_t2721 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14398(__this, method) (( Object_t * (*) (IndexedSet_1_t2721 *, MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14398_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m14399_gshared (IndexedSet_1_t2721 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m14399(__this, ___item, method) (( void (*) (IndexedSet_1_t2721 *, Object_t *, MethodInfo*))IndexedSet_1_Add_m14399_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m14400_gshared (IndexedSet_1_t2721 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m14400(__this, ___item, method) (( bool (*) (IndexedSet_1_t2721 *, Object_t *, MethodInfo*))IndexedSet_1_Remove_m14400_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m14402_gshared (IndexedSet_1_t2721 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m14402(__this, method) (( Object_t* (*) (IndexedSet_1_t2721 *, MethodInfo*))IndexedSet_1_GetEnumerator_m14402_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m14403_gshared (IndexedSet_1_t2721 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m14403(__this, method) (( void (*) (IndexedSet_1_t2721 *, MethodInfo*))IndexedSet_1_Clear_m14403_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m14405_gshared (IndexedSet_1_t2721 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m14405(__this, ___item, method) (( bool (*) (IndexedSet_1_t2721 *, Object_t *, MethodInfo*))IndexedSet_1_Contains_m14405_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m14407_gshared (IndexedSet_1_t2721 * __this, ObjectU5BU5D_t219* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m14407(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2721 *, ObjectU5BU5D_t219*, int32_t, MethodInfo*))IndexedSet_1_CopyTo_m14407_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m14408_gshared (IndexedSet_1_t2721 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m14408(__this, method) (( int32_t (*) (IndexedSet_1_t2721 *, MethodInfo*))IndexedSet_1_get_Count_m14408_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m14410_gshared (IndexedSet_1_t2721 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m14410(__this, method) (( bool (*) (IndexedSet_1_t2721 *, MethodInfo*))IndexedSet_1_get_IsReadOnly_m14410_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m14412_gshared (IndexedSet_1_t2721 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m14412(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2721 *, Object_t *, MethodInfo*))IndexedSet_1_IndexOf_m14412_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m14414_gshared (IndexedSet_1_t2721 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m14414(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2721 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_Insert_m14414_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m14416_gshared (IndexedSet_1_t2721 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m14416(__this, ___index, method) (( void (*) (IndexedSet_1_t2721 *, int32_t, MethodInfo*))IndexedSet_1_RemoveAt_m14416_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m14417_gshared (IndexedSet_1_t2721 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m14417(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2721 *, int32_t, MethodInfo*))IndexedSet_1_get_Item_m14417_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m14419_gshared (IndexedSet_1_t2721 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m14419(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2721 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_set_Item_m14419_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m14420_gshared (IndexedSet_1_t2721 * __this, Predicate_1_t2533 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m14420(__this, ___match, method) (( void (*) (IndexedSet_1_t2721 *, Predicate_1_t2533 *, MethodInfo*))IndexedSet_1_RemoveAll_m14420_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m14421_gshared (IndexedSet_1_t2721 * __this, Comparison_1_t2545 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m14421(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2721 *, Comparison_1_t2545 *, MethodInfo*))IndexedSet_1_Sort_m14421_gshared)(__this, ___sortLayoutFunction, method)

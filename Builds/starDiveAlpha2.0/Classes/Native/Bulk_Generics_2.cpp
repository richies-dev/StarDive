#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo Comparer_1_t2534_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t90_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t97_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2535_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t92_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t514_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultComparMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType Comparer_1_t2534_0_0_0;
extern Il2CppType IComparable_1_t3524_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType GenericComparer_1_t2263_0_0_0;
extern Il2CppType TypeU5BU5D_t97_0_0_0;
extern Il2CppType DefaultComparer_t2535_0_0_0;
extern MethodInfo Object__ctor_m373_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m298_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m3955_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3953_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10477_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m12504_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23081_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10503_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m12504_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23081_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Comparer`1<System.Object>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m12500_GenericMethod;
extern "C" void Comparer_1__ctor_m12500_gshared (Comparer_1_t2534 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Object>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m12501_GenericMethod;
extern "C" void Comparer_1__cctor_m12501_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2535 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2535 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t2534_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Object>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m12502_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m12502_gshared (Comparer_1_t2534 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((Object_t *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), ((Object_t *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t514 * L_8 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m10503(L_8, /*hidden argument*/&ArgumentException__ctor_m10503_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Object>::get_Default()
extern Il2CppGenericMethod Comparer_1_get_Default_m12503_GenericMethod;
extern "C" Comparer_1_t2534 * Comparer_1_get_Default_m12503_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2534 * L_0 = ((Comparer_1_t2534_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3523_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Object>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"
extern TypeInfo IComparable_1_t3524_il2cpp_TypeInfo;
extern TypeInfo IComparable_t108_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m20184_MethodInfo;
extern MethodInfo IComparable_CompareTo_m11342_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2604_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m20184_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::.ctor()
extern "C" void DefaultComparer__ctor_m12504_gshared (DefaultComparer_t2535 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t2534 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m12505_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m12505_gshared (DefaultComparer_t2535 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_2 = ___y;
		Object_t * L_3 = L_2;
		if (((Object_t *)L_3))
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Object_t * L_4 = ___y;
		Object_t * L_5 = L_4;
		if (((Object_t *)L_5))
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		Object_t * L_6 = ___x;
		Object_t * L_7 = L_6;
		if (!((Object_t*)IsInst(((Object_t *)L_7), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		Object_t * L_8 = ___x;
		Object_t * L_9 = L_8;
		Object_t * L_10 = ___y;
		NullCheck(((Object_t*)Castclass(((Object_t *)L_9), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_11 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(((Object_t *)L_9), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_10);
		return L_11;
	}

IL_003e:
	{
		Object_t * L_12 = ___x;
		Object_t * L_13 = L_12;
		if (!((Object_t *)IsInst(((Object_t *)L_13), InitializedTypeInfo(&IComparable_t108_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		Object_t * L_14 = ___x;
		Object_t * L_15 = L_14;
		Object_t * L_16 = ___y;
		Object_t * L_17 = L_16;
		NullCheck(((Object_t *)Castclass(((Object_t *)L_15), InitializedTypeInfo(&IComparable_t108_il2cpp_TypeInfo))));
		int32_t L_18 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m11342_MethodInfo, ((Object_t *)Castclass(((Object_t *)L_15), InitializedTypeInfo(&IComparable_t108_il2cpp_TypeInfo))), ((Object_t *)L_17));
		return L_18;
	}

IL_0062:
	{
		ArgumentException_t514 * L_19 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_19, (String_t*) &_stringLiteral1428, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_19);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3695_il2cpp_TypeInfo;

// System.Double
#include "mscorlib_System_Double.h"


// T System.Collections.Generic.IEnumerator`1<System.Double>::get_Current()
// System.Array/InternalEnumerator`1<System.Double>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2536_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Double>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo Double_t813_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1143_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2536_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4997_MethodInfo;
extern MethodInfo Array_get_Length_m5002_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Double>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Double>(System.Int32)
extern "C" double Array_InternalArray__get_Item_TisDouble_t813_m20083_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisDouble_t813_m20083(__this, p0, method) (( double (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisDouble_t813_m20083_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12510_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDouble_t813_m20083_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Double>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12506_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12506_gshared (InternalEnumerator_1_t2536 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Double>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12507_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12507_gshared (InternalEnumerator_1_t2536 * __this, MethodInfo* method)
{
	{
		double L_0 = (( double (*) (InternalEnumerator_1_t2536 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		double L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Double>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12508_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12508_gshared (InternalEnumerator_1_t2536 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Double>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12509_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12509_gshared (InternalEnumerator_1_t2536 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5002(L_1, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Double>::get_Current()
extern "C" double InternalEnumerator_1_get_Current_m12510_gshared (InternalEnumerator_1_t2536 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1143 * L_1 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_1, (String_t*) &_stringLiteral1269, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1143 * L_3 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_3, (String_t*) &_stringLiteral1270, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5002(L_5, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		double L_8 = (( double (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3696_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Double>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Double>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Double>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Double>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Double>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Double>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Double>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3697_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Double>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3698_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Double>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Double>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Double>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Double>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Double>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3699_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3700_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Double>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3701_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Double>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2066_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Double>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_34.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2537_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_34MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2537_0_0_0;
extern Il2CppType IComparable_1_t2066_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m19712_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19712(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Double>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Double>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2066_m20094(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12515_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2066_m20094_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3702_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Double>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Double>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Double>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Double>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Double>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3703_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3704_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Double>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3705_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Double>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2067_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Double>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_35.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2538_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_35MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2538_0_0_0;
extern Il2CppType IEquatable_1_t2067_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Double>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Double>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2067_m20105(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12520_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2067_m20105_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3706_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Double>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Double>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Double>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Double>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Double>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t1349_il2cpp_TypeInfo;

// System.Char
#include "mscorlib_System_Char.h"


// T System.Collections.Generic.IEnumerator`1<System.Char>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3707_il2cpp_TypeInfo;

// System.UInt16
#include "mscorlib_System_UInt16.h"


// T System.Collections.Generic.IEnumerator`1<System.UInt16>::get_Current()
// System.Array/InternalEnumerator`1<System.Char>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2539_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Char>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36MethodDeclarations.h"

extern TypeInfo Char_t237_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2539_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
extern "C" uint16_t Array_InternalArray__get_Item_TisUInt16_t805_m20116_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt16_t805_m20116(__this, p0, method) (( uint16_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisUInt16_t805_m20116_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Char>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Char>(System.Int32)
#define Array_InternalArray__get_Item_TisChar_t237_m20118(__this, p0, method) (( uint16_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisUInt16_t805_m20116_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12529_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisChar_t237_m20118_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Char>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Char>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Char>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Char>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Char>::get_Current()
// System.Array/InternalEnumerator`1<System.UInt16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_37.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2540_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UInt16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_37MethodDeclarations.h"

extern TypeInfo UInt16_t805_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2540_0_0_0;
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12530_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisUInt16_t805_m20116_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.UInt16>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12522_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12522_gshared (InternalEnumerator_1_t2540 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt16>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12524_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12524_gshared (InternalEnumerator_1_t2540 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (( uint16_t (*) (InternalEnumerator_1_t2540 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt16>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12526_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12526_gshared (InternalEnumerator_1_t2540 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt16>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12528_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12528_gshared (InternalEnumerator_1_t2540 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5002(L_1, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.UInt16>::get_Current()
extern "C" uint16_t InternalEnumerator_1_get_Current_m12530_gshared (InternalEnumerator_1_t2540 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1143 * L_1 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_1, (String_t*) &_stringLiteral1269, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1143 * L_3 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_3, (String_t*) &_stringLiteral1270, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5002(L_5, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		uint16_t L_8 = (( uint16_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3708_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UInt16>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt16>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UInt16>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt16>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt16>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt16>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt16>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3709_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt16>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3710_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UInt16>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UInt16>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UInt16>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UInt16>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UInt16>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3711_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3712_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt16>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3713_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt16>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2044_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.UInt16>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_38.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2541_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_38MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2541_0_0_0;
extern Il2CppType IComparable_1_t2044_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt16>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt16>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2044_m20132(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12535_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2044_m20132_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3714_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.UInt16>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt16>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt16>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.UInt16>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt16>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3715_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3716_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.UInt16>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3717_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.UInt16>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2045_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.UInt16>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_39.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2542_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_39MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2542_0_0_0;
extern Il2CppType IEquatable_1_t2045_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt16>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt16>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2045_m20143(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12540_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2045_m20143_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3718_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt16>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt16>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt16>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt16>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt16>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3719_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Char>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Char>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Char>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Char>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Char>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Char>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Char>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t2059_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Char>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3720_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Char>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Char>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Char>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Char>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Char>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3721_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3722_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Char>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3723_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Char>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2053_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Char>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_40.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2543_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_40MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2543_0_0_0;
extern Il2CppType IComparable_1_t2053_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Char>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Char>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2053_m20160(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12545_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2053_m20160_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3724_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Char>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Char>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Char>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Char>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Char>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3725_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3726_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Char>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3727_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Char>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2054_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Char>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_41.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2544_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_41MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2544_0_0_0;
extern Il2CppType IEquatable_1_t2054_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Char>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Char>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2054_m20171(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12550_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2054_m20171_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3728_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Char>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Char>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Char>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Char>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Char>>::set_Item(System.Int32,T)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2545_il2cpp_TypeInfo;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Comparison_1__ctor_m12551_GenericMethod;
extern "C" void Comparison_1__ctor_m12551_gshared (Comparison_1_t2545 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
extern Il2CppGenericMethod Comparison_1_Invoke_m12552_GenericMethod;
extern "C" int32_t Comparison_1_Invoke_m12552_gshared (Comparison_1_t2545 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m12552((Comparison_1_t2545 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Comparison_1_BeginInvoke_m12553_GenericMethod;
extern "C" Object_t * Comparison_1_BeginInvoke_m12553_gshared (Comparison_1_t2545 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___x;
	__d_args[1] = ___y;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Comparison_1_EndInvoke_m12554_GenericMethod;
extern "C" int32_t Comparison_1_EndInvoke_m12554_gshared (Comparison_1_t2545 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerator_t2546_il2cpp_TypeInfo;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4MethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
#include "UnityEngine_ArrayTypes.h"
extern TypeInfo GameObject_t28_il2cpp_TypeInfo;
extern TypeInfo List_1_t163_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1323_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern Il2CppType Enumerator_t2546_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m5007_MethodInfo;
extern MethodInfo Object_GetType_m2196_MethodInfo;
extern MethodInfo Type_get_FullName_m3974_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m6181_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m12558_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReadOnlyCollection_1_t2548_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo NotSupportedException_t229_il2cpp_TypeInfo;
extern TypeInfo IList_1_t2547_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3310_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t820_il2cpp_TypeInfo;
extern TypeInfo ICollection_t913_il2cpp_TypeInfo;
extern TypeInfo Void_t103_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t579_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t169_il2cpp_TypeInfo;
extern TypeInfo GameObjectU5BU5D_t130_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3311_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3309_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_0MethodDeclarations.h"
extern Il2CppType ReadOnlyCollection_1_t2548_0_0_0;
extern Il2CppType IList_1_t2547_0_0_0;
extern Il2CppType ICollection_1_t3310_0_0_0;
extern Il2CppType IEnumerable_1_t3311_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m12590_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m829_MethodInfo;
extern MethodInfo IList_1_get_Item_m23082_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m23064_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3942_MethodInfo;
extern MethodInfo ICollection_CopyTo_m4993_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m5149_MethodInfo;
extern MethodInfo ICollection_1_Contains_m23083_MethodInfo;
extern MethodInfo IList_1_IndexOf_m23084_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m23065_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m23066_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m12590_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m23082_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m23064_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m12622_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m23083_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m23084_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m23065_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m23066_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2549_il2cpp_TypeInfo;

extern TypeInfo IList_t1102_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
extern Il2CppType Collection_1_t2549_0_0_0;
extern Il2CppType List_1_t163_0_0_0;
extern Il2CppType GameObject_t28_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m23085_MethodInfo;
extern MethodInfo Collection_1_SetItem_m12621_MethodInfo;
extern MethodInfo List_1__ctor_m849_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m11376_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m12614_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m12612_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m12617_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m12608_MethodInfo;
extern MethodInfo ICollection_1_Clear_m23086_MethodInfo;
extern MethodInfo IList_1_Insert_m23087_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m23088_MethodInfo;
extern MethodInfo IList_1_set_Item_m23089_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7055_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m11686_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m11687_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m23085_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m12625_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m12626_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m12623_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m12621_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m849_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m12614_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m12624_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m12612_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m12617_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m12608_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m23086_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m23087_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m23088_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m23089_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::IsFixedSize(System.Collections.Generic.IList`1<T>)
// System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2550_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_0.h"
extern TypeInfo DefaultComparer_t2551_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_0MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2550_0_0_0;
extern Il2CppType IEquatable_1_t3729_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2333_0_0_0;
extern Il2CppType DefaultComparer_t2551_0_0_0;
extern MethodInfo DefaultComparer__ctor_m12632_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m23090_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m20190_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m12632_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m23090_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m20190_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3730_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3729_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.GameObject>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m441_MethodInfo;
extern MethodInfo Object_Equals_m440_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m12627_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GameObject>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GameObject>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GameObject>::Equals(T,T)
// System.Predicate`1<UnityEngine.GameObject>
#include "mscorlib_System_Predicate_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Predicate_1_t2552_il2cpp_TypeInfo;
// System.Predicate`1<UnityEngine.GameObject>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"



// System.Void System.Predicate`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.GameObject>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.GameObject>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.GameObject>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Comparer`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t2553_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0.h"
extern TypeInfo DefaultComparer_t2554_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0MethodDeclarations.h"
extern Il2CppType Comparer_1_t2553_0_0_0;
extern Il2CppType IComparable_1_t3526_0_0_0;
extern Il2CppType DefaultComparer_t2554_0_0_0;
extern MethodInfo DefaultComparer__ctor_m12643_MethodInfo;
extern MethodInfo Comparer_1_Compare_m23091_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m12643_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m23091_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.GameObject>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.GameObject>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.GameObject>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.GameObject>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.GameObject>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3525_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.GameObject>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3526_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.GameObject>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m20199_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m12639_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m20199_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.GameObject>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.GameObject>::Compare(T,T)
// System.Comparison`1<UnityEngine.GameObject>
#include "mscorlib_System_Comparison_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2555_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.GameObject>
#include "mscorlib_System_Comparison_1_gen_4MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.GameObject>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.GameObject>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.GameObject>::EndInvoke(System.IAsyncResult)
// UnityEngine.CastHelper`1<UnityEngine.GUIText>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_13.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2556_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.GUIText>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_13MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3428_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Boolean>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3427_il2cpp_TypeInfo;

// System.Byte
#include "mscorlib_System_Byte.h"


// T System.Collections.Generic.IEnumerator`1<System.Byte>::get_Current()
// System.Array/InternalEnumerator`1<System.Boolean>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_42.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2557_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Boolean>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_42MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2557_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
extern "C" uint8_t Array_InternalArray__get_Item_TisByte_t517_m20204_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisByte_t517_m20204(__this, p0, method) (( uint8_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t517_m20204_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Boolean>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Boolean>(System.Int32)
#define Array_InternalArray__get_Item_TisBoolean_t90_m20206(__this, p0, method) (( bool (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t517_m20204_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12657_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBoolean_t90_m20206_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Boolean>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Boolean>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Boolean>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Boolean>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Boolean>::get_Current()
// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_43.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2558_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_43MethodDeclarations.h"

extern TypeInfo Byte_t517_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2558_0_0_0;
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12658_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisByte_t517_m20204_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Byte>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12650_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12650_gshared (InternalEnumerator_1_t2558 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Byte>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12652_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12652_gshared (InternalEnumerator_1_t2558 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (InternalEnumerator_1_t2558 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Byte>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12654_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12654_gshared (InternalEnumerator_1_t2558 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Byte>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12656_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12656_gshared (InternalEnumerator_1_t2558 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5002(L_1, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Byte>::get_Current()
extern "C" uint8_t InternalEnumerator_1_get_Current_m12658_gshared (InternalEnumerator_1_t2558 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1143 * L_1 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_1, (String_t*) &_stringLiteral1269, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1143 * L_3 = (InvalidOperationException_t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1143_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4997(L_3, (String_t*) &_stringLiteral1270, /*hidden argument*/&InvalidOperationException__ctor_m4997_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5002(L_5, /*hidden argument*/&Array_get_Length_m5002_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		uint8_t L_8 = (( uint8_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3731_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Byte>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3732_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Byte>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3733_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Byte>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Byte>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Byte>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Byte>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3734_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3735_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Byte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3736_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Byte>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2035_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Byte>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_44.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2559_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_44MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2559_0_0_0;
extern Il2CppType IComparable_1_t2035_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Byte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Byte>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2035_m20220(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12663_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2035_m20220_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3737_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Byte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Byte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Byte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Byte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Byte>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3738_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3739_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Byte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3740_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Byte>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2036_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Byte>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_45.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2560_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_45MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2560_0_0_0;
extern Il2CppType IEquatable_1_t2036_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Byte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Byte>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2036_m20231(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12668_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2036_m20231_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3741_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Byte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Byte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Byte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Byte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Byte>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3742_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Boolean>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Boolean>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Boolean>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Boolean>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Boolean>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Boolean>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Boolean>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3743_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3744_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Boolean>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Boolean>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Boolean>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Boolean>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Boolean>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3745_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3746_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Boolean>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3747_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2071_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Boolean>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2561_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2561_0_0_0;
extern Il2CppType IComparable_1_t2071_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Boolean>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Boolean>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2071_m20248(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m19712_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12673_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2071_m20248_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3748_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3749_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3750_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Boolean>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3751_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Boolean>>::get_Current()
#ifdef __clang__
#pragma clang diagnostic pop
#endif

﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Evidence
struct Evidence_t1592;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t973;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;

// System.Void System.Security.Policy.Evidence::.ctor()
extern "C" void Evidence__ctor_m10028 (Evidence_t1592 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::get_Count()
extern "C" int32_t Evidence_get_Count_m10029 (Evidence_t1592 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::get_IsSynchronized()
extern "C" bool Evidence_get_IsSynchronized_m10030 (Evidence_t1592 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence::get_SyncRoot()
extern "C" Object_t * Evidence_get_SyncRoot_m10031 (Evidence_t1592 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_HostEvidenceList()
extern "C" ArrayList_t973 * Evidence_get_HostEvidenceList_m10032 (Evidence_t1592 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_AssemblyEvidenceList()
extern "C" ArrayList_t973 * Evidence_get_AssemblyEvidenceList_m10033 (Evidence_t1592 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::CopyTo(System.Array,System.Int32)
extern "C" void Evidence_CopyTo_m10034 (Evidence_t1592 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::Equals(System.Object)
extern "C" bool Evidence_Equals_m10035 (Evidence_t1592 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Policy.Evidence::GetEnumerator()
extern "C" Object_t * Evidence_GetEnumerator_m10036 (Evidence_t1592 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::GetHashCode()
extern "C" int32_t Evidence_GetHashCode_m10037 (Evidence_t1592 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

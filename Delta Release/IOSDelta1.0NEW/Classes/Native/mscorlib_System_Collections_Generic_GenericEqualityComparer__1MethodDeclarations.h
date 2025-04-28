#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t1949;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11298_gshared (GenericEqualityComparer_1_t1949 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11298(__this, method) (( void (*) (GenericEqualityComparer_1_t1949 *, MethodInfo*))GenericEqualityComparer_1__ctor_m11298_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m19444_gshared (GenericEqualityComparer_1_t1949 * __this, Guid_t1867  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m19444(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1949 *, Guid_t1867 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m19444_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m19445_gshared (GenericEqualityComparer_1_t1949 * __this, Guid_t1867  ___x, Guid_t1867  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m19445(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1949 *, Guid_t1867 , Guid_t1867 , MethodInfo*))GenericEqualityComparer_1_Equals_m19445_gshared)(__this, ___x, ___y, method)

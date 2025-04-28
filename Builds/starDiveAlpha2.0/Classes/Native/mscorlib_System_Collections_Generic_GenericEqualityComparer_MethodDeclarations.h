#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t2011;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11520_gshared (GenericEqualityComparer_1_t2011 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11520(__this, method) (( void (*) (GenericEqualityComparer_1_t2011 *, MethodInfo*))GenericEqualityComparer_1__ctor_m11520_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m19635_gshared (GenericEqualityComparer_1_t2011 * __this, DateTime_t650  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m19635(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2011 *, DateTime_t650 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m19635_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m19636_gshared (GenericEqualityComparer_1_t2011 * __this, DateTime_t650  ___x, DateTime_t650  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m19636(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2011 *, DateTime_t650 , DateTime_t650 , MethodInfo*))GenericEqualityComparer_1_Equals_m19636_gshared)(__this, ___x, ___y, method)

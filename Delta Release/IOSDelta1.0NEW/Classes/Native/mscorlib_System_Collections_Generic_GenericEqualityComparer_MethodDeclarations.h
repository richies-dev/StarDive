#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t1945;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11285_gshared (GenericEqualityComparer_1_t1945 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11285(__this, method) (( void (*) (GenericEqualityComparer_1_t1945 *, MethodInfo*))GenericEqualityComparer_1__ctor_m11285_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m19405_gshared (GenericEqualityComparer_1_t1945 * __this, DateTime_t579  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m19405(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1945 *, DateTime_t579 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m19405_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m19406_gshared (GenericEqualityComparer_1_t1945 * __this, DateTime_t579  ___x, DateTime_t579  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m19406(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1945 *, DateTime_t579 , DateTime_t579 , MethodInfo*))GenericEqualityComparer_1_Equals_m19406_gshared)(__this, ___x, ___y, method)

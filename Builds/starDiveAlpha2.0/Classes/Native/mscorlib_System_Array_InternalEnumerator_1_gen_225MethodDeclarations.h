#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t3266;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19401_gshared (InternalEnumerator_1_t3266 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m19401(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3266 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m19401_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19402_gshared (InternalEnumerator_1_t3266 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19402(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3266 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19402_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19403_gshared (InternalEnumerator_1_t3266 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19403(__this, method) (( void (*) (InternalEnumerator_1_t3266 *, MethodInfo*))InternalEnumerator_1_Dispose_m19403_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19404_gshared (InternalEnumerator_1_t3266 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19404(__this, method) (( bool (*) (InternalEnumerator_1_t3266 *, MethodInfo*))InternalEnumerator_1_MoveNext_m19404_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t650  InternalEnumerator_1_get_Current_m19405_gshared (InternalEnumerator_1_t3266 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19405(__this, method) (( DateTime_t650  (*) (InternalEnumerator_1_t3266 *, MethodInfo*))InternalEnumerator_1_get_Current_m19405_gshared)(__this, method)

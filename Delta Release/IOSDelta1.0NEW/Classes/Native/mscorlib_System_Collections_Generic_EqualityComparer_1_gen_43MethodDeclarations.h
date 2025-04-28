#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1<System.Guid>
struct EqualityComparer_1_t3240;
// System.Object
struct Object_t;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
extern "C" void EqualityComparer_1__ctor_m19446_gshared (EqualityComparer_1_t3240 * __this, MethodInfo* method);
#define EqualityComparer_1__ctor_m19446(__this, method) (( void (*) (EqualityComparer_1_t3240 *, MethodInfo*))EqualityComparer_1__ctor_m19446_gshared)(__this, method)
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
extern "C" void EqualityComparer_1__cctor_m19447_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define EqualityComparer_1__cctor_m19447(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))EqualityComparer_1__cctor_m19447_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19448_gshared (EqualityComparer_1_t3240 * __this, Object_t * ___obj, MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19448(__this, ___obj, method) (( int32_t (*) (EqualityComparer_1_t3240 *, Object_t *, MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19448_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19449_gshared (EqualityComparer_1_t3240 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19449(__this, ___x, ___y, method) (( bool (*) (EqualityComparer_1_t3240 *, Object_t *, Object_t *, MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19449_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
extern "C" EqualityComparer_1_t3240 * EqualityComparer_1_get_Default_m19450_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define EqualityComparer_1_get_Default_m19450(__this /* static, unused */, method) (( EqualityComparer_1_t3240 * (*) (Object_t * /* static, unused */, MethodInfo*))EqualityComparer_1_get_Default_m19450_gshared)(__this /* static, unused */, method)

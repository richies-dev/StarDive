#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2808;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m15316_gshared (DefaultComparer_t2808 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m15316(__this, method) (( void (*) (DefaultComparer_t2808 *, MethodInfo*))DefaultComparer__ctor_m15316_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15317_gshared (DefaultComparer_t2808 * __this, UIVertex_t370  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m15317(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2808 *, UIVertex_t370 , MethodInfo*))DefaultComparer_GetHashCode_m15317_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15318_gshared (DefaultComparer_t2808 * __this, UIVertex_t370  ___x, UIVertex_t370  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m15318(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2808 *, UIVertex_t370 , UIVertex_t370 , MethodInfo*))DefaultComparer_Equals_m15318_gshared)(__this, ___x, ___y, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2744;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m15081_gshared (DefaultComparer_t2744 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m15081(__this, method) (( void (*) (DefaultComparer_t2744 *, MethodInfo*))DefaultComparer__ctor_m15081_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15082_gshared (DefaultComparer_t2744 * __this, UIVertex_t301  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m15082(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2744 *, UIVertex_t301 , MethodInfo*))DefaultComparer_GetHashCode_m15082_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15083_gshared (DefaultComparer_t2744 * __this, UIVertex_t301  ___x, UIVertex_t301  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m15083(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2744 *, UIVertex_t301 , UIVertex_t301 , MethodInfo*))DefaultComparer_Equals_m15083_gshared)(__this, ___x, ___y, method)

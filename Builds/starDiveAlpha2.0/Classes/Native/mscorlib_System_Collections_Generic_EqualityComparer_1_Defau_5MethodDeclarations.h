#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2634;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m13486_gshared (DefaultComparer_t2634 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m13486(__this, method) (( void (*) (DefaultComparer_t2634 *, MethodInfo*))DefaultComparer__ctor_m13486_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13487_gshared (DefaultComparer_t2634 * __this, RaycastResult_t254  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m13487(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2634 *, RaycastResult_t254 , MethodInfo*))DefaultComparer_GetHashCode_m13487_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13488_gshared (DefaultComparer_t2634 * __this, RaycastResult_t254  ___x, RaycastResult_t254  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m13488(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2634 *, RaycastResult_t254 , RaycastResult_t254 , MethodInfo*))DefaultComparer_Equals_m13488_gshared)(__this, ___x, ___y, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t3006;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m17729_gshared (DefaultComparer_t3006 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m17729(__this, method) (( void (*) (DefaultComparer_t3006 *, MethodInfo*))DefaultComparer__ctor_m17729_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17730_gshared (DefaultComparer_t3006 * __this, UILineInfo_t433  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m17730(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3006 *, UILineInfo_t433 , MethodInfo*))DefaultComparer_GetHashCode_m17730_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17731_gshared (DefaultComparer_t3006 * __this, UILineInfo_t433  ___x, UILineInfo_t433  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m17731(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3006 *, UILineInfo_t433 , UILineInfo_t433 , MethodInfo*))DefaultComparer_Equals_m17731_gshared)(__this, ___x, ___y, method)

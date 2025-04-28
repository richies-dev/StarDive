#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t35;
struct AnimationCurve_t35_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t99;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m312 (AnimationCurve_t35 * __this, KeyframeU5BU5D_t99* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3561 (AnimationCurve_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3562 (AnimationCurve_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3563 (AnimationCurve_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m314 (AnimationCurve_t35 * __this, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" KeyframeU5BU5D_t99* AnimationCurve_get_keys_m403 (AnimationCurve_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C" Keyframe_t100  AnimationCurve_get_Item_m405 (AnimationCurve_t35 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" int32_t AnimationCurve_get_length_m404 (AnimationCurve_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C" Keyframe_t100  AnimationCurve_GetKey_Internal_m3564 (AnimationCurve_t35 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
extern "C" KeyframeU5BU5D_t99* AnimationCurve_GetKeys_m3565 (AnimationCurve_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3566 (AnimationCurve_t35 * __this, KeyframeU5BU5D_t99* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t35_marshal(const AnimationCurve_t35& unmarshaled, AnimationCurve_t35_marshaled& marshaled);
void AnimationCurve_t35_marshal_back(const AnimationCurve_t35_marshaled& marshaled, AnimationCurve_t35& unmarshaled);
void AnimationCurve_t35_marshal_cleanup(AnimationCurve_t35_marshaled& marshaled);

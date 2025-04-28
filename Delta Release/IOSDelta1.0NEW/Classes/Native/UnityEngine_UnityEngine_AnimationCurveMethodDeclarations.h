#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t648;
struct AnimationCurve_t648_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t649;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m3331 (AnimationCurve_t648 * __this, KeyframeU5BU5D_t649* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3332 (AnimationCurve_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3333 (AnimationCurve_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3334 (AnimationCurve_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3335 (AnimationCurve_t648 * __this, KeyframeU5BU5D_t649* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t648_marshal(const AnimationCurve_t648& unmarshaled, AnimationCurve_t648_marshaled& marshaled);
void AnimationCurve_t648_marshal_back(const AnimationCurve_t648_marshaled& marshaled, AnimationCurve_t648& unmarshaled);
void AnimationCurve_t648_marshal_cleanup(AnimationCurve_t648_marshaled& marshaled);

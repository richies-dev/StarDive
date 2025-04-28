#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayer
struct GUILayer_t641;
// UnityEngine.GUIElement
struct GUIElement_t640;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t640 * GUILayer_HitTest_m2993 (GUILayer_t641 * __this, Vector3_t31  ___screenPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t640 * GUILayer_INTERNAL_CALL_HitTest_m2994 (Object_t * __this /* static, unused */, GUILayer_t641 * ___self, Vector3_t31 * ___screenPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;

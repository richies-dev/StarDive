#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayer
struct GUILayer_t570;
// UnityEngine.GUIElement
struct GUIElement_t569;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t569 * GUILayer_HitTest_m2763 (GUILayer_t570 * __this, Vector3_t32  ___screenPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t569 * GUILayer_INTERNAL_CALL_HitTest_m2764 (Object_t * __this /* static, unused */, GUILayer_t570 * ___self, Vector3_t32 * ___screenPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;

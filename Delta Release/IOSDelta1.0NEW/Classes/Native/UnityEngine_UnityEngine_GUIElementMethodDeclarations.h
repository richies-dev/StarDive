#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIElement
struct GUIElement_t569;
// UnityEngine.Camera
struct Camera_t18;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// UnityEngine.Rect UnityEngine.GUIElement::GetScreenRect(UnityEngine.Camera)
extern "C" Rect_t139  GUIElement_GetScreenRect_m2758 (GUIElement_t569 * __this, Camera_t18 * ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUIElement::GetScreenRect()
extern "C" Rect_t139  GUIElement_GetScreenRect_m588 (GUIElement_t569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

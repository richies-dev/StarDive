#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIElement
struct GUIElement_t640;
// UnityEngine.Camera
struct Camera_t29;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// UnityEngine.Rect UnityEngine.GUIElement::GetScreenRect(UnityEngine.Camera)
extern "C" Rect_t213  GUIElement_GetScreenRect_m2988 (GUIElement_t640 * __this, Camera_t29 * ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUIElement::GetScreenRect()
extern "C" Rect_t213  GUIElement_GetScreenRect_m826 (GUIElement_t640 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

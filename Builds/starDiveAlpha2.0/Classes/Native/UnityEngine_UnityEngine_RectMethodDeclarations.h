﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rect
struct Rect_t213;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Rect__ctor_m817 (Rect_t213 * __this, float ___left, float ___top, float ___width, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_x()
extern "C" float Rect_get_x_m836 (Rect_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" void Rect_set_x_m2376 (Rect_t213 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_y()
extern "C" float Rect_get_y_m837 (Rect_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" void Rect_set_y_m2374 (Rect_t213 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
extern "C" Vector2_t62  Rect_get_position_m2385 (Rect_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
extern "C" Vector2_t62  Rect_get_center_m2519 (Rect_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C" float Rect_get_width_m827 (Rect_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" void Rect_set_width_m2375 (Rect_t213 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C" float Rect_get_height_m2306 (Rect_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" void Rect_set_height_m2372 (Rect_t213 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
extern "C" Vector2_t62  Rect_get_size_m2370 (Rect_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMin()
extern "C" float Rect_get_xMin_m2408 (Rect_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMin()
extern "C" float Rect_get_yMin_m2407 (Rect_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMax()
extern "C" float Rect_get_xMax_m2391 (Rect_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMax()
extern "C" float Rect_get_yMax_m2392 (Rect_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Rect::ToString()
extern "C" String_t* Rect_ToString_m3234 (Rect_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern "C" bool Rect_Contains_m839 (Rect_t213 * __this, Vector3_t31  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Rect::GetHashCode()
extern "C" int32_t Rect_GetHashCode_m3235 (Rect_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Equals(System.Object)
extern "C" bool Rect_Equals_m3236 (Rect_t213 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Equality_m2512 (Object_t * __this /* static, unused */, Rect_t213  ___lhs, Rect_t213  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;

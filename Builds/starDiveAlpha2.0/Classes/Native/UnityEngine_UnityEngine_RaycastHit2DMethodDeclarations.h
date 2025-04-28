#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t482;
// UnityEngine.Collider2D
struct Collider2D_t136;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t236;
// UnityEngine.Transform
struct Transform_t48;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t62  RaycastHit2D_get_point_m2240 (RaycastHit2D_t482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t62  RaycastHit2D_get_normal_m2241 (RaycastHit2D_t482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m2343 (RaycastHit2D_t482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t136 * RaycastHit2D_get_collider_m2242 (RaycastHit2D_t482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t236 * RaycastHit2D_get_rigidbody_m3516 (RaycastHit2D_t482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t48 * RaycastHit2D_get_transform_m2243 (RaycastHit2D_t482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

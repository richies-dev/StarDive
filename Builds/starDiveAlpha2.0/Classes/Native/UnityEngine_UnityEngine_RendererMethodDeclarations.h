﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t222;
// UnityEngine.Material
struct Material_t4;

// System.Boolean UnityEngine.Renderer::get_enabled()
extern "C" bool Renderer_get_enabled_m777 (Renderer_t222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" void Renderer_set_enabled_m766 (Renderer_t222 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t4 * Renderer_get_material_m793 (Renderer_t222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" void Renderer_set_material_m854 (Renderer_t222 * __this, Material_t4 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m2244 (Renderer_t222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m2245 (Renderer_t222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

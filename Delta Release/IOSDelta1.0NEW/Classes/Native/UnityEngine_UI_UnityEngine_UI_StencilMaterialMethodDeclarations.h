#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.StencilMaterial
struct StencilMaterial_t353;
// UnityEngine.Material
struct Material_t4;

// System.Void UnityEngine.UI.StencilMaterial::.cctor()
extern "C" void StencilMaterial__cctor_m1550 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.StencilMaterial::Add(UnityEngine.Material,System.Int32)
extern "C" Material_t4 * StencilMaterial_Add_m1551 (Object_t * __this /* static, unused */, Material_t4 * ___baseMat, int32_t ___stencilID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.StencilMaterial::Remove(UnityEngine.Material)
extern "C" void StencilMaterial_Remove_m1552 (Object_t * __this /* static, unused */, Material_t4 * ___customMat, MethodInfo* method) IL2CPP_METHOD_ATTR;

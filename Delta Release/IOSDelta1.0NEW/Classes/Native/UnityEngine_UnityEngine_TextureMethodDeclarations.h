#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Texture
struct Texture_t12;
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Texture::.ctor()
extern "C" void Texture__ctor_m2736 (Texture_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetWidth_m2737 (Object_t * __this /* static, unused */, Texture_t12 * ___mono, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetHeight_m2738 (Object_t * __this /* static, unused */, Texture_t12 * ___mono, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::get_width()
extern "C" int32_t Texture_get_width_m2164 (Texture_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_width(System.Int32)
extern "C" void Texture_set_width_m2739 (Texture_t12 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::get_height()
extern "C" int32_t Texture_get_height_m2166 (Texture_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_height(System.Int32)
extern "C" void Texture_set_height_m2740 (Texture_t12 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C" void Texture_set_filterMode_m60 (Texture_t12 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Texture::get_texelSize()
extern "C" Vector2_t16  Texture_get_texelSize_m87 (Texture_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

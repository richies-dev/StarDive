#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.ImageEffects
struct ImageEffects_t15;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.RenderTexture
struct RenderTexture_t7;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityStandardAssets.ImageEffects.ImageEffects::.ctor()
extern "C" void ImageEffects__ctor_m23 (ImageEffects_t15 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" void ImageEffects_RenderDistortion_m24 (Object_t * __this /* static, unused */, Material_t4 * ___material, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, float ___angle, Vector2_t16  ___center, Vector2_t16  ___radius, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ImageEffects_Blit_m25 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___source, RenderTexture_t7 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ImageEffects_BlitWithMaterial_m26 (Object_t * __this /* static, unused */, Material_t4 * ___material, RenderTexture_t7 * ___source, RenderTexture_t7 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.Blur
struct Blur_t23;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.RenderTexture
struct RenderTexture_t7;

// System.Void UnityStandardAssets.ImageEffects.Blur::.ctor()
extern "C" void Blur__ctor_m23 (Blur_t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::.cctor()
extern "C" void Blur__cctor_m24 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::get_material()
extern "C" Material_t4 * Blur_get_material_m25 (Blur_t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::OnDisable()
extern "C" void Blur_OnDisable_m26 (Blur_t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::Start()
extern "C" void Blur_Start_m27 (Blur_t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C" void Blur_FourTapCone_m28 (Blur_t23 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___dest, int32_t ___iteration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Blur_DownSample4x_m29 (Blur_t23 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Blur_OnRenderImage_m30 (Blur_t23 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
struct ScreenSpaceAmbientOcclusion_t74;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.Shader
struct Shader_t3;
// UnityEngine.RenderTexture
struct RenderTexture_t7;

// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::.ctor()
extern "C" void ScreenSpaceAmbientOcclusion__ctor_m176 (ScreenSpaceAmbientOcclusion_t74 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterial(UnityEngine.Shader)
extern "C" Material_t4 * ScreenSpaceAmbientOcclusion_CreateMaterial_m177 (Object_t * __this /* static, unused */, Shader_t3 * ___shader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::DestroyMaterial(UnityEngine.Material)
extern "C" void ScreenSpaceAmbientOcclusion_DestroyMaterial_m178 (Object_t * __this /* static, unused */, Material_t4 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnDisable()
extern "C" void ScreenSpaceAmbientOcclusion_OnDisable_m179 (ScreenSpaceAmbientOcclusion_t74 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::Start()
extern "C" void ScreenSpaceAmbientOcclusion_Start_m180 (ScreenSpaceAmbientOcclusion_t74 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnEnable()
extern "C" void ScreenSpaceAmbientOcclusion_OnEnable_m181 (ScreenSpaceAmbientOcclusion_t74 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterials()
extern "C" void ScreenSpaceAmbientOcclusion_CreateMaterials_m182 (ScreenSpaceAmbientOcclusion_t74 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ScreenSpaceAmbientOcclusion_OnRenderImage_m183 (ScreenSpaceAmbientOcclusion_t74 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;

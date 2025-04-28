#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated
struct DepthOfFieldDeprecated_t55;
// UnityEngine.RenderTexture
struct RenderTexture_t7;
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_34.h"

// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.ctor()
extern "C" void DepthOfFieldDeprecated__ctor_m89 (DepthOfFieldDeprecated_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.cctor()
extern "C" void DepthOfFieldDeprecated__cctor_m90 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CreateMaterials()
extern "C" void DepthOfFieldDeprecated_CreateMaterials_m91 (DepthOfFieldDeprecated_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CheckResources()
extern "C" bool DepthOfFieldDeprecated_CheckResources_m92 (DepthOfFieldDeprecated_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnDisable()
extern "C" void DepthOfFieldDeprecated_OnDisable_m93 (DepthOfFieldDeprecated_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnEnable()
extern "C" void DepthOfFieldDeprecated_OnEnable_m94 (DepthOfFieldDeprecated_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::FocalDistance01(System.Single)
extern "C" float DepthOfFieldDeprecated_FocalDistance01_m95 (DepthOfFieldDeprecated_t55 * __this, float ___worldDist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetDividerBasedOnQuality()
extern "C" int32_t DepthOfFieldDeprecated_GetDividerBasedOnQuality_m96 (DepthOfFieldDeprecated_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetLowResolutionDividerBasedOnQuality(System.Int32)
extern "C" int32_t DepthOfFieldDeprecated_GetLowResolutionDividerBasedOnQuality_m97 (DepthOfFieldDeprecated_t55 * __this, int32_t ___baseDivider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfFieldDeprecated_OnRenderImage_m98 (DepthOfFieldDeprecated_t55 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
extern "C" void DepthOfFieldDeprecated_Blur_m99 (DepthOfFieldDeprecated_t55 * __this, RenderTexture_t7 * ___from, RenderTexture_t7 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
extern "C" void DepthOfFieldDeprecated_BlurFg_m100 (DepthOfFieldDeprecated_t55 * __this, RenderTexture_t7 * ___from, RenderTexture_t7 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
extern "C" void DepthOfFieldDeprecated_BlurHex_m101 (DepthOfFieldDeprecated_t55 * __this, RenderTexture_t7 * ___from, RenderTexture_t7 * ___to, int32_t ___blurPass, float ___spread, RenderTexture_t7 * ___tmp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfFieldDeprecated_Downsample_m102 (DepthOfFieldDeprecated_t55 * __this, RenderTexture_t7 * ___from, RenderTexture_t7 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfFieldDeprecated_AddBokeh_m103 (DepthOfFieldDeprecated_t55 * __this, RenderTexture_t7 * ___bokehInfo, RenderTexture_t7 * ___tempTex, RenderTexture_t7 * ___finalTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::ReleaseTextures()
extern "C" void DepthOfFieldDeprecated_ReleaseTextures_m104 (DepthOfFieldDeprecated_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C" void DepthOfFieldDeprecated_AllocateTextures_m105 (DepthOfFieldDeprecated_t55 * __this, bool ___blurForeground, RenderTexture_t7 * ___source, int32_t ___divider, int32_t ___lowTexDivider, MethodInfo* method) IL2CPP_METHOD_ATTR;

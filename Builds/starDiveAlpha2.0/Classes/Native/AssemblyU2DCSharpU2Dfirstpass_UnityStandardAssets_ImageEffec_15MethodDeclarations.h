#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.BloomAndFlares
struct BloomAndFlares_t22;
// UnityEngine.RenderTexture
struct RenderTexture_t7;

// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::.ctor()
extern "C" void BloomAndFlares__ctor_m16 (BloomAndFlares_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::CheckResources()
extern "C" bool BloomAndFlares_CheckResources_m17 (BloomAndFlares_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_OnRenderImage_m18 (BloomAndFlares_t22 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_AddTo_m19 (BloomAndFlares_t22 * __this, float ___intensity_, RenderTexture_t7 * ___from, RenderTexture_t7 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_BlendFlares_m20 (BloomAndFlares_t22 * __this, RenderTexture_t7 * ___from, RenderTexture_t7 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_BrightFilter_m21 (BloomAndFlares_t22 * __this, float ___thresh, float ___useAlphaAsMask, RenderTexture_t7 * ___from, RenderTexture_t7 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_Vignette_m22 (BloomAndFlares_t22 * __this, float ___amount, RenderTexture_t7 * ___from, RenderTexture_t7 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;

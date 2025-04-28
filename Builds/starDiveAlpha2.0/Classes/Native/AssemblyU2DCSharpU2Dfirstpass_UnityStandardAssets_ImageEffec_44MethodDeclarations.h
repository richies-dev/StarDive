#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.NoiseAndGrain
struct NoiseAndGrain_t64;
// UnityEngine.RenderTexture
struct RenderTexture_t7;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.Texture2D
struct Texture2D_t15;

// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.ctor()
extern "C" void NoiseAndGrain__ctor_m133 (NoiseAndGrain_t64 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.cctor()
extern "C" void NoiseAndGrain__cctor_m134 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::CheckResources()
extern "C" bool NoiseAndGrain_CheckResources_m135 (NoiseAndGrain_t64 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void NoiseAndGrain_OnRenderImage_m136 (NoiseAndGrain_t64 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::DrawNoiseQuadGrid(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Texture2D,System.Int32)
extern "C" void NoiseAndGrain_DrawNoiseQuadGrid_m137 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___fxMaterial, Texture2D_t15 * ___noise, int32_t ___passNr, MethodInfo* method) IL2CPP_METHOD_ATTR;

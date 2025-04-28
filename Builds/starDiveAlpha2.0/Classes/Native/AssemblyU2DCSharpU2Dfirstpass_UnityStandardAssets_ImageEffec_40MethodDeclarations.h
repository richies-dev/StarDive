#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.GlobalFog
struct GlobalFog_t59;
// UnityEngine.RenderTexture
struct RenderTexture_t7;
// UnityEngine.Material
struct Material_t4;

// System.Void UnityStandardAssets.ImageEffects.GlobalFog::.ctor()
extern "C" void GlobalFog__ctor_m115 (GlobalFog_t59 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::CheckResources()
extern "C" bool GlobalFog_CheckResources_m116 (GlobalFog_t59 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void GlobalFog_OnRenderImage_m117 (GlobalFog_t59 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void GlobalFog_CustomGraphicsBlit_m118 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___fxMaterial, int32_t ___passNr, MethodInfo* method) IL2CPP_METHOD_ATTR;

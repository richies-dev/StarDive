#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.ContrastEnhance
struct ContrastEnhance_t8;
// UnityEngine.RenderTexture
struct RenderTexture_t7;

// System.Void UnityStandardAssets.ImageEffects.ContrastEnhance::.ctor()
extern "C" void ContrastEnhance__ctor_m4 (ContrastEnhance_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.ContrastEnhance::CheckResources()
extern "C" bool ContrastEnhance_CheckResources_m5 (ContrastEnhance_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastEnhance::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ContrastEnhance_OnRenderImage_m6 (ContrastEnhance_t8 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;

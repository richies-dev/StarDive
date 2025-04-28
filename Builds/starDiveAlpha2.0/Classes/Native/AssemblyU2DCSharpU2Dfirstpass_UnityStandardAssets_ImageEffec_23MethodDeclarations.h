#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
struct ColorCorrectionLookup_t38;
// UnityEngine.Texture2D
struct Texture2D_t15;
// System.String
struct String_t;
// UnityEngine.RenderTexture
struct RenderTexture_t7;

// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::.ctor()
extern "C" void ColorCorrectionLookup__ctor_m54 (ColorCorrectionLookup_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::CheckResources()
extern "C" bool ColorCorrectionLookup_CheckResources_m55 (ColorCorrectionLookup_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDisable()
extern "C" void ColorCorrectionLookup_OnDisable_m56 (ColorCorrectionLookup_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDestroy()
extern "C" void ColorCorrectionLookup_OnDestroy_m57 (ColorCorrectionLookup_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::SetIdentityLut()
extern "C" void ColorCorrectionLookup_SetIdentityLut_m58 (ColorCorrectionLookup_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::ValidDimensions(UnityEngine.Texture2D)
extern "C" bool ColorCorrectionLookup_ValidDimensions_m59 (ColorCorrectionLookup_t38 * __this, Texture2D_t15 * ___tex2d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::Convert(UnityEngine.Texture2D,System.String)
extern "C" void ColorCorrectionLookup_Convert_m60 (ColorCorrectionLookup_t38 * __this, Texture2D_t15 * ___temp2DTex, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ColorCorrectionLookup_OnRenderImage_m61 (ColorCorrectionLookup_t38 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;

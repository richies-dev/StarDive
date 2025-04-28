#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.ContrastStretch
struct ContrastStretch_t10;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.RenderTexture
struct RenderTexture_t7;
// UnityEngine.Texture
struct Texture_t12;

// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::.ctor()
extern "C" void ContrastStretch__ctor_m7 (ContrastStretch_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
extern "C" Material_t4 * ContrastStretch_get_materialLum_m8 (ContrastStretch_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
extern "C" Material_t4 * ContrastStretch_get_materialReduce_m9 (ContrastStretch_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
extern "C" Material_t4 * ContrastStretch_get_materialAdapt_m10 (ContrastStretch_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
extern "C" Material_t4 * ContrastStretch_get_materialApply_m11 (ContrastStretch_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::Start()
extern "C" void ContrastStretch_Start_m12 (ContrastStretch_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnEnable()
extern "C" void ContrastStretch_OnEnable_m13 (ContrastStretch_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnDisable()
extern "C" void ContrastStretch_OnDisable_m14 (ContrastStretch_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ContrastStretch_OnRenderImage_m15 (ContrastStretch_t10 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
extern "C" void ContrastStretch_CalculateAdaptation_m16 (ContrastStretch_t10 * __this, Texture_t12 * ___curTexture, MethodInfo* method) IL2CPP_METHOD_ATTR;

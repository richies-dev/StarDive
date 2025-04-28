#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.Antialiasing
struct Antialiasing_t9;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.RenderTexture
struct RenderTexture_t7;

// System.Void UnityStandardAssets.ImageEffects.Antialiasing::.ctor()
extern "C" void Antialiasing__ctor_m4 (Antialiasing_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::CurrentAAMaterial()
extern "C" Material_t4 * Antialiasing_CurrentAAMaterial_m5 (Antialiasing_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::CheckResources()
extern "C" bool Antialiasing_CheckResources_m6 (Antialiasing_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Antialiasing::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Antialiasing_OnRenderImage_m7 (Antialiasing_t9 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;

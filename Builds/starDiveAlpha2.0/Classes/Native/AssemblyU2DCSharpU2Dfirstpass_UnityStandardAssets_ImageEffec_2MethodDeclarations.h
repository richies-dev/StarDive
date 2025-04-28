#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t6;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.Shader
struct Shader_t3;
// UnityEngine.RenderTexture
struct RenderTexture_t7;

// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
extern "C" void PostEffectsBase__ctor_m144 (PostEffectsBase_t6 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C" Material_t4 * PostEffectsBase_CheckShaderAndCreateMaterial_m145 (PostEffectsBase_t6 * __this, Shader_t3 * ___s, Material_t4 * ___m2Create, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C" Material_t4 * PostEffectsBase_CreateMaterial_m146 (PostEffectsBase_t6 * __this, Shader_t3 * ___s, Material_t4 * ___m2Create, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
extern "C" void PostEffectsBase_OnEnable_m147 (PostEffectsBase_t6 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
extern "C" bool PostEffectsBase_CheckSupport_m148 (PostEffectsBase_t6 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
extern "C" bool PostEffectsBase_CheckResources_m149 (PostEffectsBase_t6 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
extern "C" void PostEffectsBase_Start_m150 (PostEffectsBase_t6 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
extern "C" bool PostEffectsBase_CheckSupport_m151 (PostEffectsBase_t6 * __this, bool ___needDepth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
extern "C" bool PostEffectsBase_CheckSupport_m152 (PostEffectsBase_t6 * __this, bool ___needDepth, bool ___needHdr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
extern "C" bool PostEffectsBase_Dx11Support_m153 (PostEffectsBase_t6 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
extern "C" void PostEffectsBase_ReportAutoDisable_m154 (PostEffectsBase_t6 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
extern "C" bool PostEffectsBase_CheckShader_m155 (PostEffectsBase_t6 * __this, Shader_t3 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
extern "C" void PostEffectsBase_NotSupported_m156 (PostEffectsBase_t6 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void PostEffectsBase_DrawBorder_m157 (PostEffectsBase_t6 * __this, RenderTexture_t7 * ___dest, Material_t4 * ___material, MethodInfo* method) IL2CPP_METHOD_ATTR;

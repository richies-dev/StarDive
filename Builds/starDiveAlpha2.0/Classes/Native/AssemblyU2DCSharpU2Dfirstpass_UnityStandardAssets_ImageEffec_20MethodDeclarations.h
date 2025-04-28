#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.CameraMotionBlur
struct CameraMotionBlur_t30;
// UnityEngine.RenderTexture
struct RenderTexture_t7;
// UnityEngine.Camera
struct Camera_t29;

// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.ctor()
extern "C" void CameraMotionBlur__ctor_m35 (CameraMotionBlur_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.cctor()
extern "C" void CameraMotionBlur__cctor_m36 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::CalculateViewProjection()
extern "C" void CameraMotionBlur_CalculateViewProjection_m37 (CameraMotionBlur_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Start()
extern "C" void CameraMotionBlur_Start_m38 (CameraMotionBlur_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnEnable()
extern "C" void CameraMotionBlur_OnEnable_m39 (CameraMotionBlur_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnDisable()
extern "C" void CameraMotionBlur_OnDisable_m40 (CameraMotionBlur_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::CheckResources()
extern "C" bool CameraMotionBlur_CheckResources_m41 (CameraMotionBlur_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void CameraMotionBlur_OnRenderImage_m42 (CameraMotionBlur_t30 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Remember()
extern "C" void CameraMotionBlur_Remember_m43 (CameraMotionBlur_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.ImageEffects.CameraMotionBlur::GetTmpCam()
extern "C" Camera_t29 * CameraMotionBlur_GetTmpCam_m44 (CameraMotionBlur_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::StartFrame()
extern "C" void CameraMotionBlur_StartFrame_m45 (CameraMotionBlur_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::divRoundUp(System.Int32,System.Int32)
extern "C" int32_t CameraMotionBlur_divRoundUp_m46 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;

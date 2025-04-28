#pragma once
#include <stdint.h>
// UnityEngine.AnimationCurve
struct AnimationCurve_t35;
struct AnimationCurve_t35_marshaled;
// UnityEngine.Texture2D
struct Texture2D_t15;
// UnityEngine.Shader
struct Shader_t3;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.RenderTexture
struct RenderTexture_t7;
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_2.h"
// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_60.h"
// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_61.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
// UnityStandardAssets.ImageEffects.Tonemapping
struct  Tonemapping_t84  : public PostEffectsBase_t6
{
	// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType UnityStandardAssets.ImageEffects.Tonemapping::type
	int32_t ___type_5;
	// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize UnityStandardAssets.ImageEffects.Tonemapping::adaptiveTextureSize
	int32_t ___adaptiveTextureSize_6;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.Tonemapping::remapCurve
	AnimationCurve_t35 * ___remapCurve_7;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Tonemapping::curveTex
	Texture2D_t15 * ___curveTex_8;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::exposureAdjustment
	float ___exposureAdjustment_9;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::middleGrey
	float ___middleGrey_10;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::white
	float ___white_11;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::adaptionSpeed
	float ___adaptionSpeed_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Tonemapping::tonemapper
	Shader_t3 * ___tonemapper_13;
	// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::validRenderTextureFormat
	bool ___validRenderTextureFormat_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Tonemapping::tonemapMaterial
	Material_t4 * ___tonemapMaterial_15;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.Tonemapping::rt
	RenderTexture_t7 * ___rt_16;
	// UnityEngine.RenderTextureFormat UnityStandardAssets.ImageEffects.Tonemapping::rtFormat
	int32_t ___rtFormat_17;
};

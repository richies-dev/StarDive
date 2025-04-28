#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t48;
// UnityEngine.Shader
struct Shader_t3;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.Texture2D
struct Texture2D_t15;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t49;
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_2.h"
// UnityStandardAssets.ImageEffects.DepthOfField/BlurType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_29.h"
// UnityStandardAssets.ImageEffects.DepthOfField/BlurSampleCount
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_30.h"
// UnityStandardAssets.ImageEffects.DepthOfField
struct  DepthOfField_t50  : public PostEffectsBase_t6
{
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::visualizeFocus
	bool ___visualizeFocus_5;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalLength
	float ___focalLength_6;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalSize
	float ___focalSize_7;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::aperture
	float ___aperture_8;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.DepthOfField::focalTransform
	Transform_t48 * ___focalTransform_9;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::maxBlurSize
	float ___maxBlurSize_10;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::highResolution
	bool ___highResolution_11;
	// UnityStandardAssets.ImageEffects.DepthOfField/BlurType UnityStandardAssets.ImageEffects.DepthOfField::blurType
	int32_t ___blurType_12;
	// UnityStandardAssets.ImageEffects.DepthOfField/BlurSampleCount UnityStandardAssets.ImageEffects.DepthOfField::blurSampleCount
	int32_t ___blurSampleCount_13;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::nearBlur
	bool ___nearBlur_14;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::foregroundOverlap
	float ___foregroundOverlap_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfField::dofHdrShader
	Shader_t3 * ___dofHdrShader_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfField::dofHdrMaterial
	Material_t4 * ___dofHdrMaterial_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehShader
	Shader_t3 * ___dx11BokehShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfField::dx11bokehMaterial
	Material_t4 * ___dx11bokehMaterial_19;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehThreshold
	float ___dx11BokehThreshold_20;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11SpawnHeuristic
	float ___dx11SpawnHeuristic_21;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehTexture
	Texture2D_t15 * ___dx11BokehTexture_22;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehScale
	float ___dx11BokehScale_23;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehIntensity
	float ___dx11BokehIntensity_24;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalDistance01
	float ___focalDistance01_25;
	// UnityEngine.ComputeBuffer UnityStandardAssets.ImageEffects.DepthOfField::cbDrawArgs
	ComputeBuffer_t49 * ___cbDrawArgs_26;
	// UnityEngine.ComputeBuffer UnityStandardAssets.ImageEffects.DepthOfField::cbPoints
	ComputeBuffer_t49 * ___cbPoints_27;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::internalBlurWidth
	float ___internalBlurWidth_28;
};

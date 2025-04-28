#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t3;
// UnityEngine.Material
struct Material_t4;
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_2.h"
// UnityStandardAssets.ImageEffects.CreaseShading
struct  CreaseShading_t45  : public PostEffectsBase_t6
{
	// System.Single UnityStandardAssets.ImageEffects.CreaseShading::intensity
	float ___intensity_5;
	// System.Int32 UnityStandardAssets.ImageEffects.CreaseShading::softness
	int32_t ___softness_6;
	// System.Single UnityStandardAssets.ImageEffects.CreaseShading::spread
	float ___spread_7;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::blurShader
	Shader_t3 * ___blurShader_8;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::blurMaterial
	Material_t4 * ___blurMaterial_9;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::depthFetchShader
	Shader_t3 * ___depthFetchShader_10;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::depthFetchMaterial
	Material_t4 * ___depthFetchMaterial_11;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::creaseApplyShader
	Shader_t3 * ___creaseApplyShader_12;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::creaseApplyMaterial
	Material_t4 * ___creaseApplyMaterial_13;
};

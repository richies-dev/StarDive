#pragma once
#include <stdint.h>
// UnityEngine.Texture2D
struct Texture2D_t15;
// UnityEngine.Shader
struct Shader_t3;
// UnityEngine.Material
struct Material_t4;
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
// UnityStandardAssets.ImageEffects.NoiseAndGrain
struct  NoiseAndGrain_t64  : public PostEffectsBase_t6
{
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::intensityMultiplier
	float ___intensityMultiplier_5;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::generalIntensity
	float ___generalIntensity_6;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::blackIntensity
	float ___blackIntensity_7;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::whiteIntensity
	float ___whiteIntensity_8;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::midGrey
	float ___midGrey_9;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11Grain
	bool ___dx11Grain_10;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::softness
	float ___softness_11;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::monochrome
	bool ___monochrome_12;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.NoiseAndGrain::intensities
	Vector3_t31  ___intensities_13;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.NoiseAndGrain::tiling
	Vector3_t31  ___tiling_14;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::monochromeTiling
	float ___monochromeTiling_15;
	// UnityEngine.FilterMode UnityStandardAssets.ImageEffects.NoiseAndGrain::filterMode
	int32_t ___filterMode_16;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseTexture
	Texture2D_t15 * ___noiseTexture_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseShader
	Shader_t3 * ___noiseShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseMaterial
	Material_t4 * ___noiseMaterial_19;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11NoiseShader
	Shader_t3 * ___dx11NoiseShader_20;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11NoiseMaterial
	Material_t4 * ___dx11NoiseMaterial_21;
};
struct NoiseAndGrain_t64_StaticFields{
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::TILE_AMOUNT
	float ___TILE_AMOUNT_22;
};

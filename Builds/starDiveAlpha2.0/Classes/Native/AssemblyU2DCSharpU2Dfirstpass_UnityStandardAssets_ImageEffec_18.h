#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t3;
// UnityEngine.Material
struct Material_t4;
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_2.h"
// UnityStandardAssets.ImageEffects.BlurOptimized/BlurType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_17.h"
// UnityStandardAssets.ImageEffects.BlurOptimized
struct  BlurOptimized_t26  : public PostEffectsBase_t6
{
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized::downsample
	int32_t ___downsample_5;
	// System.Single UnityStandardAssets.ImageEffects.BlurOptimized::blurSize
	float ___blurSize_6;
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized::blurIterations
	int32_t ___blurIterations_7;
	// UnityStandardAssets.ImageEffects.BlurOptimized/BlurType UnityStandardAssets.ImageEffects.BlurOptimized::blurType
	int32_t ___blurType_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BlurOptimized::blurShader
	Shader_t3 * ___blurShader_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BlurOptimized::blurMaterial
	Material_t4 * ___blurMaterial_10;
};

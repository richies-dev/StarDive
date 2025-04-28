#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t3;
// UnityEngine.Material
struct Material_t4;
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_2.h"
// UnityStandardAssets.ImageEffects.AAMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_3.h"
// UnityStandardAssets.ImageEffects.Antialiasing
struct  Antialiasing_t9  : public PostEffectsBase_t6
{
	// UnityStandardAssets.ImageEffects.AAMode UnityStandardAssets.ImageEffects.Antialiasing::mode
	int32_t ___mode_5;
	// System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::showGeneratedNormals
	bool ___showGeneratedNormals_6;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::offsetScale
	float ___offsetScale_7;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::blurRadius
	float ___blurRadius_8;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::edgeThresholdMin
	float ___edgeThresholdMin_9;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::edgeThreshold
	float ___edgeThreshold_10;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::edgeSharpness
	float ___edgeSharpness_11;
	// System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::dlaaSharp
	bool ___dlaaSharp_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::ssaaShader
	Shader_t3 * ___ssaaShader_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::ssaa
	Material_t4 * ___ssaa_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::dlaaShader
	Shader_t3 * ___dlaaShader_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::dlaa
	Material_t4 * ___dlaa_16;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::nfaaShader
	Shader_t3 * ___nfaaShader_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::nfaa
	Material_t4 * ___nfaa_18;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAPreset2
	Shader_t3 * ___shaderFXAAPreset2_19;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAPreset2
	Material_t4 * ___materialFXAAPreset2_20;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAPreset3
	Shader_t3 * ___shaderFXAAPreset3_21;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAPreset3
	Material_t4 * ___materialFXAAPreset3_22;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAII
	Shader_t3 * ___shaderFXAAII_23;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAII
	Material_t4 * ___materialFXAAII_24;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAIII
	Shader_t3 * ___shaderFXAAIII_25;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAIII
	Material_t4 * ___materialFXAAIII_26;
};

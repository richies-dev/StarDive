#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t4;
// UnityEngine.Shader
struct Shader_t3;
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_2.h"
// UnityStandardAssets.ImageEffects.ContrastEnhance
struct  ContrastEnhance_t42  : public PostEffectsBase_t6
{
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::intensity
	float ___intensity_5;
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::threshold
	float ___threshold_6;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastEnhance::separableBlurMaterial
	Material_t4 * ___separableBlurMaterial_7;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastEnhance::contrastCompositeMaterial
	Material_t4 * ___contrastCompositeMaterial_8;
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::blurSpread
	float ___blurSpread_9;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastEnhance::separableBlurShader
	Shader_t3 * ___separableBlurShader_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastEnhance::contrastCompositeShader
	Shader_t3 * ___contrastCompositeShader_11;
};

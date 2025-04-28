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
// UnityStandardAssets.ImageEffects.TweakMode34
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_12.h"
// UnityStandardAssets.ImageEffects.BloomScreenBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_14.h"
// UnityStandardAssets.ImageEffects.HDRBloomMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_13.h"
// UnityStandardAssets.ImageEffects.LensflareStyle34
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_11.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityStandardAssets.ImageEffects.BloomAndFlares
struct  BloomAndFlares_t22  : public PostEffectsBase_t6
{
	// UnityStandardAssets.ImageEffects.TweakMode34 UnityStandardAssets.ImageEffects.BloomAndFlares::tweakMode
	int32_t ___tweakMode_5;
	// UnityStandardAssets.ImageEffects.BloomScreenBlendMode UnityStandardAssets.ImageEffects.BloomAndFlares::screenBlendMode
	int32_t ___screenBlendMode_6;
	// UnityStandardAssets.ImageEffects.HDRBloomMode UnityStandardAssets.ImageEffects.BloomAndFlares::hdr
	int32_t ___hdr_7;
	// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::doHdr
	bool ___doHdr_8;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::sepBlurSpread
	float ___sepBlurSpread_9;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::useSrcAlphaAsMask
	float ___useSrcAlphaAsMask_10;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::bloomIntensity
	float ___bloomIntensity_11;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::bloomThreshold
	float ___bloomThreshold_12;
	// System.Int32 UnityStandardAssets.ImageEffects.BloomAndFlares::bloomBlurIterations
	int32_t ___bloomBlurIterations_13;
	// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::lensflares
	bool ___lensflares_14;
	// System.Int32 UnityStandardAssets.ImageEffects.BloomAndFlares::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_15;
	// UnityStandardAssets.ImageEffects.LensflareStyle34 UnityStandardAssets.ImageEffects.BloomAndFlares::lensflareMode
	int32_t ___lensflareMode_16;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::hollyStretchWidth
	float ___hollyStretchWidth_17;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::lensflareIntensity
	float ___lensflareIntensity_18;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::lensflareThreshold
	float ___lensflareThreshold_19;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorA
	Color_t17  ___flareColorA_20;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorB
	Color_t17  ___flareColorB_21;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorC
	Color_t17  ___flareColorC_22;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorD
	Color_t17  ___flareColorD_23;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.BloomAndFlares::lensFlareVignetteMask
	Texture2D_t15 * ___lensFlareVignetteMask_24;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::lensFlareShader
	Shader_t3 * ___lensFlareShader_25;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::lensFlareMaterial
	Material_t4 * ___lensFlareMaterial_26;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::vignetteShader
	Shader_t3 * ___vignetteShader_27;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::vignetteMaterial
	Material_t4 * ___vignetteMaterial_28;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::separableBlurShader
	Shader_t3 * ___separableBlurShader_29;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::separableBlurMaterial
	Material_t4 * ___separableBlurMaterial_30;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::addBrightStuffOneOneShader
	Shader_t3 * ___addBrightStuffOneOneShader_31;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::addBrightStuffBlendOneOneMaterial
	Material_t4 * ___addBrightStuffBlendOneOneMaterial_32;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::screenBlendShader
	Shader_t3 * ___screenBlendShader_33;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::screenBlend
	Material_t4 * ___screenBlend_34;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::hollywoodFlaresShader
	Shader_t3 * ___hollywoodFlaresShader_35;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::hollywoodFlaresMaterial
	Material_t4 * ___hollywoodFlaresMaterial_36;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::brightPassFilterShader
	Shader_t3 * ___brightPassFilterShader_37;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::brightPassFilterMaterial
	Material_t4 * ___brightPassFilterMaterial_38;
};

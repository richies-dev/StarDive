#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t3;
// UnityEngine.Material
struct Material_t4;
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_2.h"
// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_37.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityStandardAssets.ImageEffects.EdgeDetection
struct  EdgeDetection_t57  : public PostEffectsBase_t6
{
	// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode UnityStandardAssets.ImageEffects.EdgeDetection::mode
	int32_t ___mode_5;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sensitivityDepth
	float ___sensitivityDepth_6;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sensitivityNormals
	float ___sensitivityNormals_7;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::lumThreshold
	float ___lumThreshold_8;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::edgeExp
	float ___edgeExp_9;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sampleDist
	float ___sampleDist_10;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::edgesOnly
	float ___edgesOnly_11;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.EdgeDetection::edgesOnlyBgColor
	Color_t17  ___edgesOnlyBgColor_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.EdgeDetection::edgeDetectShader
	Shader_t3 * ___edgeDetectShader_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.EdgeDetection::edgeDetectMaterial
	Material_t4 * ___edgeDetectMaterial_14;
	// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode UnityStandardAssets.ImageEffects.EdgeDetection::oldMode
	int32_t ___oldMode_15;
};

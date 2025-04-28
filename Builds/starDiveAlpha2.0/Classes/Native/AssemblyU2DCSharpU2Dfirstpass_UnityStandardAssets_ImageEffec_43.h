#pragma once
#include <stdint.h>
// UnityEngine.RenderTexture
struct RenderTexture_t7;
// UnityStandardAssets.ImageEffects.ImageEffectBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_25.h"
// UnityStandardAssets.ImageEffects.MotionBlur
struct  MotionBlur_t63  : public ImageEffectBase_t41
{
	// System.Single UnityStandardAssets.ImageEffects.MotionBlur::blurAmount
	float ___blurAmount_4;
	// System.Boolean UnityStandardAssets.ImageEffects.MotionBlur::extraBlur
	bool ___extraBlur_5;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.MotionBlur::accumTexture
	RenderTexture_t7 * ___accumTexture_6;
};

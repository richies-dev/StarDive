#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t4;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FadingMaterial
struct  FadingMaterial_t99  : public MonoBehaviour_t11
{
	// System.Boolean FadingMaterial::StartFade
	bool ___StartFade_2;
	// System.Single FadingMaterial::TimeToFade
	float ___TimeToFade_3;
	// UnityEngine.Material FadingMaterial::TextureToFade
	Material_t4 * ___TextureToFade_4;
	// System.Single FadingMaterial::alpha
	float ___alpha_5;
	// System.Single FadingMaterial::FadeInFrom
	float ___FadeInFrom_6;
	// System.Boolean FadingMaterial::FadeOut
	bool ___FadeOut_7;
};

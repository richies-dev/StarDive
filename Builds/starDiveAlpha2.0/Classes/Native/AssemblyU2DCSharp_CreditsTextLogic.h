#pragma once
#include <stdint.h>
// UnityEngine.GUIText
struct GUIText_t157;
// UnityEngine.AudioClip
struct AudioClip_t149;
// UnityEngine.AudioSource
struct AudioSource_t150;
// FadingMaterial
struct FadingMaterial_t165;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// CreditsTextLogic
struct  CreditsTextLogic_t197  : public MonoBehaviour_t24
{
	// System.Int32 CreditsTextLogic::line
	int32_t ___line_2;
	// System.Boolean CreditsTextLogic::DoneTyping
	bool ___DoneTyping_3;
	// UnityEngine.GUIText CreditsTextLogic::TextBox
	GUIText_t157 * ___TextBox_4;
	// System.Int32 CreditsTextLogic::i
	int32_t ___i_5;
	// System.Single CreditsTextLogic::TimeToWait
	float ___TimeToWait_6;
	// UnityEngine.AudioClip CreditsTextLogic::TextBlip
	AudioClip_t149 * ___TextBlip_7;
	// UnityEngine.AudioSource CreditsTextLogic::audsrc
	AudioSource_t150 * ___audsrc_8;
	// FadingMaterial CreditsTextLogic::FadeScreen
	FadingMaterial_t165 * ___FadeScreen_9;
	// System.Boolean CreditsTextLogic::Start
	bool ___Start_10;
};

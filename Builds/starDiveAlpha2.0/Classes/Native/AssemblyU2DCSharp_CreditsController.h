#pragma once
#include <stdint.h>
// CreditsTextLogic
struct CreditsTextLogic_t197;
// MenuGUIButtons
struct MenuGUIButtons_t198;
// UnityEngine.GUIText
struct GUIText_t157;
// MainMenuAudioController
struct MainMenuAudioController_t199;
// FadingMaterial
struct FadingMaterial_t165;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// CreditsController
struct  CreditsController_t200  : public MonoBehaviour_t24
{
	// CreditsTextLogic CreditsController::Credits
	CreditsTextLogic_t197 * ___Credits_2;
	// MenuGUIButtons CreditsController::MenuButtons
	MenuGUIButtons_t198 * ___MenuButtons_3;
	// UnityEngine.GUIText CreditsController::CreditText
	GUIText_t157 * ___CreditText_4;
	// UnityEngine.Color CreditsController::CreditsColor
	Color_t17  ___CreditsColor_5;
	// MainMenuAudioController CreditsController::audioctrler
	MainMenuAudioController_t199 * ___audioctrler_6;
	// System.Boolean CreditsController::StartCredits
	bool ___StartCredits_7;
	// FadingMaterial CreditsController::FadeOut
	FadingMaterial_t165 * ___FadeOut_8;
};

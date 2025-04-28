#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t59;
// UnityEngine.GUITexture
struct GUITexture_t121;
// UnityEngine.GUIText
struct GUIText_t91;
// UnityEngine.Texture
struct Texture_t12;
// fadingTexture
struct fadingTexture_t81;
// UnityEngine.AudioSource
struct AudioSource_t54;
// UnityEngine.AudioClip
struct AudioClip_t55;
// SoundController
struct SoundController_t134;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// StartMenuGUI/Menu
#include "AssemblyU2DCSharp_StartMenuGUI_Menu.h"
// StartMenuGUI
struct  StartMenuGUI_t135  : public MonoBehaviour_t11
{
	// UnityEngine.GameObject StartMenuGUI::MainMenuParent
	GameObject_t59 * ___MainMenuParent_2;
	// UnityEngine.GameObject StartMenuGUI::CreditsParent
	GameObject_t59 * ___CreditsParent_3;
	// UnityEngine.GameObject StartMenuGUI::OptionsParent
	GameObject_t59 * ___OptionsParent_4;
	// UnityEngine.GUITexture StartMenuGUI::playButtonTexture
	GUITexture_t121 * ___playButtonTexture_5;
	// UnityEngine.GUITexture StartMenuGUI::optionsButtonTexture
	GUITexture_t121 * ___optionsButtonTexture_6;
	// UnityEngine.GUITexture StartMenuGUI::creditsButtonTexture
	GUITexture_t121 * ___creditsButtonTexture_7;
	// UnityEngine.GUITexture StartMenuGUI::creditsContainer
	GUITexture_t121 * ___creditsContainer_8;
	// UnityEngine.GUITexture StartMenuGUI::creditsBackButton
	GUITexture_t121 * ___creditsBackButton_9;
	// UnityEngine.GUITexture StartMenuGUI::optionsCheckBox1
	GUITexture_t121 * ___optionsCheckBox1_10;
	// UnityEngine.GUITexture StartMenuGUI::optionsCheckBox2
	GUITexture_t121 * ___optionsCheckBox2_11;
	// UnityEngine.GUITexture StartMenuGUI::optionsCheckBox3
	GUITexture_t121 * ___optionsCheckBox3_12;
	// UnityEngine.GUITexture StartMenuGUI::optionsCheckBox4
	GUITexture_t121 * ___optionsCheckBox4_13;
	// UnityEngine.GUITexture StartMenuGUI::optionsContainer
	GUITexture_t121 * ___optionsContainer_14;
	// UnityEngine.GUITexture StartMenuGUI::optionsBackButton
	GUITexture_t121 * ___optionsBackButton_15;
	// UnityEngine.GUIText StartMenuGUI::CreditText
	GUIText_t91 * ___CreditText_16;
	// UnityEngine.GUIText StartMenuGUI::optionText1
	GUIText_t91 * ___optionText1_17;
	// UnityEngine.GUIText StartMenuGUI::optionText2
	GUIText_t91 * ___optionText2_18;
	// UnityEngine.GUIText StartMenuGUI::optionText3
	GUIText_t91 * ___optionText3_19;
	// UnityEngine.GUIText StartMenuGUI::optionText4
	GUIText_t91 * ___optionText4_20;
	// UnityEngine.Texture StartMenuGUI::checkBoxUnchecked
	Texture_t12 * ___checkBoxUnchecked_21;
	// UnityEngine.Texture StartMenuGUI::checkBoxChecked
	Texture_t12 * ___checkBoxChecked_22;
	// System.Boolean StartMenuGUI::HitPlay
	bool ___HitPlay_23;
	// fadingTexture StartMenuGUI::blackFade
	fadingTexture_t81 * ___blackFade_24;
	// UnityEngine.AudioSource StartMenuGUI::audsrc
	AudioSource_t54 * ___audsrc_25;
	// UnityEngine.AudioClip StartMenuGUI::changeMenuSound
	AudioClip_t55 * ___changeMenuSound_26;
	// UnityEngine.AudioClip StartMenuGUI::playSound
	AudioClip_t55 * ___playSound_27;
	// UnityEngine.AudioClip StartMenuGUI::toggleSound
	AudioClip_t55 * ___toggleSound_28;
	// StartMenuGUI/Menu StartMenuGUI::LastMenu
	int32_t ___LastMenu_30;
	// System.Single StartMenuGUI::buttonTimer
	float ___buttonTimer_31;
	// System.Single StartMenuGUI::scaleFontSize
	float ___scaleFontSize_32;
	// SoundController StartMenuGUI::sounds
	SoundController_t134 * ___sounds_33;
};
struct StartMenuGUI_t135_StaticFields{
	// StartMenuGUI/Menu StartMenuGUI::mainMenu
	int32_t ___mainMenu_29;
};

#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t28;
// System.String
struct String_t;
// UnityEngine.GUIText
struct GUIText_t157;
// UnityEngine.AudioClip
struct AudioClip_t149;
// UnityEngine.AudioSource
struct AudioSource_t150;
// FadingMaterial
struct FadingMaterial_t165;
// MainMenuAudioController
struct MainMenuAudioController_t199;
// CameraZoomController
struct CameraZoomController_t196;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// IntroTextLogic
struct  IntroTextLogic_t202  : public MonoBehaviour_t24
{
	// UnityEngine.GameObject IntroTextLogic::TapToContinue
	GameObject_t28 * ___TapToContinue_2;
	// System.Int32 IntroTextLogic::line
	int32_t ___line_3;
	// System.String IntroTextLogic::Text
	String_t* ___Text_4;
	// System.Boolean IntroTextLogic::DoneTyping
	bool ___DoneTyping_5;
	// UnityEngine.GUIText IntroTextLogic::TextBox
	GUIText_t157 * ___TextBox_6;
	// System.Int32 IntroTextLogic::i
	int32_t ___i_7;
	// System.Single IntroTextLogic::TimeToWait
	float ___TimeToWait_8;
	// UnityEngine.AudioClip IntroTextLogic::TextBlip
	AudioClip_t149 * ___TextBlip_9;
	// UnityEngine.AudioSource IntroTextLogic::audsrc
	AudioSource_t150 * ___audsrc_10;
	// FadingMaterial IntroTextLogic::FadeFromIntroToMenu
	FadingMaterial_t165 * ___FadeFromIntroToMenu_11;
	// MainMenuAudioController IntroTextLogic::MainmenuAudioController
	MainMenuAudioController_t199 * ___MainmenuAudioController_12;
	// UnityEngine.GameObject IntroTextLogic::TapToPlay
	GameObject_t28 * ___TapToPlay_13;
	// UnityEngine.GameObject IntroTextLogic::GUIBUTTONS
	GameObject_t28 * ___GUIBUTTONS_14;
	// CameraZoomController IntroTextLogic::CameraZoom
	CameraZoomController_t196 * ___CameraZoom_15;
	// System.Boolean IntroTextLogic::finishIntro
	bool ___finishIntro_16;
};

#pragma once
#include <stdint.h>
// fadingTexture
struct fadingTexture_t81;
// UnityEngine.GUIText
struct GUIText_t91;
// UnityEngine.AudioSource
struct AudioSource_t54;
// UnityEngine.AudioClip
struct AudioClip_t55;
// AtmosphereSoundController
struct AtmosphereSoundController_t56;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// IntroLogic
struct  IntroLogic_t132  : public MonoBehaviour_t11
{
	// fadingTexture IntroLogic::blackFade
	fadingTexture_t81 * ___blackFade_3;
	// UnityEngine.GUIText IntroLogic::storyText
	GUIText_t91 * ___storyText_4;
	// System.Int32 IntroLogic::storyIndex
	int32_t ___storyIndex_5;
	// UnityEngine.GUIText IntroLogic::tapToContinue
	GUIText_t91 * ___tapToContinue_6;
	// System.Boolean IntroLogic::hasTyped
	bool ___hasTyped_7;
	// UnityEngine.AudioSource IntroLogic::audsrc
	AudioSource_t54 * ___audsrc_8;
	// UnityEngine.AudioClip IntroLogic::continueSound
	AudioClip_t55 * ___continueSound_9;
	// AtmosphereSoundController IntroLogic::ambientSounds
	AtmosphereSoundController_t56 * ___ambientSounds_10;
	// System.Single IntroLogic::startTimer
	float ___startTimer_11;
	// System.Single IntroLogic::scaleFontSize
	float ___scaleFontSize_12;
	// UnityEngine.AudioClip IntroLogic::typeSound
	AudioClip_t55 * ___typeSound_13;
	// System.Boolean IntroLogic::overridePlayerPref
	bool ___overridePlayerPref_14;
};
struct IntroLogic_t132_StaticFields{
	// System.Boolean IntroLogic::ShowingIntro
	bool ___ShowingIntro_2;
};

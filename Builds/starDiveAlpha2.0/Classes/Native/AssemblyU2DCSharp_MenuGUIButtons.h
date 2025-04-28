#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t28;
// CameraZoomController
struct CameraZoomController_t196;
// FadingMaterial
struct FadingMaterial_t165;
// MainMenuAudioController
struct MainMenuAudioController_t199;
// UnityEngine.AudioSource
struct AudioSource_t150;
// UnityEngine.AudioClip
struct AudioClip_t149;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MenuGUIButtons
struct  MenuGUIButtons_t198  : public MonoBehaviour_t24
{
	// UnityEngine.GameObject MenuGUIButtons::playButton
	GameObject_t28 * ___playButton_2;
	// UnityEngine.GameObject MenuGUIButtons::CreditsButton
	GameObject_t28 * ___CreditsButton_3;
	// System.Boolean MenuGUIButtons::played
	bool ___played_4;
	// System.Boolean MenuGUIButtons::Credits
	bool ___Credits_5;
	// CameraZoomController MenuGUIButtons::cameraZoom
	CameraZoomController_t196 * ___cameraZoom_6;
	// FadingMaterial MenuGUIButtons::fadeout
	FadingMaterial_t165 * ___fadeout_7;
	// MainMenuAudioController MenuGUIButtons::audiocontroller
	MainMenuAudioController_t199 * ___audiocontroller_8;
	// UnityEngine.AudioSource MenuGUIButtons::audsrc
	AudioSource_t150 * ___audsrc_9;
	// UnityEngine.AudioClip MenuGUIButtons::PressedButtonSound
	AudioClip_t149 * ___PressedButtonSound_10;
};

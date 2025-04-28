#pragma once
#include <stdint.h>
// UnityEngine.GUITexture[]
struct GUITextureU5BU5D_t137;
// UnityEngine.GUIText
struct GUIText_t91;
// fadingTexture
struct fadingTexture_t81;
// UnityEngine.AudioSource
struct AudioSource_t54;
// UnityEngine.AudioClip
struct AudioClip_t55;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Notification
struct  Notification_t80  : public MonoBehaviour_t11
{
	// UnityEngine.GUITexture[] Notification::Textures
	GUITextureU5BU5D_t137* ___Textures_2;
	// UnityEngine.GUIText Notification::Text
	GUIText_t91 * ___Text_3;
	// UnityEngine.GUIText Notification::SubText
	GUIText_t91 * ___SubText_4;
	// UnityEngine.GUIText Notification::TapToContinue
	GUIText_t91 * ___TapToContinue_5;
	// System.Boolean Notification::kill
	bool ___kill_6;
	// System.Boolean Notification::ShowingTapToContinue
	bool ___ShowingTapToContinue_7;
	// fadingTexture Notification::BlackFade
	fadingTexture_t81 * ___BlackFade_8;
	// UnityEngine.AudioSource Notification::audsrc
	AudioSource_t54 * ___audsrc_9;
	// UnityEngine.AudioClip Notification::continuesound
	AudioClip_t55 * ___continuesound_10;
};

#pragma once
#include <stdint.h>
// UnityEngine.GUITexture[]
struct GUITextureU5BU5D_t210;
// UnityEngine.GUIText
struct GUIText_t157;
// fadingTexture
struct fadingTexture_t211;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Notification
struct  Notification_t145  : public MonoBehaviour_t24
{
	// UnityEngine.GUITexture[] Notification::Textures
	GUITextureU5BU5D_t210* ___Textures_2;
	// UnityEngine.GUIText Notification::Text
	GUIText_t157 * ___Text_3;
	// UnityEngine.GUIText Notification::SubText
	GUIText_t157 * ___SubText_4;
	// UnityEngine.GUIText Notification::TapToContinue
	GUIText_t157 * ___TapToContinue_5;
	// System.Boolean Notification::kill
	bool ___kill_6;
	// System.Boolean Notification::ShowingTapToContinue
	bool ___ShowingTapToContinue_7;
	// fadingTexture Notification::BlackFade
	fadingTexture_t211 * ___BlackFade_8;
};

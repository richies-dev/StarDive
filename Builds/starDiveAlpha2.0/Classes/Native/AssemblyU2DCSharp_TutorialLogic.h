#pragma once
#include <stdint.h>
// Notification
struct Notification_t145;
// UnityEngine.Texture[]
struct TextureU5BU5D_t164;
// ShopGUI
struct ShopGUI_t167;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t130;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TutorialLogic
struct  TutorialLogic_t216  : public MonoBehaviour_t24
{
	// Notification TutorialLogic::NotificationSystem
	Notification_t145 * ___NotificationSystem_2;
	// UnityEngine.Texture[] TutorialLogic::HelpTextures
	TextureU5BU5D_t164* ___HelpTextures_3;
	// System.Boolean TutorialLogic::Show
	bool ___Show_4;
	// ShopGUI TutorialLogic::shop
	ShopGUI_t167 * ___shop_5;
	// UnityEngine.GameObject[] TutorialLogic::MoneyGuiText
	GameObjectU5BU5D_t130* ___MoneyGuiText_6;
	// UnityEngine.GameObject[] TutorialLogic::LivesGUITexture
	GameObjectU5BU5D_t130* ___LivesGUITexture_7;
	// System.Int32 TutorialLogic::scaleFontSize
	int32_t ___scaleFontSize_8;
	// System.Boolean TutorialLogic::ShownTapToShoot
	bool ___ShownTapToShoot_9;
	// System.Single TutorialLogic::timer
	float ___timer_10;
	// System.Int32 TutorialLogic::NotificationIndex
	int32_t ___NotificationIndex_11;
};

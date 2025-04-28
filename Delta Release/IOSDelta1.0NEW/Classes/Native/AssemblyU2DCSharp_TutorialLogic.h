#pragma once
#include <stdint.h>
// Notification
struct Notification_t80;
// UnityEngine.Texture[]
struct TextureU5BU5D_t98;
// ShopGUI
struct ShopGUI_t101;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t65;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TutorialLogic
struct  TutorialLogic_t145  : public MonoBehaviour_t11
{
	// Notification TutorialLogic::NotificationSystem
	Notification_t80 * ___NotificationSystem_2;
	// UnityEngine.Texture[] TutorialLogic::HelpTextures
	TextureU5BU5D_t98* ___HelpTextures_3;
	// System.Boolean TutorialLogic::Show
	bool ___Show_4;
	// ShopGUI TutorialLogic::shop
	ShopGUI_t101 * ___shop_5;
	// UnityEngine.GameObject[] TutorialLogic::MoneyGuiText
	GameObjectU5BU5D_t65* ___MoneyGuiText_6;
	// UnityEngine.GameObject[] TutorialLogic::LivesGUITexture
	GameObjectU5BU5D_t65* ___LivesGUITexture_7;
	// System.Int32 TutorialLogic::scaleFontSize
	int32_t ___scaleFontSize_8;
	// System.Boolean TutorialLogic::ShownTapToShoot
	bool ___ShownTapToShoot_9;
	// System.Single TutorialLogic::timer
	float ___timer_10;
	// System.Int32 TutorialLogic::NotificationIndex
	int32_t ___NotificationIndex_11;
};

#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t39;
// UnityEngine.GUITexture
struct GUITexture_t187;
// UnityEngine.GUIText
struct GUIText_t157;
// System.Object
#include "mscorlib_System_Object.h"
// ShopItem/ItemType
#include "AssemblyU2DCSharp_ShopItem_ItemType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// ShopItem
struct  ShopItem_t160  : public Object_t
{
	// System.String ShopItem::Name
	String_t* ___Name_0;
	// System.Int32 ShopItem::Price
	int32_t ___Price_1;
	// ShopItem/ItemType ShopItem::Item
	int32_t ___Item_2;
	// UnityEngine.Texture ShopItem::ItemTexturePurchased
	Texture_t39 * ___ItemTexturePurchased_3;
	// UnityEngine.Texture ShopItem::ItemTextureNotPurchased
	Texture_t39 * ___ItemTextureNotPurchased_4;
	// UnityEngine.GUITexture ShopItem::GuiTextureStored
	GUITexture_t187 * ___GuiTextureStored_5;
	// UnityEngine.GUIText ShopItem::GuiTextStored
	GUIText_t157 * ___GuiTextStored_6;
	// System.Int32 ShopItem::Amount
	int32_t ___Amount_7;
	// System.Int32 ShopItem::IndexNumber
	int32_t ___IndexNumber_8;
	// UnityEngine.Vector2 ShopItem::StartPositionTexture
	Vector2_t62  ___StartPositionTexture_9;
	// UnityEngine.Vector2 ShopItem::StartPositionText
	Vector2_t62  ___StartPositionText_10;
	// System.String ShopItem::ItemTitle
	String_t* ___ItemTitle_11;
	// System.String ShopItem::ItemDescription
	String_t* ___ItemDescription_12;
};

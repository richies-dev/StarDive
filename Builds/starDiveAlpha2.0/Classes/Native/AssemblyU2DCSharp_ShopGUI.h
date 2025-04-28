#pragma once
#include <stdint.h>
// ShopItem[]
struct ShopItemU5BU5D_t162;
// UnityEngine.GameObject
struct GameObject_t28;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t163;
// UnityEngine.Transform
struct Transform_t48;
// UnityEngine.Texture[]
struct TextureU5BU5D_t164;
// AreYouSureButtons
struct AreYouSureButtons_t153;
// FadingMaterial
struct FadingMaterial_t165;
// UnityEngine.TextMesh
struct TextMesh_t166;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Nullable`1<System.Boolean>
#include "mscorlib_System_Nullable_1_gen.h"
// ShopGUI
struct  ShopGUI_t167  : public MonoBehaviour_t24
{
	// ShopItem[] ShopGUI::Items
	ShopItemU5BU5D_t162* ___Items_2;
	// UnityEngine.GameObject ShopGUI::guiTextObj
	GameObject_t28 * ___guiTextObj_3;
	// UnityEngine.GameObject ShopGUI::guiTextureObj
	GameObject_t28 * ___guiTextureObj_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ShopGUI::AllTextures
	List_1_t163 * ___AllTextures_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ShopGUI::AllText
	List_1_t163 * ___AllText_6;
	// UnityEngine.Vector2 ShopGUI::TexturesPosition
	Vector2_t62  ___TexturesPosition_7;
	// UnityEngine.Vector2 ShopGUI::textureSize
	Vector2_t62  ___textureSize_8;
	// UnityEngine.Transform ShopGUI::parentOfTextures
	Transform_t48 * ___parentOfTextures_9;
	// System.Int32 ShopGUI::AmountPerBottomRow
	int32_t ___AmountPerBottomRow_10;
	// System.Int32 ShopGUI::AmountPerTopRow
	int32_t ___AmountPerTopRow_11;
	// UnityEngine.Texture[] ShopGUI::UpgradeTextures
	TextureU5BU5D_t164* ___UpgradeTextures_12;
	// System.Int32 ShopGUI::fontsize
	int32_t ___fontsize_13;
	// System.Single ShopGUI::ScaleSizeForFont
	float ___ScaleSizeForFont_14;
	// System.Single ShopGUI::ScaleOfShopModifier
	float ___ScaleOfShopModifier_15;
	// System.Boolean ShopGUI::TryingToBuy
	bool ___TryingToBuy_16;
	// System.Int32 ShopGUI::TryingToBuyGunIndex
	int32_t ___TryingToBuyGunIndex_17;
	// System.Nullable`1<System.Boolean> ShopGUI::Accept
	Nullable_1_t154  ___Accept_18;
	// System.Int32 ShopGUI::lastTurret
	int32_t ___lastTurret_19;
	// System.Boolean ShopGUI::HasAsked
	bool ___HasAsked_20;
	// AreYouSureButtons ShopGUI::areyousure
	AreYouSureButtons_t153 * ___areyousure_21;
	// FadingMaterial ShopGUI::blackFade
	FadingMaterial_t165 * ___blackFade_22;
	// System.Boolean ShopGUI::AnimatingIn
	bool ___AnimatingIn_23;
	// System.Boolean ShopGUI::AnimatingOut
	bool ___AnimatingOut_24;
	// System.Boolean ShopGUI::WriteDescription
	bool ___WriteDescription_25;
	// UnityEngine.TextMesh ShopGUI::DescriptionText
	TextMesh_t166 * ___DescriptionText_26;
	// UnityEngine.TextMesh ShopGUI::TitleText
	TextMesh_t166 * ___TitleText_27;
	// System.Boolean ShopGUI::ParentOfTexturesShowedOnEnable
	bool ___ParentOfTexturesShowedOnEnable_28;
};

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ShopGUI
struct ShopGUI_t101;
// GunStats
struct GunStats_t102;
// System.Int32[]
struct Int32U5BU5D_t38;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// ShopItem
struct ShopItem_t94;
// ShopGUI/ItemType
#include "AssemblyU2DCSharp_ShopGUI_ItemType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ShopGUI::.ctor()
extern "C" void ShopGUI__ctor_m265 (ShopGUI_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ShopGUI::get_ScaleOfShop()
extern "C" float ShopGUI_get_ScaleOfShop_m266 (ShopGUI_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ShopGUI::get_YPositionOfShop()
extern "C" float ShopGUI_get_YPositionOfShop_m267 (ShopGUI_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::InstantiateShop()
extern "C" void ShopGUI_InstantiateShop_m268 (ShopGUI_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::Start()
extern "C" void ShopGUI_Start_m269 (ShopGUI_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::BuyUpgrade(GunStats,System.Int32,System.Single,System.Int32[],System.Int32,ShopGUI/ItemType,System.Int32)
extern "C" void ShopGUI_BuyUpgrade_m270 (ShopGUI_t101 * __this, GunStats_t102 * ___Turret, int32_t ___amountToBuy, float ___valueToAdd, Int32U5BU5D_t38* ___ItemPrice, int32_t ___ItemIndex, int32_t ___itemType, int32_t ___BulletTextureIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::SelectedItem()
extern "C" void ShopGUI_SelectedItem_m271 (ShopGUI_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::Update()
extern "C" void ShopGUI_Update_m272 (ShopGUI_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::UpdateData()
extern "C" void ShopGUI_UpdateData_m273 (ShopGUI_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::TryingToBuyItem()
extern "C" void ShopGUI_TryingToBuyItem_m274 (ShopGUI_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ShopGUI::clickedItem(ShopItem)
extern "C" Object_t * ShopGUI_clickedItem_m275 (ShopGUI_t101 * __this, ShopItem_t94 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::AnimateOut()
extern "C" void ShopGUI_AnimateOut_m276 (ShopGUI_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::AnimateIn()
extern "C" void ShopGUI_AnimateIn_m277 (ShopGUI_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::ChangeItemImagePosition(System.Int32,UnityEngine.Vector3)
extern "C" void ShopGUI_ChangeItemImagePosition_m278 (ShopGUI_t101 * __this, int32_t ___index, Vector3_t32  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::ChangeItemTextPosition(System.Int32,UnityEngine.Vector3)
extern "C" void ShopGUI_ChangeItemTextPosition_m279 (ShopGUI_t101 * __this, int32_t ___index, Vector3_t32  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::StartNextRound()
extern "C" void ShopGUI_StartNextRound_m280 (ShopGUI_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

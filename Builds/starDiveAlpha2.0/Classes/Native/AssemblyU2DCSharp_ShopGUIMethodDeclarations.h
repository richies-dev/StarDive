#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ShopGUI
struct ShopGUI_t167;
// GunStats
struct GunStats_t168;
// System.Int32[]
struct Int32U5BU5D_t102;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// ShopItem
struct ShopItem_t160;
// ShopGUI/ItemType
#include "AssemblyU2DCSharp_ShopGUI_ItemType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ShopGUI::.ctor()
extern "C" void ShopGUI__ctor_m530 (ShopGUI_t167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ShopGUI::get_ScaleOfShop()
extern "C" float ShopGUI_get_ScaleOfShop_m531 (ShopGUI_t167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ShopGUI::get_YPositionOfShop()
extern "C" float ShopGUI_get_YPositionOfShop_m532 (ShopGUI_t167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::InstantiateShop()
extern "C" void ShopGUI_InstantiateShop_m533 (ShopGUI_t167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::Start()
extern "C" void ShopGUI_Start_m534 (ShopGUI_t167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::BuyUpgrade(GunStats,System.Int32,System.Single,System.Int32[],System.Int32,ShopGUI/ItemType,System.Int32)
extern "C" void ShopGUI_BuyUpgrade_m535 (ShopGUI_t167 * __this, GunStats_t168 * ___Turret, int32_t ___amountToBuy, float ___valueToAdd, Int32U5BU5D_t102* ___ItemPrice, int32_t ___ItemIndex, int32_t ___itemType, int32_t ___BulletTextureIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::SelectedItem()
extern "C" void ShopGUI_SelectedItem_m536 (ShopGUI_t167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::Update()
extern "C" void ShopGUI_Update_m537 (ShopGUI_t167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::UpdateData()
extern "C" void ShopGUI_UpdateData_m538 (ShopGUI_t167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::TryingToBuyItem()
extern "C" void ShopGUI_TryingToBuyItem_m539 (ShopGUI_t167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ShopGUI::clickedItem(ShopItem)
extern "C" Object_t * ShopGUI_clickedItem_m540 (ShopGUI_t167 * __this, ShopItem_t160 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::AnimateOut()
extern "C" void ShopGUI_AnimateOut_m541 (ShopGUI_t167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::AnimateIn()
extern "C" void ShopGUI_AnimateIn_m542 (ShopGUI_t167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::ChangeItemImagePosition(System.Int32,UnityEngine.Vector3)
extern "C" void ShopGUI_ChangeItemImagePosition_m543 (ShopGUI_t167 * __this, int32_t ___index, Vector3_t31  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::ChangeItemTextPosition(System.Int32,UnityEngine.Vector3)
extern "C" void ShopGUI_ChangeItemTextPosition_m544 (ShopGUI_t167 * __this, int32_t ___index, Vector3_t31  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShopGUI::StartNextRound()
extern "C" void ShopGUI_StartNextRound_m545 (ShopGUI_t167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ShopItem
struct ShopItem_t94;
// UnityEngine.Texture
struct Texture_t12;
// UnityEngine.GUITexture
struct GUITexture_t121;
// UnityEngine.GUIText
struct GUIText_t91;
// System.String
struct String_t;
// ShopItem/ItemType
#include "AssemblyU2DCSharp_ShopItem_ItemType.h"

// System.Void ShopItem::.ctor(System.Int32,ShopItem/ItemType,UnityEngine.Texture,UnityEngine.Texture,UnityEngine.GUITexture,System.Int32,UnityEngine.GUIText,System.Int32,System.String,System.String)
extern "C" void ShopItem__ctor_m347 (ShopItem_t94 * __this, int32_t ___price, int32_t ___item, Texture_t12 * ___itemTexturePurchased, Texture_t12 * ___itemTextureNotPurchased, GUITexture_t121 * ___guitexturestored, int32_t ___amount, GUIText_t91 * ___guitextstored, int32_t ___indexNumber, String_t* ___itemDescription, String_t* ___itemTitle, MethodInfo* method) IL2CPP_METHOD_ATTR;

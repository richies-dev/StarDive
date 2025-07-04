﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.MSCompatUnicodeTable
struct MSCompatUnicodeTable_t1336;
// Mono.Globalization.Unicode.TailoringInfo
struct TailoringInfo_t1330;
// System.Globalization.CultureInfo
struct CultureInfo_t745;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t1337;
// Mono.Globalization.Unicode.Level2Map[]
struct Level2MapU5BU5D_t1338;
// System.String
struct String_t;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t1329;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::.cctor()
extern "C" void MSCompatUnicodeTable__cctor_m6998 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.TailoringInfo Mono.Globalization.Unicode.MSCompatUnicodeTable::GetTailoringInfo(System.Int32)
extern "C" TailoringInfo_t1330 * MSCompatUnicodeTable_GetTailoringInfo_m6999 (Object_t * __this /* static, unused */, int32_t ___lcid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::BuildTailoringTables(System.Globalization.CultureInfo,Mono.Globalization.Unicode.TailoringInfo,Mono.Globalization.Unicode.Contraction[]&,Mono.Globalization.Unicode.Level2Map[]&)
extern "C" void MSCompatUnicodeTable_BuildTailoringTables_m7000 (Object_t * __this /* static, unused */, CultureInfo_t745 * ___culture, TailoringInfo_t1330 * ___t, ContractionU5BU5D_t1337** ___contractions, Level2MapU5BU5D_t1338** ___diacriticals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::SetCJKReferences(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C" void MSCompatUnicodeTable_SetCJKReferences_m7001 (Object_t * __this /* static, unused */, String_t* ___name, CodePointIndexer_t1329 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t1329 ** ___lv2Indexer, uint8_t** ___lv2Table, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Category(System.Int32)
extern "C" uint8_t MSCompatUnicodeTable_Category_m7002 (Object_t * __this /* static, unused */, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level1(System.Int32)
extern "C" uint8_t MSCompatUnicodeTable_Level1_m7003 (Object_t * __this /* static, unused */, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level2(System.Int32)
extern "C" uint8_t MSCompatUnicodeTable_Level2_m7004 (Object_t * __this /* static, unused */, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level3(System.Int32)
extern "C" uint8_t MSCompatUnicodeTable_Level3_m7005 (Object_t * __this /* static, unused */, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorable(System.Int32,System.Byte)
extern "C" bool MSCompatUnicodeTable_IsIgnorable_m7006 (Object_t * __this /* static, unused */, int32_t ___cp, uint8_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorableNonSpacing(System.Int32)
extern "C" bool MSCompatUnicodeTable_IsIgnorableNonSpacing_m7007 (Object_t * __this /* static, unused */, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::ToKanaTypeInsensitive(System.Int32)
extern "C" int32_t MSCompatUnicodeTable_ToKanaTypeInsensitive_m7008 (Object_t * __this /* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::ToWidthCompat(System.Int32)
extern "C" int32_t MSCompatUnicodeTable_ToWidthCompat_m7009 (Object_t * __this /* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::HasSpecialWeight(System.Char)
extern "C" bool MSCompatUnicodeTable_HasSpecialWeight_m7010 (Object_t * __this /* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsHalfWidthKana(System.Char)
extern "C" bool MSCompatUnicodeTable_IsHalfWidthKana_m7011 (Object_t * __this /* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsHiragana(System.Char)
extern "C" bool MSCompatUnicodeTable_IsHiragana_m7012 (Object_t * __this /* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsJapaneseSmallLetter(System.Char)
extern "C" bool MSCompatUnicodeTable_IsJapaneseSmallLetter_m7013 (Object_t * __this /* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Globalization.Unicode.MSCompatUnicodeTable::GetResource(System.String)
extern "C" IntPtr_t MSCompatUnicodeTable_GetResource_m7014 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Globalization.Unicode.MSCompatUnicodeTable::UInt32FromBytePtr(System.Byte*,System.UInt32)
extern "C" uint32_t MSCompatUnicodeTable_UInt32FromBytePtr_m7015 (Object_t * __this /* static, unused */, uint8_t* ___raw, uint32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJK(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C" void MSCompatUnicodeTable_FillCJK_m7016 (Object_t * __this /* static, unused */, String_t* ___culture, CodePointIndexer_t1329 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t1329 ** ___lv2Indexer, uint8_t** ___lv2Table, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJKCore(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C" void MSCompatUnicodeTable_FillCJKCore_m7017 (Object_t * __this /* static, unused */, String_t* ___culture, CodePointIndexer_t1329 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t1329 ** ___cjkLv2Indexer, uint8_t** ___lv2Table, MethodInfo* method) IL2CPP_METHOD_ATTR;

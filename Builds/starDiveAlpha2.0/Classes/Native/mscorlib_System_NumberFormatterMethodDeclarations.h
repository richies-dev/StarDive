#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NumberFormatter
struct NumberFormatter_t1950;
// System.Globalization.CultureInfo
struct CultureInfo_t812;
// System.Threading.Thread
struct Thread_t1671;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1346;
// System.IFormatProvider
struct IFormatProvider_t1320;
// System.Text.StringBuilder
struct StringBuilder_t472;
// System.Int32[]
struct Int32U5BU5D_t102;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
extern "C" void NumberFormatter__ctor_m11049 (NumberFormatter_t1950 * __this, Thread_t1671 * ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::.cctor()
extern "C" void NumberFormatter__cctor_m11050 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
extern "C" void NumberFormatter_GetFormatterTables_m11051 (Object_t * __this /* static, unused */, uint64_t** ___MantissaBitsTable, int32_t** ___TensExponentTable, uint16_t** ___DigitLowerTable, uint16_t** ___DigitUpperTable, int64_t** ___TenPowersList, int32_t** ___DecHexDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
extern "C" int64_t NumberFormatter_GetTenPowerOf_m11052 (Object_t * __this /* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
extern "C" void NumberFormatter_InitDecHexDigits_m11053 (NumberFormatter_t1950 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
extern "C" void NumberFormatter_InitDecHexDigits_m11054 (NumberFormatter_t1950 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
extern "C" void NumberFormatter_InitDecHexDigits_m11055 (NumberFormatter_t1950 * __this, uint32_t ___hi, uint64_t ___lo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
extern "C" uint32_t NumberFormatter_FastToDecHex_m11056 (Object_t * __this /* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
extern "C" uint32_t NumberFormatter_ToDecHex_m11057 (Object_t * __this /* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
extern "C" int32_t NumberFormatter_FastDecHexLen_m11058 (Object_t * __this /* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
extern "C" int32_t NumberFormatter_DecHexLen_m11059 (Object_t * __this /* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen()
extern "C" int32_t NumberFormatter_DecHexLen_m11060 (NumberFormatter_t1950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
extern "C" int32_t NumberFormatter_ScaleOrder_m11061 (Object_t * __this /* static, unused */, int64_t ___hi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
extern "C" int32_t NumberFormatter_InitialFloatingPrecision_m11062 (NumberFormatter_t1950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
extern "C" int32_t NumberFormatter_ParsePrecision_m11063 (Object_t * __this /* static, unused */, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String)
extern "C" void NumberFormatter_Init_m11064 (NumberFormatter_t1950 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitHex(System.UInt64)
extern "C" void NumberFormatter_InitHex_m11065 (NumberFormatter_t1950 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
extern "C" void NumberFormatter_Init_m11066 (NumberFormatter_t1950 * __this, String_t* ___format, int32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
extern "C" void NumberFormatter_Init_m11067 (NumberFormatter_t1950 * __this, String_t* ___format, uint32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
extern "C" void NumberFormatter_Init_m11068 (NumberFormatter_t1950 * __this, String_t* ___format, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
extern "C" void NumberFormatter_Init_m11069 (NumberFormatter_t1950 * __this, String_t* ___format, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
extern "C" void NumberFormatter_Init_m11070 (NumberFormatter_t1950 * __this, String_t* ___format, double ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
extern "C" void NumberFormatter_Init_m11071 (NumberFormatter_t1950 * __this, String_t* ___format, Decimal_t1347  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
extern "C" void NumberFormatter_ResetCharBuf_m11072 (NumberFormatter_t1950 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Resize(System.Int32)
extern "C" void NumberFormatter_Resize_m11073 (NumberFormatter_t1950 * __this, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char)
extern "C" void NumberFormatter_Append_m11074 (NumberFormatter_t1950 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
extern "C" void NumberFormatter_Append_m11075 (NumberFormatter_t1950 * __this, uint16_t ___c, int32_t ___cnt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.String)
extern "C" void NumberFormatter_Append_m11076 (NumberFormatter_t1950 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
extern "C" NumberFormatInfo_t1346 * NumberFormatter_GetNumberFormatInstance_m11077 (NumberFormatter_t1950 * __this, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
extern "C" void NumberFormatter_set_CurrentCulture_m11078 (NumberFormatter_t1950 * __this, CultureInfo_t812 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_IntegerDigits()
extern "C" int32_t NumberFormatter_get_IntegerDigits_m11079 (NumberFormatter_t1950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_DecimalDigits()
extern "C" int32_t NumberFormatter_get_DecimalDigits_m11080 (NumberFormatter_t1950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
extern "C" bool NumberFormatter_get_IsFloatingSource_m11081 (NumberFormatter_t1950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZero()
extern "C" bool NumberFormatter_get_IsZero_m11082 (NumberFormatter_t1950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
extern "C" bool NumberFormatter_get_IsZeroInteger_m11083 (NumberFormatter_t1950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RoundPos(System.Int32)
extern "C" void NumberFormatter_RoundPos_m11084 (NumberFormatter_t1950 * __this, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
extern "C" bool NumberFormatter_RoundDecimal_m11085 (NumberFormatter_t1950 * __this, int32_t ___decimals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
extern "C" bool NumberFormatter_RoundBits_m11086 (NumberFormatter_t1950 * __this, int32_t ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RemoveTrailingZeros()
extern "C" void NumberFormatter_RemoveTrailingZeros_m11087 (NumberFormatter_t1950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AddOneToDecHex()
extern "C" void NumberFormatter_AddOneToDecHex_m11088 (NumberFormatter_t1950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
extern "C" uint32_t NumberFormatter_AddOneToDecHex_m11089 (Object_t * __this /* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros()
extern "C" int32_t NumberFormatter_CountTrailingZeros_m11090 (NumberFormatter_t1950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
extern "C" int32_t NumberFormatter_CountTrailingZeros_m11091 (Object_t * __this /* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetInstance()
extern "C" NumberFormatter_t1950 * NumberFormatter_GetInstance_m11092 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Release()
extern "C" void NumberFormatter_Release_m11093 (NumberFormatter_t1950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
extern "C" void NumberFormatter_SetThreadCurrentCulture_m11094 (Object_t * __this /* static, unused */, CultureInfo_t812 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11095 (Object_t * __this /* static, unused */, String_t* ___format, int8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11096 (Object_t * __this /* static, unused */, String_t* ___format, uint8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11097 (Object_t * __this /* static, unused */, String_t* ___format, uint16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11098 (Object_t * __this /* static, unused */, String_t* ___format, int16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11099 (Object_t * __this /* static, unused */, String_t* ___format, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11100 (Object_t * __this /* static, unused */, String_t* ___format, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11101 (Object_t * __this /* static, unused */, String_t* ___format, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11102 (Object_t * __this /* static, unused */, String_t* ___format, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11103 (Object_t * __this /* static, unused */, String_t* ___format, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11104 (Object_t * __this /* static, unused */, String_t* ___format, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11105 (Object_t * __this /* static, unused */, String_t* ___format, Decimal_t1347  ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11106 (Object_t * __this /* static, unused */, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11107 (Object_t * __this /* static, unused */, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11108 (Object_t * __this /* static, unused */, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11109 (Object_t * __this /* static, unused */, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11110 (Object_t * __this /* static, unused */, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11111 (Object_t * __this /* static, unused */, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_FastIntegerToString_m11112 (NumberFormatter_t1950 * __this, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
extern "C" String_t* NumberFormatter_IntegerToString_m11113 (NumberFormatter_t1950 * __this, String_t* ___format, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_NumberToString_m11114 (NumberFormatter_t1950 * __this, String_t* ___format, NumberFormatInfo_t1346 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatCurrency_m11115 (NumberFormatter_t1950 * __this, int32_t ___precision, NumberFormatInfo_t1346 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatDecimal_m11116 (NumberFormatter_t1950 * __this, int32_t ___precision, NumberFormatInfo_t1346 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
extern "C" String_t* NumberFormatter_FormatHexadecimal_m11117 (NumberFormatter_t1950 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatFixedPoint_m11118 (NumberFormatter_t1950 * __this, int32_t ___precision, NumberFormatInfo_t1346 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatRoundtrip_m11119 (NumberFormatter_t1950 * __this, double ___origval, NumberFormatInfo_t1346 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatRoundtrip_m11120 (NumberFormatter_t1950 * __this, float ___origval, NumberFormatInfo_t1346 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatGeneral_m11121 (NumberFormatter_t1950 * __this, int32_t ___precision, NumberFormatInfo_t1346 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatNumber_m11122 (NumberFormatter_t1950 * __this, int32_t ___precision, NumberFormatInfo_t1346 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatPercent_m11123 (NumberFormatter_t1950 * __this, int32_t ___precision, NumberFormatInfo_t1346 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatExponential_m11124 (NumberFormatter_t1950 * __this, int32_t ___precision, NumberFormatInfo_t1346 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
extern "C" String_t* NumberFormatter_FormatExponential_m11125 (NumberFormatter_t1950 * __this, int32_t ___precision, NumberFormatInfo_t1346 * ___nfi, int32_t ___expDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatCustom_m11126 (NumberFormatter_t1950 * __this, String_t* ___format, NumberFormatInfo_t1346 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
extern "C" void NumberFormatter_ZeroTrimEnd_m11127 (Object_t * __this /* static, unused */, StringBuilder_t472 * ___sb, bool ___canEmpty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
extern "C" bool NumberFormatter_IsZeroOnly_m11128 (Object_t * __this /* static, unused */, StringBuilder_t472 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
extern "C" void NumberFormatter_AppendNonNegativeNumber_m11129 (Object_t * __this /* static, unused */, StringBuilder_t472 * ___sb, int32_t ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendIntegerString_m11130 (NumberFormatter_t1950 * __this, int32_t ___minLength, StringBuilder_t472 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
extern "C" void NumberFormatter_AppendIntegerString_m11131 (NumberFormatter_t1950 * __this, int32_t ___minLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendDecimalString_m11132 (NumberFormatter_t1950 * __this, int32_t ___precision, StringBuilder_t472 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
extern "C" void NumberFormatter_AppendDecimalString_m11133 (NumberFormatter_t1950 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
extern "C" void NumberFormatter_AppendIntegerStringWithGroupSeparator_m11134 (NumberFormatter_t1950 * __this, Int32U5BU5D_t102* ___groups, String_t* ___groupSeparator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
extern "C" void NumberFormatter_AppendExponent_m11135 (NumberFormatter_t1950 * __this, NumberFormatInfo_t1346 * ___nfi, int32_t ___exponent, int32_t ___minDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
extern "C" void NumberFormatter_AppendOneDigit_m11136 (NumberFormatter_t1950 * __this, int32_t ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
extern "C" void NumberFormatter_FastAppendDigits_m11137 (NumberFormatter_t1950 * __this, int32_t ___val, bool ___force, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
extern "C" void NumberFormatter_AppendDigits_m11138 (NumberFormatter_t1950 * __this, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendDigits_m11139 (NumberFormatter_t1950 * __this, int32_t ___start, int32_t ___end, StringBuilder_t472 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Multiply10(System.Int32)
extern "C" void NumberFormatter_Multiply10_m11140 (NumberFormatter_t1950 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Divide10(System.Int32)
extern "C" void NumberFormatter_Divide10_m11141 (NumberFormatter_t1950 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetClone()
extern "C" NumberFormatter_t1950 * NumberFormatter_GetClone_m11142 (NumberFormatter_t1950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DateTimeUtils
struct DateTimeUtils_t1845;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t403;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1431;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Int32 System.DateTimeUtils::CountRepeat(System.String,System.Int32,System.Char)
extern "C" int32_t DateTimeUtils_CountRepeat_m10617 (Object_t * __this /* static, unused */, String_t* ___fmt, int32_t ___p, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeUtils::ZeroPad(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C" void DateTimeUtils_ZeroPad_m10618 (Object_t * __this /* static, unused */, StringBuilder_t403 * ___output, int32_t ___digits, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeUtils::ParseQuotedString(System.String,System.Int32,System.Text.StringBuilder)
extern "C" int32_t DateTimeUtils_ParseQuotedString_m10619 (Object_t * __this /* static, unused */, String_t* ___fmt, int32_t ___pos, StringBuilder_t403 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::GetStandardPattern(System.Char,System.Globalization.DateTimeFormatInfo,System.Boolean&,System.Boolean&)
extern "C" String_t* DateTimeUtils_GetStandardPattern_m10620 (Object_t * __this /* static, unused */, uint16_t ___format, DateTimeFormatInfo_t1431 * ___dfi, bool* ___useutc, bool* ___use_invariant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::GetStandardPattern(System.Char,System.Globalization.DateTimeFormatInfo,System.Boolean&,System.Boolean&,System.Boolean)
extern "C" String_t* DateTimeUtils_GetStandardPattern_m10621 (Object_t * __this /* static, unused */, uint16_t ___format, DateTimeFormatInfo_t1431 * ___dfi, bool* ___useutc, bool* ___use_invariant, bool ___date_time_offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::ToString(System.DateTime,System.String,System.Globalization.DateTimeFormatInfo)
extern "C" String_t* DateTimeUtils_ToString_m10622 (Object_t * __this /* static, unused */, DateTime_t579  ___dt, String_t* ___format, DateTimeFormatInfo_t1431 * ___dfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::ToString(System.DateTime,System.Nullable`1<System.TimeSpan>,System.String,System.Globalization.DateTimeFormatInfo)
extern "C" String_t* DateTimeUtils_ToString_m10623 (Object_t * __this /* static, unused */, DateTime_t579  ___dt, Nullable_1_t1846  ___utc_offset, String_t* ___format, DateTimeFormatInfo_t1431 * ___dfi, MethodInfo* method) IL2CPP_METHOD_ATTR;

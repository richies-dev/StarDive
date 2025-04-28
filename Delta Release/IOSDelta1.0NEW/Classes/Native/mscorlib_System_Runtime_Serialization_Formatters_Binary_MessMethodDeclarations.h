#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct MessageFormatter_t1675;
// System.IO.BinaryWriter
struct BinaryWriter_t1443;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t1629;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1638;
// System.IO.BinaryReader
struct BinaryReader_t1442;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t1673;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t161;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t1643;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t896;
// System.String[]
struct StringU5BU5D_t34;
// System.String
struct String_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodCall(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C" void MessageFormatter_WriteMethodCall_m9283 (Object_t * __this /* static, unused */, BinaryWriter_t1443 * ___writer, Object_t * ___obj, HeaderU5BU5D_t1629* ___headers, Object_t * ___surrogateSelector, StreamingContext_t701  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodResponse(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C" void MessageFormatter_WriteMethodResponse_m9284 (Object_t * __this /* static, unused */, BinaryWriter_t1443 * ___writer, Object_t * ___obj, HeaderU5BU5D_t1629* ___headers, Object_t * ___surrogateSelector, StreamingContext_t701  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodCall_m9285 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1442 * ___reader, bool ___hasHeaders, HeaderHandler_t1673 * ___headerHandler, BinaryFormatter_t161 * ___formatter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodResponse_m9286 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1442 * ___reader, bool ___hasHeaders, HeaderHandler_t1673 * ___headerHandler, Object_t * ___methodCallMessage, BinaryFormatter_t161 * ___formatter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::AllTypesArePrimitive(System.Object[])
extern "C" bool MessageFormatter_AllTypesArePrimitive_m9287 (Object_t * __this /* static, unused */, ObjectU5BU5D_t148* ___objects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsMethodPrimitive(System.Type)
extern "C" bool MessageFormatter_IsMethodPrimitive_m9288 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Serialization.Formatters.Binary.MessageFormatter::GetExtraProperties(System.Collections.IDictionary,System.String[])
extern "C" ObjectU5BU5D_t148* MessageFormatter_GetExtraProperties_m9289 (Object_t * __this /* static, unused */, Object_t * ___properties, StringU5BU5D_t34* ___internalKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsInternalKey(System.String,System.String[])
extern "C" bool MessageFormatter_IsInternalKey_m9290 (Object_t * __this /* static, unused */, String_t* ___key, StringU5BU5D_t34* ___internalKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;

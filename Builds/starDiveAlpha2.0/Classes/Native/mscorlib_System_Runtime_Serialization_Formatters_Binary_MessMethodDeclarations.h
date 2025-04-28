#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct MessageFormatter_t1741;
// System.IO.BinaryWriter
struct BinaryWriter_t1510;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t1695;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1704;
// System.IO.BinaryReader
struct BinaryReader_t1509;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t1739;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t232;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t1709;
// System.Object[]
struct ObjectU5BU5D_t219;
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t963;
// System.String[]
struct StringU5BU5D_t104;
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
extern "C" void MessageFormatter_WriteMethodCall_m9519 (Object_t * __this /* static, unused */, BinaryWriter_t1510 * ___writer, Object_t * ___obj, HeaderU5BU5D_t1695* ___headers, Object_t * ___surrogateSelector, StreamingContext_t767  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodResponse(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C" void MessageFormatter_WriteMethodResponse_m9520 (Object_t * __this /* static, unused */, BinaryWriter_t1510 * ___writer, Object_t * ___obj, HeaderU5BU5D_t1695* ___headers, Object_t * ___surrogateSelector, StreamingContext_t767  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodCall_m9521 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1509 * ___reader, bool ___hasHeaders, HeaderHandler_t1739 * ___headerHandler, BinaryFormatter_t232 * ___formatter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodResponse_m9522 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1509 * ___reader, bool ___hasHeaders, HeaderHandler_t1739 * ___headerHandler, Object_t * ___methodCallMessage, BinaryFormatter_t232 * ___formatter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::AllTypesArePrimitive(System.Object[])
extern "C" bool MessageFormatter_AllTypesArePrimitive_m9523 (Object_t * __this /* static, unused */, ObjectU5BU5D_t219* ___objects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsMethodPrimitive(System.Type)
extern "C" bool MessageFormatter_IsMethodPrimitive_m9524 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Serialization.Formatters.Binary.MessageFormatter::GetExtraProperties(System.Collections.IDictionary,System.String[])
extern "C" ObjectU5BU5D_t219* MessageFormatter_GetExtraProperties_m9525 (Object_t * __this /* static, unused */, Object_t * ___properties, StringU5BU5D_t104* ___internalKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsInternalKey(System.String,System.String[])
extern "C" bool MessageFormatter_IsInternalKey_m9526 (Object_t * __this /* static, unused */, String_t* ___key, StringU5BU5D_t104* ___internalKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1389;
// System.Exception
struct Exception_t163;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1393;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t1392;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t1391;

// System.Void Mono.Xml.SmallXmlParser::.ctor()
extern "C" void SmallXmlParser__ctor_m7453 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::Error(System.String)
extern "C" Exception_t163 * SmallXmlParser_Error_m7454 (SmallXmlParser_t1389 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::UnexpectedEndError()
extern "C" Exception_t163 * SmallXmlParser_UnexpectedEndError_m7455 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsNameChar(System.Char,System.Boolean)
extern "C" bool SmallXmlParser_IsNameChar_m7456 (SmallXmlParser_t1389 * __this, uint16_t ___c, bool ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsWhitespace(System.Int32)
extern "C" bool SmallXmlParser_IsWhitespace_m7457 (SmallXmlParser_t1389 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces()
extern "C" void SmallXmlParser_SkipWhitespaces_m7458 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleWhitespaces()
extern "C" void SmallXmlParser_HandleWhitespaces_m7459 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
extern "C" void SmallXmlParser_SkipWhitespaces_m7460 (SmallXmlParser_t1389 * __this, bool ___expected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Peek()
extern "C" int32_t SmallXmlParser_Peek_m7461 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Read()
extern "C" int32_t SmallXmlParser_Read_m7462 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Expect(System.Int32)
extern "C" void SmallXmlParser_Expect_m7463 (SmallXmlParser_t1389 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadUntil(System.Char,System.Boolean)
extern "C" String_t* SmallXmlParser_ReadUntil_m7464 (SmallXmlParser_t1389 * __this, uint16_t ___until, bool ___handleReferences, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadName()
extern "C" String_t* SmallXmlParser_ReadName_m7465 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Parse(System.IO.TextReader,Mono.Xml.SmallXmlParser/IContentHandler)
extern "C" void SmallXmlParser_Parse_m7466 (SmallXmlParser_t1389 * __this, TextReader_t1393 * ___input, Object_t * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Cleanup()
extern "C" void SmallXmlParser_Cleanup_m7467 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadContent()
extern "C" void SmallXmlParser_ReadContent_m7468 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleBufferedContent()
extern "C" void SmallXmlParser_HandleBufferedContent_m7469 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCharacters()
extern "C" void SmallXmlParser_ReadCharacters_m7470 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadReference()
extern "C" void SmallXmlParser_ReadReference_m7471 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::ReadCharacterReference()
extern "C" int32_t SmallXmlParser_ReadCharacterReference_m7472 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl)
extern "C" void SmallXmlParser_ReadAttribute_m7473 (SmallXmlParser_t1389 * __this, AttrListImpl_t1391 * ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCDATASection()
extern "C" void SmallXmlParser_ReadCDATASection_m7474 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadComment()
extern "C" void SmallXmlParser_ReadComment_m7475 (SmallXmlParser_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

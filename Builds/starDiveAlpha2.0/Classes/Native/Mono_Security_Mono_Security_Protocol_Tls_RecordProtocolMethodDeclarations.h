#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1261;
// Mono.Security.Protocol.Tls.Context
struct Context_t1252;
// System.IO.Stream
struct Stream_t233;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1263;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1262;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1019;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t1250;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1253;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.AlertLevel
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.Context)
extern "C" void RecordProtocol__ctor_m5846 (RecordProtocol_t1261 * __this, Stream_t233 * ___innerStream, Context_t1252 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.cctor()
extern "C" void RecordProtocol__cctor_m5847 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::get_Context()
extern "C" Context_t1252 * RecordProtocol_get_Context_m5848 (RecordProtocol_t1261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" void RecordProtocol_SendRecord_m5849 (RecordProtocol_t1261 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessChangeCipherSpec()
extern "C" void RecordProtocol_ProcessChangeCipherSpec_m5850 (RecordProtocol_t1261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t1262 * RecordProtocol_GetMessage_m5851 (RecordProtocol_t1261 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginReceiveRecord(System.IO.Stream,System.AsyncCallback,System.Object)
extern "C" Object_t * RecordProtocol_BeginReceiveRecord_m5852 (RecordProtocol_t1261 * __this, Stream_t233 * ___record, AsyncCallback_t380 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalReceiveRecordCallback(System.IAsyncResult)
extern "C" void RecordProtocol_InternalReceiveRecordCallback_m5853 (RecordProtocol_t1261 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EndReceiveRecord(System.IAsyncResult)
extern "C" ByteU5BU5D_t1019* RecordProtocol_EndReceiveRecord_m5854 (RecordProtocol_t1261 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReceiveRecord(System.IO.Stream)
extern "C" ByteU5BU5D_t1019* RecordProtocol_ReceiveRecord_m5855 (RecordProtocol_t1261 * __this, Stream_t233 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadRecordBuffer(System.Int32,System.IO.Stream)
extern "C" ByteU5BU5D_t1019* RecordProtocol_ReadRecordBuffer_m5856 (RecordProtocol_t1261 * __this, int32_t ___contentType, Stream_t233 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadClientHelloV2(System.IO.Stream)
extern "C" ByteU5BU5D_t1019* RecordProtocol_ReadClientHelloV2_m5857 (RecordProtocol_t1261 * __this, Stream_t233 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadStandardRecordBuffer(System.IO.Stream)
extern "C" ByteU5BU5D_t1019* RecordProtocol_ReadStandardRecordBuffer_m5858 (RecordProtocol_t1261 * __this, Stream_t233 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void RecordProtocol_ProcessAlert_m5859 (RecordProtocol_t1261 * __this, uint8_t ___alertLevel, uint8_t ___alertDesc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void RecordProtocol_SendAlert_m5860 (RecordProtocol_t1261 * __this, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void RecordProtocol_SendAlert_m5861 (RecordProtocol_t1261 * __this, uint8_t ___level, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.Alert)
extern "C" void RecordProtocol_SendAlert_m5862 (RecordProtocol_t1261 * __this, Alert_t1250 * ___alert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendChangeCipherSpec()
extern "C" void RecordProtocol_SendChangeCipherSpec_m5863 (RecordProtocol_t1261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.AsyncCallback,System.Object)
extern "C" Object_t * RecordProtocol_BeginSendRecord_m5864 (RecordProtocol_t1261 * __this, uint8_t ___handshakeType, AsyncCallback_t380 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalSendRecordCallback(System.IAsyncResult)
extern "C" void RecordProtocol_InternalSendRecordCallback_m5865 (RecordProtocol_t1261 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.AsyncCallback,System.Object)
extern "C" Object_t * RecordProtocol_BeginSendRecord_m5866 (RecordProtocol_t1261 * __this, uint8_t ___contentType, ByteU5BU5D_t1019* ___recordData, AsyncCallback_t380 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::EndSendRecord(System.IAsyncResult)
extern "C" void RecordProtocol_EndSendRecord_m5867 (RecordProtocol_t1261 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" void RecordProtocol_SendRecord_m5868 (RecordProtocol_t1261 * __this, uint8_t ___contentType, ByteU5BU5D_t1019* ___recordData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t1019* RecordProtocol_EncodeRecord_m5869 (RecordProtocol_t1261 * __this, uint8_t ___contentType, ByteU5BU5D_t1019* ___recordData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t1019* RecordProtocol_EncodeRecord_m5870 (RecordProtocol_t1261 * __this, uint8_t ___contentType, ByteU5BU5D_t1019* ___recordData, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::encryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t1019* RecordProtocol_encryptRecordFragment_m5871 (RecordProtocol_t1261 * __this, uint8_t ___contentType, ByteU5BU5D_t1019* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::decryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t1019* RecordProtocol_decryptRecordFragment_m5872 (RecordProtocol_t1261 * __this, uint8_t ___contentType, ByteU5BU5D_t1019* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol::Compare(System.Byte[],System.Byte[])
extern "C" bool RecordProtocol_Compare_m5873 (RecordProtocol_t1261 * __this, ByteU5BU5D_t1019* ___array1, ByteU5BU5D_t1019* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessCipherSpecV2Buffer(Mono.Security.Protocol.Tls.SecurityProtocolType,System.Byte[])
extern "C" void RecordProtocol_ProcessCipherSpecV2Buffer_m5874 (RecordProtocol_t1261 * __this, int32_t ___protocol, ByteU5BU5D_t1019* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.RecordProtocol::MapV2CipherCode(System.String,System.Int32)
extern "C" CipherSuite_t1253 * RecordProtocol_MapV2CipherCode_m5875 (RecordProtocol_t1261 * __this, String_t* ___prefix, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;

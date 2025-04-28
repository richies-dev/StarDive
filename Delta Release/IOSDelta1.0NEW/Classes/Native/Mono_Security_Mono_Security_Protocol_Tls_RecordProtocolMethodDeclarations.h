#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1194;
// Mono.Security.Protocol.Tls.Context
struct Context_t1185;
// System.IO.Stream
struct Stream_t162;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1196;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1195;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t952;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t1183;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1186;
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
extern "C" void RecordProtocol__ctor_m5609 (RecordProtocol_t1194 * __this, Stream_t162 * ___innerStream, Context_t1185 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.cctor()
extern "C" void RecordProtocol__cctor_m5610 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::get_Context()
extern "C" Context_t1185 * RecordProtocol_get_Context_m5611 (RecordProtocol_t1194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" void RecordProtocol_SendRecord_m5612 (RecordProtocol_t1194 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessChangeCipherSpec()
extern "C" void RecordProtocol_ProcessChangeCipherSpec_m5613 (RecordProtocol_t1194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t1195 * RecordProtocol_GetMessage_m5614 (RecordProtocol_t1194 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginReceiveRecord(System.IO.Stream,System.AsyncCallback,System.Object)
extern "C" Object_t * RecordProtocol_BeginReceiveRecord_m5615 (RecordProtocol_t1194 * __this, Stream_t162 * ___record, AsyncCallback_t311 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalReceiveRecordCallback(System.IAsyncResult)
extern "C" void RecordProtocol_InternalReceiveRecordCallback_m5616 (RecordProtocol_t1194 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EndReceiveRecord(System.IAsyncResult)
extern "C" ByteU5BU5D_t952* RecordProtocol_EndReceiveRecord_m5617 (RecordProtocol_t1194 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReceiveRecord(System.IO.Stream)
extern "C" ByteU5BU5D_t952* RecordProtocol_ReceiveRecord_m5618 (RecordProtocol_t1194 * __this, Stream_t162 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadRecordBuffer(System.Int32,System.IO.Stream)
extern "C" ByteU5BU5D_t952* RecordProtocol_ReadRecordBuffer_m5619 (RecordProtocol_t1194 * __this, int32_t ___contentType, Stream_t162 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadClientHelloV2(System.IO.Stream)
extern "C" ByteU5BU5D_t952* RecordProtocol_ReadClientHelloV2_m5620 (RecordProtocol_t1194 * __this, Stream_t162 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadStandardRecordBuffer(System.IO.Stream)
extern "C" ByteU5BU5D_t952* RecordProtocol_ReadStandardRecordBuffer_m5621 (RecordProtocol_t1194 * __this, Stream_t162 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void RecordProtocol_ProcessAlert_m5622 (RecordProtocol_t1194 * __this, uint8_t ___alertLevel, uint8_t ___alertDesc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void RecordProtocol_SendAlert_m5623 (RecordProtocol_t1194 * __this, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void RecordProtocol_SendAlert_m5624 (RecordProtocol_t1194 * __this, uint8_t ___level, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.Alert)
extern "C" void RecordProtocol_SendAlert_m5625 (RecordProtocol_t1194 * __this, Alert_t1183 * ___alert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendChangeCipherSpec()
extern "C" void RecordProtocol_SendChangeCipherSpec_m5626 (RecordProtocol_t1194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.AsyncCallback,System.Object)
extern "C" Object_t * RecordProtocol_BeginSendRecord_m5627 (RecordProtocol_t1194 * __this, uint8_t ___handshakeType, AsyncCallback_t311 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalSendRecordCallback(System.IAsyncResult)
extern "C" void RecordProtocol_InternalSendRecordCallback_m5628 (RecordProtocol_t1194 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.AsyncCallback,System.Object)
extern "C" Object_t * RecordProtocol_BeginSendRecord_m5629 (RecordProtocol_t1194 * __this, uint8_t ___contentType, ByteU5BU5D_t952* ___recordData, AsyncCallback_t311 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::EndSendRecord(System.IAsyncResult)
extern "C" void RecordProtocol_EndSendRecord_m5630 (RecordProtocol_t1194 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" void RecordProtocol_SendRecord_m5631 (RecordProtocol_t1194 * __this, uint8_t ___contentType, ByteU5BU5D_t952* ___recordData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t952* RecordProtocol_EncodeRecord_m5632 (RecordProtocol_t1194 * __this, uint8_t ___contentType, ByteU5BU5D_t952* ___recordData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t952* RecordProtocol_EncodeRecord_m5633 (RecordProtocol_t1194 * __this, uint8_t ___contentType, ByteU5BU5D_t952* ___recordData, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::encryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t952* RecordProtocol_encryptRecordFragment_m5634 (RecordProtocol_t1194 * __this, uint8_t ___contentType, ByteU5BU5D_t952* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::decryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t952* RecordProtocol_decryptRecordFragment_m5635 (RecordProtocol_t1194 * __this, uint8_t ___contentType, ByteU5BU5D_t952* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol::Compare(System.Byte[],System.Byte[])
extern "C" bool RecordProtocol_Compare_m5636 (RecordProtocol_t1194 * __this, ByteU5BU5D_t952* ___array1, ByteU5BU5D_t952* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessCipherSpecV2Buffer(Mono.Security.Protocol.Tls.SecurityProtocolType,System.Byte[])
extern "C" void RecordProtocol_ProcessCipherSpecV2Buffer_m5637 (RecordProtocol_t1194 * __this, int32_t ___protocol, ByteU5BU5D_t952* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.RecordProtocol::MapV2CipherCode(System.String,System.Int32)
extern "C" CipherSuite_t1186 * RecordProtocol_MapV2CipherCode_m5638 (RecordProtocol_t1194 * __this, String_t* ___prefix, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;

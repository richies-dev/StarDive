#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1210;
// System.IO.Stream
struct Stream_t162;
// System.Byte[]
struct ByteU5BU5D_t952;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t163;
// System.Threading.WaitHandle
struct WaitHandle_t1211;
// System.AsyncCallback
struct AsyncCallback_t311;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m5588 (ReceiveRecordAsyncResult_t1210 * __this, AsyncCallback_t311 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t952* ___initialBuffer, Stream_t162 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t162 * ReceiveRecordAsyncResult_get_Record_m5589 (ReceiveRecordAsyncResult_t1210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t952* ReceiveRecordAsyncResult_get_ResultingBuffer_m5590 (ReceiveRecordAsyncResult_t1210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t952* ReceiveRecordAsyncResult_get_InitialBuffer_m5591 (ReceiveRecordAsyncResult_t1210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m5592 (ReceiveRecordAsyncResult_t1210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t163 * ReceiveRecordAsyncResult_get_AsyncException_m5593 (ReceiveRecordAsyncResult_t1210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m5594 (ReceiveRecordAsyncResult_t1210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1211 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m5595 (ReceiveRecordAsyncResult_t1210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m5596 (ReceiveRecordAsyncResult_t1210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5597 (ReceiveRecordAsyncResult_t1210 * __this, Exception_t163 * ___ex, ByteU5BU5D_t952* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5598 (ReceiveRecordAsyncResult_t1210 * __this, Exception_t163 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5599 (ReceiveRecordAsyncResult_t1210 * __this, ByteU5BU5D_t952* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;

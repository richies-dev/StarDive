#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t1197_il2cpp_TypeInfo;
extern TypeInfo Locale_t1198_il2cpp_TypeInfo;
extern TypeInfo Sign_t1199_il2cpp_TypeInfo;
extern TypeInfo ModulusRing_t1201_il2cpp_TypeInfo;
extern TypeInfo Kernel_t1202_il2cpp_TypeInfo;
extern TypeInfo BigInteger_t1200_il2cpp_TypeInfo;
extern TypeInfo ConfidenceFactor_t1206_il2cpp_TypeInfo;
extern TypeInfo PrimalityTests_t1207_il2cpp_TypeInfo;
extern TypeInfo PrimeGeneratorBase_t1208_il2cpp_TypeInfo;
extern TypeInfo SequentialSearchPrimeGeneratorBase_t1210_il2cpp_TypeInfo;
extern TypeInfo ASN1_t1030_il2cpp_TypeInfo;
extern TypeInfo ASN1Convert_t1211_il2cpp_TypeInfo;
extern TypeInfo BitConverterLE_t1212_il2cpp_TypeInfo;
extern TypeInfo ContentInfo_t1213_il2cpp_TypeInfo;
extern TypeInfo EncryptedData_t1214_il2cpp_TypeInfo;
extern TypeInfo PKCS7_t1215_il2cpp_TypeInfo;
extern TypeInfo ARC4Managed_t1216_il2cpp_TypeInfo;
extern TypeInfo CryptoConvert_t1219_il2cpp_TypeInfo;
extern TypeInfo KeyBuilder_t1220_il2cpp_TypeInfo;
extern TypeInfo MD2_t1221_il2cpp_TypeInfo;
extern TypeInfo MD2Managed_t1223_il2cpp_TypeInfo;
extern TypeInfo PKCS1_t1224_il2cpp_TypeInfo;
extern TypeInfo PrivateKeyInfo_t1225_il2cpp_TypeInfo;
extern TypeInfo EncryptedPrivateKeyInfo_t1226_il2cpp_TypeInfo;
extern TypeInfo PKCS8_t1227_il2cpp_TypeInfo;
extern TypeInfo RC4_t1217_il2cpp_TypeInfo;
extern TypeInfo KeyGeneratedEventHandler_t1231_il2cpp_TypeInfo;
extern TypeInfo RSAManaged_t1152_il2cpp_TypeInfo;
extern TypeInfo SafeBag_t1232_il2cpp_TypeInfo;
extern TypeInfo DeriveBytes_t1233_il2cpp_TypeInfo;
extern TypeInfo PKCS12_t1160_il2cpp_TypeInfo;
extern TypeInfo X501_t1157_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t1018_il2cpp_TypeInfo;
extern TypeInfo X509CertificateEnumerator_t1166_il2cpp_TypeInfo;
extern TypeInfo X509CertificateCollection_t1162_il2cpp_TypeInfo;
extern TypeInfo X509Chain_t1234_il2cpp_TypeInfo;
extern TypeInfo X509ChainStatusFlags_t1235_il2cpp_TypeInfo;
extern TypeInfo X509CrlEntry_t1044_il2cpp_TypeInfo;
extern TypeInfo X509Crl_t1042_il2cpp_TypeInfo;
extern TypeInfo X509Extension_t1043_il2cpp_TypeInfo;
extern TypeInfo X509ExtensionCollection_t1165_il2cpp_TypeInfo;
extern TypeInfo X509Store_t1057_il2cpp_TypeInfo;
extern TypeInfo X509StoreManager_t1236_il2cpp_TypeInfo;
extern TypeInfo X509Stores_t1058_il2cpp_TypeInfo;
extern TypeInfo AuthorityKeyIdentifierExtension_t1164_il2cpp_TypeInfo;
extern TypeInfo BasicConstraintsExtension_t1237_il2cpp_TypeInfo;
extern TypeInfo ExtendedKeyUsageExtension_t1238_il2cpp_TypeInfo;
extern TypeInfo GeneralNames_t1239_il2cpp_TypeInfo;
extern TypeInfo KeyUsages_t1240_il2cpp_TypeInfo;
extern TypeInfo KeyUsageExtension_t1241_il2cpp_TypeInfo;
extern TypeInfo CertTypes_t1242_il2cpp_TypeInfo;
extern TypeInfo NetscapeCertTypeExtension_t1243_il2cpp_TypeInfo;
extern TypeInfo SubjectAltNameExtension_t1244_il2cpp_TypeInfo;
extern TypeInfo HMAC_t1245_il2cpp_TypeInfo;
extern TypeInfo MD5SHA1_t1247_il2cpp_TypeInfo;
extern TypeInfo AlertLevel_t1248_il2cpp_TypeInfo;
extern TypeInfo AlertDescription_t1249_il2cpp_TypeInfo;
extern TypeInfo Alert_t1250_il2cpp_TypeInfo;
extern TypeInfo CipherAlgorithmType_t1251_il2cpp_TypeInfo;
extern TypeInfo CipherSuite_t1253_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteCollection_t1254_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteFactory_t1257_il2cpp_TypeInfo;
extern TypeInfo ClientContext_t1259_il2cpp_TypeInfo;
extern TypeInfo ClientRecordProtocol_t1260_il2cpp_TypeInfo;
extern TypeInfo ClientSessionInfo_t1264_il2cpp_TypeInfo;
extern TypeInfo ClientSessionCache_t1265_il2cpp_TypeInfo;
extern TypeInfo ContentType_t1266_il2cpp_TypeInfo;
extern TypeInfo Context_t1252_il2cpp_TypeInfo;
extern TypeInfo ExchangeAlgorithmType_t1270_il2cpp_TypeInfo;
extern TypeInfo HandshakeState_t1271_il2cpp_TypeInfo;
extern TypeInfo HashAlgorithmType_t1272_il2cpp_TypeInfo;
extern TypeInfo HttpsClientStream_t1275_il2cpp_TypeInfo;
extern TypeInfo ReceiveRecordAsyncResult_t1277_il2cpp_TypeInfo;
extern TypeInfo SendRecordAsyncResult_t1279_il2cpp_TypeInfo;
extern TypeInfo RecordProtocol_t1261_il2cpp_TypeInfo;
extern TypeInfo RSASslSignatureDeformatter_t1280_il2cpp_TypeInfo;
extern TypeInfo RSASslSignatureFormatter_t1282_il2cpp_TypeInfo;
extern TypeInfo SecurityCompressionType_t1284_il2cpp_TypeInfo;
extern TypeInfo SecurityParameters_t1269_il2cpp_TypeInfo;
extern TypeInfo SecurityProtocolType_t1285_il2cpp_TypeInfo;
extern TypeInfo ServerContext_t1286_il2cpp_TypeInfo;
extern TypeInfo ValidationResult_t1287_il2cpp_TypeInfo;
extern TypeInfo SslClientStream_t1258_il2cpp_TypeInfo;
extern TypeInfo SslCipherSuite_t1256_il2cpp_TypeInfo;
extern TypeInfo SslHandshakeHash_t1291_il2cpp_TypeInfo;
extern TypeInfo InternalAsyncResult_t1292_il2cpp_TypeInfo;
extern TypeInfo SslStreamBase_t1290_il2cpp_TypeInfo;
extern TypeInfo TlsCipherSuite_t1255_il2cpp_TypeInfo;
extern TypeInfo TlsClientSettings_t1268_il2cpp_TypeInfo;
extern TypeInfo TlsException_t1294_il2cpp_TypeInfo;
extern TypeInfo TlsServerSettings_t1267_il2cpp_TypeInfo;
extern TypeInfo TlsStream_t1263_il2cpp_TypeInfo;
extern TypeInfo ClientCertificateType_t1296_il2cpp_TypeInfo;
extern TypeInfo HandshakeMessage_t1262_il2cpp_TypeInfo;
extern TypeInfo HandshakeType_t1297_il2cpp_TypeInfo;
extern TypeInfo TlsClientCertificate_t1298_il2cpp_TypeInfo;
extern TypeInfo TlsClientCertificateVerify_t1299_il2cpp_TypeInfo;
extern TypeInfo TlsClientFinished_t1300_il2cpp_TypeInfo;
extern TypeInfo TlsClientHello_t1301_il2cpp_TypeInfo;
extern TypeInfo TlsClientKeyExchange_t1302_il2cpp_TypeInfo;
extern TypeInfo TlsServerCertificate_t1303_il2cpp_TypeInfo;
extern TypeInfo TlsServerCertificateRequest_t1304_il2cpp_TypeInfo;
extern TypeInfo TlsServerFinished_t1305_il2cpp_TypeInfo;
extern TypeInfo TlsServerHello_t1306_il2cpp_TypeInfo;
extern TypeInfo TlsServerHelloDone_t1307_il2cpp_TypeInfo;
extern TypeInfo TlsServerKeyExchange_t1308_il2cpp_TypeInfo;
extern TypeInfo PrimalityTest_t1209_il2cpp_TypeInfo;
extern TypeInfo CertificateValidationCallback_t1288_il2cpp_TypeInfo;
extern TypeInfo CertificateValidationCallback2_t1289_il2cpp_TypeInfo;
extern TypeInfo CertificateSelectionCallback_t1273_il2cpp_TypeInfo;
extern TypeInfo PrivateKeySelectionCallback_t1274_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$3132_t1309_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$256_t1310_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$20_t1311_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$32_t1312_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$48_t1313_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$64_t1314_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$12_t1315_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$16_t1316_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$4_t1317_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1318_il2cpp_TypeInfo;
#include "utils/RegisterRuntimeInitializeAndCleanup.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_Mono_Security_Assembly_Types[122] = 
{
	&U3CModuleU3E_t1197_il2cpp_TypeInfo,
	&Locale_t1198_il2cpp_TypeInfo,
	&Sign_t1199_il2cpp_TypeInfo,
	&ModulusRing_t1201_il2cpp_TypeInfo,
	&Kernel_t1202_il2cpp_TypeInfo,
	&BigInteger_t1200_il2cpp_TypeInfo,
	&ConfidenceFactor_t1206_il2cpp_TypeInfo,
	&PrimalityTests_t1207_il2cpp_TypeInfo,
	&PrimeGeneratorBase_t1208_il2cpp_TypeInfo,
	&SequentialSearchPrimeGeneratorBase_t1210_il2cpp_TypeInfo,
	&ASN1_t1030_il2cpp_TypeInfo,
	&ASN1Convert_t1211_il2cpp_TypeInfo,
	&BitConverterLE_t1212_il2cpp_TypeInfo,
	&ContentInfo_t1213_il2cpp_TypeInfo,
	&EncryptedData_t1214_il2cpp_TypeInfo,
	&PKCS7_t1215_il2cpp_TypeInfo,
	&ARC4Managed_t1216_il2cpp_TypeInfo,
	&CryptoConvert_t1219_il2cpp_TypeInfo,
	&KeyBuilder_t1220_il2cpp_TypeInfo,
	&MD2_t1221_il2cpp_TypeInfo,
	&MD2Managed_t1223_il2cpp_TypeInfo,
	&PKCS1_t1224_il2cpp_TypeInfo,
	&PrivateKeyInfo_t1225_il2cpp_TypeInfo,
	&EncryptedPrivateKeyInfo_t1226_il2cpp_TypeInfo,
	&PKCS8_t1227_il2cpp_TypeInfo,
	&RC4_t1217_il2cpp_TypeInfo,
	&KeyGeneratedEventHandler_t1231_il2cpp_TypeInfo,
	&RSAManaged_t1152_il2cpp_TypeInfo,
	&SafeBag_t1232_il2cpp_TypeInfo,
	&DeriveBytes_t1233_il2cpp_TypeInfo,
	&PKCS12_t1160_il2cpp_TypeInfo,
	&X501_t1157_il2cpp_TypeInfo,
	&X509Certificate_t1018_il2cpp_TypeInfo,
	&X509CertificateEnumerator_t1166_il2cpp_TypeInfo,
	&X509CertificateCollection_t1162_il2cpp_TypeInfo,
	&X509Chain_t1234_il2cpp_TypeInfo,
	&X509ChainStatusFlags_t1235_il2cpp_TypeInfo,
	&X509CrlEntry_t1044_il2cpp_TypeInfo,
	&X509Crl_t1042_il2cpp_TypeInfo,
	&X509Extension_t1043_il2cpp_TypeInfo,
	&X509ExtensionCollection_t1165_il2cpp_TypeInfo,
	&X509Store_t1057_il2cpp_TypeInfo,
	&X509StoreManager_t1236_il2cpp_TypeInfo,
	&X509Stores_t1058_il2cpp_TypeInfo,
	&AuthorityKeyIdentifierExtension_t1164_il2cpp_TypeInfo,
	&BasicConstraintsExtension_t1237_il2cpp_TypeInfo,
	&ExtendedKeyUsageExtension_t1238_il2cpp_TypeInfo,
	&GeneralNames_t1239_il2cpp_TypeInfo,
	&KeyUsages_t1240_il2cpp_TypeInfo,
	&KeyUsageExtension_t1241_il2cpp_TypeInfo,
	&CertTypes_t1242_il2cpp_TypeInfo,
	&NetscapeCertTypeExtension_t1243_il2cpp_TypeInfo,
	&SubjectAltNameExtension_t1244_il2cpp_TypeInfo,
	&HMAC_t1245_il2cpp_TypeInfo,
	&MD5SHA1_t1247_il2cpp_TypeInfo,
	&AlertLevel_t1248_il2cpp_TypeInfo,
	&AlertDescription_t1249_il2cpp_TypeInfo,
	&Alert_t1250_il2cpp_TypeInfo,
	&CipherAlgorithmType_t1251_il2cpp_TypeInfo,
	&CipherSuite_t1253_il2cpp_TypeInfo,
	&CipherSuiteCollection_t1254_il2cpp_TypeInfo,
	&CipherSuiteFactory_t1257_il2cpp_TypeInfo,
	&ClientContext_t1259_il2cpp_TypeInfo,
	&ClientRecordProtocol_t1260_il2cpp_TypeInfo,
	&ClientSessionInfo_t1264_il2cpp_TypeInfo,
	&ClientSessionCache_t1265_il2cpp_TypeInfo,
	&ContentType_t1266_il2cpp_TypeInfo,
	&Context_t1252_il2cpp_TypeInfo,
	&ExchangeAlgorithmType_t1270_il2cpp_TypeInfo,
	&HandshakeState_t1271_il2cpp_TypeInfo,
	&HashAlgorithmType_t1272_il2cpp_TypeInfo,
	&HttpsClientStream_t1275_il2cpp_TypeInfo,
	&ReceiveRecordAsyncResult_t1277_il2cpp_TypeInfo,
	&SendRecordAsyncResult_t1279_il2cpp_TypeInfo,
	&RecordProtocol_t1261_il2cpp_TypeInfo,
	&RSASslSignatureDeformatter_t1280_il2cpp_TypeInfo,
	&RSASslSignatureFormatter_t1282_il2cpp_TypeInfo,
	&SecurityCompressionType_t1284_il2cpp_TypeInfo,
	&SecurityParameters_t1269_il2cpp_TypeInfo,
	&SecurityProtocolType_t1285_il2cpp_TypeInfo,
	&ServerContext_t1286_il2cpp_TypeInfo,
	&ValidationResult_t1287_il2cpp_TypeInfo,
	&SslClientStream_t1258_il2cpp_TypeInfo,
	&SslCipherSuite_t1256_il2cpp_TypeInfo,
	&SslHandshakeHash_t1291_il2cpp_TypeInfo,
	&InternalAsyncResult_t1292_il2cpp_TypeInfo,
	&SslStreamBase_t1290_il2cpp_TypeInfo,
	&TlsCipherSuite_t1255_il2cpp_TypeInfo,
	&TlsClientSettings_t1268_il2cpp_TypeInfo,
	&TlsException_t1294_il2cpp_TypeInfo,
	&TlsServerSettings_t1267_il2cpp_TypeInfo,
	&TlsStream_t1263_il2cpp_TypeInfo,
	&ClientCertificateType_t1296_il2cpp_TypeInfo,
	&HandshakeMessage_t1262_il2cpp_TypeInfo,
	&HandshakeType_t1297_il2cpp_TypeInfo,
	&TlsClientCertificate_t1298_il2cpp_TypeInfo,
	&TlsClientCertificateVerify_t1299_il2cpp_TypeInfo,
	&TlsClientFinished_t1300_il2cpp_TypeInfo,
	&TlsClientHello_t1301_il2cpp_TypeInfo,
	&TlsClientKeyExchange_t1302_il2cpp_TypeInfo,
	&TlsServerCertificate_t1303_il2cpp_TypeInfo,
	&TlsServerCertificateRequest_t1304_il2cpp_TypeInfo,
	&TlsServerFinished_t1305_il2cpp_TypeInfo,
	&TlsServerHello_t1306_il2cpp_TypeInfo,
	&TlsServerHelloDone_t1307_il2cpp_TypeInfo,
	&TlsServerKeyExchange_t1308_il2cpp_TypeInfo,
	&PrimalityTest_t1209_il2cpp_TypeInfo,
	&CertificateValidationCallback_t1288_il2cpp_TypeInfo,
	&CertificateValidationCallback2_t1289_il2cpp_TypeInfo,
	&CertificateSelectionCallback_t1273_il2cpp_TypeInfo,
	&PrivateKeySelectionCallback_t1274_il2cpp_TypeInfo,
	&$ArrayType$3132_t1309_il2cpp_TypeInfo,
	&$ArrayType$256_t1310_il2cpp_TypeInfo,
	&$ArrayType$20_t1311_il2cpp_TypeInfo,
	&$ArrayType$32_t1312_il2cpp_TypeInfo,
	&$ArrayType$48_t1313_il2cpp_TypeInfo,
	&$ArrayType$64_t1314_il2cpp_TypeInfo,
	&$ArrayType$12_t1315_il2cpp_TypeInfo,
	&$ArrayType$16_t1316_il2cpp_TypeInfo,
	&$ArrayType$4_t1317_il2cpp_TypeInfo,
	&U3CPrivateImplementationDetailsU3E_t1318_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache;
Il2CppAssembly g_Mono_Security_Assembly = 
{
	{ "Mono.Security", 0, 0, "\x0\x24\x0\x0\x4\x80\x0\x0\x94\x0\x0\x0\x6\x2\x0\x0\x0\x24\x0\x0\x52\x53\x41\x31\x0\x4\x0\x0\x1\x0\x1\x0\x79\x15\x99\x77\xD2\xD0\x3A\x8E\x6B\xEA\x7A\x2E\x74\xE8\xD1\xAF\xCC\x93\xE8\x85\x19\x74\x95\x2B\xB4\x80\xA1\x2C\x91\x34\x47\x4D\x4\x6\x24\x47\xC3\x7E\xE\x68\xC0\x80\x53\x6F\xCF\x3C\x3F\xBE\x2F\xF9\xC9\x79\xCE\x99\x84\x75\xE5\x6\xE8\xCE\x82\xDD\x5B\xF\x35\xD\xC1\xE\x93\xBF\x2E\xEE\xCF\x87\x4B\x24\x77\xC\x50\x81\xDB\xEA\x74\x47\xFD\xDA\xFA\x27\x7B\x22\xDE\x47\xD6\xFF\xEA\x44\x96\x74\xA4\xF9\xFC\xCF\x84\xD1\x50\x69\x8\x93\x80\x28\x4D\xBD\xD3\x5F\x46\xCD\xFF\x12\xA1\xBD\x78\xE4\xEF\x0\x65\xD0\x16\xDF", { 0x07, 0x38, 0xEB, 0x9F, 0x13, 0x2E, 0xD7, 0x56 }, 32772, 0, 1, 2, 0, 5, 0 },
	&g_Mono_Security_dll_Image,
	&g_Mono_Security_Assembly__CustomAttributeCache,
};
Il2CppImage g_Mono_Security_dll_Image = 
{
	 "Mono.Security.dll" ,
	&g_Mono_Security_Assembly,
	g_Mono_Security_Assembly_Types,
	121,
	NULL,
};
static void s_Mono_SecurityRegistration()
{
	RegisterAssembly (&g_Mono_Security_Assembly);
}
static il2cpp::utils::RegisterRuntimeInitializeAndCleanup s_Mono_SecurityRegistrationVariable(&s_Mono_SecurityRegistration, NULL);

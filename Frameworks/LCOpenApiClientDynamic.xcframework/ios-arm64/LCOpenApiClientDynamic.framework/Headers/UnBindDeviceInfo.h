/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_UnBindDeviceInfo_H_
#define _LC_OPENAPI_CLIENT_UnBindDeviceInfo_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取未绑定的设备信息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class UnBindDeviceInfoRequest : public LCOpenApiRequest
	{
	public:
		class UnBindDeviceInfoRequestData
		{
		public:
			UnBindDeviceInfoRequestData();
			~UnBindDeviceInfoRequestData();
			
		public:
			/** 设备市场型号 */
			string deviceModelName;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备配网能力 */
			string ncCode;
		public:
			/** 设备ID */
			string deviceId;
		public:
			/** [cstr]unBindDeviceInfo */
			#define _STATIC_UnBindDeviceInfoRequestData_method "unBindDeviceInfo"
			string method;
		public:
			/** 设备二维码型号 */
			string deviceCodeModel;

		};
	public:
		UnBindDeviceInfoRequest();
		~UnBindDeviceInfoRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		UnBindDeviceInfoRequestData data;
		MetaInfo* _metainfo_UnBindDeviceInfoRequestData;
	};

	
	typedef UnBindDeviceInfoRequest::UnBindDeviceInfoRequestData UnBindDeviceInfoRequestData;


	class UnBindDeviceInfoResponse : public LCOpenApiResponse
	{
	public:
		class UnBindDeviceInfoResponseData
		{
		public:
			UnBindDeviceInfoResponseData();
			~UnBindDeviceInfoResponseData();
			
		public:
			/** NVR */
			string catalog;
		public:
			/** 设备类型 */
			string deviceType;
		public:
			/** 设备支持的配对模式：SmartConfig,SoundWave,SoftAP,LAN,SIMCard,QRCode,SoundWaveV2,NBIOT,Bluetooth配件不返回 */
			string wifiConfigMode;
		public:
			/** 37777 */
			string port;
		public:
			/** define a list with struct of UnBindDeviceInfoResponseData_DeviceModelImages */
			class UnBindDeviceInfoResponseData_DeviceModelImages : public LCOpenApiBase
			{
			public:
				UnBindDeviceInfoResponseData_DeviceModelImages();
				~UnBindDeviceInfoResponseData_DeviceModelImages();
			public:
				/** 设备图片url */
				string commonList;
			public:
				/** 设备图片url */
				string deviceManagerManualDetails;
			public:
				/** 设备图片url */
				string deviceManagerWork;
			public:
				/** 设备图片url */
				string messageList;
			public:
				/** 设备图片url */
				string deviceManagerAddDevice;
			};
		public:
			UnBindDeviceInfoResponseData_DeviceModelImages* deviceModelImages;
		public:
			/** exist */
			string deviceExist;
		public:
			/** online */
			string status;
		public:
			/** [bool]可选,P2P是否加密,默认false-不支持即不加密;true-加密;特别说明:当前字段是理想定制项目独有新增字段 */
			bool encryptP2P;
		public:
			/** 554 */
			string rtspPort;
		public:
			/** 基础设备类型 */
			string deviceCodeModelBase;
		public:
			/** 设备市场型号 */
			string deviceModelName;
		public:
			/** device */
			string type;
		public:
			/**  */
			string modelName;
		public:
			/** [bool]设备是否支持用户自选可用的配网方式：true:支持自选,false:不支持自选 */
			bool wifiConfigModeOptional;
		public:
			/** [O]设备能力项，逗号隔开，如AlarmMD,AudioTalk,AlarmPIR,WLAN,VVP2P，详见乐橙开放平台设备协议 */
			string ability;
		public:
			/** unbind */
			string bindStatus;
		public:
			/** 设备无线支持频段的序列：2.4Ghz,5Ghz */
			string wifiTransferMode;
		public:
			/** 设备上报型号 */
			string deviceCodeModel;
		public:
			/** 0 */
			string privateMediaPort;
		public:
			/** xxx@qq.com */
			string owner;
		public:
			/** IP Camera */
			string deviceModel;
		public:
			/** 1 */
			string channelNum;
		public:
			/** 37778 */
			string tlsPrivatePort;
		public:
			/** PaaS */
			string accessType;
		public:
			/** IPC-WL46AP:01:02:13:89:41:00:01:10:01:01:04:3E8:00:00:00:00:00:01:00:00:200 */
			string hwId;
		public:
			/** 80 */
			string httpPort;

		};
	public:
		UnBindDeviceInfoResponse();
		~UnBindDeviceInfoResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		UnBindDeviceInfoResponseData data;
		MetaInfo* _metainfo_UnBindDeviceInfoResponseData;
	};

	
	typedef UnBindDeviceInfoResponse::UnBindDeviceInfoResponseData UnBindDeviceInfoResponseData;
	typedef UnBindDeviceInfoResponse::UnBindDeviceInfoResponseData::UnBindDeviceInfoResponseData_DeviceModelImages UnBindDeviceInfoResponseData_DeviceModelImages;

}
}

#endif

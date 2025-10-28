/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_getDeviceUPnP_H_
#define _LC_OPENAPI_CLIENT_getDeviceUPnP_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备UPNP详细信息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class getDeviceUPnPRequest : public LCOpenApiRequest
	{
	public:
		class getDeviceUPnPRequestData
		{
		public:
			getDeviceUPnPRequestData();
			~getDeviceUPnPRequestData();
			
		public:
			/** WebService : HTTP服务 PrivService : DVRIP的TCP/UDP服务 RTSPService : RTSP服务 */
			string serviceType;
		public:
			/** [cstr]getDeviceUPnP */
			#define _STATIC_getDeviceUPnPRequestData_method "getDeviceUPnP"
			string method;
		public:
			/** accessToken */
			string token;
		public:
			/** 设备SN */
			string deviceId;

		};
	public:
		getDeviceUPnPRequest();
		~getDeviceUPnPRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		getDeviceUPnPRequestData data;
		MetaInfo* _metainfo_getDeviceUPnPRequestData;
	};

	
	typedef getDeviceUPnPRequest::getDeviceUPnPRequestData getDeviceUPnPRequestData;


	class getDeviceUPnPResponse : public LCOpenApiResponse
	{
	public:
		class getDeviceUPnPResponseData
		{
		public:
			getDeviceUPnPResponseData();
			~getDeviceUPnPResponseData();
			
		public:
			/** 外网IP地址，非必含 */
			string IP;
		public:
			/** 外网端口，非必含 */
			string outerPort;
		public:
			/** 协议类型,TCP或UDP，非必含 */
			string protocol;
		public:
			/** 内网IP，非必含 */
			string innerAddress;
		public:
			/** on：开启，off：关闭 */
			string enable;
		public:
			/** 外网IP，非必含 */
			string outerAddress;
		public:
			/** 内网端口，非必含 */
			string innerPort;
		public:
			/** WebService : HTTP服务 PrivService : DVRIP的TCP/UDP服务 RTSPService : RTSP服务 */
			string serviceType;

		};
	public:
		getDeviceUPnPResponse();
		~getDeviceUPnPResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		getDeviceUPnPResponseData data;
		MetaInfo* _metainfo_getDeviceUPnPResponseData;
	};

	
	typedef getDeviceUPnPResponse::getDeviceUPnPResponseData getDeviceUPnPResponseData;

}
}

#endif

/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_setDeviceUPnP_H_
#define _LC_OPENAPI_CLIENT_setDeviceUPnP_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
如果缓存中已经有该accessToken了，那么直接返回
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class setDeviceUPnPRequest : public LCOpenApiRequest
	{
	public:
		class setDeviceUPnPRequestData
		{
		public:
			setDeviceUPnPRequestData();
			~setDeviceUPnPRequestData();
			
		public:
			/** {{accessToken}} */
			string token;
		public:
			/** on：开启，off：关闭 */
			string enable;
		public:
			/** WebService : HTTP服务 PrivService : DVRIP的TCP/UDP服务 RTSPService : RTSP服务 */
			string serviceType;
		public:
			/** [cstr]setDeviceUPnP */
			#define _STATIC_setDeviceUPnPRequestData_method "setDeviceUPnP"
			string method;
		public:
			/** 设备SN */
			string deviceId;

		};
	public:
		setDeviceUPnPRequest();
		~setDeviceUPnPRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		setDeviceUPnPRequestData data;
		MetaInfo* _metainfo_setDeviceUPnPRequestData;
	};

	
	typedef setDeviceUPnPRequest::setDeviceUPnPRequestData setDeviceUPnPRequestData;


	class setDeviceUPnPResponse : public LCOpenApiResponse
	{
	public:
		class setDeviceUPnPResponseData
		{
		public:
			setDeviceUPnPResponseData();
			~setDeviceUPnPResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		setDeviceUPnPResponse();
		~setDeviceUPnPResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		setDeviceUPnPResponseData data;
		MetaInfo* _metainfo_setDeviceUPnPResponseData;
	};

	
	typedef setDeviceUPnPResponse::setDeviceUPnPResponseData setDeviceUPnPResponseData;

}
}

#endif

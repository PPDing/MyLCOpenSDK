/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DevicePort_H_
#define _LC_OPENAPI_CLIENT_DevicePort_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备端口

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DevicePortRequest : public LCOpenApiRequest
	{
	public:
		class DevicePortRequestData
		{
		public:
			DevicePortRequestData();
			~DevicePortRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		DevicePortRequest();
		~DevicePortRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		DevicePortRequestData data;
		MetaInfo* _metainfo_DevicePortRequestData;
	};

	
	typedef DevicePortRequest::DevicePortRequestData DevicePortRequestData;


	class DevicePortResponse : public LCOpenApiResponse
	{
	public:
		class DevicePortResponseData
		{
		public:
			DevicePortResponseData();
			~DevicePortResponseData();
			
		public:
			/** [int]rtsp端口 */
			int rtspPort;
		public:
			/** [int]http端口 */
			int httpPort;
		public:
			/** [int]私有协议端口 */
			int privatePort;

		};
	public:
		DevicePortResponse();
		~DevicePortResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		DevicePortResponseData data;
		MetaInfo* _metainfo_DevicePortResponseData;
	};

	
	typedef DevicePortResponse::DevicePortResponseData DevicePortResponseData;

}
}

#endif

/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_lightColorTemperatureList_H_
#define _LC_OPENAPI_CLIENT_lightColorTemperatureList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取探照灯的色温
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class lightColorTemperatureListRequest : public LCOpenApiRequest
	{
	public:
		class lightColorTemperatureListRequestData
		{
		public:
			lightColorTemperatureListRequestData();
			~lightColorTemperatureListRequestData();
			
		public:
			/** 通道号 */
			string channelId;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		lightColorTemperatureListRequest();
		~lightColorTemperatureListRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		lightColorTemperatureListRequestData data;
		MetaInfo* _metainfo_lightColorTemperatureListRequestData;
	};

	
	typedef lightColorTemperatureListRequest::lightColorTemperatureListRequestData lightColorTemperatureListRequestData;


	class lightColorTemperatureListResponse : public LCOpenApiResponse
	{
	public:
		class lightColorTemperatureListResponseData
		{
		public:
			lightColorTemperatureListResponseData();
			~lightColorTemperatureListResponseData();
			
		public:
			/** 色温 cold/warm */
			string colorTemperature;
		public:
			/** 支持的色温列表 */
			LCOpenApiVector<string> supports;

		};
	public:
		lightColorTemperatureListResponse();
		~lightColorTemperatureListResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		lightColorTemperatureListResponseData data;
		MetaInfo* _metainfo_lightColorTemperatureListResponseData;
	};

	
	typedef lightColorTemperatureListResponse::lightColorTemperatureListResponseData lightColorTemperatureListResponseData;

}
}

#endif

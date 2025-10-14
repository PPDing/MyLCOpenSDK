/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_lightColorTemperatureSet_H_
#define _LC_OPENAPI_CLIENT_lightColorTemperatureSet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置探照灯的色温
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class lightColorTemperatureSetRequest : public LCOpenApiRequest
	{
	public:
		class lightColorTemperatureSetRequestData
		{
		public:
			lightColorTemperatureSetRequestData();
			~lightColorTemperatureSetRequestData();
			
		public:
			/** 色温，cold/warm */
			string colorTemperature;
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
		lightColorTemperatureSetRequest();
		~lightColorTemperatureSetRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		lightColorTemperatureSetRequestData data;
		MetaInfo* _metainfo_lightColorTemperatureSetRequestData;
	};

	
	typedef lightColorTemperatureSetRequest::lightColorTemperatureSetRequestData lightColorTemperatureSetRequestData;


	class lightColorTemperatureSetResponse : public LCOpenApiResponse
	{
	public:
		class lightColorTemperatureSetResponseData
		{
		public:
			lightColorTemperatureSetResponseData();
			~lightColorTemperatureSetResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		lightColorTemperatureSetResponse();
		~lightColorTemperatureSetResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		lightColorTemperatureSetResponseData data;
		MetaInfo* _metainfo_lightColorTemperatureSetResponseData;
	};

	
	typedef lightColorTemperatureSetResponse::lightColorTemperatureSetResponseData lightColorTemperatureSetResponseData;

}
}

#endif

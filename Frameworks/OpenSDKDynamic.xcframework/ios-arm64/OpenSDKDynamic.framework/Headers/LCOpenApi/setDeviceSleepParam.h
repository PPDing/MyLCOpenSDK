/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_setDeviceSleepParam_H_
#define _LC_OPENAPI_CLIENT_setDeviceSleepParam_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备休眠设置
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class setDeviceSleepParamRequest : public LCOpenApiRequest
	{
	public:
		class setDeviceSleepParamRequestData
		{
		public:
			setDeviceSleepParamRequestData();
			~setDeviceSleepParamRequestData();
			
		public:
			/**  */
			string token;
		public:
			/** [bool]休眠使能是否开启 */
			bool enable;
		public:
			/** 可选，不存在默认查询的是设备 */
			string channelId;
		public:
			/** 休眠阈值0-100 */
			string electricity;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		setDeviceSleepParamRequest();
		~setDeviceSleepParamRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		setDeviceSleepParamRequestData data;
		MetaInfo* _metainfo_setDeviceSleepParamRequestData;
	};

	
	typedef setDeviceSleepParamRequest::setDeviceSleepParamRequestData setDeviceSleepParamRequestData;


	class setDeviceSleepParamResponse : public LCOpenApiResponse
	{
	public:
		class setDeviceSleepParamResponseData
		{
		public:
			setDeviceSleepParamResponseData();
			~setDeviceSleepParamResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		setDeviceSleepParamResponse();
		~setDeviceSleepParamResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		setDeviceSleepParamResponseData data;
		MetaInfo* _metainfo_setDeviceSleepParamResponseData;
	};

	
	typedef setDeviceSleepParamResponse::setDeviceSleepParamResponseData setDeviceSleepParamResponseData;

}
}

#endif

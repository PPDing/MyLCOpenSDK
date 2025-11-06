/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetDeviceSensitivity_H_
#define _LC_OPENAPI_CLIENT_GetDeviceSensitivity_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取火情灵敏度
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetDeviceSensitivityRequest : public LCOpenApiRequest
	{
	public:
		class GetDeviceSensitivityRequestData
		{
		public:
			GetDeviceSensitivityRequestData();
			~GetDeviceSensitivityRequestData();
			
		public:
			/** 灵敏度类型,type = fwSens火灾预警灵敏度 */
			string type;
		public:
			/** 通道,不存在默认为设备 */
			string channelId;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		GetDeviceSensitivityRequest();
		~GetDeviceSensitivityRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		GetDeviceSensitivityRequestData data;
		MetaInfo* _metainfo_GetDeviceSensitivityRequestData;
	};

	
	typedef GetDeviceSensitivityRequest::GetDeviceSensitivityRequestData GetDeviceSensitivityRequestData;


	class GetDeviceSensitivityResponse : public LCOpenApiResponse
	{
	public:
		class GetDeviceSensitivityResponseData
		{
		public:
			GetDeviceSensitivityResponseData();
			~GetDeviceSensitivityResponseData();
			
		public:
			/** 可选，挡位 */
			string gear;
		public:
			/** 可选, 按档位选取时 支持的档位集合，当gear存在时，grears必选 */
			LCOpenApiVector<string> grears;
		public:
			/** 可选， 按范围选取时 取值范围 */
			LCOpenApiVector<string> senRange;
		public:
			/** 当前灵敏度 */
			string sensitivity;

		};
	public:
		GetDeviceSensitivityResponse();
		~GetDeviceSensitivityResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		GetDeviceSensitivityResponseData data;
		MetaInfo* _metainfo_GetDeviceSensitivityResponseData;
	};

	
	typedef GetDeviceSensitivityResponse::GetDeviceSensitivityResponseData GetDeviceSensitivityResponseData;

}
}

#endif

/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetDeviceSensitivity_H_
#define _LC_OPENAPI_CLIENT_SetDeviceSensitivity_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置火情灵敏度
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetDeviceSensitivityRequest : public LCOpenApiRequest
	{
	public:
		class SetDeviceSensitivityRequestData
		{
		public:
			SetDeviceSensitivityRequestData();
			~SetDeviceSensitivityRequestData();
			
		public:
			/** 灵敏度类型,type = fwSens火灾预警灵敏度 */
			string type;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 灵敏度 */
			string sensitivity;
		public:
			/** 可选，档位 */
			string gear;
		public:
			/** 通道,不存在默认为设备 */
			string channelId;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		SetDeviceSensitivityRequest();
		~SetDeviceSensitivityRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		SetDeviceSensitivityRequestData data;
		MetaInfo* _metainfo_SetDeviceSensitivityRequestData;
	};

	
	typedef SetDeviceSensitivityRequest::SetDeviceSensitivityRequestData SetDeviceSensitivityRequestData;


	class SetDeviceSensitivityResponse : public LCOpenApiResponse
	{
	public:
		class SetDeviceSensitivityResponseData
		{
		public:
			SetDeviceSensitivityResponseData();
			~SetDeviceSensitivityResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetDeviceSensitivityResponse();
		~SetDeviceSensitivityResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		SetDeviceSensitivityResponseData data;
		MetaInfo* _metainfo_SetDeviceSensitivityResponseData;
	};

	
	typedef SetDeviceSensitivityResponse::SetDeviceSensitivityResponseData SetDeviceSensitivityResponseData;

}
}

#endif

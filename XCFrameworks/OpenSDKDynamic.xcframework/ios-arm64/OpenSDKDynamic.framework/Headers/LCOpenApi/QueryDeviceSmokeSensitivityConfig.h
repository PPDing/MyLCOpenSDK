/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryDeviceSmokeSensitivityConfig_H_
#define _LC_OPENAPI_CLIENT_QueryDeviceSmokeSensitivityConfig_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询设备烟感灵敏度配置
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryDeviceSmokeSensitivityConfigRequest : public LCOpenApiRequest
	{
	public:
		class QueryDeviceSmokeSensitivityConfigRequestData
		{
		public:
			QueryDeviceSmokeSensitivityConfigRequestData();
			~QueryDeviceSmokeSensitivityConfigRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		QueryDeviceSmokeSensitivityConfigRequest();
		~QueryDeviceSmokeSensitivityConfigRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		QueryDeviceSmokeSensitivityConfigRequestData data;
		MetaInfo* _metainfo_QueryDeviceSmokeSensitivityConfigRequestData;
	};

	
	typedef QueryDeviceSmokeSensitivityConfigRequest::QueryDeviceSmokeSensitivityConfigRequestData QueryDeviceSmokeSensitivityConfigRequestData;


	class QueryDeviceSmokeSensitivityConfigResponse : public LCOpenApiResponse
	{
	public:
		class QueryDeviceSmokeSensitivityConfigResponseData
		{
		public:
			QueryDeviceSmokeSensitivityConfigResponseData();
			~QueryDeviceSmokeSensitivityConfigResponseData();
			
		public:
			/** 当前灵敏度档位 */
			string gear;
		public:
			/** 设备支持的灵敏度档位 */
			LCOpenApiVector<string> gearRange;

		};
	public:
		QueryDeviceSmokeSensitivityConfigResponse();
		~QueryDeviceSmokeSensitivityConfigResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		QueryDeviceSmokeSensitivityConfigResponseData data;
		MetaInfo* _metainfo_QueryDeviceSmokeSensitivityConfigResponseData;
	};

	
	typedef QueryDeviceSmokeSensitivityConfigResponse::QueryDeviceSmokeSensitivityConfigResponseData QueryDeviceSmokeSensitivityConfigResponseData;

}
}

#endif

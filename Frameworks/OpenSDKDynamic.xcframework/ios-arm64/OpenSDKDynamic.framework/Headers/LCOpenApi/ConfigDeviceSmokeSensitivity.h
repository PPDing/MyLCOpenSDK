/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ConfigDeviceSmokeSensitivity_H_
#define _LC_OPENAPI_CLIENT_ConfigDeviceSmokeSensitivity_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
配置设备烟感灵敏度
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ConfigDeviceSmokeSensitivityRequest : public LCOpenApiRequest
	{
	public:
		class ConfigDeviceSmokeSensitivityRequestData
		{
		public:
			ConfigDeviceSmokeSensitivityRequestData();
			~ConfigDeviceSmokeSensitivityRequestData();
			
		public:
			/** 灵敏度档位 */
			string gear;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		ConfigDeviceSmokeSensitivityRequest();
		~ConfigDeviceSmokeSensitivityRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		ConfigDeviceSmokeSensitivityRequestData data;
		MetaInfo* _metainfo_ConfigDeviceSmokeSensitivityRequestData;
	};

	
	typedef ConfigDeviceSmokeSensitivityRequest::ConfigDeviceSmokeSensitivityRequestData ConfigDeviceSmokeSensitivityRequestData;


	class ConfigDeviceSmokeSensitivityResponse : public LCOpenApiResponse
	{
	public:
		class ConfigDeviceSmokeSensitivityResponseData
		{
		public:
			ConfigDeviceSmokeSensitivityResponseData();
			~ConfigDeviceSmokeSensitivityResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ConfigDeviceSmokeSensitivityResponse();
		~ConfigDeviceSmokeSensitivityResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		ConfigDeviceSmokeSensitivityResponseData data;
		MetaInfo* _metainfo_ConfigDeviceSmokeSensitivityResponseData;
	};

	
	typedef ConfigDeviceSmokeSensitivityResponse::ConfigDeviceSmokeSensitivityResponseData ConfigDeviceSmokeSensitivityResponseData;

}
}

#endif

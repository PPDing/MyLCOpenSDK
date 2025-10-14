/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetAlarmServerConfig_H_
#define _LC_OPENAPI_CLIENT_GetAlarmServerConfig_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取报警消息鉴权和推送服务器的地址和端口

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetAlarmServerConfigRequest : public LCOpenApiRequest
	{
	public:
		class GetAlarmServerConfigRequestData
		{
		public:
			GetAlarmServerConfigRequestData();
			~GetAlarmServerConfigRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;

		};
	public:
		GetAlarmServerConfigRequest();
		~GetAlarmServerConfigRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		GetAlarmServerConfigRequestData data;
		MetaInfo* _metainfo_GetAlarmServerConfigRequestData;
	};

	
	typedef GetAlarmServerConfigRequest::GetAlarmServerConfigRequestData GetAlarmServerConfigRequestData;


	class GetAlarmServerConfigResponse : public LCOpenApiResponse
	{
	public:
		class GetAlarmServerConfigResponseData
		{
		public:
			GetAlarmServerConfigResponseData();
			~GetAlarmServerConfigResponseData();
			
		public:
			/** define a list with struct of GetAlarmServerConfigResponseData_ServersElement */
			class GetAlarmServerConfigResponseData_ServersElement : public LCOpenApiBase
			{
			public:
				GetAlarmServerConfigResponseData_ServersElement();
				~GetAlarmServerConfigResponseData_ServersElement();
			public:
				/** 域名 */
				string host;
			public:
				/** 端口 */
				string port;
			public:
				/** 服务类型：auth, push */
				string type;
			};
		public:
			LCOpenApiVector<GetAlarmServerConfigResponseData_ServersElement> servers;

		};
	public:
		GetAlarmServerConfigResponse();
		~GetAlarmServerConfigResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		GetAlarmServerConfigResponseData data;
		MetaInfo* _metainfo_GetAlarmServerConfigResponseData;
	};

	
	typedef GetAlarmServerConfigResponse::GetAlarmServerConfigResponseData GetAlarmServerConfigResponseData;
	typedef GetAlarmServerConfigResponse::GetAlarmServerConfigResponseData::GetAlarmServerConfigResponseData_ServersElement GetAlarmServerConfigResponseData_ServersElement;

}
}

#endif

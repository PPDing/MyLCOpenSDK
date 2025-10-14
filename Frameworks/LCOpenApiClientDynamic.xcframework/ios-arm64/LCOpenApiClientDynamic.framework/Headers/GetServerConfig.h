/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetServerConfig_H_
#define _LC_OPENAPI_CLIENT_GetServerConfig_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
鉴权token是否在白名单中
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetServerConfigRequest : public LCOpenApiRequest
	{
	public:
		class GetServerConfigRequestData
		{
		public:
			GetServerConfigRequestData();
			~GetServerConfigRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;

		};
	public:
		GetServerConfigRequest();
		~GetServerConfigRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		GetServerConfigRequestData data;
		MetaInfo* _metainfo_GetServerConfigRequestData;
	};

	
	typedef GetServerConfigRequest::GetServerConfigRequestData GetServerConfigRequestData;


	class GetServerConfigResponse : public LCOpenApiResponse
	{
	public:
		class GetServerConfigResponseData
		{
		public:
			GetServerConfigResponseData();
			~GetServerConfigResponseData();
			
		public:
			/** define a list with struct of GetServerConfigResponseData_ServersElement */
			class GetServerConfigResponseData_ServersElement : public LCOpenApiBase
			{
			public:
				GetServerConfigResponseData_ServersElement();
				~GetServerConfigResponseData_ServersElement();
			public:
				/** 域名 */
				string host;
			public:
				/** 端口 */
				string port;
			public:
				/** 服务类型：p2p,pss,pns */
				string type;
			};
		public:
			LCOpenApiVector<GetServerConfigResponseData_ServersElement> servers;
		public:
			/** p2p服务鉴权ID */
			string p2pAuthId;
		public:
			/** [bool]true标示要走p2pRelay,false 不走p2pRelay */
			bool p2pRelay;

		};
	public:
		GetServerConfigResponse();
		~GetServerConfigResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		GetServerConfigResponseData data;
		MetaInfo* _metainfo_GetServerConfigResponseData;
	};

	
	typedef GetServerConfigResponse::GetServerConfigResponseData GetServerConfigResponseData;
	typedef GetServerConfigResponse::GetServerConfigResponseData::GetServerConfigResponseData_ServersElement GetServerConfigResponseData_ServersElement;

}
}

#endif

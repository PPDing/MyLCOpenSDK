/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_AccessToken_H_
#define _LC_OPENAPI_CLIENT_AccessToken_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
如果缓存中已经有该accessToken了，那么直接返回
Openweb中重置appsecret了，需要清除缓存 
错误码：
	10001：手机号码无效（非此应用appId的开发者账号）
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class AccessTokenRequest : public LCOpenApiRequest
	{
	public:
		class AccessTokenRequestData
		{
		public:
			AccessTokenRequestData();
			~AccessTokenRequestData();
			
		public:
			/** 用户手机号码,例18888888888 */
			string phone;

		};
	public:
		AccessTokenRequest();
		~AccessTokenRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		AccessTokenRequestData data;
		MetaInfo* _metainfo_AccessTokenRequestData;
	};

	
	typedef AccessTokenRequest::AccessTokenRequestData AccessTokenRequestData;


	class AccessTokenResponse : public LCOpenApiResponse
	{
	public:
		class AccessTokenResponseData
		{
		public:
			AccessTokenResponseData();
			~AccessTokenResponseData();
			
		public:
			/** 管理员账号accessToken */
			string accessToken;
		public:
			/** [long]管理员账号accessToken过期时间，单位秒 */
			int64 expireTime;

		};
	public:
		AccessTokenResponse();
		~AccessTokenResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		AccessTokenResponseData data;
		MetaInfo* _metainfo_AccessTokenResponseData;
	};

	
	typedef AccessTokenResponse::AccessTokenResponseData AccessTokenResponseData;

}
}

#endif

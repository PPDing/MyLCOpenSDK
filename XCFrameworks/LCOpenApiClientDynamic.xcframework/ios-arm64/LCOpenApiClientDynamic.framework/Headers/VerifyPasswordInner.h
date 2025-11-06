/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_VerifyPasswordInner_H_
#define _LC_OPENAPI_CLIENT_VerifyPasswordInner_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
验证设备密码

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class VerifyPasswordInnerRequest : public LCOpenApiRequest
	{
	public:
		class VerifyPasswordInnerRequestData
		{
		public:
			VerifyPasswordInnerRequestData();
			~VerifyPasswordInnerRequestData();
			
		public:
			/** 设备密码 */
			string password;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		VerifyPasswordInnerRequest();
		~VerifyPasswordInnerRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		VerifyPasswordInnerRequestData data;
		MetaInfo* _metainfo_VerifyPasswordInnerRequestData;
	};

	
	typedef VerifyPasswordInnerRequest::VerifyPasswordInnerRequestData VerifyPasswordInnerRequestData;


	class VerifyPasswordInnerResponse : public LCOpenApiResponse
	{
	public:
		class VerifyPasswordInnerResponseData
		{
		public:
			VerifyPasswordInnerResponseData();
			~VerifyPasswordInnerResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		VerifyPasswordInnerResponse();
		~VerifyPasswordInnerResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		VerifyPasswordInnerResponseData data;
		MetaInfo* _metainfo_VerifyPasswordInnerResponseData;
	};

	
	typedef VerifyPasswordInnerResponse::VerifyPasswordInnerResponseData VerifyPasswordInnerResponseData;

}
}

#endif

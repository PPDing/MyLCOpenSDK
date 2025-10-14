/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetStreamErrorMsg_H_
#define _LC_OPENAPI_CLIENT_GetStreamErrorMsg_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取拉流结果，如果发生错误，返回内容将包含错误码和错误信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetStreamErrorMsgRequest : public LCOpenApiRequest
	{
	public:
		class GetStreamErrorMsgRequestData
		{
		public:
			GetStreamErrorMsgRequestData();
			~GetStreamErrorMsgRequestData();
			
		public:
			/** 拉流URL diget */
			string digest;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		GetStreamErrorMsgRequest();
		~GetStreamErrorMsgRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		GetStreamErrorMsgRequestData data;
		MetaInfo* _metainfo_GetStreamErrorMsgRequestData;
	};

	
	typedef GetStreamErrorMsgRequest::GetStreamErrorMsgRequestData GetStreamErrorMsgRequestData;


	class GetStreamErrorMsgResponse : public LCOpenApiResponse
	{
	public:
		class GetStreamErrorMsgResponseData
		{
		public:
			GetStreamErrorMsgResponseData();
			~GetStreamErrorMsgResponseData();
			
		public:
			/** 错误信息 */
			string msg;
		public:
			/** 错误码 */
			string code;

		};
	public:
		GetStreamErrorMsgResponse();
		~GetStreamErrorMsgResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		GetStreamErrorMsgResponseData data;
		MetaInfo* _metainfo_GetStreamErrorMsgResponseData;
	};

	
	typedef GetStreamErrorMsgResponse::GetStreamErrorMsgResponseData GetStreamErrorMsgResponseData;

}
}

#endif

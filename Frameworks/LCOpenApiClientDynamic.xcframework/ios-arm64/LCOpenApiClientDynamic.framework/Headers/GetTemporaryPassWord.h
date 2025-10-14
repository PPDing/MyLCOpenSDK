/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetTemporaryPassWord_H_
#define _LC_OPENAPI_CLIENT_GetTemporaryPassWord_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取临时秘钥列表_理想定制专项新增接口

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetTemporaryPassWordRequest : public LCOpenApiRequest
	{
	public:
		class GetTemporaryPassWordRequestData
		{
		public:
			GetTemporaryPassWordRequestData();
			~GetTemporaryPassWordRequestData();
			
		public:
			/** [int]可选，通道编号；不填默认设备 */
			int channelId;
		public:
			/** [String]授权token(userToken或accessToken),必选 */
			string token;
		public:
			/** [String]设备ID,必选 */
			string deviceId;

		};
	public:
		GetTemporaryPassWordRequest();
		~GetTemporaryPassWordRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		GetTemporaryPassWordRequestData data;
		MetaInfo* _metainfo_GetTemporaryPassWordRequestData;
	};

	
	typedef GetTemporaryPassWordRequest::GetTemporaryPassWordRequestData GetTemporaryPassWordRequestData;


	class GetTemporaryPassWordResponse : public LCOpenApiResponse
	{
	public:
		class GetTemporaryPassWordResponseData
		{
		public:
			GetTemporaryPassWordResponseData();
			~GetTemporaryPassWordResponseData();
			
		public:
			/** [int] 设备支持临时密码最多个数 */
			int maxNumber ;
		public:
			/** [int] 通道id */
			int channelId;
		public:
			/** define a list with struct of GetTemporaryPassWordResponseData_TemporarypasswordElement */
			class GetTemporaryPassWordResponseData_TemporarypasswordElement : public LCOpenApiBase
			{
			public:
				GetTemporaryPassWordResponseData_TemporarypasswordElement();
				~GetTemporaryPassWordResponseData_TemporarypasswordElement();
			public:
				/** [int]可选，有效次数，-1表示不限次数;无此字段默认无限次 */
				int effectCount;
			public:
				/** [String]结束时间，时间格式为yyyyMMddTHHmmss */
				string effectEndTime;
			public:
				/** [String]临时密码 */
				string password;
			public:
				/** [String]开始时间，时间格式为yyyyMMddTHHmmss */
				string effectBeginTime;
			};
		public:
			LCOpenApiVector<GetTemporaryPassWordResponseData_TemporarypasswordElement> temporarypassword;

		};
	public:
		GetTemporaryPassWordResponse();
		~GetTemporaryPassWordResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		GetTemporaryPassWordResponseData data;
		MetaInfo* _metainfo_GetTemporaryPassWordResponseData;
	};

	
	typedef GetTemporaryPassWordResponse::GetTemporaryPassWordResponseData GetTemporaryPassWordResponseData;
	typedef GetTemporaryPassWordResponse::GetTemporaryPassWordResponseData::GetTemporaryPassWordResponseData_TemporarypasswordElement GetTemporaryPassWordResponseData_TemporarypasswordElement;

}
}

#endif

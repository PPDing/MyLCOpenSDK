/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryCloudRecordMultiByToken_H_
#define _LC_OPENAPI_CLIENT_QueryCloudRecordMultiByToken_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
根据云录像token或告警id查询双目设备云录像片段信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryCloudRecordMultiByTokenRequest : public LCOpenApiRequest
	{
	public:
		class QueryCloudRecordMultiByTokenRequestData
		{
		public:
			QueryCloudRecordMultiByTokenRequestData();
			~QueryCloudRecordMultiByTokenRequestData();
			
		public:
			/** 告警id；paas设备必填 */
			string alarmId;
		public:
			/** 云录像token */
			string cloudToken;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** [cstr]queryCloudRecordByToken */
			#define _STATIC_QueryCloudRecordMultiByTokenRequestData_method "queryCloudRecordByToken"
			string method;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		QueryCloudRecordMultiByTokenRequest();
		~QueryCloudRecordMultiByTokenRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		QueryCloudRecordMultiByTokenRequestData data;
		MetaInfo* _metainfo_QueryCloudRecordMultiByTokenRequestData;
	};

	
	typedef QueryCloudRecordMultiByTokenRequest::QueryCloudRecordMultiByTokenRequestData QueryCloudRecordMultiByTokenRequestData;


	class QueryCloudRecordMultiByTokenResponse : public LCOpenApiResponse
	{
	public:
		class QueryCloudRecordMultiByTokenResponseData
		{
		public:
			QueryCloudRecordMultiByTokenResponseData();
			~QueryCloudRecordMultiByTokenResponseData();
			
		public:
			/** define a list with struct of QueryCloudRecordMultiByTokenResponseData_RecordsElement */
			class QueryCloudRecordMultiByTokenResponseData_RecordsElement : public LCOpenApiBase
			{
			public:
				QueryCloudRecordMultiByTokenResponseData_RecordsElement();
				~QueryCloudRecordMultiByTokenResponseData_RecordsElement();
			public:
				/** 区域 */
				string region;
			public:
				/** 设备本地开始时间,yyyyMMddTHHmmss格式 */
				string localBeginTime;
			public:
				/** 录像地址 */
				string recordPath;
			public:
				/** 录像Id */
				string recordRegionId;
			public:
				/** [int]加密模式, 0表示默认加密模式, 1表示用户加密模式 */
				int encryptMode;
			public:
				/** 录像ID */
				string recordId;
			public:
				/** 设备本地结束时间,yyyyMMddTHHmmss格式 */
				string localEndTime;
			public:
				/** 设备通道号 */
				string channelId;
			public:
				/** 缩略图URL */
				string thumbUrl;
			public:
				/** 云录像的大小，单位byte */
				string size;
			};
		public:
			LCOpenApiVector<QueryCloudRecordMultiByTokenResponseData_RecordsElement> records;

		};
	public:
		QueryCloudRecordMultiByTokenResponse();
		~QueryCloudRecordMultiByTokenResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		QueryCloudRecordMultiByTokenResponseData data;
		MetaInfo* _metainfo_QueryCloudRecordMultiByTokenResponseData;
	};

	
	typedef QueryCloudRecordMultiByTokenResponse::QueryCloudRecordMultiByTokenResponseData QueryCloudRecordMultiByTokenResponseData;
	typedef QueryCloudRecordMultiByTokenResponse::QueryCloudRecordMultiByTokenResponseData::QueryCloudRecordMultiByTokenResponseData_RecordsElement QueryCloudRecordMultiByTokenResponseData_RecordsElement;

}
}

#endif

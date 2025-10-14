/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryLocalRecordsByUtcTime_H_
#define _LC_OPENAPI_CLIENT_QueryLocalRecordsByUtcTime_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
按照UTC开始和结束时间查询设备录像

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryLocalRecordsByUtcTimeRequest : public LCOpenApiRequest
	{
	public:
		class QueryLocalRecordsByUtcTimeRequestData
		{
		public:
			QueryLocalRecordsByUtcTimeRequestData();
			~QueryLocalRecordsByUtcTimeRequestData();
			
		public:
			/** 类型,Manual、Event、All */
			string type;
		public:
			/** [cstr]queryLocalRecordsByUtcTime */
			#define _STATIC_QueryLocalRecordsByUtcTimeRequestData_method "queryLocalRecordsByUtcTime"
			string method;
		public:
			/** 结束时间，如2010-05-25 23:59:59 */
			string endTime;
		public:
			/** 设备ID */
			string deviceId;
		public:
			/** 限制查询数量，取值范围为[1,100] */
			string limit;
		public:
			/** 产品ID */
			string productId;
		public:
			/** 开始条数，从1开始 */
			string start;
		public:
			/** 开始时间，如2010-05-25 00:00:00 */
			string beginTime;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 通道ID */
			string channelId;

		};
	public:
		QueryLocalRecordsByUtcTimeRequest();
		~QueryLocalRecordsByUtcTimeRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		QueryLocalRecordsByUtcTimeRequestData data;
		MetaInfo* _metainfo_QueryLocalRecordsByUtcTimeRequestData;
	};

	
	typedef QueryLocalRecordsByUtcTimeRequest::QueryLocalRecordsByUtcTimeRequestData QueryLocalRecordsByUtcTimeRequestData;


	class QueryLocalRecordsByUtcTimeResponse : public LCOpenApiResponse
	{
	public:
		class QueryLocalRecordsByUtcTimeResponseData
		{
		public:
			QueryLocalRecordsByUtcTimeResponseData();
			~QueryLocalRecordsByUtcTimeResponseData();
			
		public:
			/** MediaFileSession0 */
			string sessionId;
		public:
			/** 是否逆序输出文件列表,可选,当该字段不存在,或者'false',按照正序输出 */
			string reverseOrder;
		public:
			/** [int]录像条目数 */
			int recordNum;
		public:
			/** define a list with struct of QueryLocalRecordsByUtcTimeResponseData_RecordsElement */
			class QueryLocalRecordsByUtcTimeResponseData_RecordsElement : public LCOpenApiBase
			{
			public:
				QueryLocalRecordsByUtcTimeResponseData_RecordsElement();
				~QueryLocalRecordsByUtcTimeResponseData_RecordsElement();
			public:
				/** 类型，Manual、Event、All */
				string type;
			public:
				/** 本地录像文件名 */
				string fileName;
			public:
				/** 结束时间，如2010-05-25 23:59:59 */
				string endTime;
			public:
				/** 录像文件名 */
				string recordId;
			public:
				/** 开始时间，如2010-05-25 00:00:00 */
				string beginTime;
			public:
				/** 通道ID */
				string channelID;
			public:
				/** [long]录像文件长度 */
				int64 fileLength;
			};
		public:
			LCOpenApiVector<QueryLocalRecordsByUtcTimeResponseData_RecordsElement> records;

		};
	public:
		QueryLocalRecordsByUtcTimeResponse();
		~QueryLocalRecordsByUtcTimeResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		QueryLocalRecordsByUtcTimeResponseData data;
		MetaInfo* _metainfo_QueryLocalRecordsByUtcTimeResponseData;
	};

	
	typedef QueryLocalRecordsByUtcTimeResponse::QueryLocalRecordsByUtcTimeResponseData QueryLocalRecordsByUtcTimeResponseData;
	typedef QueryLocalRecordsByUtcTimeResponse::QueryLocalRecordsByUtcTimeResponseData::QueryLocalRecordsByUtcTimeResponseData_RecordsElement QueryLocalRecordsByUtcTimeResponseData_RecordsElement;

}
}

#endif

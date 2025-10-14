/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryLocalRecordsWithLocation_H_
#define _LC_OPENAPI_CLIENT_QueryLocalRecordsWithLocation_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
按照开始和结束时间查询设备录像

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryLocalRecordsWithLocationRequest : public LCOpenApiRequest
	{
	public:
		class QueryLocalRecordsWithLocationRequestData
		{
		public:
			QueryLocalRecordsWithLocationRequestData();
			~QueryLocalRecordsWithLocationRequestData();
			
		public:
			/** 从第几条到第几条,单次查询上限100,1-100表示第1条到第100条,包含100,云录像查询相同 */
			string queryRange;
		public:
			/** 类型,Manual、Event、All */
			string type;
		public:
			/** [cstr]queryLocalRecords */
			#define _STATIC_QueryLocalRecordsWithLocationRequestData_method "queryLocalRecords"
			string method;
		public:
			/** 结束时间，如2010-05-25 23:59:59 */
			string endTime;
		public:
			/** 设备ID */
			string deviceId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 分页查询的数量，最大30条 */
			string count;
		public:
			/** device-设备录像 3rdcloud-下级中心录像 all-融合录像。默认设备录像 */
			string location;
		public:
			/** 开始时间，如2010-05-25 00:00:00 */
			string beginTime;
		public:
			/** 用于本地录像查询优化,有此参数的情况下设备会优先使用此参数查询 */
			string sessionId;
		public:
			/** 通道ID */
			string channelId;

		};
	public:
		QueryLocalRecordsWithLocationRequest();
		~QueryLocalRecordsWithLocationRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		QueryLocalRecordsWithLocationRequestData data;
		MetaInfo* _metainfo_QueryLocalRecordsWithLocationRequestData;
	};

	
	typedef QueryLocalRecordsWithLocationRequest::QueryLocalRecordsWithLocationRequestData QueryLocalRecordsWithLocationRequestData;


	class QueryLocalRecordsWithLocationResponse : public LCOpenApiResponse
	{
	public:
		class QueryLocalRecordsWithLocationResponseData
		{
		public:
			QueryLocalRecordsWithLocationResponseData();
			~QueryLocalRecordsWithLocationResponseData();
			
		public:
			/** define a list with struct of QueryLocalRecordsWithLocationResponseData_RecordsElement */
			class QueryLocalRecordsWithLocationResponseData_RecordsElement : public LCOpenApiBase
			{
			public:
				QueryLocalRecordsWithLocationResponseData_RecordsElement();
				~QueryLocalRecordsWithLocationResponseData_RecordsElement();
			public:
				/** 类型，Manual、Event、All */
				string type;
			public:
				/**  */
				string recordRegionId;
			public:
				/** [int]加密模式（0：默认加密模式；1：用户加密模式） */
				int encryptMode;
			public:
				/** 录像文件名 */
				string recordId;
			public:
				/** 过期时间 */
				string expireTime;
			public:
				/** 加密秘钥 */
				string encryptSecret;
			public:
				/** 设备ID */
				string deviceId;
			public:
				/** 码流类型 main:主码流，extraX:辅码流，缺省按照默认查询 */
				string streamType;
			public:
				/** 录像文件地址路径 */
				string recordPath;
			public:
				/** 加密图片下载地址 */
				string thumbUrl;
			public:
				/** 文件大小 */
				string size;
			public:
				/** 结束时间，如2010-05-25 23:59:59 */
				string endTime;
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
			LCOpenApiVector<QueryLocalRecordsWithLocationResponseData_RecordsElement> records;
		public:
			/** MediaFileSession0 */
			string sessionId;

		};
	public:
		QueryLocalRecordsWithLocationResponse();
		~QueryLocalRecordsWithLocationResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		QueryLocalRecordsWithLocationResponseData data;
		MetaInfo* _metainfo_QueryLocalRecordsWithLocationResponseData;
	};

	
	typedef QueryLocalRecordsWithLocationResponse::QueryLocalRecordsWithLocationResponseData QueryLocalRecordsWithLocationResponseData;
	typedef QueryLocalRecordsWithLocationResponse::QueryLocalRecordsWithLocationResponseData::QueryLocalRecordsWithLocationResponseData_RecordsElement QueryLocalRecordsWithLocationResponseData_RecordsElement;

}
}

#endif

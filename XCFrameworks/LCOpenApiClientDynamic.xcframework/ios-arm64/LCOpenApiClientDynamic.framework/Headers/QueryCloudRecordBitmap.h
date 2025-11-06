/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryCloudRecordBitmap_H_
#define _LC_OPENAPI_CLIENT_QueryCloudRecordBitmap_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
按月查询有报警云录像的日期（以“天”为单位）

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryCloudRecordBitmapRequest : public LCOpenApiRequest
	{
	public:
		class QueryCloudRecordBitmapRequestData
		{
		public:
			QueryCloudRecordBitmapRequestData();
			~QueryCloudRecordBitmapRequestData();
			
		public:
			/** [int]年 */
			int year;
		public:
			/** [cstr]queryCloudRecordBitmap */
			#define _STATIC_QueryCloudRecordBitmapRequestData_method "queryCloudRecordBitmap"
			string method;
		public:
			/** [int]月 */
			int month;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [bool]是否过滤通道。不带该参数或为true：根据通道查询；false：同时查询双通道录像，并通过按位或操作合并成单个掩码 */
			bool filterByChannel;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		QueryCloudRecordBitmapRequest();
		~QueryCloudRecordBitmapRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		QueryCloudRecordBitmapRequestData data;
		MetaInfo* _metainfo_QueryCloudRecordBitmapRequestData;
	};

	
	typedef QueryCloudRecordBitmapRequest::QueryCloudRecordBitmapRequestData QueryCloudRecordBitmapRequestData;


	class QueryCloudRecordBitmapResponse : public LCOpenApiResponse
	{
	public:
		class QueryCloudRecordBitmapResponseData
		{
		public:
			QueryCloudRecordBitmapResponseData();
			~QueryCloudRecordBitmapResponseData();
			
		public:
			/** 日掩码-1111100000111110000011111000001 */
			string bitmap;

		};
	public:
		QueryCloudRecordBitmapResponse();
		~QueryCloudRecordBitmapResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		QueryCloudRecordBitmapResponseData data;
		MetaInfo* _metainfo_QueryCloudRecordBitmapResponseData;
	};

	
	typedef QueryCloudRecordBitmapResponse::QueryCloudRecordBitmapResponseData QueryCloudRecordBitmapResponseData;

}
}

#endif

/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GenerateRecordUrlById_H_
#define _LC_OPENAPI_CLIENT_GenerateRecordUrlById_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取云录像地址
错误码:
10004：超过指定路数，拒绝给予RTSP地址
10005：超过指定个流量，拒绝给予RTSP地址
备注：
beginTime和endTime为云睿私有化平台新增字段，解决PAAS平台不支持按文件（recordId）查询录像问题。

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GenerateRecordUrlByIdRequest : public LCOpenApiRequest
	{
	public:
		class GenerateRecordUrlByIdRequestData
		{
		public:
			GenerateRecordUrlByIdRequestData();
			~GenerateRecordUrlByIdRequestData();
			
		public:
			/** 1000报警云录像,2000定时云录像 */
			string type;
		public:
			/** 录像ID */
			string recordId;
		public:
			/** 设备ID */
			string deviceId;
		public:
			/** 录像regionId */
			string recordRegionId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 录像记录（若下载dav文件，则为m3u中dav路径）；公有云专用 */
			string recordPath;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** 结束时间，如2021-03-01 23:59:59 */
			string endTime;
		public:
			/** 开始时间，如2021-03-01 00:00:00 */
			string beginTime;

		};
	public:
		GenerateRecordUrlByIdRequest();
		~GenerateRecordUrlByIdRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		GenerateRecordUrlByIdRequestData data;
		MetaInfo* _metainfo_GenerateRecordUrlByIdRequestData;
	};

	
	typedef GenerateRecordUrlByIdRequest::GenerateRecordUrlByIdRequestData GenerateRecordUrlByIdRequestData;


	class GenerateRecordUrlByIdResponse : public LCOpenApiResponse
	{
	public:
		class GenerateRecordUrlByIdResponseData
		{
		public:
			GenerateRecordUrlByIdResponseData();
			~GenerateRecordUrlByIdResponseData();
			
		public:
			/** 用于播放此段录像的临时令牌；公有云使用，有效期1小时，用于授权dav切片 */
			string token;
		public:
			/** 返回的m3u8或dav下载地址 */
			string url;

		};
	public:
		GenerateRecordUrlByIdResponse();
		~GenerateRecordUrlByIdResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		GenerateRecordUrlByIdResponseData data;
		MetaInfo* _metainfo_GenerateRecordUrlByIdResponseData;
	};

	
	typedef GenerateRecordUrlByIdResponse::GenerateRecordUrlByIdResponseData GenerateRecordUrlByIdResponseData;

}
}

#endif

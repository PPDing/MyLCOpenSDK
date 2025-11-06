/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PaaSGenerateRecordUrlById_H_
#define _LC_OPENAPI_CLIENT_PaaSGenerateRecordUrlById_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
	获取云录像地址
	POST /storage/records/generateRecordUrlById/channels/[channelId]

	channelId : 类型string。通道标识(包括视频通道，图片通道，报警通道等)。最长为32字符。
	对于公有云产品，channelId是使用"设备序列号-通道号"进行标识。
	对于私有云产品，channelId是一个内部生成的唯一描述，只描述设备的通道号，和设备唯一标识解耦，没有任何关系。
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class PaaSGenerateRecordUrlByIdRequest : public LCOpenApiRequest
	{
	public:
		class PaaSGenerateRecordUrlByIdRequestData
		{
		public:
			PaaSGenerateRecordUrlByIdRequestData();
			~PaaSGenerateRecordUrlByIdRequestData();
			
		public:
			/** 录像存储路径 */
			string recordPath;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** 云录像存储域编码 */
			string region;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		PaaSGenerateRecordUrlByIdRequest();
		~PaaSGenerateRecordUrlByIdRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		PaaSGenerateRecordUrlByIdRequestData data;
		MetaInfo* _metainfo_PaaSGenerateRecordUrlByIdRequestData;
	};

	
	typedef PaaSGenerateRecordUrlByIdRequest::PaaSGenerateRecordUrlByIdRequestData PaaSGenerateRecordUrlByIdRequestData;


	class PaaSGenerateRecordUrlByIdResponse : public LCOpenApiResponse
	{
	public:
		class PaaSGenerateRecordUrlByIdResponseData
		{
		public:
			PaaSGenerateRecordUrlByIdResponseData();
			~PaaSGenerateRecordUrlByIdResponseData();
			
		public:
			/** 错误码 */
			string errCode;
		public:
			/** trace码 */
			string traceId;
		public:
			/** define a list with struct of PaaSGenerateRecordUrlByIdResponseData_Data */
			class PaaSGenerateRecordUrlByIdResponseData_Data : public LCOpenApiBase
			{
			public:
				PaaSGenerateRecordUrlByIdResponseData_Data();
				~PaaSGenerateRecordUrlByIdResponseData_Data();
			public:
				/** 用于播放此段录像的临时令牌；公有云使用，有效期1小时，用于授权dav切片 */
				string token;
			public:
				/** 返回的m3u8或dav下载地址 */
				string url;
			};
		public:
			PaaSGenerateRecordUrlByIdResponseData_Data* data;
		public:
			/** 请求成功与否信息 */
			string message;

		};
	public:
		PaaSGenerateRecordUrlByIdResponse();
		~PaaSGenerateRecordUrlByIdResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		PaaSGenerateRecordUrlByIdResponseData data;
		MetaInfo* _metainfo_PaaSGenerateRecordUrlByIdResponseData;
	};

	
	typedef PaaSGenerateRecordUrlByIdResponse::PaaSGenerateRecordUrlByIdResponseData PaaSGenerateRecordUrlByIdResponseData;
	typedef PaaSGenerateRecordUrlByIdResponse::PaaSGenerateRecordUrlByIdResponseData::PaaSGenerateRecordUrlByIdResponseData_Data PaaSGenerateRecordUrlByIdResponseData_Data;

}
}

#endif

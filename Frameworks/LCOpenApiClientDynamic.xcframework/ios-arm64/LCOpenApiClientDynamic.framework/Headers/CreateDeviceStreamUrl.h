/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_CreateDeviceStreamUrl_H_
#define _LC_OPENAPI_CLIENT_CreateDeviceStreamUrl_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取拉流地址

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class CreateDeviceStreamUrlRequest : public LCOpenApiRequest
	{
	public:
		class CreateDeviceStreamUrlRequestData
		{
		public:
			CreateDeviceStreamUrlRequestData();
			~CreateDeviceStreamUrlRequestData();
			
		public:
			/** [int]是否开启智能帧 */
			int assistStream;
		public:
			/** 协议类型 */
			string protoType;
		public:
			/** [int]流ID */
			int recordPlayType;
		public:
			/** [int]位深 */
			int bitDepth;
		public:
			/** 对讲ID */
			string callId;
		public:
			/** 开始时间 */
			string beginTime;
		public:
			/** 采样率 */
			string samplingRate;
		public:
			/** 出流方式 */
			string type;
		public:
			/** 录像文件名 */
			string recordFileName;
		public:
			/** 录像id */
			string recordId;
		public:
			/** 结束时间 */
			string endTime;
		public:
			/** 开始时间时间戳 */
			string beginTimeStamp;
		public:
			/** paas需要 */
			string location;
		public:
			/** 设备ID */
			string deviceId;
		public:
			/** [int]码流类型 0 主码流 1辅码流 默认为主码流 */
			int streamType;
		public:
			/** 结束时间时间戳 */
			string endTimeStamp;
		public:
			/** 音频编码格式 0 aac 1g711a */
			string audioEncode;
		public:
			/** 设备类型 */
			string deviceType;
		public:
			/** 流ID */
			string streamId;
		public:
			/** [int]加密模式 */
			int encryptMode;
		public:
			/** 业务类型 */
			string businessType;
		public:
			/** 通道ID */
			string channelId;

		};
	public:
		CreateDeviceStreamUrlRequest();
		~CreateDeviceStreamUrlRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		CreateDeviceStreamUrlRequestData data;
		MetaInfo* _metainfo_CreateDeviceStreamUrlRequestData;
	};

	
	typedef CreateDeviceStreamUrlRequest::CreateDeviceStreamUrlRequestData CreateDeviceStreamUrlRequestData;


	class CreateDeviceStreamUrlResponse : public LCOpenApiResponse
	{
	public:
		class CreateDeviceStreamUrlResponseData
		{
		public:
			CreateDeviceStreamUrlResponseData();
			~CreateDeviceStreamUrlResponseData();
			
		public:
			/** 拉流地址 */
			string url;
		public:
			/** [long] 拉流时间 */
			int64 expireTime;

		};
	public:
		CreateDeviceStreamUrlResponse();
		~CreateDeviceStreamUrlResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		CreateDeviceStreamUrlResponseData data;
		MetaInfo* _metainfo_CreateDeviceStreamUrlResponseData;
	};

	
	typedef CreateDeviceStreamUrlResponse::CreateDeviceStreamUrlResponseData CreateDeviceStreamUrlResponseData;

}
}

#endif

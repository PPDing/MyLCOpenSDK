/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetRtspUrl_H_
#define _LC_OPENAPI_CLIENT_GetRtspUrl_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取RtspUrl

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetRtspUrlRequest : public LCOpenApiRequest
	{
	public:
		class GetRtspUrlRequestData
		{
		public:
			GetRtspUrlRequestData();
			~GetRtspUrlRequestData();
			
		public:
			/** [String]pc客户端拉流窗口号，pc5.1新增字段，针对pc有效 */
			string windowNum;
		public:
			/** [int][O]限制并发路数 -1:不限制路数    其它:具体限制数 */
			int videoLimit;
		public:
			/** [String]设备级对讲与通道级对讲类型区分，device：表示设备级对讲，channel：表示通道级对讲 */
			string deviceType;
		public:
			/** [String]对讲类型 */
			string talkType;
		public:
			/** [String]是否跳过回环认证：true-跳过, false-不跳过（针对APP自己走P2P校验过的，跳过校验优化）；无该字段时，国内海外按老逻辑处理 */
			string skipAuth;
		public:
			/** 一次性token */
			string rtspToken;
		public:
			/** 开发者AK */
			string project;
		public:
			/** [bool][O]是否限流 */
			bool timeLimit;
		public:
			/** [String]请求拉流分类，real：实时预览；playbackByTime：按时间回放；playbackByRecordId：按文件id回放；talk：对讲 */
			string requestType;
		public:
			/** [String]所要请求码流的加密类型 */
			string encrypt;
		public:
			/** [String]RTSV1:支持私有协议拉流,RTSP:RTSP拉流 参数空默认为RTSP拉流 */
			string type;
		public:
			/** [String]录像文件id，requestType为playbackByRecordId时必填 */
			string recordId;
		public:
			/** [String]流量统计时所属用户的唯一标识，当前用userId */
			string owner;
		public:
			/** 共享链路 */
			string design;
		public:
			/** [String]设备ID */
			string deviceId;
		public:
			/** [String]辅助帧(开放平台5.3需求新增参数) */
			string assistStream;
		public:
			/** [String]设置拉流时长，单位：min */
			string duration;
		public:
			/** 用户token */
			string token;
		public:
			/** [String]回放结束时间，requestType为playbackByTime时必填 */
			string endTime;
		public:
			/** [String]主、辅码流编号，0或者1 */
			string streamId;
		public:
			/** [String]通道号 */
			string channelId;
		public:
			/** [String]所属平台open:开放平台 base:乐橙平台 */
			string ownerType;
		public:
			/** [String]回放开始时间，requestType为playbackByTime时必填 */
			string startTime;

		};
	public:
		GetRtspUrlRequest();
		~GetRtspUrlRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		GetRtspUrlRequestData data;
		MetaInfo* _metainfo_GetRtspUrlRequestData;
	};

	
	typedef GetRtspUrlRequest::GetRtspUrlRequestData GetRtspUrlRequestData;


	class GetRtspUrlResponse : public LCOpenApiResponse
	{
	public:
		class GetRtspUrlResponseData
		{
		public:
			GetRtspUrlResponseData();
			~GetRtspUrlResponseData();
			
		public:
			/** [String]返回Tls链路加密的rtsp优化拉流地址 */
			string tlsUrl;
		public:
			/** [String]返回rtsp优化拉流地址 */
			string url;

		};
	public:
		GetRtspUrlResponse();
		~GetRtspUrlResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		GetRtspUrlResponseData data;
		MetaInfo* _metainfo_GetRtspUrlResponseData;
	};

	
	typedef GetRtspUrlResponse::GetRtspUrlResponseData GetRtspUrlResponseData;

}
}

#endif

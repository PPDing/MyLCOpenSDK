/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PaaSStreamUrlChannelTalk_H_
#define _LC_OPENAPI_CLIENT_PaaSStreamUrlChannelTalk_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
	请求与通道对讲
	POST /media/delivery/talk/channels/[channelId] 
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
	class PaaSStreamUrlChannelTalkRequest : public LCOpenApiRequest
	{
	public:
		class PaaSStreamUrlChannelTalkRequestData
		{
		public:
			PaaSStreamUrlChannelTalkRequestData();
			~PaaSStreamUrlChannelTalkRequestData();
			
		public:
			/** 流媒体RTSV传输协议的信令加密模式，可选项，仅当scheme传输协议为RTSV系列协议（RTSV1\RTSV2\PBSV1\PBSV2\TSV1\TSV2等）时生效(PrivateEncrypt)。否则将忽略。为空或者没有此字段，等同于 NotEncrypt。 */
			string encryptionMode;
		public:
			/** 客户端地址 */
			string clientIp;
		public:
			/** [long] 类型int64_t。用户期望资源访问有效时间，单位：秒。可选，以响应返回的expire为准 */
			int64 duration;
		public:
			/** [bool] 返回是否是域名, 可选, 默认为false */
			bool domainEnable;
		public:
			/** 传输类型,可选，默认为TCP。LHTS和CQTS传输协议目前只在RTSV媒体协议上支持 */
			string transport;
		public:
			/** 请求的是拉流还是推流url pull push */
			string urlType;
		public:
			/** [int] 音频采样位数：8 或者 16位，非0判断 */
			int bits;
		public:
			/** 设备加密模式 0:不加密 3:三码合一 */
			string encryptType;
		public:
			/** 协议类型 RTSP RTSV */
			string scheme;
		public:
			/** 音频编码类型 PCM... */
			string encodeType;
		public:
			/** [int] 音频采样率 采样率：8000 或者16000，非0判断 */
			int sampleRate;
		public:
			/** [bool] 是否需要重定向 false */
			bool locationEnable;
		public:
			/** 客户端类型 */
			string clientType;

		};
	public:
		PaaSStreamUrlChannelTalkRequest();
		~PaaSStreamUrlChannelTalkRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		PaaSStreamUrlChannelTalkRequestData data;
		MetaInfo* _metainfo_PaaSStreamUrlChannelTalkRequestData;
	};

	
	typedef PaaSStreamUrlChannelTalkRequest::PaaSStreamUrlChannelTalkRequestData PaaSStreamUrlChannelTalkRequestData;


	class PaaSStreamUrlChannelTalkResponse : public LCOpenApiResponse
	{
	public:
		class PaaSStreamUrlChannelTalkResponseData
		{
		public:
			PaaSStreamUrlChannelTalkResponseData();
			~PaaSStreamUrlChannelTalkResponseData();
			
		public:
			/** 可选。针对流媒体RTSV传输协议的信令加密模式，仅当scheme传输协议为RTSV系列协议（RTSV1\RTSV2\PBSV1\PBSV2\TSV1\TSV2等）时生效。scheme指定RTSP时，或者RTSV系列协议不支持加密能力时，服务将不返回此字段。取值范围:PrivateEncrypt表示私有加密，秘钥由流媒体模块内部推导 */
			string encryptionMode;
		public:
			/** 内网资源获取地址。如果是拉流则返回节点的URL,如果是推流则返回的是MTS节点的推流URL */
			string internal_resource;
		public:
			/** 区域信息。返回转发服务所在的区域信息 */
			string region;
		public:
			/** 地址过期时间。UTC时间，时间格式为YYYYMMDDThhmmssZ，如：20151119T161900Z 参见ISO 8601格式 */
			string expire;
		public:
			/** 资源获取地址 */
			string resource;

		};
	public:
		PaaSStreamUrlChannelTalkResponse();
		~PaaSStreamUrlChannelTalkResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		PaaSStreamUrlChannelTalkResponseData data;
		MetaInfo* _metainfo_PaaSStreamUrlChannelTalkResponseData;
	};

	
	typedef PaaSStreamUrlChannelTalkResponse::PaaSStreamUrlChannelTalkResponseData PaaSStreamUrlChannelTalkResponseData;

}
}

#endif

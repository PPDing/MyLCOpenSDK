/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PaaSStreamUrlReal_H_
#define _LC_OPENAPI_CLIENT_PaaSStreamUrlReal_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
	获取一个通道的实时视频码流地址 可获取通道的推送实时流地址或者获取通道的拉实时流地址
	POST /media/delivery/real/channels/[channelId]

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
	class PaaSStreamUrlRealRequest : public LCOpenApiRequest
	{
	public:
		class PaaSStreamUrlRealRequestData
		{
		public:
			PaaSStreamUrlRealRequestData();
			~PaaSStreamUrlRealRequestData();
			
		public:
			/** ivss压缩任务id，需要拉取ivss压缩码流的rtsp业务场景需要带上该字段, 可选 */
			string ivssCode;
		public:
			/** [bool] 快速开启 true */
			bool fastopen;
		public:
			/** 请求的是拉流还是推流url pull push */
			string urlType;
		public:
			/** 设备加密模式 0:不加密 3:三码合一 */
			string encryptType;
		public:
			/** 伪造sdp信息 只针对RTSP，伪造sdp，用于平台内部拉流快速出流 Private */
			string packtype;
		public:
			/** 对实时视频流进行智能分析的任务id，分析后产生对应算法类型的实时智能视频流, 可选 */
			string taskId;
		public:
			/** 客户端地址 */
			string clientIp;
		public:
			/** 传输类型,可选，默认为“TCP”。LHTS和CQTS传输协议目前只在RTSV媒体协议上支持 */
			string transport;
		public:
			/** 码流类型 main, extra1, extra2, extra3 */
			string videoStream;
		public:
			/** 传输类型,可选，默认为[“TCP”]。LHTS和CQTS传输协议目前只在RTSV媒体协议上支持 */
			LCOpenApiVector<string> transports;
		public:
			/** 视频流类型 normal private */
			string streamType;
		public:
			/** 流媒体RTSV传输协议的信令加密模式，可选项，仅当scheme传输协议为RTSV系列协议（RTSV1\RTSV2\PBSV1\PBSV2\TSV1\TSV2等）时生效(PrivateEncrypt)。否则将忽略。为空或者没有此字段，等同于 NotEncrypt。 */
			string encryptionMode;
		public:
			/** [bool] 返回是否是域名, 可选, 默认为false */
			bool domainEnable;
		public:
			/** [long] 类型int64_t。用户期望资源访问有效时间，单位：秒。可选，以响应返回的expire为准 */
			int64 duration;
		public:
			/** 协议类型 RTSP RTSV HLS RTSPS */
			string scheme;
		public:
			/** 用户标识 VSL带来的字段，在url直接返回该内容，不做任何处理，默认invalid */
			string userCode;
		public:
			/** [bool] 是否需要重定向 false */
			bool locationEnable;
		public:
			/** 客户端类型 */
			string clientType;

		};
	public:
		PaaSStreamUrlRealRequest();
		~PaaSStreamUrlRealRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		PaaSStreamUrlRealRequestData data;
		MetaInfo* _metainfo_PaaSStreamUrlRealRequestData;
	};

	
	typedef PaaSStreamUrlRealRequest::PaaSStreamUrlRealRequestData PaaSStreamUrlRealRequestData;


	class PaaSStreamUrlRealResponse : public LCOpenApiResponse
	{
	public:
		class PaaSStreamUrlRealResponseData
		{
		public:
			PaaSStreamUrlRealResponseData();
			~PaaSStreamUrlRealResponseData();
			
		public:
			/** define a list with struct of PaaSStreamUrlRealResponseData_UrlsElement */
			class PaaSStreamUrlRealResponseData_UrlsElement : public LCOpenApiBase
			{
			public:
				PaaSStreamUrlRealResponseData_UrlsElement();
				~PaaSStreamUrlRealResponseData_UrlsElement();
			public:
				/** 资源获取地址 */
				string resource;
			public:
				/** 可选。针对流媒体RTSV传输协议的信令加密模式，仅当scheme传输协议为RTSV系列协议（RTSV1\RTSV2\PBSV1\PBSV2\TSV1\TSV2等）时生效。scheme指定RTSP时，或者RTSV系列协议不支持加密能力时，服务将不返回此字段。取值范围:PrivateEncrypt表示私有加密，秘钥由流媒体模块内部推导 */
				string encryptionMode;
			public:
				/** 内网资源获取地址。如果是拉流则返回节点的URL,如果是推流则返回的是MTS节点的推流URL */
				string internal_resource;
			public:
				/** 传输方式 TCP/LHTS/QCTS */
				string transport;
			};
		public:
			LCOpenApiVector<PaaSStreamUrlRealResponseData_UrlsElement> urls;
		public:
			/** 资源获取地址 */
			string resource;
		public:
			/** 区域信息。返回转发服务所在的区域信息 */
			string region;
		public:
			/** 可选。针对流媒体RTSV传输协议的信令加密模式，仅当scheme传输协议为RTSV系列协议（RTSV1\RTSV2\PBSV1\PBSV2\TSV1\TSV2等）时生效。scheme指定RTSP时，或者RTSV系列协议不支持加密能力时，服务将不返回此字段。取值范围:PrivateEncrypt表示私有加密，秘钥由流媒体模块内部推导 */
			string encryptionMode;
		public:
			/** 地址过期时间。UTC时间，时间格式为YYYYMMDDThhmmssZ，如：20151119T161900Z 参见ISO 8601格式 */
			string expire;
		public:
			/** [int] 当前实时流的总负荷 55 */
			int load;
		public:
			/** 内网资源获取地址。如果是拉流则返回节点的URL,如果是推流则返回的是MTS节点的推流URL */
			string internal_resource;

		};
	public:
		PaaSStreamUrlRealResponse();
		~PaaSStreamUrlRealResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		PaaSStreamUrlRealResponseData data;
		MetaInfo* _metainfo_PaaSStreamUrlRealResponseData;
	};

	
	typedef PaaSStreamUrlRealResponse::PaaSStreamUrlRealResponseData PaaSStreamUrlRealResponseData;
	typedef PaaSStreamUrlRealResponse::PaaSStreamUrlRealResponseData::PaaSStreamUrlRealResponseData_UrlsElement PaaSStreamUrlRealResponseData_UrlsElement;

}
}

#endif

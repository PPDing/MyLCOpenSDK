/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PaaSStreamUrlTimeDownload_H_
#define _LC_OPENAPI_CLIENT_PaaSStreamUrlTimeDownload_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
	按时间段获取录像回放码流地址或者按时间段获取录像回放推流地址，只有支持设备录像下载。
	注：这是一条按时间段向PaaS数据分发服务获取回放URL的协议，但出于效率优化的考虑，客户端在请求时，
		除了给出请求时间段，也可以选择把该时间段内已经查询到的录像段告知数据分发服务，服务端可以免去根据时间去查询录像段这一步操作。

	POST /media/delivery/v2/download/channels/[channelId]

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
	class PaaSStreamUrlTimeDownloadRequest : public LCOpenApiRequest
	{
	public:
		class PaaSStreamUrlTimeDownloadRequestData
		{
		public:
			PaaSStreamUrlTimeDownloadRequestData();
			~PaaSStreamUrlTimeDownloadRequestData();
			
		public:
			/** [long] 类型int64_t。用户期望资源访问有效时间，单位：秒。可选，以响应返回的expire为准 */
			int64 duration;
		public:
			/** 请求的是拉流还是推流url pull push */
			string urlType;
		public:
			/** [bool] 是否全帧 true */
			bool fullFrame;
		public:
			/** 文件本地结束时间 必填项 和endTime 二选一 */
			string localEndTime;
		public:
			/** 文件UTC起始时间 必填项 和localBeginTime二选一 */
			string beginTime;
		public:
			/** 伪造sdp信息 只针对RTSP，伪造sdp，用于平台内部拉流快速出流 Private */
			string packtype;
		public:
			/** define a list with struct of PaaSStreamUrlTimeDownloadRequestData_ControlInfo */
			class PaaSStreamUrlTimeDownloadRequestData_ControlInfo : public LCOpenApiBase
			{
			public:
				PaaSStreamUrlTimeDownloadRequestData_ControlInfo();
				~PaaSStreamUrlTimeDownloadRequestData_ControlInfo();
			public:
				/** [double] 负数表示倒放(功能暂不支持),可选,默认值1.0 ,当参数为负数时,已下游处理为准 */
				double speed;
			public:
				/** [int] 相对结束时间,单位秒,可选, 取值范围-1或大于0，-1表示文件末尾,默认值0,当relativeEndTime<=0且不等于-1时认为不合法，relativeStartTime及relativeEndTime均不向下透传 */
				int relativeEndTime;
			public:
				/** [int] 相对开始时间,单位秒,可选, 取值范围大于等于0 默认值0 当relativeStartTime<0时，认为不合法，relativeStartTime及relativeEndTime均不向下透传 */
				int relativeStartTime;
			};
		public:
			PaaSStreamUrlTimeDownloadRequestData_ControlInfo* controlInfo;
		public:
			/** 码流类型 main, extra1, extra2, extra3 */
			string subtype;
		public:
			/** 文件本地起始时间 必填项 和beginTime 二选一 */
			string localBeginTime;
		public:
			/** 传输类型,可选，默认为TCP。LHTS和CQTS传输协议目前只在RTSV媒体协议上支持 */
			string transport;
		public:
			/** [bool] 返回是否是域名, 可选, 默认为false */
			bool domainEnable;
		public:
			/** 设备加密模式 0:不加密 3:三码合一 */
			string encryptType;
		public:
			/** 协议类型 RTSP RTSV */
			string scheme;
		public:
			/** 录像类型 normal alarm manual fill motionDectect */
			string recordType;
		public:
			/** 客户端地址 */
			string clientIp;
		public:
			/** 用户标识 VSL带来的字段，在url直接返回该内容，不做任何处理，默认invalid */
			string userCode;
		public:
			/** 录像位置。选填项，公有云和行业云默认优先访问云端，其次设备录像。device lcDevice cloud 3rdCloud lc3rdCloud */
			string location;
		public:
			/** [bool] 是否需要重定向 false */
			bool locationEnable;
		public:
			/** 文件UTC结束时间 必填项 和localEndnTime二选一 */
			string endTime;
		public:
			/** 客户端类型 */
			string clientType;

		};
	public:
		PaaSStreamUrlTimeDownloadRequest();
		~PaaSStreamUrlTimeDownloadRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		PaaSStreamUrlTimeDownloadRequestData data;
		MetaInfo* _metainfo_PaaSStreamUrlTimeDownloadRequestData;
	};

	
	typedef PaaSStreamUrlTimeDownloadRequest::PaaSStreamUrlTimeDownloadRequestData PaaSStreamUrlTimeDownloadRequestData;
	typedef PaaSStreamUrlTimeDownloadRequest::PaaSStreamUrlTimeDownloadRequestData::PaaSStreamUrlTimeDownloadRequestData_ControlInfo PaaSStreamUrlTimeDownloadRequestData_ControlInfo;


	class PaaSStreamUrlTimeDownloadResponse : public LCOpenApiResponse
	{
	public:
		class PaaSStreamUrlTimeDownloadResponseData
		{
		public:
			PaaSStreamUrlTimeDownloadResponseData();
			~PaaSStreamUrlTimeDownloadResponseData();
			
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
			/** [int] 当前实时流的总负荷 55 */
			int load;
		public:
			/** 资源获取地址 */
			string resource;

		};
	public:
		PaaSStreamUrlTimeDownloadResponse();
		~PaaSStreamUrlTimeDownloadResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		PaaSStreamUrlTimeDownloadResponseData data;
		MetaInfo* _metainfo_PaaSStreamUrlTimeDownloadResponseData;
	};

	
	typedef PaaSStreamUrlTimeDownloadResponse::PaaSStreamUrlTimeDownloadResponseData PaaSStreamUrlTimeDownloadResponseData;

}
}

#endif

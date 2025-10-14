/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PaaSStreamUrlFilePlayback_H_
#define _LC_OPENAPI_CLIENT_PaaSStreamUrlFilePlayback_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
	ToDo add comment

	POST /media/delivery/v2/fileplayback/channels/[channelId]

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
	class PaaSStreamUrlFilePlaybackRequest : public LCOpenApiRequest
	{
	public:
		class PaaSStreamUrlFilePlaybackRequestData
		{
		public:
			PaaSStreamUrlFilePlaybackRequestData();
			~PaaSStreamUrlFilePlaybackRequestData();
			
		public:
			/** define a list with struct of PaaSStreamUrlFilePlaybackRequestData_ControlInfo */
			class PaaSStreamUrlFilePlaybackRequestData_ControlInfo : public LCOpenApiBase
			{
			public:
				PaaSStreamUrlFilePlaybackRequestData_ControlInfo();
				~PaaSStreamUrlFilePlaybackRequestData_ControlInfo();
			public:
				/** [double] 负数表示倒放(功能暂不支持),可选,默认值1.0 ,当参数为负数时,已下游处理为准 */
				double speed;
			public:
				/** define a list with struct of PaaSStreamUrlFilePlaybackRequestData_ControlInfo_Passthrough */
				class PaaSStreamUrlFilePlaybackRequestData_ControlInfo_Passthrough : public LCOpenApiBase
				{
				public:
					PaaSStreamUrlFilePlaybackRequestData_ControlInfo_Passthrough();
					~PaaSStreamUrlFilePlaybackRequestData_ControlInfo_Passthrough();
				public:
					/** [int] 0-不需要跨文件 1-需要跨文件 默认为0 */
					int isCrossFile;
				};
			public:
				PaaSStreamUrlFilePlaybackRequestData_ControlInfo_Passthrough* passthrough;
			public:
				/** [int] 相对结束时间,单位秒,可选, 取值范围-1或大于0，-1表示文件末尾,默认值0,当relativeEndTime<=0且不等于-1时认为不合法，relativeStartTime及relativeEndTime均不向下透传 */
				int relativeEndTime;
			public:
				/** [int] 相对开始时间,单位秒,可选, 取值范围大于等于0 默认值0 当relativeStartTime<0时，认为不合法，relativeStartTime及relativeEndTime均不向下透传 */
				int relativeStartTime;
			};
		public:
			PaaSStreamUrlFilePlaybackRequestData_ControlInfo* controlInfo;
		public:
			/** 流媒体RTSV传输协议的信令加密模式，可选项，仅当scheme传输协议为RTSV系列协议（RTSV1\RTSV2\PBSV1\PBSV2\TSV1\TSV2等）时生效(PrivateEncrypt)。否则将忽略。为空或者没有此字段，等同于 NotEncrypt。 */
			string encryptionMode;
		public:
			/** 传输类型,可选，默认为TCP。LHTS和CQTS传输协议目前只在RTSV媒体协议上支持 */
			string transport;
		public:
			/** 码流类型 main, extra1, extra2, extra3 */
			string subtype;
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
			/** 设备加密模式 0:不加密 3:三码合一 */
			string encryptType;
		public:
			/** 请求的是拉流还是推流url pull push */
			string urlType;
		public:
			/** 录像类型 normal alarm manual fill motionDectect */
			string recordType;
		public:
			/** 客户端类型 */
			string clientType;
		public:
			/** [bool] 是否全帧 true */
			bool fullFrame;
		public:
			/** 协议类型 RTSP RTSV */
			string scheme;
		public:
			/** 录像文件的唯一标识，包括但不限于磁盘录像文件名，数据库记录的数据文件的ID等各种可以唯一表示一个录像文件的标识。必选项 */
			string file;
		public:
			/** 用户标识 VSL带来的字段，在url直接返回该内容，不做任何处理，默认invalid */
			string userCode;
		public:
			/** 伪造sdp信息 只针对RTSP，伪造sdp，用于平台内部拉流快速出流 Private */
			string packtype;

		};
	public:
		PaaSStreamUrlFilePlaybackRequest();
		~PaaSStreamUrlFilePlaybackRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		PaaSStreamUrlFilePlaybackRequestData data;
		MetaInfo* _metainfo_PaaSStreamUrlFilePlaybackRequestData;
	};

	
	typedef PaaSStreamUrlFilePlaybackRequest::PaaSStreamUrlFilePlaybackRequestData PaaSStreamUrlFilePlaybackRequestData;
	typedef PaaSStreamUrlFilePlaybackRequest::PaaSStreamUrlFilePlaybackRequestData::PaaSStreamUrlFilePlaybackRequestData_ControlInfo PaaSStreamUrlFilePlaybackRequestData_ControlInfo;
	typedef PaaSStreamUrlFilePlaybackRequest::PaaSStreamUrlFilePlaybackRequestData::PaaSStreamUrlFilePlaybackRequestData_ControlInfo::PaaSStreamUrlFilePlaybackRequestData_ControlInfo_Passthrough PaaSStreamUrlFilePlaybackRequestData_ControlInfo_Passthrough;


	class PaaSStreamUrlFilePlaybackResponse : public LCOpenApiResponse
	{
	public:
		class PaaSStreamUrlFilePlaybackResponseData
		{
		public:
			PaaSStreamUrlFilePlaybackResponseData();
			~PaaSStreamUrlFilePlaybackResponseData();
			
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
			/** [int] 当前实时流的总负荷 55 */
			int load;
		public:
			/** 资源获取地址 */
			string resource;

		};
	public:
		PaaSStreamUrlFilePlaybackResponse();
		~PaaSStreamUrlFilePlaybackResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		PaaSStreamUrlFilePlaybackResponseData data;
		MetaInfo* _metainfo_PaaSStreamUrlFilePlaybackResponseData;
	};

	
	typedef PaaSStreamUrlFilePlaybackResponse::PaaSStreamUrlFilePlaybackResponseData PaaSStreamUrlFilePlaybackResponseData;

}
}

#endif

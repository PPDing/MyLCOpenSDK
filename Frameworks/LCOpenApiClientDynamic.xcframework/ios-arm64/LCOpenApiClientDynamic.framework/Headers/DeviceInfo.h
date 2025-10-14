/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceInfo_H_
#define _LC_OPENAPI_CLIENT_DeviceInfo_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取单个设备的信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceInfoRequest : public LCOpenApiRequest
	{
	public:
		class DeviceInfoRequestData
		{
		public:
			DeviceInfoRequestData();
			~DeviceInfoRequestData();
			
		public:
			/** [String]拉流回放地址 */
			string appendUrl;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		DeviceInfoRequest();
		~DeviceInfoRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		DeviceInfoRequestData data;
		MetaInfo* _metainfo_DeviceInfoRequestData;
	};

	
	typedef DeviceInfoRequest::DeviceInfoRequestData DeviceInfoRequestData;


	class DeviceInfoResponse : public LCOpenApiResponse
	{
	public:
		class DeviceInfoResponseData
		{
		public:
			DeviceInfoResponseData();
			~DeviceInfoResponseData();
			
		public:
			/** [int]平台类型 */
			int platForm;
		public:
			/** define a list with struct of DeviceInfoResponseData_ChannelsElement */
			class DeviceInfoResponseData_ChannelsElement : public LCOpenApiBase
			{
			public:
				DeviceInfoResponseData_ChannelsElement();
				~DeviceInfoResponseData_ChannelsElement();
			public:
				/** [int]报警布撤防状态，0-撤防，1-布防 */
				int alarmStatus;
			public:
				/** 通道名称 */
				string channelName;
			public:
				/** [O]通道能力项，逗号隔开，如AlarmMD,AudioTalk,AlarmPIR,WLAN,VVP2P，详见乐橙设备协议 */
				string channelAbility;
			public:
				/** 缩略图URL */
				string channelPicUrl;
			public:
				/** [int]通道号 */
				int channelId;
			public:
				/** [bool]是否在线 */
				bool channelOnline;
			public:
				/** [int]云存储状态：-1-未开通 0-已失效 1-使用中 2-套餐暂停 */
				int csStatus;
			};
		public:
			LCOpenApiVector<DeviceInfoResponseData_ChannelsElement> channels;
		public:
			/** define a list with struct of DeviceInfoResponseData_StreamInfo */
			class DeviceInfoResponseData_StreamInfo : public LCOpenApiBase
			{
			public:
				DeviceInfoResponseData_StreamInfo();
				~DeviceInfoResponseData_StreamInfo();
			public:
				/** [String]辅助帧(开放平台5.3需求新增参数) */
				string assistStream;
			public:
				/** [int][O]限制并发路数 -1:不限制路数 其它:具体限制数 */
				int videoLimit;
			public:
				/** [String]设备级对讲与通道级对讲类型区分，device：表示设备级对讲，channel：表示通道级对讲 */
				string deviceType;
			public:
				/** [String]是否跳过回环认证 */
				string skipAuth;
			public:
				/** [String]一次性Token */
				string rtspToken;
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
				/** [String]可选，协议拉流类型 */
				string type;
			public:
				/** [String]回放结束时间，requestType为playbackByTime时有值返回，其他为空字符串 */
				string endTime;
			public:
				/** [O]流量统计时所属用户的唯一标识，当前用userId */
				string owner;
			public:
				/** [String]设置拉流时长，单位：min */
				string duration;
			public:
				/** [String]pc客户端拉流窗口号 */
				string windowNum;
			public:
				/** [String]回放文件id，requestType为playbackByRecordId时有值返回，其他为空字符串 */
				string recordId;
			public:
				/** [String]回放开始时间，requestType为playbackByTime时有值返回，其他为空字符串 */
				string startTime;
			public:
				/** [O]所属平台open:开放平台 base:乐橙平台 */
				string ownerType;
			public:
				/** [int]通道ID */
				int channelId;
			public:
				/** [String]主、辅码流编号 */
				string streamId;
			public:
				/** 获取实时流url的入口地址 */
				string streamEntryAddr;
			};
		public:
			DeviceInfoResponseData_StreamInfo* streamInfo;
		public:
			/** [int]p2p拉流端口 */
			int streamPort;
		public:
			/** [bool]是否有新版本可以升级 */
			bool canBeUpgrade;
		public:
			/** [int]当前状态：0-离线，1-在线，3-升级中 */
			int status;
		public:
			/** 设备登陆密码 */
			string devLoginPassword;
		public:
			/** 长链接地址（新） */
			string streamAddr;
		public:
			/** [O]设备能力项，逗号隔开，如AlarmMD,AudioTalk,AlarmPIR,WLAN,VVP2P，详见乐橙设备协议 */
			string ability;
		public:
			/** 设备名称 */
			string name;
		public:
			/** [int]netsdk私有协议拉流端口 */
			int port;
		public:
			/** 设备ID */
			string deviceId;
		public:
			/** [int]总的视频通道数，包含未接入的通道 */
			int channelNum;
		public:
			/** [int]http私有协议拉流端口 */
			int httpPort;
		public:
			/** 设备软件版本号 */
			string version;
		public:
			/** [int]rtsp拉流端口 */
			int rtspPort;
		public:
			/** [O]设备型号 */
			string deviceModel;
		public:
			/** [int]加密模式 */
			int encryptMode;
		public:
			/** 设备登陆用户名 */
			string devLoginName;
		public:
			/** 长链接地址 */
			string streamEntryAddr;

		};
	public:
		DeviceInfoResponse();
		~DeviceInfoResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		DeviceInfoResponseData data;
		MetaInfo* _metainfo_DeviceInfoResponseData;
	};

	
	typedef DeviceInfoResponse::DeviceInfoResponseData DeviceInfoResponseData;
	typedef DeviceInfoResponse::DeviceInfoResponseData::DeviceInfoResponseData_ChannelsElement DeviceInfoResponseData_ChannelsElement;
	typedef DeviceInfoResponse::DeviceInfoResponseData::DeviceInfoResponseData_StreamInfo DeviceInfoResponseData_StreamInfo;

}
}

#endif

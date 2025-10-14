/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ListDeviceDetailsByIds_H_
#define _LC_OPENAPI_CLIENT_ListDeviceDetailsByIds_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
批量根据设备序列号，获取设备的详细信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ListDeviceDetailsByIdsRequest : public LCOpenApiRequest
	{
	public:
		class ListDeviceDetailsByIdsRequestData
		{
		public:
			ListDeviceDetailsByIdsRequestData();
			~ListDeviceDetailsByIdsRequestData();
			
		public:
			/** define a list with struct of ListDeviceDetailsByIdsRequestData_DeviceListElement */
			class ListDeviceDetailsByIdsRequestData_DeviceListElement : public LCOpenApiBase
			{
			public:
				ListDeviceDetailsByIdsRequestData_DeviceListElement();
				~ListDeviceDetailsByIdsRequestData_DeviceListElement();
			public:
				/** 通道编码 */
				LCOpenApiVector<string> channelId;
			public:
				/** 设备编码 */
				string deviceId;
			};
		public:
			LCOpenApiVector<ListDeviceDetailsByIdsRequestData_DeviceListElement> deviceList;
		public:
			/** 授权token(userToken或accessToken) */
			string token;

		};
	public:
		ListDeviceDetailsByIdsRequest();
		~ListDeviceDetailsByIdsRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		ListDeviceDetailsByIdsRequestData data;
		MetaInfo* _metainfo_ListDeviceDetailsByIdsRequestData;
	};

	
	typedef ListDeviceDetailsByIdsRequest::ListDeviceDetailsByIdsRequestData ListDeviceDetailsByIdsRequestData;
	typedef ListDeviceDetailsByIdsRequest::ListDeviceDetailsByIdsRequestData::ListDeviceDetailsByIdsRequestData_DeviceListElement ListDeviceDetailsByIdsRequestData_DeviceListElement;


	class ListDeviceDetailsByIdsResponse : public LCOpenApiResponse
	{
	public:
		class ListDeviceDetailsByIdsResponseData
		{
		public:
			ListDeviceDetailsByIdsResponseData();
			~ListDeviceDetailsByIdsResponseData();
			
		public:
			/** [int]本次查询到的设备通道数 */
			int count;
		public:
			/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement */
			class ListDeviceDetailsByIdsResponseData_DeviceListElement : public LCOpenApiBase
			{
			public:
				ListDeviceDetailsByIdsResponseData_DeviceListElement();
				~ListDeviceDetailsByIdsResponseData_DeviceListElement();
			public:
				/** 设备来源，paas:来自大华，lc:来自乐橙 */
				string sourceType;
			public:
				/** 设备大类：NVR/DVR/HCVR/IPC/SD/IHG/ARC */
				string catalog;
			public:
				/** playToken秘钥 */
				string playTokenKey;
			public:
				/** 设备安全码 */
				string deviceSafeCode;
			public:
				/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps */
				class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps : public LCOpenApiBase
				{
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps();
					~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps();
				public:
					/** [bool] */
					bool SupDisarmLinkageAlarmBellEnable;
				public:
					/** [bool]CMS相关配置 */
					bool SupCMS;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSpeakerFeaturesStruct */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSpeakerFeaturesStruct : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSpeakerFeaturesStruct();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSpeakerFeaturesStruct();
					public:
						/** [bool] */
						bool Support;
					};
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSpeakerFeaturesStruct* SupSpeakerFeatures;
				public:
					/** [bool]Led开关使能 */
					bool SupDisableLed;
				public:
					/** [bool] */
					bool SupUpLoadCloud;
				public:
					/** [int]SIM卡类型 */
					int SupSIMType;
				public:
					/** [bool]衰退模式设置 */
					bool SupAttenuationMode;
				public:
					/** [bool]流量统计 */
					bool SupFluxStat;
				public:
					/** [bool] */
					bool SupCard;
				public:
					/** [bool]SIA相关配置 */
					bool SupSIA;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupAlarmUserManagerFeaturesStruct */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupAlarmUserManagerFeaturesStruct : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupAlarmUserManagerFeaturesStruct();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupAlarmUserManagerFeaturesStruct();
					public:
						/** [bool] */
						bool UserNumber;
					public:
						/** 报警权限 */
						LCOpenApiVector<string> AuthorityList;
					};
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupAlarmUserManagerFeaturesStruct* SupAlarmUserManagerFeatures;
				public:
					/** [bool] */
					bool SupLog;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPowerFeaturesStruct */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPowerFeaturesStruct : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPowerFeaturesStruct();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPowerFeaturesStruct();
					public:
						/** [bool] */
						bool SupPowerFaultDelay;
					};
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPowerFeaturesStruct* SupPowerFeatures;
				public:
					/** [bool] */
					bool SupDelayArming;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTriggerAlarmFeaturesStruct */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTriggerAlarmFeaturesStruct : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTriggerAlarmFeaturesStruct();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTriggerAlarmFeaturesStruct();
					public:
						/** 支持多选报警类型 */
						LCOpenApiVector<string> SupAlarmType;
					public:
						/** [bool]支持APP紧急报警按钮 */
						bool Support;
					public:
						/** [bool]支持GPS信息功能携带 */
						bool SupGPSInfo;
					};
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTriggerAlarmFeaturesStruct* SupTriggerAlarmFeatures;
				public:
					/** [bool] */
					bool SupTriggerAlarm;
				public:
					/** [bool] */
					bool enable;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupCameraFeaturesStruct */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupCameraFeaturesStruct : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupCameraFeaturesStruct();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupCameraFeaturesStruct();
					public:
						/** [int]最大功能个数 */
						int MaxNum;
					public:
						/** [int] */
						int LogicChannelStart;
					public:
						/** [bool] */
						bool Access;
					public:
						/** 最大分辨率 */
						string MaxResolutions;
					};
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupCameraFeaturesStruct* SupCameraFeatures;
				public:
					/** [bool]临时停用功能 */
					bool SupDisableSensor;
				public:
					/** [bool] */
					bool SupSIARetransmissionTimes;
				public:
					/** 支持的用户管理 */
					LCOpenApiVector<string> SupUserManager;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupVoiceFileFeaturesStruct */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupVoiceFileFeaturesStruct : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupVoiceFileFeaturesStruct();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupVoiceFileFeaturesStruct();
					public:
						/** [bool]是否支持设备语音语言 */
						bool Support;
					public:
						/** [bool] 是否支持上传语音文件 */
						bool SupUpload;
					};
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupVoiceFileFeaturesStruct* SupVoiceFileFeatures;
				public:
					/** [bool]网络优先级功能 */
					bool SupChangeNet;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMultiLanguageFeaturesStruct */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMultiLanguageFeaturesStruct : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMultiLanguageFeaturesStruct();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMultiLanguageFeaturesStruct();
					public:
						/** [bool]是否支持多语言配置 */
						bool Support;
					};
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMultiLanguageFeaturesStruct* SupMultiLanguageFeatures;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupWifiStruct */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupWifiStruct : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupWifiStruct();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupWifiStruct();
					public:
						/** [bool]WiFi相关配置 */
						bool Enable;
					};
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupWifiStruct* SupWifi;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPrivateFeaturesStruct */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPrivateFeaturesStruct : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPrivateFeaturesStruct();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPrivateFeaturesStruct();
					public:
						/** [bool] */
						bool EventVerification;
					public:
						/** [bool] */
						bool ManualTest;
					public:
						/** [bool] */
						bool PeriodicTest;
					public:
						/** [bool] */
						bool EventTypeList;
					};
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPrivateFeaturesStruct* SupPrivateFeatures;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct();
					public:
						/** 支持短信格式选择 */
						LCOpenApiVector<string> SupSMSFormat;
					public:
						/** [bool] */
						bool Support;
					public:
						/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct_SupCallLinkagePolicyFeaturesStruct */
						class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct_SupCallLinkagePolicyFeaturesStruct : public LCOpenApiBase
						{
						public:
							ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct_SupCallLinkagePolicyFeaturesStruct();
							~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct_SupCallLinkagePolicyFeaturesStruct();
						public:
							/** [bool]是否支持报警联动电话配置 */
							bool Support;
						};
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct_SupCallLinkagePolicyFeaturesStruct* SupCallLinkagePolicyFeatures;
					public:
						/** [bool] */
						bool SupPINCode;
					public:
						/** [bool] */
						bool SupSMSMultiLanguage;
					public:
						/** [bool] */
						bool SupCellularRoaming;
					public:
						/** [bool] */
						bool SupAudioPlay;
					};
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct* SupMobileFeatures;
				public:
					/** [int]能力集大版本 */
					int FunctionVerison;
				public:
					/** 支持的探测器类型 */
					LCOpenApiVector<string> SupSensorType;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSIAFeaturesStruct */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSIAFeaturesStruct : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSIAFeaturesStruct();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSIAFeaturesStruct();
					public:
						/** [bool] */
						bool ManualTest;
					public:
						/** [bool] */
						bool ModifyByRPC;
					public:
						/** [bool] */
						bool EventVerification;
					public:
						/** [bool] */
						bool PeriodicTest;
					public:
						/** [int] */
						int MaxCenterCount;
					public:
						/** 协议类型 */
						LCOpenApiVector<string> ProtocolType;
					public:
						/** [bool] */
						bool DNS;
					public:
						/** 连接类型 */
						LCOpenApiVector<string> SupConnectType;
					public:
						/** [bool] */
						bool RetransmissionDeadline;
					};
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSIAFeaturesStruct* SupSIAFeatures;
				public:
					/** [bool] */
					bool SupSIARetransmissionDeadline;
				public:
					/** [bool] */
					bool supportBeepOnDelay;
				public:
					/** [int]支持系统检测细化项 */
					int SupArmCheck;
				public:
					/** 版本号 */
					string Version;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTalkbackFeaturesStruct */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTalkbackFeaturesStruct : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTalkbackFeaturesStruct();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTalkbackFeaturesStruct();
					public:
						/** [bool]支持对讲功能 */
						bool Support;
					};
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTalkbackFeaturesStruct* SupTalkbackFeatures;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSystemStatusCheckFeaturesStruct */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSystemStatusCheckFeaturesStruct : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSystemStatusCheckFeaturesStruct();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSystemStatusCheckFeaturesStruct();
					public:
						/** [bool]是否支持系统检查 */
						bool Support;
					public:
						/** [bool]是否支持系统检查带强制布防 */
						bool ArmingWithFault;
					};
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSystemStatusCheckFeaturesStruct* SupSystemStatusCheckFeatures;
				public:
					/** 默认检测集合 */
					LCOpenApiVector<string> SupFaultDetectionItems;
				public:
					/** [bool] */
					bool SupPINCode;
				public:
					/** [bool] */
					bool SupIndexInfo;
				};
			public:
				ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps* caps;
			public:
				/** tls私有端口 */
				string tlsPrivatePort;
			public:
				/** [int] 0表示没托管能力，1表示有托管能力 */
				int supportAsyncCheck;
			public:
				/** 设备版本号 */
				string deviceVersion;
			public:
				/** 零通道号 */
				string MultiPreview;
			public:
				/** 0设备的主辅码流 */
				string deviceStreamEnable;
			public:
				/** 信号类型2G、4G、NOSIM */
				string simType;
			public:
				/** [bool]是否支持tls */
				bool tlsEnable;
			public:
				/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement */
				class ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement : public LCOpenApiBase
				{
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement();
					~ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement();
				public:
					/** 云存储状态，notExist：未开通套餐，using：开通云存储且没有过期，expired：套餐过期 */
					string csStatus;
				public:
					/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement_ResolutionsElement */
					class ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement_ResolutionsElement : public LCOpenApiBase
					{
					public:
						ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement_ResolutionsElement();
						~ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement_ResolutionsElement();
					public:
						/** [int]码流类型 */
						int streamType;
					public:
						/** 分辨率名称 */
						string name;
					public:
						/** [bool]是否是当前分辨率 */
						bool enable;
					public:
						/** 分辨率模式名称 */
						string mode;
					public:
						/** [int]分辨率编号 */
						int imageSize;
					};
				public:
					LCOpenApiVector<ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement_ResolutionsElement> resolutions;
				public:
					/** 通道状态，online：在线，offline：离线，sleep：休眠，upgrading升级中 */
					string channelStatus;
				public:
					/** 0通道的主辅码流 */
					string channelStreamEnable;
				public:
					/** 隐私模式开关相机状态，on：开，off：关 */
					string cameraStatus;
				public:
					/** 通道名称 */
					string channelName;
				public:
					/** on-打开，off-关闭 */
					string trackFollowStatus;
				public:
					/** [int]单元类型 */
					int unitType;
				public:
					/** 通道能力集，逗号隔开 */
					string channelAbility;
				public:
					/** 设备通道封面图，新设备可能不存在封面图，可上传设备通道封面图或者刷新设备封面图 */
					string channelPicUrl;
				public:
					/** 通道号 */
					string channelId;
				public:
					/** 分享权限下的权限字符串，逗号隔开 */
					string shareFunctions;
				public:
					/** 通道最后离线时间 */
					string lastOffLineTime;
				};
			public:
				LCOpenApiVector<ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement> channelList;
			public:
				/** p2p端口 */
				string p2pPort;
			public:
				/** 加密后的信息，APP需要用设备编码解密 */
				string playInfo;
			public:
				/** 设备序列号 */
				string deviceId;
			public:
				/** rtsp拉流端口 */
				string rtspPort;
			public:
				/** on-打开，off-关闭 */
				string trackFollowStatus;
			public:
				/** SD卡状态 */
				string sdcardStatus;
			public:
				/** 设备接入类型，PaaS-表示Paas程序接入、Lechange-表示乐橙非PaaS设备、Easy4IP表示Easy4IP程序设备、P2P表示P2P程序设备 */
				string accessType;
			public:
				/** 设备品牌信息：lechange-乐橙设备，general-通用设备 */
				string brand;
			public:
				/** 设备能力集，逗号隔开 */
				string deviceAbility;
			public:
				/** 权限类型：bind/share */
				string source;
			public:
				/** 入网方式，LAN:有线  Wifi:无线 SIMCard:SIM卡 */
				string netType;
			public:
				/** 强度 单位为dbm */
				string simSigStrength;
			public:
				/** 强度 0最弱，5最强 */
				string simIntensity;
			public:
				/** netsdk私有协议拉流端口 */
				string port;
			public:
				/** [bool]是否为子设备 */
				bool isSubDevice;
			public:
				/** WiFi配置模式，逗号隔开 */
				string wifiConfigMode;
			public:
				/** 设备名称 */
				string deviceName;
			public:
				/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_AplistElement */
				class ListDeviceDetailsByIdsResponseData_DeviceListElement_AplistElement : public LCOpenApiBase
				{
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_AplistElement();
					~ListDeviceDetailsByIdsResponseData_DeviceListElement_AplistElement();
				public:
					/** 配件id */
					string apId;
				public:
					/** 配件类型 */
					string apType;
				public:
					/** 配件名称 */
					string apName;
				};
			public:
				LCOpenApiVector<ListDeviceDetailsByIdsResponseData_DeviceListElement_AplistElement> aplist;
			public:
				/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_DeviceModelImages */
				class ListDeviceDetailsByIdsResponseData_DeviceListElement_DeviceModelImages : public LCOpenApiBase
				{
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_DeviceModelImages();
					~ListDeviceDetailsByIdsResponseData_DeviceListElement_DeviceModelImages();
				public:
					/** 设备图片url */
					string deviceManagerWiredAddDevice;
				public:
					/** 设备图片url */
					string commonList;
				public:
					/** 设备图片url */
					string deviceManagerManualDetails;
				public:
					/** 设备图片url */
					string deviceManagerWork;
				public:
					/** 设备图片url */
					string messageList;
				public:
					/** 设备图片url */
					string v2CommonList;
				public:
					/** 设备图片url */
					string deviceManagerAddDevice;
				};
			public:
				ListDeviceDetailsByIdsResponseData_DeviceListElement_DeviceModelImages* deviceModelImages;
			public:
				/** [int]是否强制升级 */
				int isForcedUpgrade;
			public:
				/** 设备加密模式：0-设备默认加密 1-用户自定义加密 */
				string encryptMode;
			public:
				/** 设备可升级到的版本号 */
				string deviceUpgradeVersion;
			public:
				/** [bool]设备软件程序是否有新版本可以升级 */
				bool canBeUpgrade;
			public:
				/** 设备密码 */
				string devicePassword;
			public:
				/** [bool]是否支持WiFi配置模式 */
				bool wifiConfigModeOptional;
			public:
				/** [bool] */
				bool multiFlag;
			public:
				/** 设备最后离线时间 */
				string lastOffLineTime;
			public:
				/** 设备型号 */
				string deviceModel;
			public:
				/** [int]当前使用卡的类型，0:内置卡 1:外置卡 */
				int currentSim;
			public:
				/** 盐值 */
				string salt;
			public:
				/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_SimInfoElement */
				class ListDeviceDetailsByIdsResponseData_DeviceListElement_SimInfoElement : public LCOpenApiBase
				{
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_SimInfoElement();
					~ListDeviceDetailsByIdsResponseData_DeviceListElement_SimInfoElement();
				public:
					/** 集成电路卡识别码即SIM卡卡号 */
					string iccid;
				public:
					/** 手机序列号 */
					string imei;
				public:
					/** [int]支持双卡时当前卡类型，0:内置卡 1:外置卡 */
					int type;
				};
			public:
				LCOpenApiVector<ListDeviceDetailsByIdsResponseData_DeviceListElement_SimInfoElement> simInfo;
			public:
				/** [int]通道数量 */
				int channelNum;
			public:
				/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_ResolutionsElement */
				class ListDeviceDetailsByIdsResponseData_DeviceListElement_ResolutionsElement : public LCOpenApiBase
				{
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_ResolutionsElement();
					~ListDeviceDetailsByIdsResponseData_DeviceListElement_ResolutionsElement();
				public:
					/** 码流类型 */
					string streamType;
				public:
					/** 分辨率名称 */
					string name;
				public:
					/** 是否是当前分辨率 */
					string enable;
				public:
					/** 分辨率模式名称 */
					string mode;
				public:
					/** 分辨率编号 */
					string imageSize;
				};
			public:
				LCOpenApiVector<ListDeviceDetailsByIdsResponseData_DeviceListElement_ResolutionsElement> resolutions;
			public:
				/** http私有协议拉流端口 */
				string httpPort;
			public:
				/** 设备播放码，opensdk使用 */
				string playToken;
			public:
				/** WiFi可转换模式，逗号隔开 */
				string wifiTransferMode;
			public:
				/** define a list with struct of ListDeviceDetailsByIdsResponseData_DeviceListElement_VoiceFileInfo */
				class ListDeviceDetailsByIdsResponseData_DeviceListElement_VoiceFileInfo : public LCOpenApiBase
				{
				public:
					ListDeviceDetailsByIdsResponseData_DeviceListElement_VoiceFileInfo();
					~ListDeviceDetailsByIdsResponseData_DeviceListElement_VoiceFileInfo();
				public:
					/** 设备语音语言 */
					string language;
				public:
					/** 设备语音包版本 */
					string version;
				};
			public:
				ListDeviceDetailsByIdsResponseData_DeviceListElement_VoiceFileInfo* voiceFileInfo;
			public:
				/** 设备用户名 */
				string deviceUsername;
			public:
				/** 设备状态，online：在线，offline：离线，sleep：休眠，upgrading升级中 */
				string deviceStatus;
			};
		public:
			LCOpenApiVector<ListDeviceDetailsByIdsResponseData_DeviceListElement> deviceList;

		};
	public:
		ListDeviceDetailsByIdsResponse();
		~ListDeviceDetailsByIdsResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		ListDeviceDetailsByIdsResponseData data;
		MetaInfo* _metainfo_ListDeviceDetailsByIdsResponseData;
	};

	
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData ListDeviceDetailsByIdsResponseData;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement ListDeviceDetailsByIdsResponseData_DeviceListElement;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSpeakerFeaturesStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSpeakerFeaturesStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupAlarmUserManagerFeaturesStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupAlarmUserManagerFeaturesStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPowerFeaturesStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPowerFeaturesStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTriggerAlarmFeaturesStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTriggerAlarmFeaturesStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupCameraFeaturesStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupCameraFeaturesStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupVoiceFileFeaturesStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupVoiceFileFeaturesStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMultiLanguageFeaturesStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMultiLanguageFeaturesStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupWifiStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupWifiStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPrivateFeaturesStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupPrivateFeaturesStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct_SupCallLinkagePolicyFeaturesStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupMobileFeaturesStruct_SupCallLinkagePolicyFeaturesStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSIAFeaturesStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSIAFeaturesStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTalkbackFeaturesStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupTalkbackFeaturesStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps::ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSystemStatusCheckFeaturesStruct ListDeviceDetailsByIdsResponseData_DeviceListElement_Caps_SupSystemStatusCheckFeaturesStruct;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement_ResolutionsElement ListDeviceDetailsByIdsResponseData_DeviceListElement_ChannelListElement_ResolutionsElement;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_AplistElement ListDeviceDetailsByIdsResponseData_DeviceListElement_AplistElement;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_DeviceModelImages ListDeviceDetailsByIdsResponseData_DeviceListElement_DeviceModelImages;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_SimInfoElement ListDeviceDetailsByIdsResponseData_DeviceListElement_SimInfoElement;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_ResolutionsElement ListDeviceDetailsByIdsResponseData_DeviceListElement_ResolutionsElement;
	typedef ListDeviceDetailsByIdsResponse::ListDeviceDetailsByIdsResponseData::ListDeviceDetailsByIdsResponseData_DeviceListElement::ListDeviceDetailsByIdsResponseData_DeviceListElement_VoiceFileInfo ListDeviceDetailsByIdsResponseData_DeviceListElement_VoiceFileInfo;

}
}

#endif

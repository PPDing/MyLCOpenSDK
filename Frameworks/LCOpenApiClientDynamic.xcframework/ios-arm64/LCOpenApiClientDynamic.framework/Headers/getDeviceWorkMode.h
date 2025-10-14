/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_getDeviceWorkMode_H_
#define _LC_OPENAPI_CLIENT_getDeviceWorkMode_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询设备的工作模式
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class getDeviceWorkModeRequest : public LCOpenApiRequest
	{
	public:
		class getDeviceWorkModeRequestData
		{
		public:
			getDeviceWorkModeRequestData();
			~getDeviceWorkModeRequestData();
			
		public:
			/** 可选，通道上设备序列号，优先级大于channelId */
			string channelSn;
		public:
			/** 可选，不存在默认查询的是设备 */
			string channelId;
		public:
			/**  */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		getDeviceWorkModeRequest();
		~getDeviceWorkModeRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		getDeviceWorkModeRequestData data;
		MetaInfo* _metainfo_getDeviceWorkModeRequestData;
	};

	
	typedef getDeviceWorkModeRequest::getDeviceWorkModeRequestData getDeviceWorkModeRequestData;


	class getDeviceWorkModeResponse : public LCOpenApiResponse
	{
	public:
		class getDeviceWorkModeResponseData
		{
		public:
			getDeviceWorkModeResponseData();
			~getDeviceWorkModeResponseData();
			
		public:
			/** define a list with struct of getDeviceWorkModeResponseData_Detail */
			class getDeviceWorkModeResponseData_Detail : public LCOpenApiBase
			{
			public:
				getDeviceWorkModeResponseData_Detail();
				~getDeviceWorkModeResponseData_Detail();
			public:
				/** 可选，两次PIR间隔时间, [string]，单位秒 */
				string intervalTime;
			public:
				/** define a list with struct of getDeviceWorkModeResponseData_Detail_TimedWakeup */
				class getDeviceWorkModeResponseData_Detail_TimedWakeup : public LCOpenApiBase
				{
				public:
					getDeviceWorkModeResponseData_Detail_TimedWakeup();
					~getDeviceWorkModeResponseData_Detail_TimedWakeup();
				public:
					/** [int]表示夜间间隔时间，单位：秒 */
					int nightInterval;
				public:
					/** [bool]定时唤醒使能是否开启 */
					bool enable;
				public:
					/** [int]表示白天间隔时间，单位：秒 */
					int dayInterval;
				public:
					/** define a list with struct of getDeviceWorkModeResponseData_Detail_TimedWakeup_PeriodicWakeupElement */
					class getDeviceWorkModeResponseData_Detail_TimedWakeup_PeriodicWakeupElement : public LCOpenApiBase
					{
					public:
						getDeviceWorkModeResponseData_Detail_TimedWakeup_PeriodicWakeupElement();
						~getDeviceWorkModeResponseData_Detail_TimedWakeup_PeriodicWakeupElement();
					public:
						/** 时间格式为HH:mm:ss */
						string endTime;
					public:
						/** 时间格式为HH:mm:ss */
						string beginTime;
					public:
						/** Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday */
						string period;
					};
				public:
					LCOpenApiVector<getDeviceWorkModeResponseData_Detail_TimedWakeup_PeriodicWakeupElement> periodicWakeup;
				public:
					/** 休眠模式 */
					string mode;
				};
			public:
				getDeviceWorkModeResponseData_Detail_TimedWakeup* timedWakeup;
			public:
				/** define a list with struct of getDeviceWorkModeResponseData_Detail_LowPowerSleep */
				class getDeviceWorkModeResponseData_Detail_LowPowerSleep : public LCOpenApiBase
				{
				public:
					getDeviceWorkModeResponseData_Detail_LowPowerSleep();
					~getDeviceWorkModeResponseData_Detail_LowPowerSleep();
				public:
					/** [bool]休眠使能是否开启 */
					bool enable;
				public:
					/** 休眠阈值 */
					string electricity;
				};
			public:
				getDeviceWorkModeResponseData_Detail_LowPowerSleep* lowPowerSleep;
			public:
				/** 0,1 */
				LCOpenApiVector<string> modes;
			public:
				/** 工作模式 */
				string mode;
			public:
				/** 可选，逗留时长, [string]，单位秒 */
				string stayTime;
			public:
				/** 可选，单次PIR录像上限, [string]，单位秒 */
				string recordTime;
			};
		public:
			getDeviceWorkModeResponseData_Detail* detail;

		};
	public:
		getDeviceWorkModeResponse();
		~getDeviceWorkModeResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		getDeviceWorkModeResponseData data;
		MetaInfo* _metainfo_getDeviceWorkModeResponseData;
	};

	
	typedef getDeviceWorkModeResponse::getDeviceWorkModeResponseData getDeviceWorkModeResponseData;
	typedef getDeviceWorkModeResponse::getDeviceWorkModeResponseData::getDeviceWorkModeResponseData_Detail getDeviceWorkModeResponseData_Detail;
	typedef getDeviceWorkModeResponse::getDeviceWorkModeResponseData::getDeviceWorkModeResponseData_Detail::getDeviceWorkModeResponseData_Detail_TimedWakeup getDeviceWorkModeResponseData_Detail_TimedWakeup;
	typedef getDeviceWorkModeResponse::getDeviceWorkModeResponseData::getDeviceWorkModeResponseData_Detail::getDeviceWorkModeResponseData_Detail_TimedWakeup::getDeviceWorkModeResponseData_Detail_TimedWakeup_PeriodicWakeupElement getDeviceWorkModeResponseData_Detail_TimedWakeup_PeriodicWakeupElement;
	typedef getDeviceWorkModeResponse::getDeviceWorkModeResponseData::getDeviceWorkModeResponseData_Detail::getDeviceWorkModeResponseData_Detail_LowPowerSleep getDeviceWorkModeResponseData_Detail_LowPowerSleep;

}
}

#endif

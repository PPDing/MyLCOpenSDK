/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_setDeviceWakeupParam_H_
#define _LC_OPENAPI_CLIENT_setDeviceWakeupParam_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备唤醒设置
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class setDeviceWakeupParamRequest : public LCOpenApiRequest
	{
	public:
		class setDeviceWakeupParamRequestData
		{
		public:
			setDeviceWakeupParamRequestData();
			~setDeviceWakeupParamRequestData();
			
		public:
			/** paas设备专属字段  工作模式 0	节能模式 1	普通模式 2	Ultra模式 3	自定义模式 4	超级省电模式 5	自动模式 6	常供电模式 7	休眠、定时唤醒模式 8浅休眠模式  9AOV模式 */
			string workMode;
		public:
			/** [bool]唤醒使能是否开启 */
			bool enable;
		public:
			/** 白天间隔时间，单位秒（0-7200s） */
			string dayInterval;
		public:
			/** 设备ID */
			string deviceId;
		public:
			/**  */
			string token;
		public:
			/** 夜间间隔时间，单位秒（0-7200s） */
			string nightInterval;
		public:
			/** 可选，不存在默认查询的是设备 */
			string channelId;
		public:
			/** define a list with struct of setDeviceWakeupParamRequestData_PeriodicWakeupElement */
			class setDeviceWakeupParamRequestData_PeriodicWakeupElement : public LCOpenApiBase
			{
			public:
				setDeviceWakeupParamRequestData_PeriodicWakeupElement();
				~setDeviceWakeupParamRequestData_PeriodicWakeupElement();
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
			LCOpenApiVector<setDeviceWakeupParamRequestData_PeriodicWakeupElement> periodicWakeup;
		public:
			/** 唤醒模式（TimeInterval（时间间隔模式），TimeSection（时间段模式）） */
			string mode;

		};
	public:
		setDeviceWakeupParamRequest();
		~setDeviceWakeupParamRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		setDeviceWakeupParamRequestData data;
		MetaInfo* _metainfo_setDeviceWakeupParamRequestData;
	};

	
	typedef setDeviceWakeupParamRequest::setDeviceWakeupParamRequestData setDeviceWakeupParamRequestData;
	typedef setDeviceWakeupParamRequest::setDeviceWakeupParamRequestData::setDeviceWakeupParamRequestData_PeriodicWakeupElement setDeviceWakeupParamRequestData_PeriodicWakeupElement;


	class setDeviceWakeupParamResponse : public LCOpenApiResponse
	{
	public:
		class setDeviceWakeupParamResponseData
		{
		public:
			setDeviceWakeupParamResponseData();
			~setDeviceWakeupParamResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		setDeviceWakeupParamResponse();
		~setDeviceWakeupParamResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		setDeviceWakeupParamResponseData data;
		MetaInfo* _metainfo_setDeviceWakeupParamResponseData;
	};

	
	typedef setDeviceWakeupParamResponse::setDeviceWakeupParamResponseData setDeviceWakeupParamResponseData;

}
}

#endif

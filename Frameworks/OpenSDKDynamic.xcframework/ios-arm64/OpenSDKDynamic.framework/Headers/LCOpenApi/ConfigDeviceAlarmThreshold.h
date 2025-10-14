/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ConfigDeviceAlarmThreshold_H_
#define _LC_OPENAPI_CLIENT_ConfigDeviceAlarmThreshold_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
配置设备告警阈值（当前支持温度和湿度）
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ConfigDeviceAlarmThresholdRequest : public LCOpenApiRequest
	{
	public:
		class ConfigDeviceAlarmThresholdRequestData
		{
		public:
			ConfigDeviceAlarmThresholdRequestData();
			~ConfigDeviceAlarmThresholdRequestData();
			
		public:
			/** [int]告警阈值 */
			int threshold;
		public:
			/** type=temperature 表示温度 type=humidity 表示湿度 */
			string type;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		ConfigDeviceAlarmThresholdRequest();
		~ConfigDeviceAlarmThresholdRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		ConfigDeviceAlarmThresholdRequestData data;
		MetaInfo* _metainfo_ConfigDeviceAlarmThresholdRequestData;
	};

	
	typedef ConfigDeviceAlarmThresholdRequest::ConfigDeviceAlarmThresholdRequestData ConfigDeviceAlarmThresholdRequestData;


	class ConfigDeviceAlarmThresholdResponse : public LCOpenApiResponse
	{
	public:
		class ConfigDeviceAlarmThresholdResponseData
		{
		public:
			ConfigDeviceAlarmThresholdResponseData();
			~ConfigDeviceAlarmThresholdResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ConfigDeviceAlarmThresholdResponse();
		~ConfigDeviceAlarmThresholdResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		ConfigDeviceAlarmThresholdResponseData data;
		MetaInfo* _metainfo_ConfigDeviceAlarmThresholdResponseData;
	};

	
	typedef ConfigDeviceAlarmThresholdResponse::ConfigDeviceAlarmThresholdResponseData ConfigDeviceAlarmThresholdResponseData;

}
}

#endif

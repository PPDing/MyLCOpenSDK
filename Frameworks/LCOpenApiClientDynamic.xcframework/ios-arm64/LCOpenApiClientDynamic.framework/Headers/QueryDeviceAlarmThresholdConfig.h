/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryDeviceAlarmThresholdConfig_H_
#define _LC_OPENAPI_CLIENT_QueryDeviceAlarmThresholdConfig_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询设备烟感灵敏度配置
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryDeviceAlarmThresholdConfigRequest : public LCOpenApiRequest
	{
	public:
		class QueryDeviceAlarmThresholdConfigRequestData
		{
		public:
			QueryDeviceAlarmThresholdConfigRequestData();
			~QueryDeviceAlarmThresholdConfigRequestData();
			
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
		QueryDeviceAlarmThresholdConfigRequest();
		~QueryDeviceAlarmThresholdConfigRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		QueryDeviceAlarmThresholdConfigRequestData data;
		MetaInfo* _metainfo_QueryDeviceAlarmThresholdConfigRequestData;
	};

	
	typedef QueryDeviceAlarmThresholdConfigRequest::QueryDeviceAlarmThresholdConfigRequestData QueryDeviceAlarmThresholdConfigRequestData;


	class QueryDeviceAlarmThresholdConfigResponse : public LCOpenApiResponse
	{
	public:
		class QueryDeviceAlarmThresholdConfigResponseData
		{
		public:
			QueryDeviceAlarmThresholdConfigResponseData();
			~QueryDeviceAlarmThresholdConfigResponseData();
			
		public:
			/** [int]告警阈值 */
			int threshold;
		public:
			/** [int]告警阈值可选范围 */
			LCOpenApiVector<int> range;

		};
	public:
		QueryDeviceAlarmThresholdConfigResponse();
		~QueryDeviceAlarmThresholdConfigResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		QueryDeviceAlarmThresholdConfigResponseData data;
		MetaInfo* _metainfo_QueryDeviceAlarmThresholdConfigResponseData;
	};

	
	typedef QueryDeviceAlarmThresholdConfigResponse::QueryDeviceAlarmThresholdConfigResponseData QueryDeviceAlarmThresholdConfigResponseData;

}
}

#endif

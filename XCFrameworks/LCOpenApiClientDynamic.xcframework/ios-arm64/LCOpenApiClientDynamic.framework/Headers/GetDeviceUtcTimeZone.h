/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetDeviceUtcTimeZone_H_
#define _LC_OPENAPI_CLIENT_GetDeviceUtcTimeZone_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取UTC时间

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetDeviceUtcTimeZoneRequest : public LCOpenApiRequest
	{
	public:
		class GetDeviceUtcTimeZoneRequestData
		{
		public:
			GetDeviceUtcTimeZoneRequestData();
			~GetDeviceUtcTimeZoneRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		GetDeviceUtcTimeZoneRequest();
		~GetDeviceUtcTimeZoneRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		GetDeviceUtcTimeZoneRequestData data;
		MetaInfo* _metainfo_GetDeviceUtcTimeZoneRequestData;
	};

	
	typedef GetDeviceUtcTimeZoneRequest::GetDeviceUtcTimeZoneRequestData GetDeviceUtcTimeZoneRequestData;


	class GetDeviceUtcTimeZoneResponse : public LCOpenApiResponse
	{
	public:
		class GetDeviceUtcTimeZoneResponseData
		{
		public:
			GetDeviceUtcTimeZoneResponseData();
			~GetDeviceUtcTimeZoneResponseData();
			
		public:
			/** 夏令时偏移,单位秒, 可选。 */
			string offset;
		public:
			/** 地区描述 */
			string areaDesc;
		public:
			/** 时区 */
			string timeZone;
		public:
			/** 夏令时开始时间, 可选。表示“某月-该月的第几个星期-该星期的第几天，时分秒 */
			string beginWeekSunTime;
		public:
			/** UTC时间 */
			string utcTime;
		public:
			/** 夏令时开始时间, 可选。表示“某月-该月的第几个星期-该星期的第几天，时分秒 */
			string endWeekSunTime;
		public:
			/** 按周、或按日设置的夏令时模式区分，可选，该字段不存在，则默认为day */
			string mode;
		public:
			/** 格式为MM-dd HH:mm:ss夏令时开始时间, 可选。 */
			string beginSunTime;
		public:
			/** 格式为MM-dd HH:mm:ss夏令时结束时间, 可选。 */
			string endSunTime;

		};
	public:
		GetDeviceUtcTimeZoneResponse();
		~GetDeviceUtcTimeZoneResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		GetDeviceUtcTimeZoneResponseData data;
		MetaInfo* _metainfo_GetDeviceUtcTimeZoneResponseData;
	};

	
	typedef GetDeviceUtcTimeZoneResponse::GetDeviceUtcTimeZoneResponseData GetDeviceUtcTimeZoneResponseData;

}
}

#endif

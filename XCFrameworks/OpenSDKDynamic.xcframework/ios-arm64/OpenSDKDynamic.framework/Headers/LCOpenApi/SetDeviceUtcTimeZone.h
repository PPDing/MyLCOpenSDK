/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetDeviceUtcTimeZone_H_
#define _LC_OPENAPI_CLIENT_SetDeviceUtcTimeZone_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置UTC时区

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetDeviceUtcTimeZoneRequest : public LCOpenApiRequest
	{
	public:
		class SetDeviceUtcTimeZoneRequestData
		{
		public:
			SetDeviceUtcTimeZoneRequestData();
			~SetDeviceUtcTimeZoneRequestData();
			
		public:
			/** 夏令时偏移,单位秒, 可选 */
			string offset;
		public:
			/** 城市描述 */
			string areaDesc;
		public:
			/** [int][Not Null]时区, 取值范围: 0-38 */
			int timeZone;
		public:
			/** 夏令时开始时间, 可选,表示某月-该月的第几个星期-该星期的第几天,时分秒 */
			string beginWeekSunTime;
		public:
			/** 设备ID */
			string deviceId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 夏令时开始时间, 可选,表示某月-该月的第几个星期-该星期的第几天,时分秒 */
			string endWeekSunTime;
		public:
			/** 夏令时开始时间, 可选 */
			string beginSunTime;
		public:
			/** 夏令时结束时间, 可选 */
			string endSunTime;

		};
	public:
		SetDeviceUtcTimeZoneRequest();
		~SetDeviceUtcTimeZoneRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		SetDeviceUtcTimeZoneRequestData data;
		MetaInfo* _metainfo_SetDeviceUtcTimeZoneRequestData;
	};

	
	typedef SetDeviceUtcTimeZoneRequest::SetDeviceUtcTimeZoneRequestData SetDeviceUtcTimeZoneRequestData;


	class SetDeviceUtcTimeZoneResponse : public LCOpenApiResponse
	{
	public:
		class SetDeviceUtcTimeZoneResponseData
		{
		public:
			SetDeviceUtcTimeZoneResponseData();
			~SetDeviceUtcTimeZoneResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetDeviceUtcTimeZoneResponse();
		~SetDeviceUtcTimeZoneResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		SetDeviceUtcTimeZoneResponseData data;
		MetaInfo* _metainfo_SetDeviceUtcTimeZoneResponseData;
	};

	
	typedef SetDeviceUtcTimeZoneResponse::SetDeviceUtcTimeZoneResponseData SetDeviceUtcTimeZoneResponseData;

}
}

#endif

/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_StopDeviceAlarmSound_H_
#define _LC_OPENAPI_CLIENT_StopDeviceAlarmSound_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
消除设备告警音
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class StopDeviceAlarmSoundRequest : public LCOpenApiRequest
	{
	public:
		class StopDeviceAlarmSoundRequestData
		{
		public:
			StopDeviceAlarmSoundRequestData();
			~StopDeviceAlarmSoundRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		StopDeviceAlarmSoundRequest();
		~StopDeviceAlarmSoundRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		StopDeviceAlarmSoundRequestData data;
		MetaInfo* _metainfo_StopDeviceAlarmSoundRequestData;
	};

	
	typedef StopDeviceAlarmSoundRequest::StopDeviceAlarmSoundRequestData StopDeviceAlarmSoundRequestData;


	class StopDeviceAlarmSoundResponse : public LCOpenApiResponse
	{
	public:
		class StopDeviceAlarmSoundResponseData
		{
		public:
			StopDeviceAlarmSoundResponseData();
			~StopDeviceAlarmSoundResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		StopDeviceAlarmSoundResponse();
		~StopDeviceAlarmSoundResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		StopDeviceAlarmSoundResponseData data;
		MetaInfo* _metainfo_StopDeviceAlarmSoundResponseData;
	};

	
	typedef StopDeviceAlarmSoundResponse::StopDeviceAlarmSoundResponseData StopDeviceAlarmSoundResponseData;

}
}

#endif

/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_AlarmPushSwitchSet_H_
#define _LC_OPENAPI_CLIENT_AlarmPushSwitchSet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置设备推送提醒开关
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class AlarmPushSwitchSetRequest : public LCOpenApiRequest
	{
	public:
		class AlarmPushSwitchSetRequestData
		{
		public:
			AlarmPushSwitchSetRequestData();
			~AlarmPushSwitchSetRequestData();
			
		public:
			/** [bool]是否有效 */
			bool enable;
		public:
			/** [O]通道号 */
			string channelId;
		public:
			/** xxx */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		AlarmPushSwitchSetRequest();
		~AlarmPushSwitchSetRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		AlarmPushSwitchSetRequestData data;
		MetaInfo* _metainfo_AlarmPushSwitchSetRequestData;
	};

	
	typedef AlarmPushSwitchSetRequest::AlarmPushSwitchSetRequestData AlarmPushSwitchSetRequestData;


	class AlarmPushSwitchSetResponse : public LCOpenApiResponse
	{
	public:
		class AlarmPushSwitchSetResponseData
		{
		public:
			AlarmPushSwitchSetResponseData();
			~AlarmPushSwitchSetResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		AlarmPushSwitchSetResponse();
		~AlarmPushSwitchSetResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		AlarmPushSwitchSetResponseData data;
		MetaInfo* _metainfo_AlarmPushSwitchSetResponseData;
	};

	
	typedef AlarmPushSwitchSetResponse::AlarmPushSwitchSetResponseData AlarmPushSwitchSetResponseData;

}
}

#endif

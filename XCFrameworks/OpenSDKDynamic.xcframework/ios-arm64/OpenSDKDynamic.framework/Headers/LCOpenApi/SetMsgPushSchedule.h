/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetMsgPushSchedule_H_
#define _LC_OPENAPI_CLIENT_SetMsgPushSchedule_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
用户消息推送时间段设置
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetMsgPushScheduleRequest : public LCOpenApiRequest
	{
	public:
		class SetMsgPushScheduleRequestData
		{
		public:
			SetMsgPushScheduleRequestData();
			~SetMsgPushScheduleRequestData();
			
		public:
			/** [String]cron表达式(例如：* * 7-12,14-21 ? * 2-5 ) */
			string cronExpr;

		};
	public:
		SetMsgPushScheduleRequest();
		~SetMsgPushScheduleRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		SetMsgPushScheduleRequestData data;
		MetaInfo* _metainfo_SetMsgPushScheduleRequestData;
	};

	
	typedef SetMsgPushScheduleRequest::SetMsgPushScheduleRequestData SetMsgPushScheduleRequestData;


	class SetMsgPushScheduleResponse : public LCOpenApiResponse
	{
	public:
		class SetMsgPushScheduleResponseData
		{
		public:
			SetMsgPushScheduleResponseData();
			~SetMsgPushScheduleResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetMsgPushScheduleResponse();
		~SetMsgPushScheduleResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		SetMsgPushScheduleResponseData data;
		MetaInfo* _metainfo_SetMsgPushScheduleResponseData;
	};

	
	typedef SetMsgPushScheduleResponse::SetMsgPushScheduleResponseData SetMsgPushScheduleResponseData;

}
}

#endif

/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetAlarmMessageList_H_
#define _LC_OPENAPI_CLIENT_GetAlarmMessageList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询报警图片列表

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetAlarmMessageListRequest : public LCOpenApiRequest
	{
	public:
		class GetAlarmMessageListRequestData
		{
		public:
			GetAlarmMessageListRequestData();
			~GetAlarmMessageListRequestData();
			
		public:
			/** define a list with struct of GetAlarmMessageListRequestData_DeviceListElement */
			class GetAlarmMessageListRequestData_DeviceListElement : public LCOpenApiBase
			{
			public:
				GetAlarmMessageListRequestData_DeviceListElement();
				~GetAlarmMessageListRequestData_DeviceListElement();
			public:
				/** 报警事件ID */
				string alarmId;
			public:
				/** 设备Id */
				string deviceId;
			};
		public:
			LCOpenApiVector<GetAlarmMessageListRequestData_DeviceListElement> deviceList;
		public:
			/** [cstr]listAlarmMessageByIds */
			#define _STATIC_GetAlarmMessageListRequestData_method "listAlarmMessageByIds"
			string method;
		public:
			/** 授权token(userToken或accessToken) */
			string token;

		};
	public:
		GetAlarmMessageListRequest();
		~GetAlarmMessageListRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		GetAlarmMessageListRequestData data;
		MetaInfo* _metainfo_GetAlarmMessageListRequestData;
	};

	
	typedef GetAlarmMessageListRequest::GetAlarmMessageListRequestData GetAlarmMessageListRequestData;
	typedef GetAlarmMessageListRequest::GetAlarmMessageListRequestData::GetAlarmMessageListRequestData_DeviceListElement GetAlarmMessageListRequestData_DeviceListElement;


	class GetAlarmMessageListResponse : public LCOpenApiResponse
	{
	public:
		class GetAlarmMessageListResponseData
		{
		public:
			GetAlarmMessageListResponseData();
			~GetAlarmMessageListResponseData();
			
		public:
			/** define a list with struct of GetAlarmMessageListResponseData_MessageListElement */
			class GetAlarmMessageListResponseData_MessageListElement : public LCOpenApiBase
			{
			public:
				GetAlarmMessageListResponseData_MessageListElement();
				~GetAlarmMessageListResponseData_MessageListElement();
			public:
				/** 报警事件ID */
				string alarmId;
			public:
				/** 缩略图 */
				string thumbUrl;
			public:
				/** 封面图 */
				LCOpenApiVector<string> picUrl;
			public:
				/** 设备Id */
				string deviceId;
			};
		public:
			LCOpenApiVector<GetAlarmMessageListResponseData_MessageListElement> messageList;

		};
	public:
		GetAlarmMessageListResponse();
		~GetAlarmMessageListResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		GetAlarmMessageListResponseData data;
		MetaInfo* _metainfo_GetAlarmMessageListResponseData;
	};

	
	typedef GetAlarmMessageListResponse::GetAlarmMessageListResponseData GetAlarmMessageListResponseData;
	typedef GetAlarmMessageListResponse::GetAlarmMessageListResponseData::GetAlarmMessageListResponseData_MessageListElement GetAlarmMessageListResponseData_MessageListElement;

}
}

#endif

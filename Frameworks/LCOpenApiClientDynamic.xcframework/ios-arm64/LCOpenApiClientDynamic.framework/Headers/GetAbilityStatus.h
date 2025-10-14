/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetAbilityStatus_H_
#define _LC_OPENAPI_CLIENT_GetAbilityStatus_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备功能开关一键撤防instantDisAlarm_理想定制专项新增接口
获取设备功能开关宽动态wideDynamic_理想定制专项新增接口

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetAbilityStatusRequest : public LCOpenApiRequest
	{
	public:
		class GetAbilityStatusRequestData
		{
		public:
			GetAbilityStatusRequestData();
			~GetAbilityStatusRequestData();
			
		public:
			/** define a list with struct of GetAbilityStatusRequestData_DeviceElement */
			class GetAbilityStatusRequestData_DeviceElement : public LCOpenApiBase
			{
			public:
				GetAbilityStatusRequestData_DeviceElement();
				~GetAbilityStatusRequestData_DeviceElement();
			public:
				/** [String],设备级使能开关参考《设备功能类型定义》https://open.imou.com/document/pages/389c19/,可选 */
				string type;
			};
		public:
			LCOpenApiVector<GetAbilityStatusRequestData_DeviceElement> device;
		public:
			/** define a list with struct of GetAbilityStatusRequestData_ChannelsElement */
			class GetAbilityStatusRequestData_ChannelsElement : public LCOpenApiBase
			{
			public:
				GetAbilityStatusRequestData_ChannelsElement();
				~GetAbilityStatusRequestData_ChannelsElement();
			public:
				/** [String[]],数组,通道级使能开关,参考《设备功能类型定义》https://open.imou.com/document/pages/389c19/,可选 */
				string type;
			public:
				/** [int]通道id,可选 */
				int channelId;
			};
		public:
			LCOpenApiVector<GetAbilityStatusRequestData_ChannelsElement> channels;
		public:
			/** [String]授权token(userToken或accessToken),必选 */
			string token;
		public:
			/** [String]设备ID,必选 */
			string deviceId;

		};
	public:
		GetAbilityStatusRequest();
		~GetAbilityStatusRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		GetAbilityStatusRequestData data;
		MetaInfo* _metainfo_GetAbilityStatusRequestData;
	};

	
	typedef GetAbilityStatusRequest::GetAbilityStatusRequestData GetAbilityStatusRequestData;
	typedef GetAbilityStatusRequest::GetAbilityStatusRequestData::GetAbilityStatusRequestData_DeviceElement GetAbilityStatusRequestData_DeviceElement;
	typedef GetAbilityStatusRequest::GetAbilityStatusRequestData::GetAbilityStatusRequestData_ChannelsElement GetAbilityStatusRequestData_ChannelsElement;


	class GetAbilityStatusResponse : public LCOpenApiResponse
	{
	public:
		class GetAbilityStatusResponseData
		{
		public:
			GetAbilityStatusResponseData();
			~GetAbilityStatusResponseData();
			
		public:
			/** define a list with struct of GetAbilityStatusResponseData_DeviceElement */
			class GetAbilityStatusResponseData_DeviceElement : public LCOpenApiBase
			{
			public:
				GetAbilityStatusResponseData_DeviceElement();
				~GetAbilityStatusResponseData_DeviceElement();
			public:
				/** [String]“on”:开启,“off”:关闭 */
				string enable;
			public:
				/** [String],设备级使能开关参考《设备功能类型定义》https://open.imou.com/document/pages/389c19/ */
				string type;
			public:
				/** [int]云配置时间戳 */
				int timeStab;
			};
		public:
			LCOpenApiVector<GetAbilityStatusResponseData_DeviceElement> device;
		public:
			/** define a list with struct of GetAbilityStatusResponseData_ChannelsElement */
			class GetAbilityStatusResponseData_ChannelsElement : public LCOpenApiBase
			{
			public:
				GetAbilityStatusResponseData_ChannelsElement();
				~GetAbilityStatusResponseData_ChannelsElement();
			public:
				/** define a list with struct of GetAbilityStatusResponseData_ChannelsElement_DetailElement */
				class GetAbilityStatusResponseData_ChannelsElement_DetailElement : public LCOpenApiBase
				{
				public:
					GetAbilityStatusResponseData_ChannelsElement_DetailElement();
					~GetAbilityStatusResponseData_ChannelsElement_DetailElement();
				public:
					/** [String]“on”:开启,“off”:关闭 */
					string enable;
				public:
					/** [String[]],数组,通道级使能开关,参考《设备功能类型定义》https://open.imou.com/document/pages/389c19/ */
					string type;
				public:
					/** [int]云配置时间戳 */
					int timeStab;
				};
			public:
				LCOpenApiVector<GetAbilityStatusResponseData_ChannelsElement_DetailElement> detail;
			public:
				/** [int]通道id */
				int channelId;
			};
		public:
			LCOpenApiVector<GetAbilityStatusResponseData_ChannelsElement> channels;

		};
	public:
		GetAbilityStatusResponse();
		~GetAbilityStatusResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		GetAbilityStatusResponseData data;
		MetaInfo* _metainfo_GetAbilityStatusResponseData;
	};

	
	typedef GetAbilityStatusResponse::GetAbilityStatusResponseData GetAbilityStatusResponseData;
	typedef GetAbilityStatusResponse::GetAbilityStatusResponseData::GetAbilityStatusResponseData_DeviceElement GetAbilityStatusResponseData_DeviceElement;
	typedef GetAbilityStatusResponse::GetAbilityStatusResponseData::GetAbilityStatusResponseData_ChannelsElement GetAbilityStatusResponseData_ChannelsElement;
	typedef GetAbilityStatusResponse::GetAbilityStatusResponseData::GetAbilityStatusResponseData_ChannelsElement::GetAbilityStatusResponseData_ChannelsElement_DetailElement GetAbilityStatusResponseData_ChannelsElement_DetailElement;

}
}

#endif

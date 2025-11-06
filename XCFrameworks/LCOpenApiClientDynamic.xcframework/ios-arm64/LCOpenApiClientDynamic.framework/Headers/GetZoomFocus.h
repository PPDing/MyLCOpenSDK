/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetZoomFocus_H_
#define _LC_OPENAPI_CLIENT_GetZoomFocus_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备变焦倍数（需要设备拥有ZoomFocus能力集）

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetZoomFocusRequest : public LCOpenApiRequest
	{
	public:
		class GetZoomFocusRequestData
		{
		public:
			GetZoomFocusRequestData();
			~GetZoomFocusRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		GetZoomFocusRequest();
		~GetZoomFocusRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		GetZoomFocusRequestData data;
		MetaInfo* _metainfo_GetZoomFocusRequestData;
	};

	
	typedef GetZoomFocusRequest::GetZoomFocusRequestData GetZoomFocusRequestData;


	class GetZoomFocusResponse : public LCOpenApiResponse
	{
	public:
		class GetZoomFocusResponseData
		{
		public:
			GetZoomFocusResponseData();
			~GetZoomFocusResponseData();
			
		public:
			/** define a list with struct of GetZoomFocusResponseData_ChannelsElement */
			class GetZoomFocusResponseData_ChannelsElement : public LCOpenApiBase
			{
			public:
				GetZoomFocusResponseData_ChannelsElement();
				~GetZoomFocusResponseData_ChannelsElement();
			public:
				/** 0.5变倍系数 */
				string zoomFocus;
			public:
				/** 通道号 */
				string channelId;
			};
		public:
			LCOpenApiVector<GetZoomFocusResponseData_ChannelsElement> channels;

		};
	public:
		GetZoomFocusResponse();
		~GetZoomFocusResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		GetZoomFocusResponseData data;
		MetaInfo* _metainfo_GetZoomFocusResponseData;
	};

	
	typedef GetZoomFocusResponse::GetZoomFocusResponseData GetZoomFocusResponseData;
	typedef GetZoomFocusResponse::GetZoomFocusResponseData::GetZoomFocusResponseData_ChannelsElement GetZoomFocusResponseData_ChannelsElement;

}
}

#endif

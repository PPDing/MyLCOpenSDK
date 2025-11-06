/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetZoomFocus_H_
#define _LC_OPENAPI_CLIENT_SetZoomFocus_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置设备变焦倍数（需要设备拥有ZoomFocus能力集）

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetZoomFocusRequest : public LCOpenApiRequest
	{
	public:
		class SetZoomFocusRequestData
		{
		public:
			SetZoomFocusRequestData();
			~SetZoomFocusRequestData();
			
		public:
			/** large、small、cover */
			string type;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** 变倍倍数或缩放增量 */
			string zoomFocus;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetZoomFocusRequest();
		~SetZoomFocusRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		SetZoomFocusRequestData data;
		MetaInfo* _metainfo_SetZoomFocusRequestData;
	};

	
	typedef SetZoomFocusRequest::SetZoomFocusRequestData SetZoomFocusRequestData;


	class SetZoomFocusResponse : public LCOpenApiResponse
	{
	public:
		class SetZoomFocusResponseData
		{
		public:
			SetZoomFocusResponseData();
			~SetZoomFocusResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetZoomFocusResponse();
		~SetZoomFocusResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		SetZoomFocusResponseData data;
		MetaInfo* _metainfo_SetZoomFocusResponseData;
	};

	
	typedef SetZoomFocusResponse::SetZoomFocusResponseData SetZoomFocusResponseData;

}
}

#endif

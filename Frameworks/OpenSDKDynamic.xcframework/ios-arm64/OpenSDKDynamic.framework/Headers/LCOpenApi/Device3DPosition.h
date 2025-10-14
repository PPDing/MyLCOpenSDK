/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_Device3DPosition_H_
#define _LC_OPENAPI_CLIENT_Device3DPosition_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备三维定位
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class Device3DPositionRequest : public LCOpenApiRequest
	{
	public:
		class Device3DPositionRequestData
		{
		public:
			Device3DPositionRequestData();
			~Device3DPositionRequestData();
			
		public:
			/** [int] */
			LCOpenApiVector<int> startPoint;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** [cstr]device3DPosition */
			#define _STATIC_Device3DPositionRequestData_method "device3DPosition"
			string method;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [int] */
			LCOpenApiVector<int> endPoint;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		Device3DPositionRequest();
		~Device3DPositionRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		Device3DPositionRequestData data;
		MetaInfo* _metainfo_Device3DPositionRequestData;
	};

	
	typedef Device3DPositionRequest::Device3DPositionRequestData Device3DPositionRequestData;


	class Device3DPositionResponse : public LCOpenApiResponse
	{
	public:
		class Device3DPositionResponseData
		{
		public:
			Device3DPositionResponseData();
			~Device3DPositionResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		Device3DPositionResponse();
		~Device3DPositionResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		Device3DPositionResponseData data;
		MetaInfo* _metainfo_Device3DPositionResponseData;
	};

	
	typedef Device3DPositionResponse::Device3DPositionResponseData Device3DPositionResponseData;

}
}

#endif

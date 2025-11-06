/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_deviceTransmission_H_
#define _LC_OPENAPI_CLIENT_deviceTransmission_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备透传协议

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class deviceTransmissionRequest : public LCOpenApiRequest
	{
	public:
		class deviceTransmissionRequestData
		{
		public:
			deviceTransmissionRequestData();
			~deviceTransmissionRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/**  */
			string type;
		public:
			/** 三代协议base64 */
			string content;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		deviceTransmissionRequest();
		~deviceTransmissionRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		deviceTransmissionRequestData data;
		MetaInfo* _metainfo_deviceTransmissionRequestData;
	};

	
	typedef deviceTransmissionRequest::deviceTransmissionRequestData deviceTransmissionRequestData;


	class deviceTransmissionResponse : public LCOpenApiResponse
	{
	public:
		class deviceTransmissionResponseData
		{
		public:
			deviceTransmissionResponseData();
			~deviceTransmissionResponseData();
			
		public:
			/**  */
			string content;

		};
	public:
		deviceTransmissionResponse();
		~deviceTransmissionResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		deviceTransmissionResponseData data;
		MetaInfo* _metainfo_deviceTransmissionResponseData;
	};

	
	typedef deviceTransmissionResponse::deviceTransmissionResponseData deviceTransmissionResponseData;

}
}

#endif

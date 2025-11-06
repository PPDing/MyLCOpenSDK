/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_wakeUpDevice_H_
#define _LC_OPENAPI_CLIENT_wakeUpDevice_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
唤醒休眠的门锁设备
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class wakeUpDeviceRequest : public LCOpenApiRequest
	{
	public:
		class wakeUpDeviceRequestData
		{
		public:
			wakeUpDeviceRequestData();
			~wakeUpDeviceRequestData();
			
		public:
			/** xxx */
			string token;
		public:
			/**  */
			string deviceId;

		};
	public:
		wakeUpDeviceRequest();
		~wakeUpDeviceRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		wakeUpDeviceRequestData data;
		MetaInfo* _metainfo_wakeUpDeviceRequestData;
	};

	
	typedef wakeUpDeviceRequest::wakeUpDeviceRequestData wakeUpDeviceRequestData;


	class wakeUpDeviceResponse : public LCOpenApiResponse
	{
	public:
		class wakeUpDeviceResponseData
		{
		public:
			wakeUpDeviceResponseData();
			~wakeUpDeviceResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		wakeUpDeviceResponse();
		~wakeUpDeviceResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		wakeUpDeviceResponseData data;
		MetaInfo* _metainfo_wakeUpDeviceResponseData;
	};

	
	typedef wakeUpDeviceResponse::wakeUpDeviceResponseData wakeUpDeviceResponseData;

}
}

#endif

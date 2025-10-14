/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_setDeviceWorkMode_H_
#define _LC_OPENAPI_CLIENT_setDeviceWorkMode_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置设备工作模式
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class setDeviceWorkModeRequest : public LCOpenApiRequest
	{
	public:
		class setDeviceWorkModeRequestData
		{
		public:
			setDeviceWorkModeRequestData();
			~setDeviceWorkModeRequestData();
			
		public:
			/** 告警触发间隔，单位s */
			string intervalTime;
		public:
			/**  */
			string token;
		public:
			/** 逗留时长，单位s */
			string stayTime;
		public:
			/** 模式 */
			string mode;
		public:
			/** 可选，不填即为设备级 */
			string channelId;
		public:
			/** 每条录像片段时长，单位s */
			string recordTime;
		public:
			/**  */
			string deviceId;

		};
	public:
		setDeviceWorkModeRequest();
		~setDeviceWorkModeRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		setDeviceWorkModeRequestData data;
		MetaInfo* _metainfo_setDeviceWorkModeRequestData;
	};

	
	typedef setDeviceWorkModeRequest::setDeviceWorkModeRequestData setDeviceWorkModeRequestData;


	class setDeviceWorkModeResponse : public LCOpenApiResponse
	{
	public:
		class setDeviceWorkModeResponseData
		{
		public:
			setDeviceWorkModeResponseData();
			~setDeviceWorkModeResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		setDeviceWorkModeResponse();
		~setDeviceWorkModeResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		setDeviceWorkModeResponseData data;
		MetaInfo* _metainfo_setDeviceWorkModeResponseData;
	};

	
	typedef setDeviceWorkModeResponse::setDeviceWorkModeResponseData setDeviceWorkModeResponseData;

}
}

#endif

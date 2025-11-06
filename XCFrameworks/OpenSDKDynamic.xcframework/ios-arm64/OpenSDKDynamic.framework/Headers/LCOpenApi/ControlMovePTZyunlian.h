/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ControlMovePTZyunlian_H_
#define _LC_OPENAPI_CLIENT_ControlMovePTZyunlian_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
云台移动控制接口

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ControlMovePTZyunlianRequest : public LCOpenApiRequest
	{
	public:
		class ControlMovePTZyunlianRequestData
		{
		public:
			ControlMovePTZyunlianRequestData();
			~ControlMovePTZyunlianRequestData();
			
		public:
			/** [cstr]controlMovePTZ */
			#define _STATIC_ControlMovePTZyunlianRequestData_method "controlMovePTZ"
			string method;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 操作行为；0-上，1-下，2-左，3-右，4-左上，5-左下，6-右上，7-右下，8-放大，9-缩小，10-停止 */
			string operation;
		public:
			/** 通道号 */
			string channelId;
		public:
			/** [long]移动持续时间，单位为毫秒 */
			int64 duration;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		ControlMovePTZyunlianRequest();
		~ControlMovePTZyunlianRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		ControlMovePTZyunlianRequestData data;
		MetaInfo* _metainfo_ControlMovePTZyunlianRequestData;
	};

	
	typedef ControlMovePTZyunlianRequest::ControlMovePTZyunlianRequestData ControlMovePTZyunlianRequestData;


	class ControlMovePTZyunlianResponse : public LCOpenApiResponse
	{
	public:
		class ControlMovePTZyunlianResponseData
		{
		public:
			ControlMovePTZyunlianResponseData();
			~ControlMovePTZyunlianResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ControlMovePTZyunlianResponse();
		~ControlMovePTZyunlianResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		ControlMovePTZyunlianResponseData data;
		MetaInfo* _metainfo_ControlMovePTZyunlianResponseData;
	};

	
	typedef ControlMovePTZyunlianResponse::ControlMovePTZyunlianResponseData ControlMovePTZyunlianResponseData;

}
}

#endif

/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ControlMovePTZ2_H_
#define _LC_OPENAPI_CLIENT_ControlMovePTZ2_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
云台移动控制接口2
备注：云台相关功能需要设备拥有PT或PTZ云台能力集
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ControlMovePTZ2Request : public LCOpenApiRequest
	{
	public:
		class ControlMovePTZ2RequestData
		{
		public:
			ControlMovePTZ2RequestData();
			~ControlMovePTZ2RequestData();
			
		public:
			/** [double] 移动持续时间，单位毫秒 */
			double duration;
		public:
			/** [double] 垂直移动速度，范围-1~1，负数向下，正数向上 */
			double verticalSpeed;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** [double] 变倍倍速，范围-1~1，小于0表示缩小，大于0表示放大 */
			double zoom;
		public:
			/** [cstr]controlMovePTZ */
			#define _STATIC_ControlMovePTZ2RequestData_method "controlMovePTZ"
			string method;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [double] 水平移动速度，范围-1~1，负数向左，正数向右 */
			double horizontalSpeed;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		ControlMovePTZ2Request();
		~ControlMovePTZ2Request();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		ControlMovePTZ2RequestData data;
		MetaInfo* _metainfo_ControlMovePTZ2RequestData;
	};

	
	typedef ControlMovePTZ2Request::ControlMovePTZ2RequestData ControlMovePTZ2RequestData;


	class ControlMovePTZ2Response : public LCOpenApiResponse
	{
	public:
		class ControlMovePTZ2ResponseData
		{
		public:
			ControlMovePTZ2ResponseData();
			~ControlMovePTZ2ResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ControlMovePTZ2Response();
		~ControlMovePTZ2Response();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		ControlMovePTZ2ResponseData data;
		MetaInfo* _metainfo_ControlMovePTZ2ResponseData;
	};

	
	typedef ControlMovePTZ2Response::ControlMovePTZ2ResponseData ControlMovePTZ2ResponseData;

}
}

#endif

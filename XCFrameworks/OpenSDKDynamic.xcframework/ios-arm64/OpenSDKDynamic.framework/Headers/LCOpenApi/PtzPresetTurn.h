/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PtzPresetTurn_H_
#define _LC_OPENAPI_CLIENT_PtzPresetTurn_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
跳转到指定的预置点_理想定制专项新增接口

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class PtzPresetTurnRequest : public LCOpenApiRequest
	{
	public:
		class PtzPresetTurnRequestData
		{
		public:
			PtzPresetTurnRequestData();
			~PtzPresetTurnRequestData();
			
		public:
			/** [int]预置点编号,从1开始,必选 */
			int index;
		public:
			/** [float[3]]可选，缺省表示按云台默认速度运动 x, y,zoom 坐标归一化到0~1 */
			string speed;
		public:
			/** [int]通道id,必选 */
			int channelId;
		public:
			/** [String]授权token(userToken或accessToken),必选 */
			string token;
		public:
			/** [String]设备ID,必选 */
			string deviceId;

		};
	public:
		PtzPresetTurnRequest();
		~PtzPresetTurnRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		PtzPresetTurnRequestData data;
		MetaInfo* _metainfo_PtzPresetTurnRequestData;
	};

	
	typedef PtzPresetTurnRequest::PtzPresetTurnRequestData PtzPresetTurnRequestData;


	class PtzPresetTurnResponse : public LCOpenApiResponse
	{
	public:
		class PtzPresetTurnResponseData
		{
		public:
			PtzPresetTurnResponseData();
			~PtzPresetTurnResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		PtzPresetTurnResponse();
		~PtzPresetTurnResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		PtzPresetTurnResponseData data;
		MetaInfo* _metainfo_PtzPresetTurnResponseData;
	};

	
	typedef PtzPresetTurnResponse::PtzPresetTurnResponseData PtzPresetTurnResponseData;

}
}

#endif

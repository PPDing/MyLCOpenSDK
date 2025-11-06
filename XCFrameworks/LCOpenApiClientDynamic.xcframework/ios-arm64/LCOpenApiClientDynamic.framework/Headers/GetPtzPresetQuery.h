/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetPtzPresetQuery_H_
#define _LC_OPENAPI_CLIENT_GetPtzPresetQuery_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取所有预置点_理想定制专项新增接口

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetPtzPresetQueryRequest : public LCOpenApiRequest
	{
	public:
		class GetPtzPresetQueryRequestData
		{
		public:
			GetPtzPresetQueryRequestData();
			~GetPtzPresetQueryRequestData();
			
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
		GetPtzPresetQueryRequest();
		~GetPtzPresetQueryRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		GetPtzPresetQueryRequestData data;
		MetaInfo* _metainfo_GetPtzPresetQueryRequestData;
	};

	
	typedef GetPtzPresetQueryRequest::GetPtzPresetQueryRequestData GetPtzPresetQueryRequestData;


	class GetPtzPresetQueryResponse : public LCOpenApiResponse
	{
	public:
		class GetPtzPresetQueryResponseData
		{
		public:
			GetPtzPresetQueryResponseData();
			~GetPtzPresetQueryResponseData();
			
		public:
			/** define a list with struct of GetPtzPresetQueryResponseData_PresetsElement */
			class GetPtzPresetQueryResponseData_PresetsElement : public LCOpenApiBase
			{
			public:
				GetPtzPresetQueryResponseData_PresetsElement();
				~GetPtzPresetQueryResponseData_PresetsElement();
			public:
				/** [int]预置点类型 enumint {0:普通预置点;1:设置过智能规则的预置点;2: 特殊预置点} */
				int type;
			public:
				/** [int]预置点编号,从1开始 */
				int index;
			public:
				/** [int[3]][数组],可选, 收藏点的坐标和放大倍数, 第一个参数是水平坐标, 第二个参数是垂直坐标, 第三个参数是放大参数 */
				string position;
			public:
				/** [String]特殊预置点功能None:无特殊功能,默认值;DormantLocation:休眠守望位（当前只能一个预置点生效） */
				string presetFunction;
			public:
				/** [String]预置点名称 */
				string name;
			};
		public:
			LCOpenApiVector<GetPtzPresetQueryResponseData_PresetsElement> presets;

		};
	public:
		GetPtzPresetQueryResponse();
		~GetPtzPresetQueryResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		GetPtzPresetQueryResponseData data;
		MetaInfo* _metainfo_GetPtzPresetQueryResponseData;
	};

	
	typedef GetPtzPresetQueryResponse::GetPtzPresetQueryResponseData GetPtzPresetQueryResponseData;
	typedef GetPtzPresetQueryResponse::GetPtzPresetQueryResponseData::GetPtzPresetQueryResponseData_PresetsElement GetPtzPresetQueryResponseData_PresetsElement;

}
}

#endif

/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetPTZIris_H_
#define _LC_OPENAPI_CLIENT_SetPTZIris_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备光圈大小

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetPTZIrisRequest : public LCOpenApiRequest
	{
	public:
		class SetPTZIrisRequestData
		{
		public:
			SetPTZIrisRequestData();
			~SetPTZIrisRequestData();
			
		public:
			/** define a list with struct of SetPTZIrisRequestData_RealData */
			class SetPTZIrisRequestData_RealData : public LCOpenApiBase
			{
			public:
				SetPTZIrisRequestData_RealData();
				~SetPTZIrisRequestData_RealData();
			public:
				/** [int]通道号 */
				int chan;
			public:
				/** [double]归一化到-1~1 */
				double change;
			};
		public:
			SetPTZIrisRequestData_RealData* realData;
		public:
			/** [cstr]/device/ptz/iris/config */
			#define _STATIC_SetPTZIrisRequestData_method "/device/ptz/iris/config"
			string method;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetPTZIrisRequest();
		~SetPTZIrisRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		SetPTZIrisRequestData data;
		MetaInfo* _metainfo_SetPTZIrisRequestData;
	};

	
	typedef SetPTZIrisRequest::SetPTZIrisRequestData SetPTZIrisRequestData;
	typedef SetPTZIrisRequest::SetPTZIrisRequestData::SetPTZIrisRequestData_RealData SetPTZIrisRequestData_RealData;


	class SetPTZIrisResponse : public LCOpenApiResponse
	{
	public:
		class SetPTZIrisResponseData
		{
		public:
			SetPTZIrisResponseData();
			~SetPTZIrisResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetPTZIrisResponse();
		~SetPTZIrisResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		SetPTZIrisResponseData data;
		MetaInfo* _metainfo_SetPTZIrisResponseData;
	};

	
	typedef SetPTZIrisResponse::SetPTZIrisResponseData SetPTZIrisResponseData;

}
}

#endif

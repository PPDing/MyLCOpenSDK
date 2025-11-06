/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetPTZFocus_H_
#define _LC_OPENAPI_CLIENT_SetPTZFocus_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备对焦控制

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetPTZFocusRequest : public LCOpenApiRequest
	{
	public:
		class SetPTZFocusRequestData
		{
		public:
			SetPTZFocusRequestData();
			~SetPTZFocusRequestData();
			
		public:
			/** define a list with struct of SetPTZFocusRequestData_RealData */
			class SetPTZFocusRequestData_RealData : public LCOpenApiBase
			{
			public:
				SetPTZFocusRequestData_RealData();
				~SetPTZFocusRequestData_RealData();
			public:
				/** [int]通道号 */
				int chan;
			public:
				/** [double]归一化到-1~1 */
				double change;
			};
		public:
			SetPTZFocusRequestData_RealData* realData;
		public:
			/** [cstr]/device/ptz/focus/config */
			#define _STATIC_SetPTZFocusRequestData_method "/device/ptz/focus/config"
			string method;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetPTZFocusRequest();
		~SetPTZFocusRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		SetPTZFocusRequestData data;
		MetaInfo* _metainfo_SetPTZFocusRequestData;
	};

	
	typedef SetPTZFocusRequest::SetPTZFocusRequestData SetPTZFocusRequestData;
	typedef SetPTZFocusRequest::SetPTZFocusRequestData::SetPTZFocusRequestData_RealData SetPTZFocusRequestData_RealData;


	class SetPTZFocusResponse : public LCOpenApiResponse
	{
	public:
		class SetPTZFocusResponseData
		{
		public:
			SetPTZFocusResponseData();
			~SetPTZFocusResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetPTZFocusResponse();
		~SetPTZFocusResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		SetPTZFocusResponseData data;
		MetaInfo* _metainfo_SetPTZFocusResponseData;
	};

	
	typedef SetPTZFocusResponse::SetPTZFocusResponseData SetPTZFocusResponseData;

}
}

#endif

/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_getSimSignalStrength_H_
#define _LC_OPENAPI_CLIENT_getSimSignalStrength_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询设备SIM信号强度
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class getSimSignalStrengthRequest : public LCOpenApiRequest
	{
	public:
		class getSimSignalStrengthRequestData
		{
		public:
			getSimSignalStrengthRequestData();
			~getSimSignalStrengthRequestData();
			
		public:
			/** xxx */
			string token;
		public:
			/**  */
			string deviceId;

		};
	public:
		getSimSignalStrengthRequest();
		~getSimSignalStrengthRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		getSimSignalStrengthRequestData data;
		MetaInfo* _metainfo_getSimSignalStrengthRequestData;
	};

	
	typedef getSimSignalStrengthRequest::getSimSignalStrengthRequestData getSimSignalStrengthRequestData;


	class getSimSignalStrengthResponse : public LCOpenApiResponse
	{
	public:
		class getSimSignalStrengthResponseData
		{
		public:
			getSimSignalStrengthResponseData();
			~getSimSignalStrengthResponseData();
			
		public:
			/** [int]0-100,0最弱，100最强 */
			int intensity;

		};
	public:
		getSimSignalStrengthResponse();
		~getSimSignalStrengthResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		getSimSignalStrengthResponseData data;
		MetaInfo* _metainfo_getSimSignalStrengthResponseData;
	};

	
	typedef getSimSignalStrengthResponse::getSimSignalStrengthResponseData getSimSignalStrengthResponseData;

}
}

#endif

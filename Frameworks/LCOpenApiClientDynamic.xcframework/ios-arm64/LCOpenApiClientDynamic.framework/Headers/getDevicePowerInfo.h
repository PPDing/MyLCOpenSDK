/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_getDevicePowerInfo_H_
#define _LC_OPENAPI_CLIENT_getDevicePowerInfo_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备锁电量信息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class getDevicePowerInfoRequest : public LCOpenApiRequest
	{
	public:
		class getDevicePowerInfoRequestData
		{
		public:
			getDevicePowerInfoRequestData();
			~getDevicePowerInfoRequestData();
			
		public:
			/** xxx */
			string token;
		public:
			/**  */
			string deviceId;

		};
	public:
		getDevicePowerInfoRequest();
		~getDevicePowerInfoRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		getDevicePowerInfoRequestData data;
		MetaInfo* _metainfo_getDevicePowerInfoRequestData;
	};

	
	typedef getDevicePowerInfoRequest::getDevicePowerInfoRequestData getDevicePowerInfoRequestData;


	class getDevicePowerInfoResponse : public LCOpenApiResponse
	{
	public:
		class getDevicePowerInfoResponseData
		{
		public:
			getDevicePowerInfoResponseData();
			~getDevicePowerInfoResponseData();
			
		public:
			/** define a list with struct of getDevicePowerInfoResponseData_ElectricitysElement */
			class getDevicePowerInfoResponseData_ElectricitysElement : public LCOpenApiBase
			{
			public:
				getDevicePowerInfoResponseData_ElectricitysElement();
				~getDevicePowerInfoResponseData_ElectricitysElement();
			public:
				/** 碱性电量百分比，取值范围0~100 */
				string alkElec;
			public:
				/** 电量百分比，设备锁电池有两部分，所以该字段默认返回0 */
				string electric;
			public:
				/** 锂电池电量百分比，取值范围0~100 */
				string litElec;
			public:
				/** 供电类型，battery：电池；adapter：适配器；batteryAdapter：电池+适配器 */
				string type;
			};
		public:
			LCOpenApiVector<getDevicePowerInfoResponseData_ElectricitysElement> electricitys;

		};
	public:
		getDevicePowerInfoResponse();
		~getDevicePowerInfoResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		getDevicePowerInfoResponseData data;
		MetaInfo* _metainfo_getDevicePowerInfoResponseData;
	};

	
	typedef getDevicePowerInfoResponse::getDevicePowerInfoResponseData getDevicePowerInfoResponseData;
	typedef getDevicePowerInfoResponse::getDevicePowerInfoResponseData::getDevicePowerInfoResponseData_ElectricitysElement getDevicePowerInfoResponseData_ElectricitysElement;

}
}

#endif

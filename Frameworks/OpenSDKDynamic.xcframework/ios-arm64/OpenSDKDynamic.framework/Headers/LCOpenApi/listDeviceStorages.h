/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_listDeviceStorages_H_
#define _LC_OPENAPI_CLIENT_listDeviceStorages_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询设备存储介质列表
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class listDeviceStoragesRequest : public LCOpenApiRequest
	{
	public:
		class listDeviceStoragesRequestData
		{
		public:
			listDeviceStoragesRequestData();
			~listDeviceStoragesRequestData();
			
		public:
			/** 授权的token */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		listDeviceStoragesRequest();
		~listDeviceStoragesRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		listDeviceStoragesRequestData data;
		MetaInfo* _metainfo_listDeviceStoragesRequestData;
	};

	
	typedef listDeviceStoragesRequest::listDeviceStoragesRequestData listDeviceStoragesRequestData;


	class listDeviceStoragesResponse : public LCOpenApiResponse
	{
	public:
		class listDeviceStoragesResponseData
		{
		public:
			listDeviceStoragesResponseData();
			~listDeviceStoragesResponseData();
			
		public:
			/** define a list with struct of listDeviceStoragesResponseData_StorageListElement */
			class listDeviceStoragesResponseData_StorageListElement : public LCOpenApiBase
			{
			public:
				listDeviceStoragesResponseData_StorageListElement();
				~listDeviceStoragesResponseData_StorageListElement();
			public:
				/** 从1开始表示存储介质的编号 */
				string index;
			public:
				/** 可选,存储介质名称 */
				string name;
			};
		public:
			LCOpenApiVector<listDeviceStoragesResponseData_StorageListElement> storageList;

		};
	public:
		listDeviceStoragesResponse();
		~listDeviceStoragesResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		listDeviceStoragesResponseData data;
		MetaInfo* _metainfo_listDeviceStoragesResponseData;
	};

	
	typedef listDeviceStoragesResponse::listDeviceStoragesResponseData listDeviceStoragesResponseData;
	typedef listDeviceStoragesResponse::listDeviceStoragesResponseData::listDeviceStoragesResponseData_StorageListElement listDeviceStoragesResponseData_StorageListElement;

}
}

#endif

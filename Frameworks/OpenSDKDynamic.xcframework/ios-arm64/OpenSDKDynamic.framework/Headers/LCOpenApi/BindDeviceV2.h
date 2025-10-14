/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_BindDeviceV2_H_
#define _LC_OPENAPI_CLIENT_BindDeviceV2_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备绑定

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class BindDeviceV2Request : public LCOpenApiRequest
	{
	public:
		class BindDeviceV2RequestData
		{
		public:
			BindDeviceV2RequestData();
			~BindDeviceV2RequestData();
			
		public:
			/** 设备名称 */
			string deviceName;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 安全码或设备密码，若无则填空 */
			string code;
		public:
			/** 站点ID */
			string siteId;
		public:
			/** 设备用户名 */
			string deviceUserName;
		public:
			/** 设备类型 */
			string deviceCatalog;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		BindDeviceV2Request();
		~BindDeviceV2Request();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		BindDeviceV2RequestData data;
		MetaInfo* _metainfo_BindDeviceV2RequestData;
	};

	
	typedef BindDeviceV2Request::BindDeviceV2RequestData BindDeviceV2RequestData;


	class BindDeviceV2Response : public LCOpenApiResponse
	{
	public:
		class BindDeviceV2ResponseData
		{
		public:
			BindDeviceV2ResponseData();
			~BindDeviceV2ResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		BindDeviceV2Response();
		~BindDeviceV2Response();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		BindDeviceV2ResponseData data;
		MetaInfo* _metainfo_BindDeviceV2ResponseData;
	};

	
	typedef BindDeviceV2Response::BindDeviceV2ResponseData BindDeviceV2ResponseData;

}
}

#endif

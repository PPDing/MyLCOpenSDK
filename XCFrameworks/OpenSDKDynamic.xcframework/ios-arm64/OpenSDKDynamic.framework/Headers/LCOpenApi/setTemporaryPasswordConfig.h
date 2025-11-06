/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_setTemporaryPasswordConfig_H_
#define _LC_OPENAPI_CLIENT_setTemporaryPasswordConfig_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置临时秘钥
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class setTemporaryPasswordConfigRequest : public LCOpenApiRequest
	{
	public:
		class setTemporaryPasswordConfigRequestData
		{
		public:
			setTemporaryPasswordConfigRequestData();
			~setTemporaryPasswordConfigRequestData();
			
		public:
			/** define a list with struct of setTemporaryPasswordConfigRequestData_TemporarypasswordElement */
			class setTemporaryPasswordConfigRequestData_TemporarypasswordElement : public LCOpenApiBase
			{
			public:
				setTemporaryPasswordConfigRequestData_TemporarypasswordElement();
				~setTemporaryPasswordConfigRequestData_TemporarypasswordElement();
			public:
				/** [int]可选，有效次数，-1表示不限制次数；无此字段默认无限次 */
				int effectCount;
			public:
				/** 开始时间 yyyyMMddTHHmmss */
				string beginTime;
			public:
				/** 结束时间 yyyyMMddTHHmmss */
				string endTime;
			public:
				/** 临时秘钥 */
				string password;
			};
		public:
			LCOpenApiVector<setTemporaryPasswordConfigRequestData_TemporarypasswordElement> temporarypassword;
		public:
			/** 通道号 */
			string channelId;
		public:
			/**  */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		setTemporaryPasswordConfigRequest();
		~setTemporaryPasswordConfigRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		setTemporaryPasswordConfigRequestData data;
		MetaInfo* _metainfo_setTemporaryPasswordConfigRequestData;
	};

	
	typedef setTemporaryPasswordConfigRequest::setTemporaryPasswordConfigRequestData setTemporaryPasswordConfigRequestData;
	typedef setTemporaryPasswordConfigRequest::setTemporaryPasswordConfigRequestData::setTemporaryPasswordConfigRequestData_TemporarypasswordElement setTemporaryPasswordConfigRequestData_TemporarypasswordElement;


	class setTemporaryPasswordConfigResponse : public LCOpenApiResponse
	{
	public:
		class setTemporaryPasswordConfigResponseData
		{
		public:
			setTemporaryPasswordConfigResponseData();
			~setTemporaryPasswordConfigResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		setTemporaryPasswordConfigResponse();
		~setTemporaryPasswordConfigResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		setTemporaryPasswordConfigResponseData data;
		MetaInfo* _metainfo_setTemporaryPasswordConfigResponseData;
	};

	
	typedef setTemporaryPasswordConfigResponse::setTemporaryPasswordConfigResponseData setTemporaryPasswordConfigResponseData;

}
}

#endif

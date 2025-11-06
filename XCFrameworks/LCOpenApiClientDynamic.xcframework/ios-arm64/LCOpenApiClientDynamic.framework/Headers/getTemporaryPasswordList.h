/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_getTemporaryPasswordList_H_
#define _LC_OPENAPI_CLIENT_getTemporaryPasswordList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取临时秘钥列表
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class getTemporaryPasswordListRequest : public LCOpenApiRequest
	{
	public:
		class getTemporaryPasswordListRequestData
		{
		public:
			getTemporaryPasswordListRequestData();
			~getTemporaryPasswordListRequestData();
			
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
		getTemporaryPasswordListRequest();
		~getTemporaryPasswordListRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		getTemporaryPasswordListRequestData data;
		MetaInfo* _metainfo_getTemporaryPasswordListRequestData;
	};

	
	typedef getTemporaryPasswordListRequest::getTemporaryPasswordListRequestData getTemporaryPasswordListRequestData;


	class getTemporaryPasswordListResponse : public LCOpenApiResponse
	{
	public:
		class getTemporaryPasswordListResponseData
		{
		public:
			getTemporaryPasswordListResponseData();
			~getTemporaryPasswordListResponseData();
			
		public:
			/** define a list with struct of getTemporaryPasswordListResponseData_TemporarypasswordElement */
			class getTemporaryPasswordListResponseData_TemporarypasswordElement : public LCOpenApiBase
			{
			public:
				getTemporaryPasswordListResponseData_TemporarypasswordElement();
				~getTemporaryPasswordListResponseData_TemporarypasswordElement();
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
			LCOpenApiVector<getTemporaryPasswordListResponseData_TemporarypasswordElement> temporarypassword;
		public:
			/** [int]设备支持临时密码最多个数 */
			int maxNumber;
		public:
			/** [int]可选，通道编号；不填默认设备 */
			int chan;

		};
	public:
		getTemporaryPasswordListResponse();
		~getTemporaryPasswordListResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		getTemporaryPasswordListResponseData data;
		MetaInfo* _metainfo_getTemporaryPasswordListResponseData;
	};

	
	typedef getTemporaryPasswordListResponse::getTemporaryPasswordListResponseData getTemporaryPasswordListResponseData;
	typedef getTemporaryPasswordListResponse::getTemporaryPasswordListResponseData::getTemporaryPasswordListResponseData_TemporarypasswordElement getTemporaryPasswordListResponseData_TemporarypasswordElement;

}
}

#endif

/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetTemporaryPassWord_H_
#define _LC_OPENAPI_CLIENT_SetTemporaryPassWord_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置临时秘钥_理想定制专项新增接口

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetTemporaryPassWordRequest : public LCOpenApiRequest
	{
	public:
		class SetTemporaryPassWordRequestData
		{
		public:
			SetTemporaryPassWordRequestData();
			~SetTemporaryPassWordRequestData();
			
		public:
			/** define a list with struct of SetTemporaryPassWordRequestData_TemporarypasswordElement */
			class SetTemporaryPassWordRequestData_TemporarypasswordElement : public LCOpenApiBase
			{
			public:
				SetTemporaryPassWordRequestData_TemporarypasswordElement();
				~SetTemporaryPassWordRequestData_TemporarypasswordElement();
			public:
				/** [int]可选，有效次数，-1表示不限次数;无此字段默认无限次 */
				int effectCount;
			public:
				/** [String]结束时间，时间格式为yyyyMMddTHHmmss */
				string effectEndTime;
			public:
				/** [String]临时密码 */
				string password;
			public:
				/** [String]开始时间，时间格式为yyyyMMddTHHmmss */
				string effectBeginTime;
			};
		public:
			LCOpenApiVector<SetTemporaryPassWordRequestData_TemporarypasswordElement> temporarypassword;
		public:
			/** [int] 可选，通道编号；不填默认设备 */
			int channelId;
		public:
			/** [String]授权token(userToken或accessToken),必选 */
			string token;
		public:
			/** [String]设备ID,必选 */
			string deviceId;

		};
	public:
		SetTemporaryPassWordRequest();
		~SetTemporaryPassWordRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		SetTemporaryPassWordRequestData data;
		MetaInfo* _metainfo_SetTemporaryPassWordRequestData;
	};

	
	typedef SetTemporaryPassWordRequest::SetTemporaryPassWordRequestData SetTemporaryPassWordRequestData;
	typedef SetTemporaryPassWordRequest::SetTemporaryPassWordRequestData::SetTemporaryPassWordRequestData_TemporarypasswordElement SetTemporaryPassWordRequestData_TemporarypasswordElement;


	class SetTemporaryPassWordResponse : public LCOpenApiResponse
	{
	public:
		class SetTemporaryPassWordResponseData
		{
		public:
			SetTemporaryPassWordResponseData();
			~SetTemporaryPassWordResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetTemporaryPassWordResponse();
		~SetTemporaryPassWordResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		SetTemporaryPassWordResponseData data;
		MetaInfo* _metainfo_SetTemporaryPassWordResponseData;
	};

	
	typedef SetTemporaryPassWordResponse::SetTemporaryPassWordResponseData SetTemporaryPassWordResponseData;

}
}

#endif

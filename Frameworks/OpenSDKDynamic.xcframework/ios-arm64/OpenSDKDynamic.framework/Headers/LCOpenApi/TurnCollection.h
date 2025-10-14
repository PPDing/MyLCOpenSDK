/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_TurnCollection_H_
#define _LC_OPENAPI_CLIENT_TurnCollection_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
转动设备到目标收藏点
备注：需要设备存在CollectionPoint收藏点位能力集
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class TurnCollectionRequest : public LCOpenApiRequest
	{
	public:
		class TurnCollectionRequestData
		{
		public:
			TurnCollectionRequestData();
			~TurnCollectionRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备类型，可选，针对ehome设备不需要校验预置点信息（ehome:ehome设备，gb:国标设备） */
			string deviceType;
		public:
			/** 收藏点名称 */
			string name;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [cstr]turnCollection */
			#define _STATIC_TurnCollectionRequestData_method "turnCollection"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		TurnCollectionRequest();
		~TurnCollectionRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		TurnCollectionRequestData data;
		MetaInfo* _metainfo_TurnCollectionRequestData;
	};

	
	typedef TurnCollectionRequest::TurnCollectionRequestData TurnCollectionRequestData;


	class TurnCollectionResponse : public LCOpenApiResponse
	{
	public:
		class TurnCollectionResponseData
		{
		public:
			TurnCollectionResponseData();
			~TurnCollectionResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		TurnCollectionResponse();
		~TurnCollectionResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		TurnCollectionResponseData data;
		MetaInfo* _metainfo_TurnCollectionResponseData;
	};

	
	typedef TurnCollectionResponse::TurnCollectionResponseData TurnCollectionResponseData;

}
}

#endif

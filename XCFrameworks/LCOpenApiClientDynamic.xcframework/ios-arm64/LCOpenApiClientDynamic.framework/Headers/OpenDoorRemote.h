/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_OpenDoorRemote_H_
#define _LC_OPENAPI_CLIENT_OpenDoorRemote_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
远程开门

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class OpenDoorRemoteRequest : public LCOpenApiRequest
	{
	public:
		class OpenDoorRemoteRequestData
		{
		public:
			OpenDoorRemoteRequestData();
			~OpenDoorRemoteRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		OpenDoorRemoteRequest();
		~OpenDoorRemoteRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		OpenDoorRemoteRequestData data;
		MetaInfo* _metainfo_OpenDoorRemoteRequestData;
	};

	
	typedef OpenDoorRemoteRequest::OpenDoorRemoteRequestData OpenDoorRemoteRequestData;


	class OpenDoorRemoteResponse : public LCOpenApiResponse
	{
	public:
		class OpenDoorRemoteResponseData
		{
		public:
			OpenDoorRemoteResponseData();
			~OpenDoorRemoteResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		OpenDoorRemoteResponse();
		~OpenDoorRemoteResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		OpenDoorRemoteResponseData data;
		MetaInfo* _metainfo_OpenDoorRemoteResponseData;
	};

	
	typedef OpenDoorRemoteResponse::OpenDoorRemoteResponseData OpenDoorRemoteResponseData;

}
}

#endif

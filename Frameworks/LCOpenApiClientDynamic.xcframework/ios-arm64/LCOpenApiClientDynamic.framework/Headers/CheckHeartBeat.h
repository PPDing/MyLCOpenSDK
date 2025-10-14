/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_CheckHeartBeat_H_
#define _LC_OPENAPI_CLIENT_CheckHeartBeat_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
优化专项--长连接

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class CheckHeartBeatRequest : public LCOpenApiRequest
	{
	public:
		class CheckHeartBeatRequestData
		{
		public:
			CheckHeartBeatRequestData();
			~CheckHeartBeatRequestData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		CheckHeartBeatRequest();
		~CheckHeartBeatRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		CheckHeartBeatRequestData data;
		MetaInfo* _metainfo_CheckHeartBeatRequestData;
	};

	
	typedef CheckHeartBeatRequest::CheckHeartBeatRequestData CheckHeartBeatRequestData;


	class CheckHeartBeatResponse : public LCOpenApiResponse
	{
	public:
		class CheckHeartBeatResponseData
		{
		public:
			CheckHeartBeatResponseData();
			~CheckHeartBeatResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		CheckHeartBeatResponse();
		~CheckHeartBeatResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		CheckHeartBeatResponseData data;
		MetaInfo* _metainfo_CheckHeartBeatResponseData;
	};

	
	typedef CheckHeartBeatResponse::CheckHeartBeatResponseData CheckHeartBeatResponseData;

}
}

#endif

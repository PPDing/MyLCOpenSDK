/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteCloudRecordByTime_H_
#define _LC_OPENAPI_CLIENT_DeleteCloudRecordByTime_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
删除动检云录像片段

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeleteCloudRecordByTimeRequest : public LCOpenApiRequest
	{
	public:
		class DeleteCloudRecordByTimeRequestData
		{
		public:
			DeleteCloudRecordByTimeRequestData();
			~DeleteCloudRecordByTimeRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** define a list with struct of DeleteCloudRecordByTimeRequestData_RecordInfosElement */
			class DeleteCloudRecordByTimeRequestData_RecordInfosElement : public LCOpenApiBase
			{
			public:
				DeleteCloudRecordByTimeRequestData_RecordInfosElement();
				~DeleteCloudRecordByTimeRequestData_RecordInfosElement();
			public:
				/** 结束时间, 格式20231021T235959 */
				string endTime;
			public:
				/** 通道ID */
				string channelId;
			public:
				/** 开始时间, 格式20231021T000000 */
				string beginTime;
			};
		public:
			LCOpenApiVector<DeleteCloudRecordByTimeRequestData_RecordInfosElement> recordInfos;
		public:
			/** 结束时间, 格式20231021T235959 */
			string endTime;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** 开始时间, 格式20231021T000000 */
			string beginTime;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		DeleteCloudRecordByTimeRequest();
		~DeleteCloudRecordByTimeRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		DeleteCloudRecordByTimeRequestData data;
		MetaInfo* _metainfo_DeleteCloudRecordByTimeRequestData;
	};

	
	typedef DeleteCloudRecordByTimeRequest::DeleteCloudRecordByTimeRequestData DeleteCloudRecordByTimeRequestData;
	typedef DeleteCloudRecordByTimeRequest::DeleteCloudRecordByTimeRequestData::DeleteCloudRecordByTimeRequestData_RecordInfosElement DeleteCloudRecordByTimeRequestData_RecordInfosElement;


	class DeleteCloudRecordByTimeResponse : public LCOpenApiResponse
	{
	public:
		class DeleteCloudRecordByTimeResponseData
		{
		public:
			DeleteCloudRecordByTimeResponseData();
			~DeleteCloudRecordByTimeResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeleteCloudRecordByTimeResponse();
		~DeleteCloudRecordByTimeResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		DeleteCloudRecordByTimeResponseData data;
		MetaInfo* _metainfo_DeleteCloudRecordByTimeResponseData;
	};

	
	typedef DeleteCloudRecordByTimeResponse::DeleteCloudRecordByTimeResponseData DeleteCloudRecordByTimeResponseData;

}
}

#endif

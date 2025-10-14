/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteCloudRecords_H_
#define _LC_OPENAPI_CLIENT_DeleteCloudRecords_H_

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
	class DeleteCloudRecordsRequest : public LCOpenApiRequest
	{
	public:
		class DeleteCloudRecordsRequestData
		{
		public:
			DeleteCloudRecordsRequestData();
			~DeleteCloudRecordsRequestData();
			
		public:
			/** 云录像分区Id */
			string recordRegionId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 云录像Id */
			string recordId;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** define a list with struct of DeleteCloudRecordsRequestData_RecordInfosElement */
			class DeleteCloudRecordsRequestData_RecordInfosElement : public LCOpenApiBase
			{
			public:
				DeleteCloudRecordsRequestData_RecordInfosElement();
				~DeleteCloudRecordsRequestData_RecordInfosElement();
			public:
				/** 云录像Id */
				string recordId;
			public:
				/** 通道ID */
				string channelId;
			public:
				/** 云录像分区Id */
				string recordRegionId;
			};
		public:
			LCOpenApiVector<DeleteCloudRecordsRequestData_RecordInfosElement> recordInfos;

		};
	public:
		DeleteCloudRecordsRequest();
		~DeleteCloudRecordsRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		DeleteCloudRecordsRequestData data;
		MetaInfo* _metainfo_DeleteCloudRecordsRequestData;
	};

	
	typedef DeleteCloudRecordsRequest::DeleteCloudRecordsRequestData DeleteCloudRecordsRequestData;
	typedef DeleteCloudRecordsRequest::DeleteCloudRecordsRequestData::DeleteCloudRecordsRequestData_RecordInfosElement DeleteCloudRecordsRequestData_RecordInfosElement;


	class DeleteCloudRecordsResponse : public LCOpenApiResponse
	{
	public:
		class DeleteCloudRecordsResponseData
		{
		public:
			DeleteCloudRecordsResponseData();
			~DeleteCloudRecordsResponseData();
			
		public:
			/** define a list with struct of DeleteCloudRecordsResponseData_ErrInfosElement */
			class DeleteCloudRecordsResponseData_ErrInfosElement : public LCOpenApiBase
			{
			public:
				DeleteCloudRecordsResponseData_ErrInfosElement();
				~DeleteCloudRecordsResponseData_ErrInfosElement();
			public:
				/** 错误码 */
				string errCode;
			public:
				/** 错误信息 */
				string msg;
			public:
				/** 云录像Id */
				string recordId;
			};
		public:
			LCOpenApiVector<DeleteCloudRecordsResponseData_ErrInfosElement> errInfos;

		};
	public:
		DeleteCloudRecordsResponse();
		~DeleteCloudRecordsResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		DeleteCloudRecordsResponseData data;
		MetaInfo* _metainfo_DeleteCloudRecordsResponseData;
	};

	
	typedef DeleteCloudRecordsResponse::DeleteCloudRecordsResponseData DeleteCloudRecordsResponseData;
	typedef DeleteCloudRecordsResponse::DeleteCloudRecordsResponseData::DeleteCloudRecordsResponseData_ErrInfosElement DeleteCloudRecordsResponseData_ErrInfosElement;

}
}

#endif

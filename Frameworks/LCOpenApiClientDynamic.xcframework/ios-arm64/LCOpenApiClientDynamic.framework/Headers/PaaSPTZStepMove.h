/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PaaSPTZStepMove_H_
#define _LC_OPENAPI_CLIENT_PaaSPTZStepMove_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
    公有云PaaS 云台单点移动控制（向某个方向移动固定步长）。
    注：此协议由管理节点和子节点同时提供，管理节点按照channelId所在子节点路由。

	POST /things/operation/ptz/step/move/channels/[channelId]

    
    channelId : 类型string。通道标识(包括视频通道，图片通道，报警通道等)。最长为32字符。
    对于公有云产品，channelId是使用”设备序列号-通道号”进行标识。
    对于私有云产品，channelId是一个内部生成的唯一描述，只描述设备的通道号，和设备唯一标识解耦，没有任何关系。
    
    具体转到位置由设备决定。如果是左、右、上、下方向控制，1个参数表示速度；如果是左上、左下、右下、右上操作时，第0个参数表示垂直速度，第1个参数表示水平速度。
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class PaaSPTZStepMoveRequest : public LCOpenApiRequest
	{
	public:
		class PaaSPTZStepMoveRequestData
		{
		public:
			PaaSPTZStepMoveRequestData();
			~PaaSPTZStepMoveRequestData();
			
		public:
			/** [int] 步长参数，范围1~8 如果是左、右、上、下方向控制，1个参数表示速度；如果是左上、左下、右下、右上操作时，第0个参数表示垂直速度，第1个参数表示水平速度 */
			LCOpenApiVector<int> steps;
		public:
			/** 倍数 zoomWide：倍数放大；zoomTele：倍数缩小 */
			string zoom;
		public:
			/** 云台转动方向 leftUp：左上；up：上；rightUp：右上；left：左；right：右；leftDown：左下；down：下；rightDown：右下 */
			string position;

		};
	public:
		PaaSPTZStepMoveRequest();
		~PaaSPTZStepMoveRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		PaaSPTZStepMoveRequestData data;
		MetaInfo* _metainfo_PaaSPTZStepMoveRequestData;
	};

	
	typedef PaaSPTZStepMoveRequest::PaaSPTZStepMoveRequestData PaaSPTZStepMoveRequestData;


	class PaaSPTZStepMoveResponse : public LCOpenApiResponse
	{
	public:
		class PaaSPTZStepMoveResponseData
		{
		public:
			PaaSPTZStepMoveResponseData();
			~PaaSPTZStepMoveResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		PaaSPTZStepMoveResponse();
		~PaaSPTZStepMoveResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		PaaSPTZStepMoveResponseData data;
		MetaInfo* _metainfo_PaaSPTZStepMoveResponseData;
	};

	
	typedef PaaSPTZStepMoveResponse::PaaSPTZStepMoveResponseData PaaSPTZStepMoveResponseData;

}
}

#endif

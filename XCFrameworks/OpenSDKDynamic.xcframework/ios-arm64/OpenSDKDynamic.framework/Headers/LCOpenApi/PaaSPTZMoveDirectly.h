/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PaaSPTZMoveDirectly_H_
#define _LC_OPENAPI_CLIENT_PaaSPTZMoveDirectly_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
    操作方式是在屏幕上框选一块区域，经定位后，该区域的中心点成为画面的中心点。框选时如果方向为右，则倍率为正，即区域内物体放大，方向为左，则倍率为负，区域内物体缩小。
	补充说明：坐标系（左上角为原点）。
    注：此协议由管理节点和子节点同时提供，管理节点按照channelId所在子节点路由。

    PUT /things/operation/ptz/moveDirectly/channels/[channelId]
    
    channelId : 类型string。通道标识(包括视频通道，图片通道，报警通道等)。最长为32字符。
    对于公有云产品，channelId是使用”设备序列号-通道号”进行标识。
    对于私有云产品，channelId是一个内部生成的唯一描述，只描述设备的通道号，和设备唯一标识解耦，没有任何关系。
    
    通过将horizontal、vertical、zoom三个参数设置为0调用该接口，则为停止云台转动。如果在云台转动后不调用停止云台转动，则按照duraiton时间执行转动。
    duration只有部分设备能够支持，如果要确保所有设备都能停止，需要通过手动下发三参数为0的方式实现。
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class PaaSPTZMoveDirectlyRequest : public LCOpenApiRequest
	{
	public:
		class PaaSPTZMoveDirectlyRequestData
		{
		public:
			PaaSPTZMoveDirectlyRequestData();
			~PaaSPTZMoveDirectlyRequestData();
			
		public:
			/** [int]窗口的宽度，以实际像素为单位。必填项。 */
			int windowWidth;
		public:
			/** [int]候选框的中心点横坐标值x，以实际像素为单位，必填项。 */
			int candidateBoxMidX;
		public:
			/** [int]候选框的宽度，以实际像素为单位。必填项。 */
			int candidateBoxWidth;
		public:
			/** [int]候选框的高度，以实际像素为单位。必填项。 */
			int candidateBoxHeight;
		public:
			/** [int]窗口的高度，以实际像素为单位。必填项。 */
			int windowHeight;
		public:
			/** [bool]窗口放大缩小标志位，true为放大，false为缩小，必填项。 */
			bool zoomOut;
		public:
			/** [int]候选框的中心点纵坐标值y，以实际像素为单位，必填项。 */
			int candidateBoxMidy;

		};
	public:
		PaaSPTZMoveDirectlyRequest();
		~PaaSPTZMoveDirectlyRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		PaaSPTZMoveDirectlyRequestData data;
		MetaInfo* _metainfo_PaaSPTZMoveDirectlyRequestData;
	};

	
	typedef PaaSPTZMoveDirectlyRequest::PaaSPTZMoveDirectlyRequestData PaaSPTZMoveDirectlyRequestData;


	class PaaSPTZMoveDirectlyResponse : public LCOpenApiResponse
	{
	public:
		class PaaSPTZMoveDirectlyResponseData
		{
		public:
			PaaSPTZMoveDirectlyResponseData();
			~PaaSPTZMoveDirectlyResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		PaaSPTZMoveDirectlyResponse();
		~PaaSPTZMoveDirectlyResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		PaaSPTZMoveDirectlyResponseData data;
		MetaInfo* _metainfo_PaaSPTZMoveDirectlyResponseData;
	};

	
	typedef PaaSPTZMoveDirectlyResponse::PaaSPTZMoveDirectlyResponseData PaaSPTZMoveDirectlyResponseData;

}
}

#endif

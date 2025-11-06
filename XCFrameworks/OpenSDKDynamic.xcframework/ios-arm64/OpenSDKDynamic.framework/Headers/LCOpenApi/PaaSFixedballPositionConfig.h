/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PaaSFixedballPositionConfig_H_
#define _LC_OPENAPI_CLIENT_PaaSFixedballPositionConfig_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
    固定镜头与球机定位设置。
	
	POST /things/operation/fixedball/position/config/devices/[deviceId]
	
	Paas协议地址：
	http://firefly.dahuatech.com/FireFlyWeb/interfaceDoc?interfaceId=b8bab34920f944d49a056c42f0a9101d

	设备协议
	POST /ezAPI/device/fixedball/position/config
	
	请求内容参数
	point : 类型int[2][2]，必填，下发的定位坐标,支持BallPositionFocus能力下发两个点
	remoteChannel : 类型int，选填，通道号, 指的是联动的通道号
	focus : 类型float，选填，变倍倍数[0-1]
	
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class PaaSFixedballPositionConfigRequest : public LCOpenApiRequest
	{
	public:
		class PaaSFixedballPositionConfigRequestData
		{
		public:
			PaaSFixedballPositionConfigRequestData();
			~PaaSFixedballPositionConfigRequestData();
			
		public:
			/** [double] 选填，变倍倍数[0-1] */
			double focus;
		public:
			/** 必填，下发的定位坐标（二维数组类型int[2][2]，如[[1,2]]）,支持BallPositionFocus能力下发两个点 */
			string point;
		public:
			/** [int] 选填，通道号, 指的是联动的通道号 */
			int remoteChannel;

		};
	public:
		PaaSFixedballPositionConfigRequest();
		~PaaSFixedballPositionConfigRequest();
	public:
		virtual int build();
		virtual LCOpenApiRequest* clone();
	public:
		PaaSFixedballPositionConfigRequestData data;
		MetaInfo* _metainfo_PaaSFixedballPositionConfigRequestData;
	};

	
	typedef PaaSFixedballPositionConfigRequest::PaaSFixedballPositionConfigRequestData PaaSFixedballPositionConfigRequestData;


	class PaaSFixedballPositionConfigResponse : public LCOpenApiResponse
	{
	public:
		class PaaSFixedballPositionConfigResponseData
		{
		public:
			PaaSFixedballPositionConfigResponseData();
			~PaaSFixedballPositionConfigResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		PaaSFixedballPositionConfigResponse();
		~PaaSFixedballPositionConfigResponse();
	public:
		virtual LCOpenApiResponse* clone();
		virtual int parse();
	public:
		PaaSFixedballPositionConfigResponseData data;
		MetaInfo* _metainfo_PaaSFixedballPositionConfigResponseData;
	};

	
	typedef PaaSFixedballPositionConfigResponse::PaaSFixedballPositionConfigResponseData PaaSFixedballPositionConfigResponseData;

}
}

#endif

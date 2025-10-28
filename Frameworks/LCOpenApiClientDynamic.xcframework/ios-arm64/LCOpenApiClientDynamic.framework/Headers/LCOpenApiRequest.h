//
//  BaseRequest.hpp
//  LCOpenApiClient_C++
//
//  Created by mac318340418 on 17/1/5.
//  Copyright © 2017年 bzy. All rights reserved.
//

#ifndef _LCOpenApiRequest_H_
#define _LCOpenApiRequest_H_

#include <iostream>
#include <string>

using namespace std;
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi {

    class LCOpenApiRequest {
    public:
        virtual int build() = 0;
        LCOpenApiRequest() : isUseKeepAlive(0)
        , accessSource("lc")
        , uriPrefix("/openapi/")
        , protoType(-1)
        , index(0)
        , priority(1)
        , port(0)
        , timeout(0)
        {
            
        }
        virtual ~LCOpenApiRequest(){};
		virtual LCOpenApiRequest* clone() = 0;
		void copyValue(LCOpenApiRequest *src)
		{
			this->apiname = src->apiname;
			this->fullname = src->fullname;
			this->method = src->method;
			this->uri = src->uri;
			this->content_type = src->content_type;
			this->body = src->body;

			this->params = src->params;
			this->messageId = src->messageId;
			this->time = src->time;
			this->nonce = src->nonce;
			this->signMd5 = src->signMd5;
			this->signSaas4Dcloud = src->signSaas4Dcloud;
			this->signSaas4Cos = src->signSaas4Cos;
			this->contentMd5 = src->contentMd5;
			this->isUseKeepAlive = src->isUseKeepAlive;

			this->dolynk_deviceID = src->dolynk_deviceID;
			this->index = src->index;
			this->priority = src->priority;
			
			this->paasAccessToken = src->paasAccessToken;
			this->paasDeviceId = src->paasDeviceId;
			this->paasChannelId = src->paasChannelId;
			
			this->iotAccessToken = src->iotAccessToken;
			
			this->accessSource = src->accessSource;
			this->host = src->host;
			this->port = src->port;
			this->uriPrefix = src->uriPrefix;
			this->protoType = src->protoType;
            this->timeout = src->timeout;
		}
    public:
        string apiname;
        string fullname;
        string method;
        string uri;
        string content_type;
        string body;
        
        string params;
        string messageId;
        string time;
        string nonce;
        string signMd5;
		string signSaas4Dcloud;
		string signSaas4Cos;
        string contentMd5;
        int isUseKeepAlive;

		//for dolynk
		string dolynk_deviceID;
        
		int index;
        int priority;

        //for paas
        string paasAccessToken;
        string paasDeviceId;
        string paasChannelId;
        
        // for iot-pgw
        string iotAccessToken;

		//platform
		string accessSource; //paas,lc
		string host;
		int port;
		string uriPrefix;
		int protoType;
        int timeout;
		
     };
}
}

#endif /* BaseRequest_cpp */

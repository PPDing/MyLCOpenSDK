#ifndef _ILCOpenApiClientListener_H
#define _ILCOpenApiClientListener_H

#include <string>

using namespace std;
#ifdef General
namespace General {
#else
namespace Dahua {
#endif
    namespace LCOpenApi {

        class ILCOpenApiClientListener
        {
        public:
			/**
			 * 
			 */
            virtual ~ILCOpenApiClientListener(){};
			
			
			/**
			 * result of calling async method
			 * @param index      Equal to the request
			 * @param url		 HTTP Request Uri
			 * @param body[Optional] HTTP Response body
			 * @param rsp		 HTTP Response Struct 
			 */
            virtual void onResponse(int index, string url,string orgData, string content, int content_length, string ret_code, string ret_msg) = 0;
        };

    } /* namespace LCOpenApi */
#ifdef General
} /* namespace General */
#else
} /* namespace Dahua */
#endif

#endif /* _ILCOpenApiClientListener_H */

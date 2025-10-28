//
//  FreeBuffer.hpp
//  LCOpenApiClientSDK
//
//  Created by mac on 10/23/19.
//  Copyright © 2019 lechange. All rights reserved.
//

#ifndef _FREE_BUFER_H_
#define _FREE_BUFER_H_

#include <iostream>
#include <string>

#ifdef LCOPENAPICLIENT_EXPORTS
#ifdef __cplusplus
#define C_API extern "C" _declspec(dllexport)
#else
#define C_API _declspec(dllexport)
#endif
#else
#ifdef __cplusplus
#define C_API extern "C"
#else
#define C_API
#endif
#endif

/** FreeBuffer */

using namespace std;
typedef struct
{
    char  *ptr;
    size_t length;
    size_t size;
    int count;
} free_buffer_t;

C_API void free_buffer_init(free_buffer_t *buf);
C_API void free_buffer_append(free_buffer_t *buf, void *data, size_t len);
C_API void free_buffer_clear(free_buffer_t *buf);
C_API void free_buffer_destroy(free_buffer_t *buf);

/** List */
#define DECLARE_LIST(TYPE) \
struct { \
TYPE *array; \
size_t _buffer_length; \
size_t _buffer_size; \
int size; \
}

#define LIST_INIT(list)                free_buffer_init((free_buffer_t *)(void *)&list)
#define LIST_ADD(list, obj)            free_buffer_append((free_buffer_t *)(void *)&list, &obj, sizeof(obj))
#define LIST_CLEAR(list)            free_buffer_destroy((free_buffer_t *)(void *)&list)

#define LIST_ADD_INT(list, s)        { int i = s; free_buffer_append((free_buffer_t *)(void *)&list, &i, sizeof(i)); }
#define LIST_ADD_LONG(list, s)        { int64 i = s; free_buffer_append((free_buffer_t *)(void *)&list, &i, sizeof(i)); }
#define LIST_ADD_BOOL(list, s)        { BOOL b = s; free_buffer_append((free_buffer_t *)(void *)&list, &b, sizeof(b)); }
#define LIST_ADD_STR(list, s)        { CSTR cstr = CS(s); free_buffer_append((free_buffer_t *)(void *)&list, &cstr, sizeof(cstr)); }
#define LIST_ADD_DOUBLE(list, s)    { double f = s; free_buffer_append((free_buffer_t *)(void *)&list, &f, sizeof(f)); }
#define LIST_ADD_OBJ(list, s)        LIST_ADD(list, s)
#define LIST_ADD_EMPTY_OBJ(list)    free_buffer_append((free_buffer_t *)(void *)&list, NULL, sizeof(*list.array))

#endif

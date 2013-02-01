//
//  lua_cjson.h
//  HelloLua
//
//  Created by yang zhu on 13-1-18.
//
//

#ifndef HelloLua_lua_cjson_h
#define HelloLua_lua_cjson_h
#define ENABLE_CJSON_GLOBAL 1

#include "lua.h"
#ifndef USE_INTERNAL_FPCONV
#define USE_INTERNAL_FPCONV
#endif
int luaopen_cjson(lua_State *l);
int luaopen_cjson_safe(lua_State *l);
#endif

#ifndef LOGGER_H
#define LOGGER_H	1

#include "LoggerFunc.h"

#ifdef WIN32
#include <windows.h>
#ifdef __cplusplus
extern "C" {
#endif
__declspec(dllexport) void mylog(time_t t, int command, int code, const std::string &idfrom, const std::string &idto, const std::string &msg);
#ifdef __cplusplus
}
#endif
// Exclude rarely-used stuff from Windows headers
#define WIN32_LEAN_AND_MEAN             
#else
void mylog(time_t t, int command, int code, const std::string &idfrom, const std::string &idto, const std::string &msg);
#endif

#endif
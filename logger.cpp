#include "logger.h"

#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <streambuf>

void mylog(time_t t, int command, int code, const std::string &idfrom, const std::string &idto, const std::string &msg)
{
	std::cerr << t << " " << command << ": " << code << " from " << idfrom << " to " << idto << " [" << msg << "]" << std::endl;
}




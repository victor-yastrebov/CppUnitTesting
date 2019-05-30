#pragma once

#ifdef DO_TEST
#include<string>

namespace TEST
{
   std::string sLastErrMsg;
}
#define LogErrorToService(err_msg) TEST::sLastErrMsg=(err_msg);

#endif
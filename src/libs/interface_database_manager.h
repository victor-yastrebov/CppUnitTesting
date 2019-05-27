#pragma once

#include<string>

class IDatabaseManager {
   public:
      virtual bool IsValid( std::string ename ) = 0;
};
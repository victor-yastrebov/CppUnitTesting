#pragma once

class IDatabaseManager {
   public:
      virtual bool IsValid( std::string ename ) = 0;
};

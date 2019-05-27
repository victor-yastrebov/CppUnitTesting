#pragma once

class IWebService {
   public:
      virtual void LogError( std::string ename ) = 0;
};
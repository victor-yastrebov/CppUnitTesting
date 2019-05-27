#pragma once

#include<string>

#include"interface_web_service.h"

class FakeWebService : public IWebService {
   public:
      void LogError( std::string error ) override {
         lastError = error;
      }

      std::string lastError;
};
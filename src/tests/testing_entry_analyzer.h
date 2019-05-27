#pragma once

#include<memory>

#include"entry_analyzer.h"
#include"interface_web_service.h"

class TestingEntryAnalyzer : public EntryAnalyzer {
   public:
      TestingEntryAnalyzer(
        std::shared_ptr<IWebService> p_service ) :
         pWebService( p_service ) {
      }

   private:
       void LogError( std::string err ) override
       {
         pWebService->LogError( err );
       }

      std::shared_ptr<IWebService>   pWebService;
};
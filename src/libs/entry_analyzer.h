#pragma once

#include<string>

#include"database_manager.h"
#include"web_service.h"

class EntryAnalyzer {
   public:
      bool Analyze( std::string ename ) {
         if( ename.size() < 2 ) {
            webService.LogError( "Error: " + ename );
            return false;
         }
         if( false == dbManager.IsValid( ename ) )
            return false;

         return true;
      }
   private:
      DatabaseManager   dbManager;
           WebService   webService;
};
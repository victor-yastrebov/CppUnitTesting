#pragma once

#include<string>

#include"database_manager.h"
#include"web_service.h"
#include"testdefs.h"

class EntryAnalyzer {
   public:
      bool Analyze( std::string ename ) {
         if( ename.size() < 2 ) {
            LogErrorToService( "Error: " + ename );
            return false;
         }
         if( false == dbManager.IsValid( ename ) )
            return false;

         return true;
      }
   private:
#ifndef DO_TEST
      void LogErrorToService( std::string ename ) {
         webService.LogError( "Error: " + ename );
      }
#endif

      DatabaseManager   dbManager;
           WebService   webService;
};
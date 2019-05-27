#pragma once

#include<string>

#include"database_manager.h"
#include"web_service.h"

class EntryAnalyzer {
   public:
      bool Analyze( std::string ename ) {
         if( ename.size() < 2 ) {
            LogError( "Error: " + ename);
            return false;
         }

         if( false == dbManager.IsValid( ename ) )
            return false;

         return true;
      }

   protected:
      virtual void LogError( std::string err ) {
         webService.LogError( err );
      }

   private:
          DatabaseManager   dbManager;
               WebService   webService;
};
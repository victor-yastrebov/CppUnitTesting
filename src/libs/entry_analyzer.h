#pragma once

#include<string>

#include"database_manager.h"
#include"web_service.h"

template <typename T>
class EntryAnalyzer {
   public:
      bool Analyze( std::string ename ) {
         if( ename.size() < 2 ) {
            LogError( "Error: " + ename );
            return false;
         }
         if( false == dbManager.IsValid( ename ) )
            return false;

         return true;
      }
   private:
      void LogError( std::string err_msg ) {
         webService.LogError(err_msg);
      }

            T   dbManager;
   WebService   webService;
};
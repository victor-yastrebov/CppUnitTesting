#pragma once

#include<string>
#include<memory>

#include"database_manager.h"
#include"web_service.h"
#include"interface_database_manager.h"


class EntryAnalyzer {
   public:
      EntryAnalyzer() : pDbManager( std::make_unique<DatabaseManager>() ) {
      }

      EntryAnalyzer( 
         std:: unique_ptr<IDatabaseManager> &&p_mng ) :
            pDbManager( std::move( p_mng ) ) {
      }

      bool Analyze( std::string ename ) {
         if( ename.size() < 2 ) {
            webService.LogError( "Error: " + ename );
            return false;
         }
         if( false == pDbManager->IsValid( ename ) ) {
            return false;
         }

         return true;
      }
   private:
      std::unique_ptr<IDatabaseManager> pDbManager;
                             WebService webService;
};
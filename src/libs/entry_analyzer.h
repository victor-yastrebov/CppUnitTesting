#pragma once

#include<string>
#include<memory>

#include"database_manager.h"
#include"web_service.h"
#include"interface_database_manager.h"
#include"db_mng_factory.h"

class EntryAnalyzer {
   public:
      EntryAnalyzer() :
         pDbManager( DbMngFactory::Create() ) {
      }

      bool Analyze( std::string ename ) {
         if( ename.size() < 2 ) {
            webService.LogError( "Error: " + ename );
            return false;
         }
         if( false == pDbManager->IsValid( ename ) )
            return false;

         return true;
      }

   private:
      std::unique_ptr<IDatabaseManager>   pDbManager;
                             WebService   webService;
};
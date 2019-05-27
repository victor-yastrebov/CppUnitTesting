#pragma once

#include<memory>
#include"interface_database_manager.h"
#include"database_manager.h"
#include"fake_database_manager.h"

class DbMngFactory {
   public:
      static std::unique_ptr<IDatabaseManager> Create() {
         if( nullptr == pDbMng )
            return std::make_unique<DatabaseManager>();

         return std::move( pDbMng );
      }

      static void SetManager( std::unique_ptr<IDatabaseManager> &&p_mng ) {
         pDbMng = std::move( p_mng );
      }

   private:
      static std::unique_ptr<IDatabaseManager> pDbMng;
};
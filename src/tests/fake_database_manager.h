#pragma once

#include<string>
#include"interface_database_manager.h"

class FakeDatabaseManager : public IDatabaseManager {
   public:
      bool WillBeValid;

      FakeDatabaseManager( bool will_be_valid ) : WillBeValid( will_be_valid ) {
      }

      bool IsValid( std::string ename ) override {
         return WillBeValid;
      }
};
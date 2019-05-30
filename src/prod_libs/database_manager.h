#pragma once
#include<iostream>

class DatabaseManager {
   public:
      bool IsValid( std::string ename ) {
         /* логика, включающая 
         операции чтения из базы данных*/
         std::cout << "Hello from REAL DbManager" << std::endl;
         return false;
      }
};
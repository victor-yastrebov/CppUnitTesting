#pragma once

#include"interface_database_manager.h"

class DatabaseManager :
   public IDatabaseManager
{
   public:
      bool IsValid( std::string ename ) override
   {
      /* ������� ������, ����������
      �������� ������ �� ���� ������*/
      return false;
   }
};
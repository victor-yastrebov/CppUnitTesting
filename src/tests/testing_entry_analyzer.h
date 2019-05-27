#pragma once

#include"entry_analyzer.h"

class TestingEntryAnalyzer : 
   public EntryAnalyzer {

   public:
      bool  WillBeValid;

   private:
      bool IsValid( std::string ename ) override {
         return WillBeValid;
      }
};
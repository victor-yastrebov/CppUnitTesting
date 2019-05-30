#pragma once

#include"gtest\gtest.h"

class StubDbManagerNegative {
    public:
      bool IsValid( std::string name ) {
         return false;
      }
};
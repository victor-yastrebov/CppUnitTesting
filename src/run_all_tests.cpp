#define TESTING
#include<iostream>
#include"entry_analyzer.h"

#include"gtest\gtest.h"

#ifdef TESTING
   int main( int argc, char **argv )
   {
      ::testing::InitGoogleTest( &argc, argv );

      return RUN_ALL_TESTS();
   }
#else
   int main( int argc, char **argv )
   {
      EntryAnalyzer ea;
      const bool ret = ea.Analyze( "e" );

      std::cout << "ret is: " << ret << std::endl;
      return 0;
   }
#endif
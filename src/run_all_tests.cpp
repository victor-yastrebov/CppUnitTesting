#ifdef DO_TEST
#include"gtest\gtest.h"
#else
#include<iostream>
#include"entry_analyzer.h"
#endif

#ifdef DO_TEST
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

      std::cout << "Production code is ok, return code is: " << ret << std::endl;
      std::cout << "Done!" << std::endl;
      return 0;
   }
#endif
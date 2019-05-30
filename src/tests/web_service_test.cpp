#include"gtest\gtest.h"
#include"entry_analyzer.h"

class EntryAnalyzerTest: public ::testing::Test
{};

#ifdef DO_TEST
TEST_F( EntryAnalyzerTest, Analyze_TooShortEntryName_LogsErrorToWebServer )
{
   EntryAnalyzer ea;

   ea.Analyze( "e" );

   ASSERT_STREQ( TEST::sLastErrMsg.c_str(), "Error: e" );
}
#endif
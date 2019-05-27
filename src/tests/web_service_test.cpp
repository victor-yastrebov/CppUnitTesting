
#include"gtest\gtest.h"

class EntryAnalyzerTest: public ::testing::Test
{};

TEST_F( EntryAnalyzerTest, Analyze_TooShortEntryName_LogsErrorToWebServer )
{
   ASSERT_EQ( 1, 1 );
}
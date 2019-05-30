
#include"entry_analyzer.h"
#include"gtest\gtest.h"

class EntryAnalyzerTest: public ::testing::Test
{};

TEST_F( EntryAnalyzerTest, Analyze_EntryIsNotValid_ReturnsFalse )
{
   EntryAnalyzer ea;

   const bool is_valid = ea.Analyze( "ename" );

   ASSERT_EQ( is_valid, false );
}
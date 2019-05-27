#include"gtest\gtest.h"
#include"testing_entry_analyzer.h"

class EntryAnalyzerTest: public ::testing::Test
{};

TEST_F( EntryAnalyzerTest, 
   Analyze_ValidEntryName_ReturnsTrue)
{
   TestingEntryAnalyzer ea;
   ea.WillBeValid = true;

   bool result = ea.Analyze( "valid_entry_name" );

   ASSERT_EQ( result, true );
}
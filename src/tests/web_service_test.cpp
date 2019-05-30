#include"fake_database_manager.h"
#include"database_manager.h"
#include"entry_analyzer.h"

#include"gtest\gtest.h"

class EntryAnalyzerTest: public ::testing::Test
{};

TEST_F( EntryAnalyzerTest, Analyze_ValidEntryName_ReturnsTrue )
{
   EntryAnalyzer ea;

   const bool result =
      ea.Analyze( "valid_entry_name" );

   ASSERT_EQ( result, true );
}
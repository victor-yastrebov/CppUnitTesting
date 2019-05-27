
#include<memory>

#include"entry_analyzer.h"
#include"fake_database_manager.h"
#include"gtest\gtest.h"

class EntryAnalyzerTest: public ::testing::Test
{};

TEST_F( EntryAnalyzerTest, Analyze_ValidEntryName_ReturnsTrue )
{
   EntryAnalyzer ea( std::make_unique<FakeDatabaseManager>( true ) );

   bool result = ea.Analyze( "valid_entry_name" );

   ASSERT_EQ( result, true );
}

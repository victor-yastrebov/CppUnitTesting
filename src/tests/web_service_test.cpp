#include"gtest\gtest.h"
#include"entry_analyzer.h"

class EntryAnalyzerTest: public ::testing::Test
{};

TEST_F( EntryAnalyzerTest, Analyze_ValidEntryName_ReturnsTrue )
{
   DbMngFactory::SetManager( std::make_unique<FakeDatabaseManager>( true ) );
   EntryAnalyzer ea;

   bool result = ea.Analyze( "valid_entry_name" );

   ASSERT_EQ( result, true );
}
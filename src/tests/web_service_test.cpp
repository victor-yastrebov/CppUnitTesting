#include"gtest\gtest.h"
#include"entry_analyzer.h"

#include"database_manager.h"
#include"stub_db_mng_negative.h"

class EntryAnalyzerTest: public ::testing::Test
{};

TEST_F( EntryAnalyzerTest, Analyze_InvalidEntryName_ReturnsFalse )
{
   EntryAnalyzer<StubDbManagerNegative> ea;
   std::string ename( "name" );

   const bool test_ret = ea.Analyze( ename );

   ASSERT_EQ( test_ret, false );
}
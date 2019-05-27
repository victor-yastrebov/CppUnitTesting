#include<memory>
#include"fake_web_service.h"
#include"testing_entry_analyzer.h"

#include"gtest\gtest.h"

class EntryAnalyzerTest: public ::testing::Test
{};

TEST_F( EntryAnalyzerTest, Analyze_TooShortEntryName_LogsErrorToWebServer )
{
   std::shared_ptr<FakeWebService> p_web_service =
      std::make_shared<FakeWebService>();
   TestingEntryAnalyzer ea( p_web_service );

   bool result = ea.Analyze( "e" );

   ASSERT_EQ( p_web_service->lastError, "Error: e" );
}
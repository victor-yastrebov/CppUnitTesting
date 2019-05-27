cmake_minimum_required(VERSION 2.8)

set(headers_test ${headers_test} "${PROJECT_SOURCE_DIR}/tests/fake_web_service.h")
set(headers_test ${headers_test} "${PROJECT_SOURCE_DIR}/tests/testing_entry_analyzer.h" PARENT_SCOPE)
set(sources_test ${sources_test} "${PROJECT_SOURCE_DIR}/tests/entry_analyzer_test.cpp" PARENT_SCOPE)

set(directories_test ${directories_test} "${PROJECT_SOURCE_DIR}/tests" PARENT_SCOPE)
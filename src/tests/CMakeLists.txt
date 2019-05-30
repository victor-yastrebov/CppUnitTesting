cmake_minimum_required(VERSION 2.8)

set(headers_test ${headers_test} "${PROJECT_SOURCE_DIR}/tests/stub_db_mng_negative.h" PARENT_SCOPE)
set(sources_test ${sources_test} "${PROJECT_SOURCE_DIR}/tests/web_service_test.cpp" PARENT_SCOPE)

set(directories_test ${directories_test} "${PROJECT_SOURCE_DIR}/tests" PARENT_SCOPE)
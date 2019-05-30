cmake_minimum_required(VERSION 2.8)

set(headers_test ${headers_test} "${PROJECT_SOURCE_DIR}/libs/web_service.h")
set(headers_test ${headers_test} "${PROJECT_SOURCE_DIR}/libs/entry_analyzer.h" PARENT_SCOPE)
set(directories_test ${directories_test} "${PROJECT_SOURCE_DIR}/libs" PARENT_SCOPE)
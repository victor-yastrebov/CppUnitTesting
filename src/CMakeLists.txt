cmake_minimum_required(VERSION 2.8)

set(PROJECT CppUnitTesting)

project(${PROJECT})
set(PRODUCTION 0)

message("Production mode is: " ${PRODUCTION})

# variables are modified inside child
# CMakeLists.txt using PARENT_SCOPE qualifier
set(headers_test "")
set(sources_test "")
set(directories_test "")

set(sources_test ${sources_test} "${PROJECT_SOURCE_DIR}/run_all_tests.cpp")
set(directories_test ${directories_test} "${PROJECT_SOURCE_DIR}/libs")
if(PRODUCTION)
   message("Current mode: using production libs")
   add_subdirectory(${PROJECT_SOURCE_DIR}/prod_libs)
else()
   message("Current mode: using fake libs")
   add_subdirectory(${PROJECT_SOURCE_DIR}/test_libs)
endif()

# add CMakeList.txt files from inner folders
add_subdirectory(${PROJECT_SOURCE_DIR}/libs)
add_subdirectory(${PROJECT_SOURCE_DIR}/tests)

include_directories(
   ${directories_test}
)

# If DO_TEST compile flag is ON than we produce EntryAnalyzer class that is adapted for unit-testing
# If DO_TEST compile flag is OFF than we produce EntryAnalyzer production class
if(NOT PRODUCTION)
   add_definitions(
       -DDO_TEST
   )
endif()

# set up GTest project
set(gtest_disable_pthreads on)
add_subdirectory(${PROJECT_SOURCE_DIR}/3dparty/google_test/)
config_compiler_and_linker()

# final executable specification
add_executable(${PROJECT}
   ${headers_test}
   ${sources_test}
)

# link all the necessary libraries
target_link_libraries (${PROJECT} gtest gtest_main)
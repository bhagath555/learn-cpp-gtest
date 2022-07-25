# Mininum cmake requierment -> I am using CMAKE verison 3.23.
cmake_minimum_required(VERSION 3.23)
# Project name. Below command stores this information in ${PROJECT_NAME} variable.
project(test_mingw_test)
# Enabling testing. This initializes the testing environment.
enable_testing()
# Adding files with tests. It will create executable named "unittest".
add_executable(unittest test_trial.cpp)
# Linking gtest_main for unittesting of our unittest executable.
target_link_libraries(unittest gtest gtest_main)
# Runnig the test "unittest.exe" generated in build directory. If this command not included, Cmake could't find the test executable.
add_test(AllFactTest unittest)
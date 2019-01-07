#add_subdirectory(lib/gtest)

#include_directories(lib/gtest-1.7.0/include)

#file(GLOB_RECURSE sources_cpp lib/gtest/*.cpp)
#file(GLOB_RECURSE sources_cc lib/gtest/*.cc)
#file(GLOB_RECURSE sources_h lib/gtest/*.h)
#
##add_executable(unotest main.cpp test.cpp)
#add_executable(unotest main.cpp test.cpp ${sources_cpp} ${sources_cc} ${sources_h})


#link_directories(unotest gtest)

set(UNO_TEST_SOURCES
        lib/gtest/src/gtest-all.cc
        main.cpp
        test.cpp
        )

include_directories(
        "${PROJECT_SOURCE_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
        "${PROJECT_SOURCE_DIR}/test"
        "${PROJECT_SOURCE_DIR}/test/lib/gtest"
        "${PROJECT_SOURCE_DIR}/test/lib/gtest/include"
        "${PROJECT_SOURCE_DIR}/test/lib/gtest/src"
)

add_executable(unotest ${UNO_TEST_SOURCES})
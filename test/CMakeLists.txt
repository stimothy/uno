set(UNO_TEST_SOURCES
        lib/gtest/src/gtest-all.cc
        main.cpp functiontest.cpp src/schema/CardTest.cpp)

include_directories(
        "${PROJECT_SOURCE_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
        "${PROJECT_SOURCE_DIR}/test"
        "${PROJECT_SOURCE_DIR}/test/lib/gtest"
        "${PROJECT_SOURCE_DIR}/test/lib/gtest/include"
        "${PROJECT_SOURCE_DIR}/test/lib/gtest/src"
)

add_executable(unotest ${UNO_TEST_SOURCES})

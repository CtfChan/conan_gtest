ADD_EXECUTABLE(bar_tests bar_tests.cpp)
TARGET_LINK_LIBRARIES(bar_tests
    libbar
    ${CONAN_LIBS}
)
TARGET_INCLUDE_DIRECTORIES(bar_tests PRIVATE ${CMAKE_SOURCE_DIR}/libbar/include)

ENABLE_TESTING()
ADD_TEST(NAME bar_tests
         COMMAND bar_tests)
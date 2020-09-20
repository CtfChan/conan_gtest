add_library(libbar STATIC
    src/bar.cpp
)

target_include_directories(libbar PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

INSTALL(TARGETS libbar
        DESTINATION lib)
######################
# add test_candy_135 #
######################
set(BINARY test_candy_135)
add_executable(${BINARY} ${BINARY}.cpp)
target_compile_features(${BINARY} PRIVATE cxx_std_17)
target_include_directories(${BINARY}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(${BINARY} 
    PRIVATE 
      gtest 
      gtest_main
)

gtest_discover_tests(${BINARY}
    WORKING_DIRECTORY ${PROJECT_DIR}
    PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${PROJECT_DIR}"
)
set_target_properties(${BINARY} PROPERTIES FOLDER tests)

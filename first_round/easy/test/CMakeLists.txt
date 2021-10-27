#####################
# add test_two_sum #
#####################
set(BINARY test_two_sum_1)
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

#########################
# add test_add_two_nums #
#########################
set(BINARY test_add_two_nums)
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

##################################
# add test_add_two_nums_smartptr #
##################################
set(BINARY test_add_two_nums_smartptr)
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

##################################
# add test_palindrome_number_9   #
##################################
set(BINARY test_palindrome_number_9)
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

##################################
# add test_roman_to_integer_13   #
##################################
set(BINARY test_roman_to_integer_13)
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

#####################################
# add test_longest_common_prefix_14 #
#####################################
set(BINARY test_longest_common_prefix_14)
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

#####################################
#       valid_parentheses_20        #
#####################################
set(BINARY test_valid_parentheses_20)
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

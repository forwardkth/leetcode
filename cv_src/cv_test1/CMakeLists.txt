##########################################
# add cv_test1 #
##########################################
set(BINARY cv_test1)
find_package(OpenCV REQUIRED) 
add_executable(${BINARY} ${BINARY}.cpp)
target_compile_features(${BINARY} PRIVATE cxx_std_17)
target_include_directories(${BINARY}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(${BINARY} 
    PRIVATE
    ${OpenCV_LIBS}
      # gtest 
      # gtest_main
)

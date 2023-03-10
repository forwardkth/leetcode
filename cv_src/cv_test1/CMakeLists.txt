##########################################
# add cv_test1 #
##########################################
set(BINARY cv_test1)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
find_package(OpenCV REQUIRED)
find_package(Eigen3 3.4 REQUIRED NO_MODULE)

if (TARGET Eigen3::Eigen)
  # Use the imported target
endif (TARGET Eigen3::Eigen)

add_executable(${BINARY} ${BINARY}.cpp)

target_include_directories(${BINARY}
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_features(${BINARY} PRIVATE cxx_std_17)

target_link_libraries(${BINARY} 
    PRIVATE
    ${OpenCV_LIBS}
    Eigen3::Eigen
      # gtest 
      # gtest_main
)

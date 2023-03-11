##########################################
# add cv_test1 #
##########################################
project(cv_test1 VERSION 0.0.0 LANGUAGES CXX)

set(BINARY cv_test1)
set(Qt5_DIR /opt/homebrew/Cellar/qt@5/5.15.8_2/lib/cmake/Qt5)
# set(JSONCPP_DIR /opt/homebrew/Cellar/jsoncpp/1.9.5/lib/pkgconfig)

find_package(Eigen3 3.4 REQUIRED NO_MODULE)
find_package(PCL 1.13 REQUIRED)
find_package(OpenCV 4.7.0 REQUIRED)
# find_package(JSONCPP REQUIRED)

include_directories(${PCL_INCLUDE_DIRS} Qt5_DIR)
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

if (TARGET Eigen3::Eigen)
  # Use the imported target
endif (TARGET Eigen3::Eigen)

add_executable(${BINARY} ${BINARY}.cpp)

target_include_directories(${BINARY}
    PRIVATE
    Qt5_DIR
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_features(${BINARY} PRIVATE cxx_std_17)

target_link_libraries(${BINARY} 
    PRIVATE
    ${OpenCV_LIBS}
    ${PCL_LIBRARIES}
    Eigen3::Eigen
      # gtest 
      # gtest_main
)

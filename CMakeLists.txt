cmake_minimum_required(VERSION 3.0.0)
project(level1 VERSION 0.1.0)

include(CTest)
enable_testing()

find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

#add_executable(level1 cudaDeviceInfo.cpp)
#add_executable(level1 display_image.cpp)
add_executable(level1 video_capture.cpp)

target_link_libraries( level1 ${OpenCV_LIBS} )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
cmake_minimum_required(VERSION 3.5)
project(webrtc-starter-kit)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}
    ${CMAKE_SOURCE_DIR}/CMakeModules)

find_package(WebRTC REQUIRED)

include_directories(${WEBRTC_INCLUDE_DIR}
    ${WEBRTC_INCLUDE_DIR}/webrtc
    ${WEBRTC_INCLUDE_DIR}/webrtc/third_party/abseil-cpp
)
add_subdirectory(src)

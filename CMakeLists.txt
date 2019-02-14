cmake_minimum_required(VERSION 3.5)
project(webrtc-starter-kit)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}
    ${CMAKE_SOURCE_DIR}/CMakeModules)

find_package(WebRTC REQUIRED)

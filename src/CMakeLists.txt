message(STATUS ${WEBRTC_LIBRARIES})
add_executable(sample main.cpp)
target_link_libraries(sample ${WEBRTC_LIBRARIES} pthread)

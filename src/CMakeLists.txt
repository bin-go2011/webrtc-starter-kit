message(STATUS ${WEBRTC_LIBRARIES})
add_executable(start_rtc main.cpp)
target_link_libraries(start_rtc ${WEBRTC_LIBRARIES} pthread)

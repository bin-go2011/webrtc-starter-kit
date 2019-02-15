#include "rtc_base/logging.h"
#include <iostream>

using namespace rtc;
int main()
{
    LogMessage::LogToDebug(LS_VERBOSE);
    RTC_LOG(LS_VERBOSE) << "Hello WebRTC";
    return 0;
}

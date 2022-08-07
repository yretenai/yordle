#include "common_win.hpp"

void vex::win_post_message(HRESULT result) {
    LPSTR messageBuffer = nullptr;
    auto size           = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
                               nullptr, result, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR) &messageBuffer, 0, nullptr);
    auto message        = std::string(messageBuffer, size);
    LocalFree(messageBuffer);
    vex::post_message(message);
}

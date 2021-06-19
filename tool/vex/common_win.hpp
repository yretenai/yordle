//
// Created by Lilith on 2021-05-11.
//

#pragma once

#define WIN32_LEAN_AND_MEAN
#include <exception>
#include <windows.h>

namespace vex::windows {
    std::exception get_win_exception(HRESULT result) {
        LPSTR messageBuffer = nullptr;
        auto size           = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
                                   nullptr, result, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR) &messageBuffer, 0, nullptr);
        auto message        = std::string(messageBuffer, size);
        LocalFree(messageBuffer);
        return std::exception(message.c_str());
    }
} // namespace vex::windows

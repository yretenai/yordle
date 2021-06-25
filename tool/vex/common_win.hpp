//
// Created by Lilith on 2021-05-11.
//

#pragma once

#include <exception>
#include <string>

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "vex.hpp"

namespace vex {
    void win_post_message(HRESULT result);
} // namespace vex

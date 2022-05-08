//
// Created by Naomi on 2020-09-10.
//

#pragma once

#define YORDLE_VERSION 22
#define YORDLE_VERSION_M 0
#define YORDLE_VERSION_m 5
#define YORDLE_VERSION_i 5
#define YORDLE_VERSION_S "0.5.5"

#include <yordle/yordle_export.h>

#include <string>

namespace yordle {
    YORDLE_EXPORT std::string get_version_str();
    YORDLE_EXPORT int get_version();
} // namespace yordle

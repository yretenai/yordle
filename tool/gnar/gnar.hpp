//
// Created by Lilith on 2021-06-12.
//

#pragma once

// Gnar is responsible for unpacking bnk/wpk files into wem files using bin files for naming.

#define GNAR_VERSION 1
#define GNAR_VERSION_M 0
#define GNAR_VERSION_m 0
#define GNAR_VERSION_i 1
#define GNAR_VERSION_S "0.0.1"

#include <cstdint>
#include <deque>
#include <filesystem>

#include <yordle/yordle.hpp>

#include "../tool_export.h"

namespace gnar {
    typedef struct GNAR_CONFIGURATION {
        std::deque<std::string> targets;
        yordle::cdtb::fnvhashlist hash_list;
        yordle::cdtb::xxhashlist file_hash_list;
        std::string output;
    } GnarConfiguration;

    bool parse_configuration(int argc, char **argv, GnarConfiguration &gnar, int &code);

    YORDLE_TOOL_EXPORT std::string get_version_str();
    YORDLE_TOOL_EXPORT int get_version();
} // namespace gnar

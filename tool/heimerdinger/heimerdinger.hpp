//
// Created by Lilith on 2021-06-06.
//

#pragma once

// Heimerdinger is responsible for converting ini, inibin, and props

#define HEIMERDINGER_VERSION 2
#define HEIMERDINGER_VERSION_M 1
#define HEIMERDINGER_VERSION_m 0
#define HEIMERDINGER_VERSION_i 0
#define HEIMERDINGER_VERSION_S "1.0.0"

#include <cstdint>
#include <deque>
#include <filesystem>

#include <yordle/yordle.hpp>

#include "../tool_export.h"

namespace heimerdinger {
    typedef struct HEIMERDINGER_CONFIGURATION {
        std::deque<std::string> targets;
        yordle::cdtb::fnvhashlist hash_list;
        yordle::cdtb::xxhashlist file_hash_list;
    } HeimerdingerConfiguration;

    bool parse_configuration(int argc, char **argv, HeimerdingerConfiguration &heimerdinger, int &code);

    YORDLE_TOOL_EXPORT std::string get_version_str();
    YORDLE_TOOL_EXPORT int get_version();
}; // namespace heimerdinger

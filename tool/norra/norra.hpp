//
// Created by Lilith on 2021-06-19.
//

#pragma once

#include <cstdint>
#include <deque>
#include <filesystem>

#include <yordle/yordle.hpp>

#include "../tool_export.h"

#define NORRA_VERSION 1
#define NORRA_VERSION_M 1
#define NORRA_VERSION_m 0
#define NORRA_VERSION_i 0
#define NORRA_VERSION_S "1.0.0"

namespace norra {
    using NorraConfiguration = struct NORRA_CONFIGURATION {
        std::filesystem::path meta_file;
        std::filesystem::path yordle_dir;
        yordle::cdtb::hashlist_collection hashes;
    };

    bool parse_configuration(int argc, char **argv, NorraConfiguration &heimerdinger, int &code);

    YORDLE_TOOL_EXPORT std::string get_version_str();
    YORDLE_TOOL_EXPORT int get_version();
} // namespace norra

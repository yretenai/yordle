#pragma once

// Gnar is responsible for unpacking bnk/wpk files into wem files using bin files for naming.

#define GNAR_VERSION 5
#define GNAR_VERSION_M 1
#define GNAR_VERSION_m 1
#define GNAR_VERSION_i 3
#define GNAR_VERSION_S "1.1.3"

#include <cstdint>
#include <deque>
#include <filesystem>

#include <yordle/cdtb/fnvhashlist.hpp>
#include <yordle/cdtb/xxhashlist.hpp>

#include "../tool_export.h"

namespace gnar {
    using GnarConfiguration = struct GNAR_CONFIGURATION {
        std::deque<std::string> targets;
        std::filesystem::path game_dir;
        std::filesystem::path output_dir;
        std::vector<std::string> locales;
        yordle::cdtb::fnvhashlist hash_list;
        yordle::cdtb::xxhashlist file_hash_list;
        bool process_map   = true;
        bool process_champ = true;
        bool process_sfx   = true;
        bool process_vo    = true;
    };

    bool parse_configuration(int argc, char **argv, GnarConfiguration &gnar, int &code);

    YORDLE_TOOL_EXPORT std::string get_version_str();
    YORDLE_TOOL_EXPORT int get_version();
} // namespace gnar

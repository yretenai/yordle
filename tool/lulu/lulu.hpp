//
// Created by Lilith on 2021-06-05.
//

#pragma once

// Lulu is responsible for downloading/decoding manifests/bundles

#define LULU_VERSION 2
#define LULU_VERSION_M 1
#define LULU_VERSION_m 0
#define LULU_VERSION_i 0
#define LULU_VERSION_S "1.0.0"

#include <cstdint>
#include <deque>
#include <filesystem>

#include <yordle/cdtb/xxhashlist.hpp>

#include "../tool_export.h"

namespace lulu {
    using LuluConfiguration = struct LULU_CONFIGURATION {
        std::deque<std::string> targets;
        std::vector<std::string> tests;
        std::filesystem::path output_dir = ".";
        yordle::cdtb::xxhashlist hash_list;
        bool dry_run = false;
    };

    bool parse_configuration(int argc, char **argv, LuluConfiguration &lulu, int &code);

    YORDLE_TOOL_EXPORT std::string get_version_str();
    YORDLE_TOOL_EXPORT int get_version();
}; // namespace lulu

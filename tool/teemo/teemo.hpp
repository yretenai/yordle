#pragma once

// Teemo is responsible for finding values for hashes

#define TEEMO_VERSION 1
#define TEEMO_VERSION_M 1
#define TEEMO_VERSION_m 0
#define TEEMO_VERSION_i 0
#define TEEMO_VERSION_S "1.0.0"

#include <cstdint>
#include <deque>
#include <filesystem>

#include <yordle/cdtb/hashlist_collection.hpp>

#include "../tool_export.h"

namespace teemo {
    using TeemoConfiguration = struct TEEMO_CONFIGURATION {
        std::deque<std::string> targets;
        yordle::cdtb::hashlist_collection hashes;
        std::filesystem::path output_dir;
    };

    bool parse_configuration(int argc, char **argv, TeemoConfiguration &teemo, int &code);

    YORDLE_TOOL_EXPORT std::string get_version_str();
    YORDLE_TOOL_EXPORT int get_version();
} // namespace teemo

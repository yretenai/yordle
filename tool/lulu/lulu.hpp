//
// Created by Lilith on 2021-06-05.
//

#pragma once

// Lulu is responsible for downloading/decoding manifests/bundles

#define LULU_VERSION 1
#define LULU_VERSION_M 0
#define LULU_VERSION_m 0
#define LULU_VERSION_i 1
#define LULU_VERSION_S "0.0.1"

#include <cstdint>
#include <deque>
#include <filesystem>

#include <yordle/yordle.hpp>

#ifdef LULU_THREADING
#    include <execution>
#    include <thread>
#    ifdef __clang__
#        ifndef _LIBCPP_HAS_PARALLEL_ALGORITHMS
#            undef LULU_THREADING
#        endif
#    else
#        ifdef __GNUC__
#            ifndef _PSTL_EXECUTION_POLICIES_DEFINED
#                undef LULU_THREADING
#            endif
#        endif
#    endif
#endif

#include "../tool_export.h"

namespace lulu {
    typedef struct LULU_CONFIGURATION {
        std::deque<std::string> targets;
        std::filesystem::path output_dir;
        yordle::cdtb::xxhashlist hash_list;
        bool dry_run = false;
    } LuluConfiguration;

    bool parse_configuration(int argc, char **argv, LuluConfiguration &poppy, int &code);

    YORDLE_TOOL_EXPORT std::string get_version_str();
    YORDLE_TOOL_EXPORT int get_version();
}; // namespace lulu

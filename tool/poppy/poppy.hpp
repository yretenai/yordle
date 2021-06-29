//
// Created by Lilith on 2021-03-24.
//

#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma ide diagnostic ignored "OCUnusedMacroInspection"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

// Poppy is responsible for downloading/decoding manifests/bundles

#define POPPY_VERSION 18
#define POPPY_VERSION_M 1
#define POPPY_VERSION_m 4
#define POPPY_VERSION_i 0
#define POPPY_VERSION_S "1.4.0"

#define POPPY_DEFAULT_MANIFEST_URL "https://clientconfig.rpg.riotgames.com/api/v1/config/public?namespace=keystone.products.{0:s}.patchlines"
#define POPPY_DEFAULT_SIEVE_URL "https://sieve.services.riotcdn.net/api/v1/products/lol/version-sets/{0:s}?q%5Bartifact_type_id%5D={1:s}&q%5Bplatform%5D={2:s}&q%5Bpublished%5D=true"
#define POPPY_DEFAULT_BUNDLE_URL "https://lol.secure.dyn.riotcdn.net/channels/public/bundles/{0:016X}.bundle"

#include <cstdint>
#include <deque>
#include <filesystem>
#include <set>
#include <string>

#include <yordle/yordle.hpp>

#ifdef POPPY_THREADING
#    include <execution>
#    include <thread>
#    ifdef __clang__
#        ifndef _LIBCPP_HAS_PARALLEL_ALGORITHMS
#            undef POPPY_THREADING
#        endif
#    else
#        ifdef __GNUC__
#            ifndef __PSTL_USE_PAR_POLICIES
#                undef POPPY_THREADING
#            endif
#        endif
#    endif
#endif

#define POPPY_BUNDLE_FILENAME_FORMAT "{0:016X}.bundle"

#include "../tool_export.h"

namespace poppy {
    using PoppyConfiguration = struct POPPY_CONFIGURATION {
        std::filesystem::path output_dir = "deploy";
        std::filesystem::path cache_dir  = "sieve";
        std::string platform             = "windows";
        std::string manifest_url         = POPPY_DEFAULT_SIEVE_URL;
        std::string bundle_url           = POPPY_DEFAULT_BUNDLE_URL;
        bool is_offline                  = false;
        bool dry_run                     = false;
        bool is_client_config            = false;
        bool no_deploy                   = false;
        bool no_sub_configuration        = false;
        bool fresh_install               = false;
        bool skip_generic                = false;
        bool generic                     = false;
        bool no_suffix                   = false;
        int64_t max_speed                = 0;

        std::deque<std::string> targets;
        std::set<std::string> configurations;
        std::set<std::string> language_filters;
        std::set<std::string> filters;
        std::shared_ptr<yordle::manifest::riot_manifest> old_manifest;
    };

    std::shared_ptr<std::vector<uint8_t>> download_curl(const std::string &path, int64_t speed_limit);

    bool parse_configuration(int argc, char **argv, PoppyConfiguration &poppy, int &code);

    YORDLE_TOOL_EXPORT std::string get_version_str();
    YORDLE_TOOL_EXPORT int get_version();
} // namespace poppy
#pragma clang diagnostic pop

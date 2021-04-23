//
// Created by Lilith on 2021-03-24.
//

#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma ide diagnostic ignored "OCUnusedMacroInspection"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

// Poppy is responsible for downloading/decoding manifests/bundles

#define POPPY_VERSION 9
#define POPPY_VERSION_M 1
#define POPPY_VERSION_m 2
#define POPPY_VERSION_i 1
#define POPPY_VERSION_S "Poppy version 1.2.1"

#define POPPY_DEFAULT_MANIFEST_URL "https://clientconfig.rpg.riotgames.com/api/v1/config/public?namespace=keystone.products.%s.patchlines"
#define POPPY_DEFAULT_SIEVE_URL "https://sieve.services.riotcdn.net/api/v1/products/lol/version-sets/%s?q[artifact_type_id]=%s&q[platform]=windows&q[published]=true"
#define POPPY_DEFAULT_BUNDLE_URL "https://lol.secure.dyn.riotcdn.net/channels/public/bundles/%016X.bundle"

#define POPPY_SAFE_EXIT_CODE (-418)

#include <cstdint>
#include <deque>
#include <filesystem>
#include <set>
#include <string>

#include <yordle/yordle.hpp>

#ifdef POPPY_THREADING
#include <execution>
#include <thread>
#ifdef __clang__
#ifndef _LIBCPP_HAS_PARALLEL_ALGORITHMS
#undef POPPY_THREADING
#endif
#else
#ifdef __GNUC__
#ifndef _PSTL_EXECUTION_POLICIES_DEFINED
#undef POPPY_THREADING
#endif
#endif
#endif
#endif

#define POPPY_BUNDLE_FILENAME_FORMAT "%016X.bundle"

namespace poppy {
    typedef struct POPPY_CONFIGURATION {
        std::filesystem::path output_dir = "deploy";
        std::filesystem::path cache_dir = "sieve";
        std::string manifest_url = POPPY_DEFAULT_SIEVE_URL;
        std::string bundle_url = POPPY_DEFAULT_BUNDLE_URL;
        std::deque<std::string> targets;
        std::set<std::string> configurations;
        bool is_offline = false;
        bool is_client_config = false;
        bool no_deploy = false;
    } PoppyConfiguration;

    std::shared_ptr<std::vector<uint8_t>> download_curl(const std::string &path);

    PoppyConfiguration parse_configuration(int argc, char **argv, int &exit_code);
} // namespace poppy
#pragma clang diagnostic pop

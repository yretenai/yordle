//
// Created by Lilith on 2021-03-24.
//

#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma ide diagnostic ignored "OCUnusedMacroInspection"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

// Poppy is responsible for downloading/decoding manifests/bundles

#define POPPY_VERSION 2
#define POPPY_VERSION_M 0
#define POPPY_VERSION_m 0
#define POPPY_VERSION_i 2
#define POPPY_VERSION_S "Poppy version 0.0.2"

#define POPPY_DEFAULT_MANIFEST_URL "https://clientconfig.rpg.riotgames.com/api/v1/config/public?namespace=keystone.products.%s.patchlines"
#define POPPY_DEFAULT_BUNDLE_URL "https://lol.secure.dyn.riotcdn.net/channels/public/bundles/%016X.bundle"

#define POPPY_SAFE_EXIT_CODE -418

#include <cstdint>
#include <deque>
#include <filesystem>
#include <set>
#include <string>

#include <yordle/yordle.hpp>

namespace poppy {
    typedef struct POPPY_CONFIGURATION {
        std::filesystem::path output_dir = "GAME";
        std::filesystem::path cache_dir = "Cache";
        std::string manifest_url = POPPY_DEFAULT_MANIFEST_URL;
        std::string bundle_url = POPPY_DEFAULT_BUNDLE_URL;
        std::deque<std::string> targets;
        std::set<std::string> configurations;
        bool offline_config;
    } PoppyConfiguration;

    std::unique_ptr<std::vector<uint8_t>> download(const std::string &path);

    PoppyConfiguration parse_configuration(int argc, char **argv, int &exit_code);
} // namespace poppy
#pragma clang diagnostic pop

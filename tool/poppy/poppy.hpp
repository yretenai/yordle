//
// Created by Lilith on 2021-03-24.
//

#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma ide diagnostic ignored "OCUnusedMacroInspection"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

// Poppy is responsible for downloading/decoding manifests/bundles

#define POPPY_VERSION 0
#define POPPY_VERSION_M 0
#define POPPY_VERSION_m 0
#define POPPY_VERSION_i 0
#define POPPY_VERSION_S "Poppy version 0.0.0"

#define POPPY_DEFAULT_CLIENT_CONFIG_FORMAT "https://clientconfig.rpg.riotgames.com/api/v1/config/public?namespace={}"
#define POPPY_DEFAULT_RELEASE_CHANNEL_FORMAT "https://lol.secure.dyn.riotcdn.net/channels/public/{}.json"
#define POPPY_DEFAULT_VERSION_SET_FORMAT "https://sieve.services.riotcdn.net/api/v1/products/lol/version-sets/{}?q[artifact_type_id]=lol-game-client&q[platform]=windows&q[published]=true"
#define POPPY_DEFAULT_BUNDLE_FORMAT "http://lol.secure.dyn.riotcdn.net/channels/public/bundles/{:16X}.bundle"

#include <cstdint>
#include <deque>
#include <filesystem>
#include <string>

#include <yordle/yordle.hpp>

namespace poppy {
    typedef enum class POPPY_SOURCE : int32_t {
        ClientConfig = 0,
        ReleaseChannel = 1,
        VersionSet = 2
    } PoppySource;

    typedef struct POPPY_CONFIGURATION {
        bool fetch;
        bool download;
        bool decode;
        PoppySource source;
        std::filesystem::path output_dir = "Cache";
        std::filesystem::path cache_dir = "GAME";
        std::string manifest_format;
        std::string bundle_format = POPPY_DEFAULT_BUNDLE_FORMAT;
        std::deque<std::string> targets;
        int32_t concurrency;
    } PoppyConfiguration;

    PoppyConfiguration parse_configuration(int argc, char **argv, int &exit_code);
} // namespace poppy
#pragma clang diagnostic pop

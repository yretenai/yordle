//
// Created by Lilith on 3/23/2021.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>
#include <stdexcept>
#include <utility>
#include <yordle/sieve/models/sieve.hpp>

namespace yordle::sieve::models {
    using nlohmann::json;

    struct release_channel {
        std::shared_ptr<int64_t> version;
        std::shared_ptr<std::string> timestamp;
        std::shared_ptr<std::string> client_patch_url;
        std::shared_ptr<std::string> game_patch_url;
        std::shared_ptr<std::map<std::string, int64_t>> toggles;
    };

    [[maybe_unused]] void from_json(const json &j, release_channel &x);
    [[maybe_unused]] void to_json(json &j, const release_channel &x);

    inline void from_json(const json &j, release_channel &x) {
        x.version = get_optional<int64_t>(j, "version");
        x.timestamp = get_optional<std::string>(j, "timestamp");
        x.client_patch_url = get_optional<std::string>(j, "client_patch_url");
        x.game_patch_url = get_optional<std::string>(j, "game_patch_url");
        x.toggles = get_optional<std::map<std::string, int64_t>>(j, "toggles");
    }

    inline void to_json(json &j, const release_channel &x) {
        j = json::object();
        if (x.version) {
            j["version"] = x.version;
        }
        if (x.timestamp) {
            j["timestamp"] = x.timestamp;
        }
        if (x.client_patch_url) {
            j["client_patch_url"] = x.client_patch_url;
        }
        if (x.game_patch_url) {
            j["game_patch_url"] = x.game_patch_url;
        }
        if (x.toggles) {
            j["toggles"] = x.toggles;
        }
    }
} // namespace yordle::sieve::models

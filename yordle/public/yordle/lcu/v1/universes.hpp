//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct universe {
        int64_t id;
        std::string name;
        std::string description;
        std::string image_path;
        std::vector<int64_t> skin_sets;
    };

    using universes [[maybe_unused]] = std::vector<universe>;

    inline void from_json(const json &j, yordle::lcu::v1::universe &x) {
        x.id          = j.at("id").get<int64_t>();
        x.name        = j.at("name").get<std::string>();
        x.description = j.at("description").get<std::string>();
        x.image_path  = j.at("imagePath").get<std::string>();
        x.skin_sets   = j.at("skinSets").get<std::vector<int64_t>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::universe &x) {
        j                = json::object();
        j["id"]          = x.id;
        j["name"]        = x.name;
        j["description"] = x.description;
        j["imagePath"]   = x.image_path;
        j["skinSets"]    = x.skin_sets;
    }
} // namespace yordle::lcu::v1

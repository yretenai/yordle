//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct map_element {
        int64_t id;
        std::string name;
        std::string description;
        std::string map_string_id;
    };

    using maps [[maybe_unused]] = std::vector<map_element>;

    inline void from_json(const json &j, yordle::lcu::v1::map_element &x) {
        x.id            = j.at("id").get<int64_t>();
        x.name          = j.at("name").get<std::string>();
        x.description   = j.at("description").get<std::string>();
        x.map_string_id = j.at("mapStringId").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::map_element &x) {
        j                = json::object();
        j["id"]          = x.id;
        j["name"]        = x.name;
        j["description"] = x.description;
        j["mapStringId"] = x.map_string_id;
    }
} // namespace yordle::lcu::v1

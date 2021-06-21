//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct queues_value {
        std::string name;
        std::string short_name;
        std::string description;
        std::string detailed_description;
    };

    using queues [[maybe_unused]] = std::map<std::string, queues_value>;

    inline void from_json(const json &j, yordle::lcu::v1::queues_value &x) {
        x.name                 = j.at("name").get<std::string>();
        x.short_name           = j.at("shortName").get<std::string>();
        x.description          = j.at("description").get<std::string>();
        x.detailed_description = j.at("detailedDescription").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::queues_value &x) {
        j                        = json::object();
        j["name"]                = x.name;
        j["shortName"]           = x.short_name;
        j["description"]         = x.description;
        j["detailedDescription"] = x.detailed_description;
    }
} // namespace yordle::lcu::v1

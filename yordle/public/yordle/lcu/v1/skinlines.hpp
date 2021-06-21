//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct skinline {
        int64_t id;
        std::string name;
    };

    using skinlines [[maybe_unused]] = std::vector<skinline>;

    inline void from_json(const json &j, yordle::lcu::v1::skinline &x) {
        x.id   = j.at("id").get<int64_t>();
        x.name = j.at("name").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::skinline &x) {
        j         = json::object();
        j["id"]   = x.id;
        j["name"] = x.name;
    }
} // namespace yordle::lcu::v1

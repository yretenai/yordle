//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

#include <yordle/lcu/v1/_common.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;


    struct profile_icon {
        int64_t id;
        std::shared_ptr<std::string> icon_path;
    };

    using profile_icons [[maybe_unused]] = std::vector<profile_icon>;

    inline void from_json(const json &j, yordle::lcu::v1::profile_icon &x) {
        x.id        = j.at("id").get<int64_t>();
        x.icon_path = yordle::lcu::v1::get_optional<std::string>(j, "iconPath");
    }

    inline void to_json(json &j, const yordle::lcu::v1::profile_icon &x) {
        j             = json::object();
        j["id"]       = x.id;
        j["iconPath"] = x.icon_path;
    }
} // namespace yordle::lcu::v1

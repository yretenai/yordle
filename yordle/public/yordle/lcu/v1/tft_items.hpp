// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

#include <yordle/lcu/v1/_common.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct tft_item {
        std::string guid;
        std::string name;
        int64_t id;
        color color;
        std::string loadouts_icon;
    };

    using tft_items [[maybe_unused]] = std::vector<tft_item>;

    inline void from_json(const json &j, yordle::lcu::v1::tft_item &x) {
        x.guid          = j.at("guid").get<std::string>();
        x.name          = j.at("name").get<std::string>();
        x.id            = j.at("id").get<int64_t>();
        x.color         = j.at("color").get<yordle::lcu::v1::color>();
        x.loadouts_icon = j.at("loadoutsIcon").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::tft_item &x) {
        j                 = json::object();
        j["guid"]         = x.guid;
        j["name"]         = x.name;
        j["id"]           = x.id;
        j["color"]        = x.color;
        j["loadoutsIcon"] = x.loadouts_icon;
    }
} // namespace yordle::lcu::v1

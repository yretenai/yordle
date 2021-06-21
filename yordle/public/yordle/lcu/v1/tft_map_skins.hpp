//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

#include <yordle/lcu/v1/_common.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct tft_map_skin {
        std::string content_id;
        int64_t item_id;
        std::string name;
        std::string description;
        std::string loadouts_icon;
        int64_t group_id;
        std::string group_name;
        rarity rarity;
        int64_t rarity_value;
    };

    using tft_map_skins [[maybe_unused]] = std::vector<tft_map_skin>;

    inline void from_json(const json &j, yordle::lcu::v1::tft_map_skin &x) {
        x.content_id    = j.at("contentId").get<std::string>();
        x.item_id       = j.at("itemId").get<int64_t>();
        x.name          = j.at("name").get<std::string>();
        x.description   = j.at("description").get<std::string>();
        x.loadouts_icon = j.at("loadoutsIcon").get<std::string>();
        x.group_id      = j.at("groupId").get<int64_t>();
        x.group_name    = j.at("groupName").get<std::string>();
        x.rarity        = j.at("rarity").get<yordle::lcu::v1::rarity>();
        x.rarity_value  = j.at("rarityValue").get<int64_t>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::tft_map_skin &x) {
        j                 = json::object();
        j["contentId"]    = x.content_id;
        j["itemId"]       = x.item_id;
        j["name"]         = x.name;
        j["description"]  = x.description;
        j["loadoutsIcon"] = x.loadouts_icon;
        j["groupId"]      = x.group_id;
        j["groupName"]    = x.group_name;
        j["rarity"]       = x.rarity;
        j["rarityValue"]  = x.rarity_value;
    }
} // namespace yordle::lcu::v1

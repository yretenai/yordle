//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>
#include <yordle/lcu/v1/_common.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct companion {
        std::string content_id;
        int64_t item_id;
        std::string name;
        std::string loadouts_icon;
        std::string description;
        int64_t level;
        std::string species_name;
        int64_t species_id;
        rarity_t rarity;
        int64_t rarity_value;
        bool is_default;
        std::vector<std::string> upgrades;
    };

    using companions [[maybe_unused]] = std::vector<companion>;

    inline void from_json(const json &j, yordle::lcu::v1::companion &x) {
        x.content_id    = j.at("contentId").get<std::string>();
        x.item_id       = j.at("itemId").get<int64_t>();
        x.name          = j.at("name").get<std::string>();
        x.loadouts_icon = j.at("loadoutsIcon").get<std::string>();
        x.description   = j.at("description").get<std::string>();
        x.level         = j.at("level").get<int64_t>();
        x.species_name  = j.at("speciesName").get<std::string>();
        x.species_id    = j.at("speciesId").get<int64_t>();
        x.rarity        = j.at("rarity").get<yordle::lcu::v1::rarity_t>();
        x.rarity_value  = j.at("rarityValue").get<int64_t>();
        x.is_default    = j.at("isDefault").get<bool>();
        x.upgrades      = j.at("upgrades").get<std::vector<std::string>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::companion &x) {
        j                 = json::object();
        j["contentId"]    = x.content_id;
        j["itemId"]       = x.item_id;
        j["name"]         = x.name;
        j["loadoutsIcon"] = x.loadouts_icon;
        j["description"]  = x.description;
        j["level"]        = x.level;
        j["speciesName"]  = x.species_name;
        j["speciesId"]    = x.species_id;
        j["rarity"]       = x.rarity;
        j["rarityValue"]  = x.rarity_value;
        j["isDefault"]    = x.is_default;
        j["upgrades"]     = x.upgrades;
    }
} // namespace yordle::lcu::v1

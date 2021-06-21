//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

#include <yordle/lcu/v1/_common.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct ward_skin {
        int64_t id;
        std::string name;
        std::string description;
        std::string ward_image_path;
        std::string ward_shadow_image_path;
        bool is_legacy;
        std::vector<regional_description> regional_descriptions;
        std::vector<regional_rarity> rarities;
    };

    using ward_skins [[maybe_unused]] = std::vector<ward_skin>;

    inline void from_json(const json &j, yordle::lcu::v1::ward_skin &x) {
        x.id                     = j.at("id").get<int64_t>();
        x.name                   = j.at("name").get<std::string>();
        x.description            = j.at("description").get<std::string>();
        x.ward_image_path        = j.at("wardImagePath").get<std::string>();
        x.ward_shadow_image_path = j.at("wardShadowImagePath").get<std::string>();
        x.is_legacy              = j.at("isLegacy").get<bool>();
        x.regional_descriptions  = j.at("regionalDescriptions").get<std::vector<yordle::lcu::v1::regional_description>>();
        x.rarities               = j.at("rarities").get<std::vector<yordle::lcu::v1::regional_rarity>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::ward_skin &x) {
        j                         = json::object();
        j["id"]                   = x.id;
        j["name"]                 = x.name;
        j["description"]          = x.description;
        j["wardImagePath"]        = x.ward_image_path;
        j["wardShadowImagePath"]  = x.ward_shadow_image_path;
        j["isLegacy"]             = x.is_legacy;
        j["regionalDescriptions"] = x.regional_descriptions;
        j["rarities"]             = x.rarities;
    }
} // namespace yordle::lcu::v1

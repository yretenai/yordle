//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct perk {
        int64_t id;
        std::string name;
        std::string major_change_patch_version;
        std::string tooltip;
        std::string short_desc;
        std::string long_desc;
        std::string icon_path;
        std::vector<std::string> end_of_game_stat_descs;
    };

    using perks [[maybe_unused]] = std::vector<perk>;

    inline void from_json(const json &j, yordle::lcu::v1::perk &x) {
        x.id                         = j.at("id").get<int64_t>();
        x.name                       = j.at("name").get<std::string>();
        x.major_change_patch_version = j.at("majorChangePatchVersion").get<std::string>();
        x.tooltip                    = j.at("tooltip").get<std::string>();
        x.short_desc                 = j.at("shortDesc").get<std::string>();
        x.long_desc                  = j.at("longDesc").get<std::string>();
        x.icon_path                  = j.at("iconPath").get<std::string>();
        x.end_of_game_stat_descs     = j.at("endOfGameStatDescs").get<std::vector<std::string>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::perk &x) {
        j                            = json::object();
        j["id"]                      = x.id;
        j["name"]                    = x.name;
        j["majorChangePatchVersion"] = x.major_change_patch_version;
        j["tooltip"]                 = x.tooltip;
        j["shortDesc"]               = x.short_desc;
        j["longDesc"]                = x.long_desc;
        j["iconPath"]                = x.icon_path;
        j["endOfGameStatDescs"]      = x.end_of_game_stat_descs;
    }
} // namespace yordle::lcu::v1

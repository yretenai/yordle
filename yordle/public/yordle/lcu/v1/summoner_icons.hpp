// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

#include <unordered_map>

#include <yordle/lcu/v1/_common.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct summoner_icon {
        int64_t id;
        std::string title;
        int64_t year_released;
        bool is_legacy;
        std::shared_ptr<std::string> image_path;
        std::vector<regional_description> descriptions;
        std::vector<regional_rarity> rarities;
        std::vector<std::string> disabled_regions;
        std::shared_ptr<std::string> esports_team;
        std::shared_ptr<std::string> esports_region;
        std::shared_ptr<std::string> esports_event;
    };

    using summoner_icons [[maybe_unused]] = std::vector<summoner_icon>;

    inline void from_json(const json &j, yordle::lcu::v1::summoner_icon &x) {
        x.id               = j.at("id").get<int64_t>();
        x.title            = j.at("title").get<std::string>();
        x.year_released    = j.at("yearReleased").get<int64_t>();
        x.is_legacy        = j.at("isLegacy").get<bool>();
        x.image_path       = yordle::lcu::v1::get_optional<std::string>(j, "imagePath");
        x.descriptions     = j.at("descriptions").get<std::vector<regional_description>>();
        x.rarities         = j.at("rarities").get<std::vector<regional_rarity>>();
        x.disabled_regions = j.at("disabledRegions").get<std::vector<std::string>>();
        x.esports_team     = yordle::lcu::v1::get_optional<std::string>(j, "esportsTeam");
        x.esports_region   = yordle::lcu::v1::get_optional<std::string>(j, "esportsRegion");
        x.esports_event    = yordle::lcu::v1::get_optional<std::string>(j, "esportsEvent");
    }

    inline void to_json(json &j, const yordle::lcu::v1::summoner_icon &x) {
        j                    = json::object();
        j["id"]              = x.id;
        j["title"]           = x.title;
        j["yearReleased"]    = x.year_released;
        j["isLegacy"]        = x.is_legacy;
        j["imagePath"]       = x.image_path;
        j["descriptions"]    = x.descriptions;
        j["rarities"]        = x.rarities;
        j["disabledRegions"] = x.disabled_regions;
        j["esportsTeam"]     = x.esports_team;
        j["esportsRegion"]   = x.esports_region;
        j["esportsEvent"]    = x.esports_event;
    }
} // namespace yordle::lcu::v1

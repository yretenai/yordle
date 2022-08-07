// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct summoner_spell {
        int64_t id;
        std::string name;
        std::string description;
        int64_t summoner_level;
        int64_t cooldown;
        std::vector<std::string> game_modes;
        std::string icon_path;
    };

    inline void from_json(const json &j, yordle::lcu::v1::summoner_spell &x) {
        x.id             = j.at("id").get<int64_t>();
        x.name           = j.at("name").get<std::string>();
        x.description    = j.at("description").get<std::string>();
        x.summoner_level = j.at("summonerLevel").get<int64_t>();
        x.cooldown       = j.at("cooldown").get<int64_t>();
        x.game_modes     = j.at("gameModes").get<std::vector<std::string>>();
        x.icon_path      = j.at("iconPath").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::summoner_spell &x) {
        j                  = json::object();
        j["id"]            = x.id;
        j["name"]          = x.name;
        j["description"]   = x.description;
        j["summonerLevel"] = x.summoner_level;
        j["cooldown"]      = x.cooldown;
        j["gameModes"]     = x.game_modes;
        j["iconPath"]      = x.icon_path;
    }
} // namespace yordle::lcu::v1

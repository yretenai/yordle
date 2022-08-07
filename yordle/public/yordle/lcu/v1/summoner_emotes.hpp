// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct summoner_emote {
        int64_t id;
        std::string name;
        std::string inventory_icon;
        std::string description;
    };

    using summoner_emotes [[maybe_unused]] = std::vector<summoner_emote>;

    inline void from_json(const json &j, yordle::lcu::v1::summoner_emote &x) {
        x.id             = j.at("id").get<int64_t>();
        x.name           = j.at("name").get<std::string>();
        x.inventory_icon = j.at("inventoryIcon").get<std::string>();
        x.description    = j.at("description").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::summoner_emote &x) {
        j                  = json::object();
        j["id"]            = x.id;
        j["name"]          = x.name;
        j["inventoryIcon"] = x.inventory_icon;
        j["description"]   = x.description;
    }
} // namespace yordle::lcu::v1

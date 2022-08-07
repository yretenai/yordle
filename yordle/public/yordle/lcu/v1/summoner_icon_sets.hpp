// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct summoner_icon_set {
        int64_t id;
        bool hidden;
        std::string display_name;
        std::string description;
        std::vector<int64_t> icons;
    };

    using summoner_icon_sets [[maybe_unused]] = std::vector<summoner_icon_set>;

    inline void from_json(const json &j, yordle::lcu::v1::summoner_icon_set &x) {
        x.id           = j.at("id").get<int64_t>();
        x.hidden       = j.at("hidden").get<bool>();
        x.display_name = j.at("displayName").get<std::string>();
        x.description  = j.at("description").get<std::string>();
        x.icons        = j.at("icons").get<std::vector<int64_t>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::summoner_icon_set &x) {
        j                = json::object();
        j["id"]          = x.id;
        j["hidden"]      = x.hidden;
        j["displayName"] = x.display_name;
        j["description"] = x.description;
        j["icons"]       = x.icons;
    }
} // namespace yordle::lcu::v1

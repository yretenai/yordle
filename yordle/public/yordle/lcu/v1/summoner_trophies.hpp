//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct trophy {
        std::string content_id;
        std::string object_name;
        std::string localized_name;
        std::string localized_description;
        std::string theme;
        int64_t bracket;
        std::string profile_icon;
    };

    struct trophy_pedestal {
        std::string content_id;
        std::string object_name;
        std::string localized_name;
        std::string localized_description;
        int64_t tier;
        std::string profile_icon;
    };

    struct summoner_trophies {
        std::vector<trophy> trophies;
        std::vector<trophy_pedestal> trophy_pedestals;
    };

    void from_json(const json &j, yordle::lcu::v1::trophy &x);
    void to_json(json &j, const yordle::lcu::v1::trophy &x);

    void from_json(const json &j, yordle::lcu::v1::trophy_pedestal &x);
    void to_json(json &j, const yordle::lcu::v1::trophy_pedestal &x);

    void from_json(const json &j, yordle::lcu::v1::summoner_trophies &x);
    void to_json(json &j, const yordle::lcu::v1::summoner_trophies &x);

    inline void from_json(const json &j, yordle::lcu::v1::trophy &x) {
        x.content_id            = j.at("contentId").get<std::string>();
        x.object_name           = j.at("objectName").get<std::string>();
        x.localized_name        = j.at("localizedName").get<std::string>();
        x.localized_description = j.at("localizedDescription").get<std::string>();
        x.theme                 = j.at("theme").get<std::string>();
        x.bracket               = j.at("bracket").get<int64_t>();
        x.profile_icon          = j.at("profileIcon").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::trophy &x) {
        j                         = json::object();
        j["contentId"]            = x.content_id;
        j["objectName"]           = x.object_name;
        j["localizedName"]        = x.localized_name;
        j["localizedDescription"] = x.localized_description;
        j["theme"]                = x.theme;
        j["bracket"]              = x.bracket;
        j["profileIcon"]          = x.profile_icon;
    }

    inline void from_json(const json &j, yordle::lcu::v1::trophy_pedestal &x) {
        x.content_id            = j.at("contentId").get<std::string>();
        x.object_name           = j.at("objectName").get<std::string>();
        x.localized_name        = j.at("localizedName").get<std::string>();
        x.localized_description = j.at("localizedDescription").get<std::string>();
        x.tier                  = j.at("tier").get<int64_t>();
        x.profile_icon          = j.at("profileIcon").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::trophy_pedestal &x) {
        j                         = json::object();
        j["contentId"]            = x.content_id;
        j["objectName"]           = x.object_name;
        j["localizedName"]        = x.localized_name;
        j["localizedDescription"] = x.localized_description;
        j["tier"]                 = x.tier;
        j["profileIcon"]          = x.profile_icon;
    }

    inline void from_json(const json &j, yordle::lcu::v1::summoner_trophies &x) {
        x.trophies         = j.at("Trophies").get<std::vector<yordle::lcu::v1::trophy>>();
        x.trophy_pedestals = j.at("TrophyPedestals").get<std::vector<yordle::lcu::v1::trophy_pedestal>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::summoner_trophies &x) {
        j                    = json::object();
        j["Trophies"]        = x.trophies;
        j["TrophyPedestals"] = x.trophy_pedestals;
    }
} // namespace yordle::lcu::v1

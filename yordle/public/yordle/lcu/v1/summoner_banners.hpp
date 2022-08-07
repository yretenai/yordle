// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct banner_flag {
        int64_t level;
        std::string theme;
        std::string name;
        std::string inventory_icon;
        std::string profile_icon;
    };

    struct banner_frame {
        int64_t level;
        std::string name;
        std::string inventory_icon;
    };

    struct summoner_banners {
        std::vector<banner_flag> banner_flags;
        std::vector<banner_frame> banner_frames;
    };

    void from_json(const json &j, yordle::lcu::v1::banner_flag &x);
    void to_json(json &j, const yordle::lcu::v1::banner_flag &x);

    void from_json(const json &j, yordle::lcu::v1::banner_frame &x);
    void to_json(json &j, const yordle::lcu::v1::banner_frame &x);

    void from_json(const json &j, yordle::lcu::v1::summoner_banners &x);
    void to_json(json &j, const yordle::lcu::v1::summoner_banners &x);

    inline void from_json(const json &j, yordle::lcu::v1::banner_flag &x) {
        x.level          = j.at("level").get<int64_t>();
        x.theme          = j.at("theme").get<std::string>();
        x.name           = j.at("name").get<std::string>();
        x.inventory_icon = j.at("inventoryIcon").get<std::string>();
        x.profile_icon   = j.at("profileIcon").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::banner_flag &x) {
        j                  = json::object();
        j["level"]         = x.level;
        j["theme"]         = x.theme;
        j["name"]          = x.name;
        j["inventoryIcon"] = x.inventory_icon;
        j["profileIcon"]   = x.profile_icon;
    }

    inline void from_json(const json &j, yordle::lcu::v1::banner_frame &x) {
        x.level          = j.at("level").get<int64_t>();
        x.name           = j.at("name").get<std::string>();
        x.inventory_icon = j.at("inventoryIcon").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::banner_frame &x) {
        j                  = json::object();
        j["level"]         = x.level;
        j["name"]          = x.name;
        j["inventoryIcon"] = x.inventory_icon;
    }

    inline void from_json(const json &j, yordle::lcu::v1::summoner_banners &x) {
        x.banner_flags  = j.at("BannerFlags").get<std::vector<yordle::lcu::v1::banner_flag>>();
        x.banner_frames = j.at("BannerFrames").get<std::vector<yordle::lcu::v1::banner_frame>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::summoner_banners &x) {
        j                 = json::object();
        j["BannerFlags"]  = x.banner_flags;
        j["BannerFrames"] = x.banner_frames;
    }
} // namespace yordle::lcu::v1

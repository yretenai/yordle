// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct trait {
        std::string display_name;
        std::string id;
    };

    struct tft_champion {
        std::string path;
        std::string character_id;
        int64_t rarity;
        std::string display_name;
        std::vector<trait> traits;
        std::string square_icon_path;
    };

    using tft_champions [[maybe_unused]] = std::vector<tft_champion>;

    void from_json(const json &j, yordle::lcu::v1::trait &x);
    void to_json(json &j, const yordle::lcu::v1::trait &x);

    void from_json(const json &j, yordle::lcu::v1::tft_champion &x);
    void to_json(json &j, const yordle::lcu::v1::tft_champion &x);

    inline void from_json(const json &j, yordle::lcu::v1::trait &x) {
        x.display_name = j.at("display_name").get<std::string>();
        x.id           = j.at("id").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::trait &x) {
        j                 = json::object();
        j["display_name"] = x.display_name;
        j["id"]           = x.id;
    }

    inline void from_json(const json &j, yordle::lcu::v1::tft_champion &x) {
        x.path             = j.at("path").get<std::string>();
        x.character_id     = j.at("character_id").get<std::string>();
        x.rarity           = j.at("rarity").get<int64_t>();
        x.display_name     = j.at("display_name").get<std::string>();
        x.traits           = j.at("traits").get<std::vector<yordle::lcu::v1::trait>>();
        x.square_icon_path = j.at("squareIconPath").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::tft_champion &x) {
        j                   = json::object();
        j["path"]           = x.path;
        j["character_id"]   = x.character_id;
        j["rarity"]         = x.rarity;
        j["display_name"]   = x.display_name;
        j["traits"]         = x.traits;
        j["squareIconPath"] = x.square_icon_path;
    }
} // namespace yordle::lcu::v1

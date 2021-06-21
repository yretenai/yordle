//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct tft_game_variation {
        std::string game_variation_display_name;
        std::string game_variation_decorated_name;
        std::string icon_path;
    };

    using tft_game_variations [[maybe_unused]] = std::vector<tft_game_variation>;

    inline void from_json(const json &j, yordle::lcu::v1::tft_game_variation &x) {
        x.game_variation_display_name   = j.at("game_variation_display_name").get<std::string>();
        x.game_variation_decorated_name = j.at("game_variation_decorated_name").get<std::string>();
        x.icon_path                     = j.at("icon_path").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::tft_game_variation &x) {
        j                                  = json::object();
        j["game_variation_display_name"]   = x.game_variation_display_name;
        j["game_variation_decorated_name"] = x.game_variation_decorated_name;
        j["icon_path"]                     = x.icon_path;
    }
} // namespace yordle::lcu::v1

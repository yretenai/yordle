// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct tft_trait {
        std::string display_name;
        std::string trait_id;
        std::string set;
        std::string icon_path;
    };

    using tft_traits [[maybe_unused]] = std::vector<tft_trait>;

    inline void from_json(const json &j, yordle::lcu::v1::tft_trait &x) {
        x.display_name = j.at("display_name").get<std::string>();
        x.trait_id     = j.at("trait_id").get<std::string>();
        x.set          = j.at("set").get<std::string>();
        x.icon_path    = j.at("icon_path").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::tft_trait &x) {
        j                 = json::object();
        j["display_name"] = x.display_name;
        j["trait_id"]     = x.trait_id;
        j["set"]          = x.set;
        j["icon_path"]    = x.icon_path;
    }
} // namespace yordle::lcu::v1

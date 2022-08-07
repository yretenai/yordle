// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct champion_perk_style_entry {
        std::string champion_name;
        int64_t style;
        int64_t champion_id;
    };

    using champion_perk_style_map [[maybe_unused]] = std::vector<champion_perk_style_entry>;

    inline void from_json(const json &j, yordle::lcu::v1::champion_perk_style_entry &x) {
        x.champion_name = j.at("championName").get<std::string>();
        x.style         = j.at("style").get<int64_t>();
        x.champion_id   = j.at("championId").get<int64_t>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::champion_perk_style_entry &x) {
        j                 = json::object();
        j["championName"] = x.champion_name;
        j["style"]        = x.style;
        j["championId"]   = x.champion_id;
    }
} // namespace yordle::lcu::v1

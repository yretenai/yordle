//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    enum class champion_role {
        assassin,
        fighter,
        mage,
        marksman,
        support,
        tank
    };

    struct champion_summary_element {
        int64_t id;
        std::string name;
        std::string alias;
        std::string square_portrait_path;
        std::vector<champion_role> roles;
    };

    using champion_summary [[maybe_unused]] = std::vector<champion_summary_element>;

    void from_json(const json &j, yordle::lcu::v1::champion_summary_element &x);
    void to_json(json &j, const yordle::lcu::v1::champion_summary_element &x);

    void from_json(const json &j, yordle::lcu::v1::champion_role &x);
    void to_json(json &j, const yordle::lcu::v1::champion_role &x);

    inline void from_json(const json &j, yordle::lcu::v1::champion_summary_element &x) {
        x.id                   = j.at("id").get<int64_t>();
        x.name                 = j.at("name").get<std::string>();
        x.alias                = j.at("alias").get<std::string>();
        x.square_portrait_path = j.at("squarePortraitPath").get<std::string>();
        x.roles                = j.at("roles").get<std::vector<yordle::lcu::v1::champion_role>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::champion_summary_element &x) {
        j                       = json::object();
        j["id"]                 = x.id;
        j["name"]               = x.name;
        j["alias"]              = x.alias;
        j["squarePortraitPath"] = x.square_portrait_path;
        j["roles"]              = x.roles;
    }

    inline void from_json(const json &j, yordle::lcu::v1::champion_role &x) {
        if (j == "assassin") x = yordle::lcu::v1::champion_role::assassin;
        else if (j == "fighter")
            x = yordle::lcu::v1::champion_role::fighter;
        else if (j == "mage")
            x = yordle::lcu::v1::champion_role::mage;
        else if (j == "marksman")
            x = yordle::lcu::v1::champion_role::marksman;
        else if (j == "support")
            x = yordle::lcu::v1::champion_role::support;
        else if (j == "tank")
            x = yordle::lcu::v1::champion_role::tank;
    }

    inline void to_json(json &j, const yordle::lcu::v1::champion_role &x) {
        switch (x) {
            case yordle::lcu::v1::champion_role::assassin:
                j = "assassin";
                break;
            case yordle::lcu::v1::champion_role::fighter:
                j = "fighter";
                break;
            case yordle::lcu::v1::champion_role::mage:
                j = "mage";
                break;
            case yordle::lcu::v1::champion_role::marksman:
                j = "marksman";
                break;
            case yordle::lcu::v1::champion_role::support:
                j = "support";
                break;
            case yordle::lcu::v1::champion_role::tank:
                j = "tank";
                break;
        }
    }
} // namespace yordle::lcu::v1

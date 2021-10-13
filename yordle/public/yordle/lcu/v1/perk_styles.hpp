//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct default_stat_mods_per_sub_style_t {
        std::string id;
        std::vector<int64_t> perks;
    };

    enum class perk_type {
        key_stone,
        mixed_regular_splashable,
        stat_mod
    };

    struct perk_slot {
        perk_type type;
        std::string slot_label;
        std::vector<int64_t> perks;
    };

    struct sub_style_bonus_t {
        int64_t style_id;
        int64_t perk_id;
    };

    struct perk_style {
        int64_t id;
        std::string name;
        std::string tooltip;
        std::string icon_path;
        std::map<std::string, std::string> asset_map;
        bool is_advanced;
        std::vector<int64_t> allowed_sub_styles;
        std::vector<sub_style_bonus_t> sub_style_bonus;
        std::vector<perk_slot> slots;
        std::string default_page_name;
        int64_t default_sub_style;
        std::vector<int64_t> default_perks;
        std::vector<int64_t> default_perks_when_splashed;
        std::vector<default_stat_mods_per_sub_style_t> default_stat_mods_per_sub_style;
    };

    struct perk_styles {
        int64_t schema_version;
        std::vector<perk_style> styles;
    };

    void from_json(const json &j, yordle::lcu::v1::default_stat_mods_per_sub_style_t &x);
    void to_json(json &j, const yordle::lcu::v1::default_stat_mods_per_sub_style_t &x);

    void from_json(const json &j, yordle::lcu::v1::perk_slot &x);
    void to_json(json &j, const yordle::lcu::v1::perk_slot &x);

    void from_json(const json &j, yordle::lcu::v1::sub_style_bonus_t &x);
    void to_json(json &j, const yordle::lcu::v1::sub_style_bonus_t &x);

    void from_json(const json &j, yordle::lcu::v1::perk_style &x);
    void to_json(json &j, const yordle::lcu::v1::perk_style &x);

    void from_json(const json &j, yordle::lcu::v1::perk_styles &x);
    void to_json(json &j, const yordle::lcu::v1::perk_styles &x);

    void from_json(const json &j, yordle::lcu::v1::perk_type &x);
    void to_json(json &j, const yordle::lcu::v1::perk_type &x);

    inline void from_json(const json &j, yordle::lcu::v1::default_stat_mods_per_sub_style_t &x) {
        x.id    = j.at("id").get<std::string>();
        x.perks = j.at("perks").get<std::vector<int64_t>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::default_stat_mods_per_sub_style_t &x) {
        j          = json::object();
        j["id"]    = x.id;
        j["perks"] = x.perks;
    }

    inline void from_json(const json &j, yordle::lcu::v1::perk_slot &x) {
        x.type       = j.at("type").get<yordle::lcu::v1::perk_type>();
        x.slot_label = j.at("slotLabel").get<std::string>();
        x.perks      = j.at("perks").get<std::vector<int64_t>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::perk_slot &x) {
        j              = json::object();
        j["type"]      = x.type;
        j["slotLabel"] = x.slot_label;
        j["perks"]     = x.perks;
    }

    inline void from_json(const json &j, yordle::lcu::v1::sub_style_bonus_t &x) {
        x.style_id = j.at("styleId").get<int64_t>();
        x.perk_id  = j.at("perkId").get<int64_t>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::sub_style_bonus_t &x) {
        j            = json::object();
        j["styleId"] = x.style_id;
        j["perkId"]  = x.perk_id;
    }

    inline void from_json(const json &j, yordle::lcu::v1::perk_style &x) {
        x.id                              = j.at("id").get<int64_t>();
        x.name                            = j.at("name").get<std::string>();
        x.tooltip                         = j.at("tooltip").get<std::string>();
        x.icon_path                       = j.at("iconPath").get<std::string>();
        x.asset_map                       = j.at("assetMap").get<std::map<std::string, std::string>>();
        x.is_advanced                     = j.at("isAdvanced").get<bool>();
        x.allowed_sub_styles              = j.at("allowedSubStyles").get<std::vector<int64_t>>();
        x.sub_style_bonus                 = j.at("subStyleBonus").get<std::vector<yordle::lcu::v1::sub_style_bonus_t>>();
        x.slots                           = j.at("slots").get<std::vector<yordle::lcu::v1::perk_slot>>();
        x.default_page_name               = j.at("defaultPageName").get<std::string>();
        x.default_sub_style               = j.at("defaultSubStyle").get<int64_t>();
        x.default_perks                   = j.at("defaultPerks").get<std::vector<int64_t>>();
        x.default_perks_when_splashed     = j.at("defaultPerksWhenSplashed").get<std::vector<int64_t>>();
        x.default_stat_mods_per_sub_style = j.at("defaultStatModsPerSubStyle").get<std::vector<yordle::lcu::v1::default_stat_mods_per_sub_style_t>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::perk_style &x) {
        j                               = json::object();
        j["id"]                         = x.id;
        j["name"]                       = x.name;
        j["tooltip"]                    = x.tooltip;
        j["iconPath"]                   = x.icon_path;
        j["assetMap"]                   = x.asset_map;
        j["isAdvanced"]                 = x.is_advanced;
        j["allowedSubStyles"]           = x.allowed_sub_styles;
        j["subStyleBonus"]              = x.sub_style_bonus;
        j["slots"]                      = x.slots;
        j["defaultPageName"]            = x.default_page_name;
        j["defaultSubStyle"]            = x.default_sub_style;
        j["defaultPerks"]               = x.default_perks;
        j["defaultPerksWhenSplashed"]   = x.default_perks_when_splashed;
        j["defaultStatModsPerSubStyle"] = x.default_stat_mods_per_sub_style;
    }

    inline void from_json(const json &j, yordle::lcu::v1::perk_styles &x) {
        x.schema_version = j.at("schemaVersion").get<int64_t>();
        x.styles         = j.at("styles").get<std::vector<yordle::lcu::v1::perk_style>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::perk_styles &x) {
        j                  = json::object();
        j["schemaVersion"] = x.schema_version;
        j["styles"]        = x.styles;
    }

    inline void from_json(const json &j, yordle::lcu::v1::perk_type &x) {
        if (j == "kKeyStone") x = yordle::lcu::v1::perk_type::key_stone;
        else if (j == "kMixedRegularSplashable")
            x = yordle::lcu::v1::perk_type::mixed_regular_splashable;
        else if (j == "kStatMod")
            x = yordle::lcu::v1::perk_type::stat_mod;
    }

    inline void to_json(json &j, const yordle::lcu::v1::perk_type &x) {
        switch (x) {
            case yordle::lcu::v1::perk_type::key_stone:
                j = "kKeyStone";
                break;
            case yordle::lcu::v1::perk_type::mixed_regular_splashable:
                j = "kMixedRegularSplashable";
                break;
            case yordle::lcu::v1::perk_type::stat_mod:
                j = "kStatMod";
                break;
        }
    }
} // namespace yordle::lcu::v1

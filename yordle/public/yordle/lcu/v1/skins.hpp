//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>
#include <yordle/lcu/v1/_common.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct chroma {
        int64_t id;
        std::string name;
        std::string chroma_path;
        std::vector<std::string> colors;
        std::vector<regional_description> descriptions;
        std::vector<regional_rarity> rarities;
    };

    struct description_info_t {
        std::string title;
        std::string description;
        std::string icon_path;
    };

    struct skin_tier {
        int64_t id;
        std::string name;
        int64_t stage;
        std::string description;
        std::string splash_path;
        std::string uncentered_splash_path;
        std::string tile_path;
        std::string load_screen_path;
        std::string load_screen_vintage_path;
        std::string short_name;
        std::string splash_video_path;
        std::string collection_splash_video_path;
    };

    struct quest_skin_info_t {
        std::string name;
        std::string collection_description;
        std::vector<description_info_t> description_info;
        std::string splash_path;
        std::string uncentered_splash_path;
        std::string tile_path;
        std::string collection_card_path;
        std::vector<skin_tier> tiers;
    };

    struct skin_line {
        int64_t id;
    };

    struct skin {
        int64_t id;
        bool is_base;
        std::string name;
        std::string splash_path;
        std::string uncentered_splash_path;
        std::string tile_path;
        std::string load_screen_path;
        std::string skin_type;
        rarity_t rarity;
        bool is_legacy;
        std::shared_ptr<std::string> splash_video_path;
        std::shared_ptr<std::string> collection_splash_video_path;
        std::shared_ptr<std::string> features_text;
        std::shared_ptr<std::string> chroma_path;
        int64_t region_rarity_id;
        std::shared_ptr<std::vector<skin_line>> skin_lines;
        std::shared_ptr<std::string> description;
        std::shared_ptr<std::string> load_screen_vintage_path;
        std::shared_ptr<std::vector<chroma>> chromas;
        std::shared_ptr<quest_skin_info_t> quest_skin_info;
    };

    using skins [[maybe_unused]] = std::map<std::string, skin>;

    void from_json(const json &j, yordle::lcu::v1::chroma &x);
    void to_json(json &j, const yordle::lcu::v1::chroma &x);

    void from_json(const json &j, yordle::lcu::v1::description_info_t &x);
    void to_json(json &j, const yordle::lcu::v1::description_info_t &x);

    void from_json(const json &j, yordle::lcu::v1::skin_tier &x);
    void to_json(json &j, const yordle::lcu::v1::skin_tier &x);

    void from_json(const json &j, yordle::lcu::v1::quest_skin_info_t &x);
    void to_json(json &j, const yordle::lcu::v1::quest_skin_info_t &x);

    void from_json(const json &j, yordle::lcu::v1::skin_line &x);
    void to_json(json &j, const yordle::lcu::v1::skin_line &x);

    void from_json(const json &j, yordle::lcu::v1::skin &x);
    void to_json(json &j, const yordle::lcu::v1::skin &x);

    inline void from_json(const json &j, yordle::lcu::v1::chroma &x) {
        x.id           = j.at("id").get<int64_t>();
        x.name         = j.at("name").get<std::string>();
        x.chroma_path  = j.at("chromaPath").get<std::string>();
        x.colors       = j.at("colors").get<std::vector<std::string>>();
        x.descriptions = j.at("descriptions").get<std::vector<yordle::lcu::v1::regional_description>>();
        x.rarities     = j.at("rarities").get<std::vector<yordle::lcu::v1::regional_rarity>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::chroma &x) {
        j                 = json::object();
        j["id"]           = x.id;
        j["name"]         = x.name;
        j["chromaPath"]   = x.chroma_path;
        j["colors"]       = x.colors;
        j["descriptions"] = x.descriptions;
        j["rarities"]     = x.rarities;
    }

    inline void from_json(const json &j, yordle::lcu::v1::description_info_t &x) {
        x.title       = j.at("title").get<std::string>();
        x.description = j.at("description").get<std::string>();
        x.icon_path   = j.at("iconPath").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::description_info_t &x) {
        j                = json::object();
        j["title"]       = x.title;
        j["description"] = x.description;
        j["iconPath"]    = x.icon_path;
    }

    inline void from_json(const json &j, yordle::lcu::v1::skin_tier &x) {
        x.id                           = j.at("id").get<int64_t>();
        x.name                         = j.at("name").get<std::string>();
        x.stage                        = j.at("stage").get<int64_t>();
        x.description                  = j.at("description").get<std::string>();
        x.splash_path                  = j.at("splashPath").get<std::string>();
        x.uncentered_splash_path       = j.at("uncenteredSplashPath").get<std::string>();
        x.tile_path                    = j.at("tilePath").get<std::string>();
        x.load_screen_path             = j.at("loadScreenPath").get<std::string>();
        x.load_screen_vintage_path     = j.at("loadScreenVintagePath").get<std::string>();
        x.short_name                   = j.at("shortName").get<std::string>();
        x.splash_video_path            = j.at("splashVideoPath").get<std::string>();
        x.collection_splash_video_path = j.at("collectionSplashVideoPath").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::skin_tier &x) {
        j                              = json::object();
        j["id"]                        = x.id;
        j["name"]                      = x.name;
        j["stage"]                     = x.stage;
        j["description"]               = x.description;
        j["splashPath"]                = x.splash_path;
        j["uncenteredSplashPath"]      = x.uncentered_splash_path;
        j["tilePath"]                  = x.tile_path;
        j["loadScreenPath"]            = x.load_screen_path;
        j["loadScreenVintagePath"]     = x.load_screen_vintage_path;
        j["shortName"]                 = x.short_name;
        j["splashVideoPath"]           = x.splash_video_path;
        j["collectionSplashVideoPath"] = x.collection_splash_video_path;
    }

    inline void from_json(const json &j, yordle::lcu::v1::quest_skin_info_t &x) {
        x.name                   = j.at("name").get<std::string>();
        x.collection_description = j.at("collectionDescription").get<std::string>();
        x.description_info       = j.at("descriptionInfo").get<std::vector<yordle::lcu::v1::description_info_t>>();
        x.splash_path            = j.at("splashPath").get<std::string>();
        x.uncentered_splash_path = j.at("uncenteredSplashPath").get<std::string>();
        x.tile_path              = j.at("tilePath").get<std::string>();
        x.collection_card_path   = j.at("collectionCardPath").get<std::string>();
        x.tiers                  = j.at("tiers").get<std::vector<yordle::lcu::v1::skin_tier>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::quest_skin_info_t &x) {
        j                          = json::object();
        j["name"]                  = x.name;
        j["collectionDescription"] = x.collection_description;
        j["descriptionInfo"]       = x.description_info;
        j["splashPath"]            = x.splash_path;
        j["uncenteredSplashPath"]  = x.uncentered_splash_path;
        j["tilePath"]              = x.tile_path;
        j["collectionCardPath"]    = x.collection_card_path;
        j["tiers"]                 = x.tiers;
    }

    inline void from_json(const json &j, yordle::lcu::v1::skin_line &x) {
        x.id = j.at("id").get<int64_t>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::skin_line &x) {
        j       = json::object();
        j["id"] = x.id;
    }

    inline void from_json(const json &j, yordle::lcu::v1::skin &x) {
        x.id                           = j.at("id").get<int64_t>();
        x.is_base                      = j.at("isBase").get<bool>();
        x.name                         = j.at("name").get<std::string>();
        x.splash_path                  = j.at("splashPath").get<std::string>();
        x.uncentered_splash_path       = j.at("uncenteredSplashPath").get<std::string>();
        x.tile_path                    = j.at("tilePath").get<std::string>();
        x.load_screen_path             = j.at("loadScreenPath").get<std::string>();
        x.skin_type                    = j.at("skinType").get<std::string>();
        x.rarity                       = j.at("rarity").get<yordle::lcu::v1::rarity_t>();
        x.is_legacy                    = j.at("isLegacy").get<bool>();
        x.splash_video_path            = yordle::lcu::v1::get_optional<std::string>(j, "splashVideoPath");
        x.collection_splash_video_path = yordle::lcu::v1::get_optional<std::string>(j, "collectionSplashVideoPath");
        x.features_text                = yordle::lcu::v1::get_optional<std::string>(j, "featuresText");
        x.chroma_path                  = yordle::lcu::v1::get_optional<std::string>(j, "chromaPath");
        x.region_rarity_id             = j.at("regionRarityId").get<int64_t>();
        x.skin_lines                   = yordle::lcu::v1::get_optional<std::vector<yordle::lcu::v1::skin_line>>(j, "skinLines");
        x.description                  = yordle::lcu::v1::get_optional<std::string>(j, "description");
        x.load_screen_vintage_path     = yordle::lcu::v1::get_optional<std::string>(j, "loadScreenVintagePath");
        x.chromas                      = yordle::lcu::v1::get_optional<std::vector<yordle::lcu::v1::chroma>>(j, "chromas");
        x.quest_skin_info              = yordle::lcu::v1::get_optional<yordle::lcu::v1::quest_skin_info_t>(j, "questSkinInfo");
    }

    inline void to_json(json &j, const yordle::lcu::v1::skin &x) {
        j                              = json::object();
        j["id"]                        = x.id;
        j["isBase"]                    = x.is_base;
        j["name"]                      = x.name;
        j["splashPath"]                = x.splash_path;
        j["uncenteredSplashPath"]      = x.uncentered_splash_path;
        j["tilePath"]                  = x.tile_path;
        j["loadScreenPath"]            = x.load_screen_path;
        j["skinType"]                  = x.skin_type;
        j["rarity"]                    = x.rarity;
        j["isLegacy"]                  = x.is_legacy;
        j["splashVideoPath"]           = x.splash_video_path;
        j["collectionSplashVideoPath"] = x.collection_splash_video_path;
        j["featuresText"]              = x.features_text;
        j["chromaPath"]                = x.chroma_path;
        j["regionRarityId"]            = x.region_rarity_id;
        j["skinLines"]                 = x.skin_lines;
        j["description"]               = x.description;
        j["loadScreenVintagePath"]     = x.load_screen_vintage_path;
        j["chromas"]                   = x.chromas;
        j["questSkinInfo"]             = x.quest_skin_info;
    }
} // namespace yordle::lcu::v1

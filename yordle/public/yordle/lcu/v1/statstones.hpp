//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct pack_datum {
        std::string name;
        std::string description;
        int64_t item_id;
        std::string content_id;
        std::string store_icon_image;
    };

    struct bound_champion_t {
        int64_t item_id;
        std::string inventory_type;
        std::string content_id;
    };

    struct statstone {
        std::string name;
        std::string content_id;
        int64_t item_id;
        bool is_retired;
        int64_t tracking_type;
        bool is_epic;
        std::string description;
        std::vector<int64_t> milestones;
        bound_champion_t bound_champion;
        std::string category;
        std::string icon_unowned;
        std::string icon_unlit;
        std::string icon_lit;
        std::string icon_full;
    };

    struct statstone_datum {
        std::string name;
        int64_t item_id;
        std::string inventory_type;
        std::string content_id;
        std::vector<statstone> statstones;
    };

    struct statstones {
        std::vector<statstone_datum> statstone_data;
        std::vector<pack_datum> pack_data;
        std::map<std::string, std::vector<std::string>> pack_id_to_stat_stones_ids;
        std::map<std::string, std::vector<std::string>> series_id_to_stat_stone_ids;
        std::map<std::string, std::vector<std::string>> pack_id_to_sub_pack_ids;
        std::map<std::string, std::vector<std::string>> collection_id_to_stat_stone_ids;
        std::map<std::string, std::vector<int64_t>> pack_id_to_champ_ids;
        std::map<std::string, std::vector<std::string>> champ_id_to_pack_ids;
        std::map<std::string, std::vector<int64_t>> pack_item_id_to_containing_pack_item_id;
    };

    void from_json(const json &j, yordle::lcu::v1::pack_datum &x);
    void to_json(json &j, const yordle::lcu::v1::pack_datum &x);

    void from_json(const json &j, yordle::lcu::v1::bound_champion_t &x);
    void to_json(json &j, const yordle::lcu::v1::bound_champion_t &x);

    void from_json(const json &j, yordle::lcu::v1::statstone &x);
    void to_json(json &j, const yordle::lcu::v1::statstone &x);

    void from_json(const json &j, yordle::lcu::v1::statstone_datum &x);
    void to_json(json &j, const yordle::lcu::v1::statstone_datum &x);

    void from_json(const json &j, yordle::lcu::v1::statstones &x);
    void to_json(json &j, const yordle::lcu::v1::statstones &x);

    inline void from_json(const json &j, yordle::lcu::v1::pack_datum &x) {
        x.name             = j.at("name").get<std::string>();
        x.description      = j.at("description").get<std::string>();
        x.item_id          = j.at("itemId").get<int64_t>();
        x.content_id       = j.at("contentId").get<std::string>();
        x.store_icon_image = j.at("storeIconImage").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::pack_datum &x) {
        j                   = json::object();
        j["name"]           = x.name;
        j["description"]    = x.description;
        j["itemId"]         = x.item_id;
        j["contentId"]      = x.content_id;
        j["storeIconImage"] = x.store_icon_image;
    }

    inline void from_json(const json &j, yordle::lcu::v1::bound_champion_t &x) {
        x.item_id        = j.at("itemId").get<int64_t>();
        x.inventory_type = j.at("inventoryType").get<std::string>();
        x.content_id     = j.at("contentId").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::bound_champion_t &x) {
        j                  = json::object();
        j["itemId"]        = x.item_id;
        j["inventoryType"] = x.inventory_type;
        j["contentId"]     = x.content_id;
    }

    inline void from_json(const json &j, yordle::lcu::v1::statstone &x) {
        x.name           = j.at("name").get<std::string>();
        x.content_id     = j.at("contentId").get<std::string>();
        x.item_id        = j.at("itemId").get<int64_t>();
        x.is_retired     = j.at("isRetired").get<bool>();
        x.tracking_type  = j.at("trackingType").get<int64_t>();
        x.is_epic        = j.at("isEpic").get<bool>();
        x.description    = j.at("description").get<std::string>();
        x.milestones     = j.at("milestones").get<std::vector<int64_t>>();
        x.bound_champion = j.at("boundChampion").get<yordle::lcu::v1::bound_champion_t>();
        x.category       = j.at("category").get<std::string>();
        x.icon_unowned   = j.at("iconUnowned").get<std::string>();
        x.icon_unlit     = j.at("iconUnlit").get<std::string>();
        x.icon_lit       = j.at("iconLit").get<std::string>();
        x.icon_full      = j.at("iconFull").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::statstone &x) {
        j                  = json::object();
        j["name"]          = x.name;
        j["contentId"]     = x.content_id;
        j["itemId"]        = x.item_id;
        j["isRetired"]     = x.is_retired;
        j["trackingType"]  = x.tracking_type;
        j["isEpic"]        = x.is_epic;
        j["description"]   = x.description;
        j["milestones"]    = x.milestones;
        j["boundChampion"] = x.bound_champion;
        j["category"]      = x.category;
        j["iconUnowned"]   = x.icon_unowned;
        j["iconUnlit"]     = x.icon_unlit;
        j["iconLit"]       = x.icon_lit;
        j["iconFull"]      = x.icon_full;
    }

    inline void from_json(const json &j, yordle::lcu::v1::statstone_datum &x) {
        x.name           = j.at("name").get<std::string>();
        x.item_id        = j.at("itemId").get<int64_t>();
        x.inventory_type = j.at("inventoryType").get<std::string>();
        x.content_id     = j.at("contentId").get<std::string>();
        x.statstones     = j.at("statstones").get<std::vector<yordle::lcu::v1::statstone>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::statstone_datum &x) {
        j                  = json::object();
        j["name"]          = x.name;
        j["itemId"]        = x.item_id;
        j["inventoryType"] = x.inventory_type;
        j["contentId"]     = x.content_id;
        j["statstones"]    = x.statstones;
    }

    inline void from_json(const json &j, yordle::lcu::v1::statstones &x) {
        x.statstone_data                          = j.at("statstoneData").get<std::vector<yordle::lcu::v1::statstone_datum>>();
        x.pack_data                               = j.at("packData").get<std::vector<yordle::lcu::v1::pack_datum>>();
        x.pack_id_to_stat_stones_ids              = j.at("packIdToStatStonesIds").get<std::map<std::string, std::vector<std::string>>>();
        x.series_id_to_stat_stone_ids             = j.at("seriesIdToStatStoneIds").get<std::map<std::string, std::vector<std::string>>>();
        x.pack_id_to_sub_pack_ids                 = j.at("packIdToSubPackIds").get<std::map<std::string, std::vector<std::string>>>();
        x.collection_id_to_stat_stone_ids         = j.at("collectionIdToStatStoneIds").get<std::map<std::string, std::vector<std::string>>>();
        x.pack_id_to_champ_ids                    = j.at("packIdToChampIds").get<std::map<std::string, std::vector<int64_t>>>();
        x.champ_id_to_pack_ids                    = j.at("champIdToPackIds").get<std::map<std::string, std::vector<std::string>>>();
        x.pack_item_id_to_containing_pack_item_id = j.at("packItemIdToContainingPackItemId").get<std::map<std::string, std::vector<int64_t>>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::statstones &x) {
        j                                     = json::object();
        j["statstoneData"]                    = x.statstone_data;
        j["packData"]                         = x.pack_data;
        j["packIdToStatStonesIds"]            = x.pack_id_to_stat_stones_ids;
        j["seriesIdToStatStoneIds"]           = x.series_id_to_stat_stone_ids;
        j["packIdToSubPackIds"]               = x.pack_id_to_sub_pack_ids;
        j["collectionIdToStatStoneIds"]       = x.collection_id_to_stat_stone_ids;
        j["packIdToChampIds"]                 = x.pack_id_to_champ_ids;
        j["champIdToPackIds"]                 = x.champ_id_to_pack_ids;
        j["packItemIdToContainingPackItemId"] = x.pack_item_id_to_containing_pack_item_id;
    }
} // namespace yordle::lcu::v1

//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct tft_promo {
        std::string title;
        std::string link;
        std::string icon_url;
        int64_t rp_cost;
        int64_t be_cost;
        bool is_external;
        int64_t start_date;
        int64_t end_date;
        std::string content_id;
        int64_t sequence;
    };

    using tft_promos [[maybe_unused]] = std::vector<tft_promo>;

    inline void from_json(const json &j, yordle::lcu::v1::tft_promo &x) {
        x.title       = j.at("title").get<std::string>();
        x.link        = j.at("link").get<std::string>();
        x.icon_url    = j.at("iconUrl").get<std::string>();
        x.rp_cost     = j.at("rpCost").get<int64_t>();
        x.be_cost     = j.at("beCost").get<int64_t>();
        x.is_external = j.at("isExternal").get<bool>();
        x.start_date  = j.at("startDate").get<int64_t>();
        x.end_date    = j.at("endDate").get<int64_t>();
        x.content_id  = j.at("contentId").get<std::string>();
        x.sequence    = j.at("sequence").get<int64_t>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::tft_promo &x) {
        j               = json::object();
        j["title"]      = x.title;
        j["link"]       = x.link;
        j["iconUrl"]    = x.icon_url;
        j["rpCost"]     = x.rp_cost;
        j["beCost"]     = x.be_cost;
        j["isExternal"] = x.is_external;
        j["startDate"]  = x.start_date;
        j["endDate"]    = x.end_date;
        j["contentId"]  = x.content_id;
        j["sequence"]   = x.sequence;
    }
} // namespace yordle::lcu::v1

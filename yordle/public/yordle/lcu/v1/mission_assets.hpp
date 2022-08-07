// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct mission_asset {
        std::string internal_name;
        std::string internal_description;
        std::string path;
        int64_t start_date;
        bool icon_needs_frame;
    };

    using mission_assets [[maybe_unused]] = std::vector<mission_asset>;

    inline void from_json(const json &j, yordle::lcu::v1::mission_asset &x) {
        x.internal_name        = j.at("internalName").get<std::string>();
        x.internal_description = j.at("internalDescription").get<std::string>();
        x.path                 = j.at("path").get<std::string>();
        x.start_date           = j.at("startDate").get<int64_t>();
        x.icon_needs_frame     = j.at("iconNeedsFrame").get<bool>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::mission_asset &x) {
        j                        = json::object();
        j["internalName"]        = x.internal_name;
        j["internalDescription"] = x.internal_description;
        j["path"]                = x.path;
        j["startDate"]           = x.start_date;
        j["iconNeedsFrame"]      = x.icon_needs_frame;
    }
} // namespace yordle::lcu::v1

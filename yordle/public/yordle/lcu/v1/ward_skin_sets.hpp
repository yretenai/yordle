//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    inline json get_untyped(const json &j, const char *property) {
        if (j.find(property) != j.end()) {
            return j.at(property).get<json>();
        }
        return json();
    }

    inline json get_untyped(const json &j, std::string property) {
        return get_untyped(j, property.data());
    }

    struct ward_skin_set {
        int64_t id;
        bool hidden;
        std::string display_name;
        std::string description;
        std::vector<int64_t> wards;
    };

    using ward_skin_sets [[maybe_unused]] = std::vector<ward_skin_set>;

    inline void from_json(const json &j, yordle::lcu::v1::ward_skin_set &x) {
        x.id           = j.at("id").get<int64_t>();
        x.hidden       = j.at("hidden").get<bool>();
        x.display_name = j.at("displayName").get<std::string>();
        x.description  = j.at("description").get<std::string>();
        x.wards        = j.at("wards").get<std::vector<int64_t>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::ward_skin_set &x) {
        j                = json::object();
        j["id"]          = x.id;
        j["hidden"]      = x.hidden;
        j["displayName"] = x.display_name;
        j["description"] = x.description;
        j["wards"]       = x.wards;
    }
} // namespace yordle::lcu::v1

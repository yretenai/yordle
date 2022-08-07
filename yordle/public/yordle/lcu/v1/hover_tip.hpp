// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct hover_tip {
        std::string key;
        std::string value;
    };

    using hover_tips [[maybe_unused]] = std::vector<hover_tip>;

    inline void from_json(const json &j, yordle::lcu::v1::hover_tip &x) {
        x.key   = j.at("key").get<std::string>();
        x.value = j.at("value").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::hover_tip &x) {
        j          = json::object();
        j["key"]   = x.key;
        j["value"] = x.value;
    }
} // namespace yordle::lcu::v1

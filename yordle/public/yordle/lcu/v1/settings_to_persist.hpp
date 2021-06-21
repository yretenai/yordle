//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>
#include <yordle/lcu/v1/_common.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct setting {
        std::string name;
        bool persisted;
    };

    struct settings_section {
        std::string name;
        bool persisted;
        std::shared_ptr<std::vector<setting>> settings;
    };

    struct settings_file {
        std::string name;
        bool persisted;
        std::shared_ptr<std::vector<settings_section>> sections;
    };

    struct settings_to_persist {
        std::vector<settings_file> files;
    };

    void from_json(const json &j, yordle::lcu::v1::setting &x);
    void to_json(json &j, const yordle::lcu::v1::setting &x);

    void from_json(const json &j, yordle::lcu::v1::settings_section &x);
    void to_json(json &j, const yordle::lcu::v1::settings_section &x);

    void from_json(const json &j, yordle::lcu::v1::settings_file &x);
    void to_json(json &j, const yordle::lcu::v1::settings_file &x);

    void from_json(const json &j, yordle::lcu::v1::settings_to_persist &x);
    void to_json(json &j, const yordle::lcu::v1::settings_to_persist &x);

    inline void from_json(const json &j, yordle::lcu::v1::setting &x) {
        x.name      = j.at("name").get<std::string>();
        x.persisted = j.at("persisted").get<bool>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::setting &x) {
        j              = json::object();
        j["name"]      = x.name;
        j["persisted"] = x.persisted;
    }

    inline void from_json(const json &j, yordle::lcu::v1::settings_section &x) {
        x.name      = j.at("name").get<std::string>();
        x.persisted = j.at("persisted").get<bool>();
        x.settings  = yordle::lcu::v1::get_optional<std::vector<yordle::lcu::v1::setting>>(j, "settings");
    }

    inline void to_json(json &j, const yordle::lcu::v1::settings_section &x) {
        j              = json::object();
        j["name"]      = x.name;
        j["persisted"] = x.persisted;
        j["settings"]  = x.settings;
    }

    inline void from_json(const json &j, yordle::lcu::v1::settings_file &x) {
        x.name      = j.at("name").get<std::string>();
        x.persisted = j.at("persisted").get<bool>();
        x.sections  = yordle::lcu::v1::get_optional<std::vector<yordle::lcu::v1::settings_section>>(j, "sections");
    }

    inline void to_json(json &j, const yordle::lcu::v1::settings_file &x) {
        j              = json::object();
        j["name"]      = x.name;
        j["persisted"] = x.persisted;
        j["sections"]  = x.sections;
    }

    inline void from_json(const json &j, yordle::lcu::v1::settings_to_persist &x) {
        x.files = j.at("files").get<std::vector<yordle::lcu::v1::settings_file>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::settings_to_persist &x) {
        j          = json::object();
        j["files"] = x.files;
    }
} // namespace yordle::lcu::v1

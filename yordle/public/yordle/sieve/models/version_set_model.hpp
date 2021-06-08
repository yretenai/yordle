//
// Created by Lilith on 2021-03-23.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>
#include <stdexcept>
#include <utility>
#include <yordle/sieve/models/sieve.hpp>

namespace yordle::sieve::models {
    using nlohmann::json;

    struct compatible_version {
        std::shared_ptr<std::string> id;
    };

    struct download_info {
        std::shared_ptr<std::string> url;
        std::shared_ptr<bool> scd_required;
    };

    struct label {
        std::shared_ptr<std::vector<std::string>> values;
    };

    struct release_release {
        std::shared_ptr<std::string> product;
        std::shared_ptr<std::string> id;
        std::shared_ptr<std::map<std::string, label>> labels;
    };

    struct release_element {
        std::shared_ptr<release_release> release;
        std::shared_ptr<compatible_version> compat_version;
        std::shared_ptr<download_info> download;
    };

    struct version_set {
        std::shared_ptr<std::vector<release_element>> releases;
    };

    void from_json(const json &j, compatible_version &x);
    void to_json(json &j, const compatible_version &x);
    void from_json(const json &j, download_info &x);
    void to_json(json &j, const download_info &x);
    void from_json(const json &j, label &x);
    void to_json(json &j, const label &x);
    void from_json(const json &j, release_release &x);
    void to_json(json &j, const release_release &x);
    void from_json(const json &j, release_element &x);
    void to_json(json &j, const release_element &x);
    void from_json(const json &j, version_set &x);
    void to_json(json &j, const version_set &x);

    inline void from_json(const json &j, compatible_version &x) {
        x.id = get_optional<std::string>(j, "id");
    }

    inline void to_json(json &j, const compatible_version &x) {
        j = json::object();
        if (x.id) {
            j["id"] = x.id;
        }
    }

    inline void from_json(const json &j, download_info &x) {
        x.url = get_optional<std::string>(j, "url");
        x.scd_required = get_optional<bool>(j, "scd_required");
    }

    inline void to_json(json &j, const download_info &x) {
        j = json::object();
        if (x.url) {
            j["url"] = x.url;
        }
        if (x.scd_required) {
            j["scd_required"] = x.scd_required;
        }
    }

    inline void from_json(const json &j, label &x) {
        x.values = get_optional<std::vector<std::string>>(j, "values");
    }

    inline void to_json(json &j, const label &x) {
        j = json::object();
        if (x.values) {
            j["values"] = x.values;
        }
    }

    inline void from_json(const json &j, release_release &x) {
        x.product = get_optional<std::string>(j, "product");
        x.id = get_optional<std::string>(j, "id");
        x.labels = get_optional<std::map<std::string, label>>(j, "labels");
    }

    inline void to_json(json &j, const release_release &x) {
        j = json::object();
        if (x.product) {
            j["product"] = x.product;
        }
        if (x.id) {
            j["id"] = x.id;
        }
        if (x.labels) {
            j["labels"] = x.labels;
        }
    }

    inline void from_json(const json &j, release_element &x) {
        x.release = get_optional<release_release>(j, "release");
        x.compat_version = get_optional<compatible_version>(j, "compat_version");
        x.download = get_optional<download_info>(j, "download");
    }

    inline void to_json(json &j, const release_element &x) {
        j = json::object();
        if (x.release) {
            j["release"] = x.release;
        }
        if (x.compat_version) {
            j["compat_version"] = x.compat_version;
        }
        if (x.download) {
            j["download"] = x.download;
        }
    }

    inline void from_json(const json &j, version_set &x) {
        x.releases = get_optional<std::vector<release_element>>(j, "releases");
    }

    inline void to_json(json &j, const version_set &x) {
        j = json::object();
        if (x.releases) {
            j["releases"] = x.releases;
        }
    }
} // namespace yordle::sieve::models

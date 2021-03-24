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

    struct compat_version {
        std::shared_ptr<std::string> id;
    };

    struct download {
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
        std::shared_ptr<compat_version> compat_version;
        std::shared_ptr<download> download;
    };

    struct version_set {
        std::shared_ptr<std::vector<release_element>> releases;
    };

    [[maybe_unused]] void from_json(const json &j, compat_version &x);
    [[maybe_unused]] void to_json(json &j, const compat_version &x);
    [[maybe_unused]] void from_json(const json &j, download &x);
    [[maybe_unused]] void to_json(json &j, const download &x);
    [[maybe_unused]] void from_json(const json &j, label &x);
    [[maybe_unused]] void to_json(json &j, const label &x);
    [[maybe_unused]] void from_json(const json &j, release_release &x);
    [[maybe_unused]] void to_json(json &j, const release_release &x);
    [[maybe_unused]] void from_json(const json &j, release_element &x);
    [[maybe_unused]] void to_json(json &j, const release_element &x);
    [[maybe_unused]] void from_json(const json &j, version_set &x);
    [[maybe_unused]] void to_json(json &j, const version_set &x);

    [[maybe_unused]] inline void from_json(const json &j, compat_version &x) {
        x.id = get_optional<std::string>(j, "id");
    }

    [[maybe_unused]] inline void to_json(json &j, const compat_version &x) {
        j = json::object();
        if (x.id) {
            j["id"] = x.id;
        }
    }

    [[maybe_unused]] inline void from_json(const json &j, download &x) {
        x.url = get_optional<std::string>(j, "url");
        x.scd_required = get_optional<bool>(j, "scd_required");
    }

    [[maybe_unused]] inline void to_json(json &j, const download &x) {
        j = json::object();
        if (x.url) {
            j["url"] = x.url;
        }
        if (x.scd_required) {
            j["scd_required"] = x.scd_required;
        }
    }

    [[maybe_unused]] inline void from_json(const json &j, label &x) {
        x.values = get_optional<std::vector<std::string>>(j, "values");
    }

    [[maybe_unused]] inline void to_json(json &j, const label &x) {
        j = json::object();
        if (x.values) {
            j["values"] = x.values;
        }
    }

    [[maybe_unused]] inline void from_json(const json &j, release_release &x) {
        x.product = get_optional<std::string>(j, "product");
        x.id = get_optional<std::string>(j, "id");
        x.labels = get_optional<std::map<std::string, label>>(j, "labels");
    }

    [[maybe_unused]] inline void to_json(json &j, const release_release &x) {
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

    [[maybe_unused]] inline void from_json(const json &j, release_element &x) {
        x.release = get_optional<release_release>(j, "release");
        x.compat_version = get_optional<compat_version>(j, "compat_version");
        x.download = get_optional<download>(j, "download");
    }

    [[maybe_unused]] inline void to_json(json &j, const release_element &x) {
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

    [[maybe_unused]] inline void from_json(const json &j, version_set &x) {
        x.releases = get_optional<std::vector<release_element>>(j, "releases");
    }

    [[maybe_unused]] inline void to_json(json &j, const version_set &x) {
        j = json::object();
        if (x.releases) {
            j["releases"] = x.releases;
        }
    }
} // namespace yordle::sieve::models

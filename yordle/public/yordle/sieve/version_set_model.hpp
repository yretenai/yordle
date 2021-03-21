//
// Created by Lilith on 3/21/2021.
//
// generated with https://app.quicktype.io/

#pragma once

#include <nlohmann/json.hpp>
#include <stdexcept>
#include <utility>

#ifndef NLOHMANN_OPT_HELPER
#define NLOHMANN_OPT_HELPER
namespace nlohmann {
    template<typename T>
    struct [[maybe_unused]] adl_serializer<std::shared_ptr<T>> {
        [[maybe_unused]] static void to_json(json &j, const std::shared_ptr<T> &opt) {
            if (!opt) j = nullptr;
            else
                j = *opt;
        }

        [[maybe_unused]] static std::shared_ptr<T> from_json(const json &j) {
            if (j.is_null()) return std::unique_ptr<T>();
            else
                return std::unique_ptr<T>(new T(j.get<T>()));
        }
    };
} // namespace nlohmann
#endif // NLOHMANN_OPT_HELPER

namespace yordle::sieve {
    using nlohmann::json;

    template<typename T>
    [[maybe_unused]] inline std::shared_ptr<T> get_optional(const json &j, const char *property) {
        if (j.find(property) != j.end()) {
            return j.at(property).get<std::shared_ptr<T>>();
        }
        return nullptr;
    }

    class compat_version_element {
    public:
        compat_version_element() = default;
        virtual ~compat_version_element() = default;

    private:
        std::shared_ptr<std::string> id = nullptr;

    public:
        [[nodiscard]] std::shared_ptr<std::string> get_id() const { return id; }
        void set_id(std::shared_ptr<std::string> value) { this->id = std::move(value); }
    };

    class download_element {
    public:
        download_element() = default;
        virtual ~download_element() = default;

    private:
        std::shared_ptr<std::string> url = nullptr;
        std::shared_ptr<bool> scd_required = nullptr;

    public:
        [[nodiscard]] std::shared_ptr<std::string> get_url() const { return url; }
        void set_url(std::shared_ptr<std::string> value) { this->url = std::move(value); }

        [[nodiscard]] std::shared_ptr<bool> get_scd_required() const { return scd_required; }
        void set_scd_required(std::shared_ptr<bool> value) { this->scd_required = std::move(value); }
    };

    class label {
    public:
        label() = default;
        virtual ~label() = default;

    private:
        std::shared_ptr<std::vector<std::string>> values = nullptr;

    public:
        [[nodiscard]] std::shared_ptr<std::vector<std::string>> get_values() const { return values; }
        void set_values(std::shared_ptr<std::vector<std::string>> value) { this->values = std::move(value); }
    };

    class release_release {
    public:
        release_release() = default;
        virtual ~release_release() = default;

    private:
        std::shared_ptr<std::string> product = nullptr;
        std::shared_ptr<std::string> id = nullptr;
        std::shared_ptr<std::map<std::string, label>> labels = nullptr;

    public:
        [[nodiscard]] std::shared_ptr<std::string> get_product() const { return product; }
        void set_product(std::shared_ptr<std::string> value) { this->product = std::move(value); }

        [[nodiscard]] std::shared_ptr<std::string> get_id() const { return id; }
        void set_id(std::shared_ptr<std::string> value) { this->id = std::move(value); }

        [[nodiscard]] std::shared_ptr<std::map<std::string, label>> get_labels() const { return labels; }
        void set_labels(std::shared_ptr<std::map<std::string, label>> value) { this->labels = std::move(value); }
    };

    class release_element {
    public:
        release_element() = default;
        virtual ~release_element() = default;

    private:
        std::shared_ptr<release_release> release = nullptr;
        std::shared_ptr<compat_version_element> compat_version = nullptr;
        std::shared_ptr<download_element> download = nullptr;

    public:
        [[nodiscard]] std::shared_ptr<release_release> get_release() const { return release; }
        void set_release(std::shared_ptr<release_release> value) { this->release = std::move(value); }

        [[nodiscard]] std::shared_ptr<compat_version_element> get_compat_version() const { return compat_version; }
        void set_compat_version(std::shared_ptr<compat_version_element> value) { this->compat_version = std::move(value); }

        [[nodiscard]] std::shared_ptr<download_element> get_download() const { return download; }
        void set_download(std::shared_ptr<download_element> value) { this->download = std::move(value); }
    };

    class version_set_model {
    public:
        version_set_model() = default;
        virtual ~version_set_model() = default;

    private:
        std::shared_ptr<std::vector<release_element>> releases = nullptr;

    public:
        [[nodiscard]] std::shared_ptr<std::vector<release_element>> get_releases() const { return releases; }
        void set_releases(std::shared_ptr<std::vector<release_element>> value) { this->releases = std::move(value); }
    };

    [[maybe_unused]] void from_json(const json &j, compat_version_element &x);
    [[maybe_unused]] void to_json(json &j, const compat_version_element &x);
    [[maybe_unused]] void from_json(const json &j, download_element &x);
    [[maybe_unused]] void to_json(json &j, const download_element &x);
    [[maybe_unused]] void from_json(const json &j, label &x);
    [[maybe_unused]] void to_json(json &j, const label &x);
    [[maybe_unused]] void from_json(const json &j, release_release &x);
    [[maybe_unused]] void to_json(json &j, const release_release &x);
    [[maybe_unused]] void from_json(const json &j, release_element &x);
    [[maybe_unused]] void to_json(json &j, const release_element &x);
    [[maybe_unused]] void from_json(const json &j, version_set_model &x);
    [[maybe_unused]] void to_json(json &j, const version_set_model &x);

    [[maybe_unused]] inline void from_json(const json &j, compat_version_element &x) {
        x.set_id(get_optional<std::string>(j, "id"));
    }

    [[maybe_unused]] inline void to_json(json &j, const compat_version_element &x) {
        j = json::object();
        j["id"] = x.get_id();
    }

    [[maybe_unused]] inline void from_json(const json &j, download_element &x) {
        x.set_url(get_optional<std::string>(j, "url"));
        x.set_scd_required(get_optional<bool>(j, "scd_required"));
    }

    [[maybe_unused]] inline void to_json(json &j, const download_element &x) {
        j = json::object();
        j["url"] = x.get_url();
        j["scd_required"] = x.get_scd_required();
    }

    [[maybe_unused]] inline void from_json(const json &j, label &x) {
        x.set_values(get_optional<std::vector<std::string>>(j, "values"));
    }

    [[maybe_unused]] inline void to_json(json &j, const label &x) {
        j = json::object();
        j["values"] = x.get_values();
    }

    [[maybe_unused]] inline void from_json(const json &j, release_release &x) {
        x.set_product(get_optional<std::string>(j, "product"));
        x.set_id(get_optional<std::string>(j, "id"));
        x.set_labels(get_optional<std::map<std::string, label>>(j, "labels"));
    }

    [[maybe_unused]] inline void to_json(json &j, const release_release &x) {
        j = json::object();
        j["product"] = x.get_product();
        j["id"] = x.get_id();
        j["labels"] = x.get_labels();
    }

    [[maybe_unused]] inline void from_json(const json &j, release_element &x) {
        x.set_release(get_optional<release_release>(j, "release"));
        x.set_compat_version(get_optional<compat_version_element>(j, "compat_version"));
        x.set_download(get_optional<download_element>(j, "download"));
    }

    [[maybe_unused]] inline void to_json(json &j, const release_element &x) {
        j = json::object();
        j["release"] = x.get_release();
        j["compat_version"] = x.get_compat_version();
        j["download"] = x.get_download();
    }

    [[maybe_unused]] inline void from_json(const json &j, version_set_model &x) {
        x.set_releases(get_optional<std::vector<release_element>>(j, "releases"));
    }

    [[maybe_unused]] inline void to_json(json &j, const version_set_model &x) {
        j = json::object();
        j["releases"] = x.get_releases();
    }
} // namespace yordle::sieve

//
// Created by Lilith on 2021-06-21.
//

#pragma once

#include <nlohmann/json.hpp>

#ifndef NLOHMANN_OPT_HELPER
#    define NLOHMANN_OPT_HELPER
namespace nlohmann {
    template<typename T>
    struct adl_serializer<std::shared_ptr<T>> {
        static void to_json(json &j, const std::shared_ptr<T> &opt) {
            if (!opt) j = nullptr;
            else
                j = *opt;
        }

        static std::shared_ptr<T> from_json(const json &j) {
            if (j.is_null()) return std::unique_ptr<T>();
            else
                return std::unique_ptr<T>(new T(j.get<T>()));
        }
    };
} // namespace nlohmann
#endif

namespace yordle::lcu::v1 {
    using nlohmann::json;

    template<typename T>
    inline std::shared_ptr<T> get_optional(const json &j, const char *property) {
        if (j.find(property) != j.end()) {
            return j.at(property).get<std::shared_ptr<T>>();
        }
        return std::shared_ptr<T>();
    }

    template<typename T>
    inline std::shared_ptr<T> get_optional(const json &j, std::string property) {
        return get_optional<T>(j, property.data());
    }

    enum class rarity_t {
        none,
        rare,
        epic,
        legendary,
        mythic,
        ultimate,
        rarity_default
    };

    struct regional_description {
        std::string region;
        std::string description;
    };

    struct regional_rarity {
        std::string region;
        int64_t rarity;
    };

    struct color_t {
        int64_t r;
        int64_t b;
        int64_t g;
        int64_t a;
    };

    inline void from_json(const json &j, yordle::lcu::v1::rarity_t &x) {
        if (j == "None")
            x = yordle::lcu::v1::rarity_t::none;
        else if (j == "Rare")
            x = yordle::lcu::v1::rarity_t::rare;
        else if (j == "Epic")
            x = yordle::lcu::v1::rarity_t::epic;
        else if (j == "Legendary")
            x = yordle::lcu::v1::rarity_t::legendary;
        else if (j == "Mythic")
            x = yordle::lcu::v1::rarity_t::mythic;
        else if (j == "Ultimate")
            x = yordle::lcu::v1::rarity_t::ultimate;
        else if (j == "Default")
            x = yordle::lcu::v1::rarity_t::rarity_default;
    }

    inline void to_json(json &j, const yordle::lcu::v1::rarity_t &x) {
        switch (x) {
            case yordle::lcu::v1::rarity_t::none:
                j = "None";
                break;
            case yordle::lcu::v1::rarity_t::rare:
                j = "Rare";
                break;
            case yordle::lcu::v1::rarity_t::epic:
                j = "Epic";
                break;
            case yordle::lcu::v1::rarity_t::legendary:
                j = "Legendary";
                break;
            case yordle::lcu::v1::rarity_t::mythic:
                j = "Mythic";
                break;
            case yordle::lcu::v1::rarity_t::ultimate:
                j = "Ultimate";
                break;
            case yordle::lcu::v1::rarity_t::rarity_default:
                j = "Default";
                break;
        }
    }

    inline void from_json(const json &j, yordle::lcu::v1::regional_description &x) {
        x.region      = j.at("region").get<std::string>();
        x.description = j.at("description").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::regional_description &x) {
        j                = json::object();
        j["region"]      = x.region;
        j["description"] = x.description;
    }

    inline void from_json(const json &j, yordle::lcu::v1::regional_rarity &x) {
        x.region = j.at("region").get<std::string>();
        x.rarity = j.at("rarity").get<int64_t>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::regional_rarity &x) {
        j           = json::object();
        j["region"] = x.region;
        j["rarity"] = x.rarity;
    }

    inline void from_json(const json &j, yordle::lcu::v1::color_t &x) {
        x.r = j.at("R").get<int64_t>();
        x.b = j.at("B").get<int64_t>();
        x.g = j.at("G").get<int64_t>();
        x.a = j.at("A").get<int64_t>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::color_t &x) {
        j      = json::object();
        j["R"] = x.r;
        j["B"] = x.b;
        j["G"] = x.g;
        j["A"] = x.a;
    }
} // namespace yordle::lcu::v1

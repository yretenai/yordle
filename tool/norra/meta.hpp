//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     meta data = nlohmann::json::parse(jsonString);

#pragma once

#include <nlohmann/json.hpp>

#include <yordle/data/prop/empty_prop.hpp>


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

namespace norra::meta {
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

    struct container_i {
        yordle::data::prop::prop_type type;
    };

    struct map_i {
        yordle::data::prop::prop_type key;
        yordle::data::prop::prop_type value;
    };

    struct property {
        int64_t bitmask;
        std::shared_ptr<container_i> container_i;
        uint64_t hash;
        std::shared_ptr<map_i> map_i;
        yordle::data::prop::prop_type type;
        uint64_t other_class;
    };

    struct class_element {
        uint64_t hash;
        uint64_t parent_class;
        std::vector<property> properties;
        std::vector<std::vector<uint64_t>> secondary_bases;
        std::vector<std::vector<uint64_t>> secondary_children;
    };

    struct meta {
        std::vector<class_element> classes;
        std::string version;
    };

    void from_json(const json &j, norra::meta::container_i &x);
    void to_json(json &j, const norra::meta::container_i &x);

    void from_json(const json &j, norra::meta::map_i &x);
    void to_json(json &j, const norra::meta::map_i &x);

    void from_json(const json &j, norra::meta::property &x);
    void to_json(json &j, const norra::meta::property &x);

    void from_json(const json &j, norra::meta::class_element &x);
    void to_json(json &j, const norra::meta::class_element &x);

    void from_json(const json &j, norra::meta::meta &x);
    void to_json(json &j, const norra::meta::meta &x);

    inline void from_json(const json &j, norra::meta::container_i &x) {
        x.type = j.at("type").get<yordle::data::prop::prop_type>();
    }

    inline void to_json(json &j, const norra::meta::container_i &x) {
        j         = json::object();
        j["type"] = x.type;
    }

    inline void from_json(const json &j, norra::meta::map_i &x) {
        x.key   = j.at("key").get<yordle::data::prop::prop_type>();
        x.value = j.at("value").get<yordle::data::prop::prop_type>();
    }

    inline void to_json(json &j, const norra::meta::map_i &x) {
        j          = json::object();
        j["key"]   = x.key;
        j["value"] = x.value;
    }

    inline void from_json(const json &j, norra::meta::property &x) {
        x.bitmask     = j.at("bitmask").get<int64_t>();
        x.container_i = norra::meta::get_optional<norra::meta::container_i>(j, "containerI");
        x.hash        = j.at("hash").get<uint64_t>();
        x.map_i       = norra::meta::get_optional<norra::meta::map_i>(j, "mapI");
        x.type        = j.at("type").get<yordle::data::prop::prop_type>();
        x.other_class = j.at("otherClass").get<uint64_t>();
    }

    inline void to_json(json &j, const norra::meta::property &x) {
        j               = json::object();
        j["bitmask"]    = x.bitmask;
        j["containerI"] = x.container_i;
        j["hash"]       = x.hash;
        j["mapI"]       = x.map_i;
        j["type"]       = x.type;
        j["otherClass"] = x.other_class;
    }

    inline void from_json(const json &j, norra::meta::class_element &x) {
        x.hash               = j.at("hash").get<uint64_t>();
        x.parent_class       = j.at("parentClass").get<uint64_t>();
        x.properties         = j.at("properties").get<std::vector<norra::meta::property>>();
        x.secondary_bases    = j.at("secondaryBases").get<std::vector<std::vector<uint64_t>>>();
        x.secondary_children = j.at("secondaryChildren").get<std::vector<std::vector<uint64_t>>>();
    }

    inline void to_json(json &j, const norra::meta::class_element &x) {
        j                      = json::object();
        j["hash"]              = x.hash;
        j["parentClass"]       = x.parent_class;
        j["properties"]        = x.properties;
        j["secondaryBases"]    = x.secondary_bases;
        j["secondaryChildren"] = x.secondary_children;
    }

    inline void from_json(const json &j, norra::meta::meta &x) {
        x.classes = j.at("classes").get<std::vector<norra::meta::class_element>>();
        x.version = j.at("version").get<std::string>();
    }

    inline void to_json(json &j, const norra::meta::meta &x) {
        j            = json::object();
        j["classes"] = x.classes;
        j["version"] = x.version;
    }
} // namespace norra::meta

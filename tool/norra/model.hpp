#pragma once

#include <nlohmann/json.hpp>

#ifndef NLOHMANN_OPT_HELPER
#define NLOHMANN_OPT_HELPER
namespace nlohmann {
    template <typename T>
    struct adl_serializer<std::shared_ptr<T>> {
        static void to_json(json & j, const std::shared_ptr<T> & opt) {
            if (!opt) j = nullptr; else j = *opt;
        }

        static std::shared_ptr<T> from_json(const json & j) {
            if (j.is_null()) return std::unique_ptr<T>(); else return std::unique_ptr<T>(new T(j.get<T>()));
        }
    };
}
#endif

namespace norra::model {
    using nlohmann::json;

    inline json get_untyped(const json & j, const char * property) {
        if (j.find(property) != j.end()) {
            return j.at(property).get<json>();
        }
        return json();
    }

    inline json get_untyped(const json & j, std::string property) {
        return get_untyped(j, property.data());
    }

    template <typename T>
    inline std::shared_ptr<T> get_optional(const json & j, const char * property) {
        if (j.find(property) != j.end()) {
            return j.at(property).get<std::shared_ptr<T>>();
        }
        return std::shared_ptr<T>();
    }

    template <typename T>
    inline std::shared_ptr<T> get_optional(const json & j, std::string property) {
        return get_optional<T>(j, property.data());
    }

    struct fn {
        std::shared_ptr<std::string> constructor;
        std::string destructor;
        std::shared_ptr<std::string> inplace_constructor;
        std::string inplace_destructor;
        std::shared_ptr<std::string> fn_register;
        std::shared_ptr<std::string> upcast_secondary;
    };

    struct is {
        bool interface;
        bool property_base;
        bool secondary_base;
        bool unk5;
        bool value;
    };

    enum class container_storage : int { fixed, rito_vector, std_vector };

    enum class type : int { color, embed, f32, file, flag, hash, i16, i32, i64, i8, link, list, list2, map, mtx44, option, pointer, string, type_bool, u16, u32, u64, u8, vec2, vec3, vec4 };

    struct container {
        std::shared_ptr<int64_t> fixed_size;
        std::shared_ptr<container_storage> storage;
        int64_t value_size;
        type value_type;
        std::string vtable;
    };

    enum class map_storage : int { std_map, std_unordered_map };

    struct map {
        type key_type;
        map_storage storage;
        type value_type;
        std::string vtable;
    };

    struct property {
        int64_t bitmask;
        std::shared_ptr<container> container;
        std::shared_ptr<map> map;
        int64_t offset;
        std::shared_ptr<std::string> other_class;
        type value_type;
    };

    struct class_value {
        int64_t alignment;
        std::shared_ptr<std::string> base;
        std::shared_ptr<std::map<std::string, json>> defaults;
        fn fn;
        is is;
        std::map<std::string, property> properties;
        std::map<std::string, int64_t> secondary_bases;
        std::map<std::string, int64_t> secondary_children;
        int64_t size;
    };

    struct league_meta {
        std::map<std::string, class_value> classes;
        std::string version;
    };
}

namespace nlohmann {
    void from_json(const json & j, norra::model::fn & x);
    void to_json(json & j, const norra::model::fn & x);

    void from_json(const json & j, norra::model::is & x);
    void to_json(json & j, const norra::model::is & x);

    void from_json(const json & j, norra::model::container & x);
    void to_json(json & j, const norra::model::container & x);

    void from_json(const json & j, norra::model::map & x);
    void to_json(json & j, const norra::model::map & x);

    void from_json(const json & j, norra::model::property & x);
    void to_json(json & j, const norra::model::property & x);

    void from_json(const json & j, norra::model::class_value & x);
    void to_json(json & j, const norra::model::class_value & x);

    void from_json(const json & j, norra::model::league_meta & x);
    void to_json(json & j, const norra::model::league_meta & x);

    void from_json(const json & j, norra::model::container_storage & x);
    void to_json(json & j, const norra::model::container_storage & x);

    void from_json(const json & j, norra::model::type & x);
    void to_json(json & j, const norra::model::type & x);

    void from_json(const json & j, norra::model::map_storage & x);
    void to_json(json & j, const norra::model::map_storage & x);

    inline void from_json(const json & j, norra::model::fn& x) {
        x.constructor = norra::model::get_optional<std::string>(j, "constructor");
        x.destructor = j.at("destructor").get<std::string>();
        x.inplace_constructor = norra::model::get_optional<std::string>(j, "inplace_constructor");
        x.inplace_destructor = j.at("inplace_destructor").get<std::string>();
        x.fn_register = norra::model::get_optional<std::string>(j, "register");
        x.upcast_secondary = norra::model::get_optional<std::string>(j, "upcast_secondary");
    }

    inline void to_json(json & j, const norra::model::fn & x) {
        j = json::object();
        j["constructor"] = x.constructor;
        j["destructor"] = x.destructor;
        j["inplace_constructor"] = x.inplace_constructor;
        j["inplace_destructor"] = x.inplace_destructor;
        j["register"] = x.fn_register;
        j["upcast_secondary"] = x.upcast_secondary;
    }

    inline void from_json(const json & j, norra::model::is& x) {
        x.interface = j.at("interface").get<bool>();
        x.property_base = j.at("property_base").get<bool>();
        x.secondary_base = j.at("secondary_base").get<bool>();
        x.unk5 = j.at("unk5").get<bool>();
        x.value = j.at("value").get<bool>();
    }

    inline void to_json(json & j, const norra::model::is & x) {
        j = json::object();
        j["interface"] = x.interface;
        j["property_base"] = x.property_base;
        j["secondary_base"] = x.secondary_base;
        j["unk5"] = x.unk5;
        j["value"] = x.value;
    }

    inline void from_json(const json & j, norra::model::container& x) {
        x.fixed_size = norra::model::get_optional<int64_t>(j, "fixed_size");
        x.storage = norra::model::get_optional<norra::model::container_storage>(j, "storage");
        x.value_size = j.at("value_size").get<int64_t>();
        x.value_type = j.at("value_type").get<norra::model::type>();
        x.vtable = j.at("vtable").get<std::string>();
    }

    inline void to_json(json & j, const norra::model::container & x) {
        j = json::object();
        j["fixed_size"] = x.fixed_size;
        j["storage"] = x.storage;
        j["value_size"] = x.value_size;
        j["value_type"] = x.value_type;
        j["vtable"] = x.vtable;
    }

    inline void from_json(const json & j, norra::model::map& x) {
        x.key_type = j.at("key_type").get<norra::model::type>();
        x.storage = j.at("storage").get<norra::model::map_storage>();
        x.value_type = j.at("value_type").get<norra::model::type>();
        x.vtable = j.at("vtable").get<std::string>();
    }

    inline void to_json(json & j, const norra::model::map & x) {
        j = json::object();
        j["key_type"] = x.key_type;
        j["storage"] = x.storage;
        j["value_type"] = x.value_type;
        j["vtable"] = x.vtable;
    }

    inline void from_json(const json & j, norra::model::property& x) {
        x.bitmask = j.at("bitmask").get<int64_t>();
        x.container = norra::model::get_optional<norra::model::container>(j, "container");
        x.map = norra::model::get_optional<norra::model::map>(j, "map");
        x.offset = j.at("offset").get<int64_t>();
        x.other_class = norra::model::get_optional<std::string>(j, "other_class");
        x.value_type = j.at("value_type").get<norra::model::type>();
    }

    inline void to_json(json & j, const norra::model::property & x) {
        j = json::object();
        j["bitmask"] = x.bitmask;
        j["container"] = x.container;
        j["map"] = x.map;
        j["offset"] = x.offset;
        j["other_class"] = x.other_class;
        j["value_type"] = x.value_type;
    }

    inline void from_json(const json & j, norra::model::class_value& x) {
        x.alignment = j.at("alignment").get<int64_t>();
        x.base = norra::model::get_optional<std::string>(j, "base");
        x.defaults = norra::model::get_optional<std::map<std::string, json>>(j, "defaults");
        x.fn = j.at("fn").get<norra::model::fn>();
        x.is = j.at("is").get<norra::model::is>();
        x.properties = j.at("properties").get<std::map<std::string, norra::model::property>>();
        x.secondary_bases = j.at("secondary_bases").get<std::map<std::string, int64_t>>();
        x.secondary_children = j.at("secondary_children").get<std::map<std::string, int64_t>>();
        x.size = j.at("size").get<int64_t>();
    }

    inline void to_json(json & j, const norra::model::class_value & x) {
        j = json::object();
        j["alignment"] = x.alignment;
        j["base"] = x.base;
        j["defaults"] = x.defaults;
        j["fn"] = x.fn;
        j["is"] = x.is;
        j["properties"] = x.properties;
        j["secondary_bases"] = x.secondary_bases;
        j["secondary_children"] = x.secondary_children;
        j["size"] = x.size;
    }

    inline void from_json(const json & j, norra::model::league_meta& x) {
        x.classes = j.at("classes").get<std::map<std::string, norra::model::class_value>>();
        x.version = j.at("version").get<std::string>();
    }

    inline void to_json(json & j, const norra::model::league_meta & x) {
        j = json::object();
        j["classes"] = x.classes;
        j["version"] = x.version;
    }

    inline void from_json(const json & j, norra::model::container_storage & x) {
        if (j == "Fixed") x = norra::model::container_storage::fixed;
        else if (j == "RitoVector") x = norra::model::container_storage::rito_vector;
        else if (j == "StdVector") x = norra::model::container_storage::std_vector;
        else throw "Input JSON does not conform to schema";
    }

    inline void to_json(json & j, const norra::model::container_storage & x) {
        switch (x) {
            case norra::model::container_storage::fixed: j = "Fixed"; break;
            case norra::model::container_storage::rito_vector: j = "RitoVector"; break;
            case norra::model::container_storage::std_vector: j = "StdVector"; break;
            default: throw "This should not happen";
        }
    }

    inline void from_json(const json & j, norra::model::type & x) {
        static std::unordered_map<std::string, norra::model::type> enumValues {
            {"Color", norra::model::type::color},
            {"Embed", norra::model::type::embed},
            {"F32", norra::model::type::f32},
            {"File", norra::model::type::file},
            {"Flag", norra::model::type::flag},
            {"Hash", norra::model::type::hash},
            {"I16", norra::model::type::i16},
            {"I32", norra::model::type::i32},
            {"I64", norra::model::type::i64},
            {"I8", norra::model::type::i8},
            {"Link", norra::model::type::link},
            {"List", norra::model::type::list},
            {"List2", norra::model::type::list2},
            {"Map", norra::model::type::map},
            {"Mtx44", norra::model::type::mtx44},
            {"Option", norra::model::type::option},
            {"Pointer", norra::model::type::pointer},
            {"String", norra::model::type::string},
            {"Bool", norra::model::type::type_bool},
            {"U16", norra::model::type::u16},
            {"U32", norra::model::type::u32},
            {"U64", norra::model::type::u64},
            {"U8", norra::model::type::u8},
            {"Vec2", norra::model::type::vec2},
            {"Vec3", norra::model::type::vec3},
            {"Vec4", norra::model::type::vec4},
        };
        auto iter = enumValues.find(j.get<std::string>());
        if (iter != enumValues.end()) {
            x = iter->second;
        }
    }

    inline void to_json(json & j, const norra::model::type & x) {
        switch (x) {
            case norra::model::type::color: j = "Color"; break;
            case norra::model::type::embed: j = "Embed"; break;
            case norra::model::type::f32: j = "F32"; break;
            case norra::model::type::file: j = "File"; break;
            case norra::model::type::flag: j = "Flag"; break;
            case norra::model::type::hash: j = "Hash"; break;
            case norra::model::type::i16: j = "I16"; break;
            case norra::model::type::i32: j = "I32"; break;
            case norra::model::type::i64: j = "I64"; break;
            case norra::model::type::i8: j = "I8"; break;
            case norra::model::type::link: j = "Link"; break;
            case norra::model::type::list: j = "List"; break;
            case norra::model::type::list2: j = "List2"; break;
            case norra::model::type::map: j = "Map"; break;
            case norra::model::type::mtx44: j = "Mtx44"; break;
            case norra::model::type::option: j = "Option"; break;
            case norra::model::type::pointer: j = "Pointer"; break;
            case norra::model::type::string: j = "String"; break;
            case norra::model::type::type_bool: j = "Bool"; break;
            case norra::model::type::u16: j = "U16"; break;
            case norra::model::type::u32: j = "U32"; break;
            case norra::model::type::u64: j = "U64"; break;
            case norra::model::type::u8: j = "U8"; break;
            case norra::model::type::vec2: j = "Vec2"; break;
            case norra::model::type::vec3: j = "Vec3"; break;
            case norra::model::type::vec4: j = "Vec4"; break;
            default: throw "This should not happen";
        }
    }

    inline void from_json(const json & j, norra::model::map_storage & x) {
        if (j == "StdMap") x = norra::model::map_storage::std_map;
        else if (j == "StdUnorderedMap") x = norra::model::map_storage::std_unordered_map;
        else throw "Input JSON does not conform to schema";
    }

    inline void to_json(json & j, const norra::model::map_storage & x) {
        switch (x) {
            case norra::model::map_storage::std_map: j = "StdMap"; break;
            case norra::model::map_storage::std_unordered_map: j = "StdUnorderedMap"; break;
            default: throw "This should not happen";
        }
    }
}

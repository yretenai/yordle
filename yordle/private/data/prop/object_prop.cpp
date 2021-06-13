//
// Created by Lilith on 2021-06-08.
//

#include <standard_dragon/exception/not_implemented.hpp>

#include <yordle/data/prop/inline_structure_prop.hpp>
#include <yordle/data/prop/map_prop.hpp>
#include <yordle/data/prop/object_prop.hpp>
#include <yordle/data/prop/optional_prop.hpp>
#include <yordle/data/prop/primitive_array_prop.hpp>
#include <yordle/data/prop/primitive_prop.hpp>
#include <yordle/data/prop/set_prop.hpp>
#include <yordle/data/prop/string_prop.hpp>
#include <yordle/data/prop/unordered_set_prop.hpp>

using namespace std;
using namespace dragon;
using namespace dragon::exception;
using namespace nlohmann;

namespace yordle::data::prop {
    object_prop::object_prop(Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) {
        key = key_hash;

        auto size  = buffer.lpcast<uint32_t>(ptr);
        path_hash  = buffer.cast<uint32_t>(ptr);
        auto count = buffer.cast<uint16_t>(ptr + 4);

        auto ptr_shadow = ptr + 6;
        for (auto i = 0; i < count; ++i) {
            auto prop             = read_prop(buffer, ptr_shadow, version, {}, {});
            properties[prop->key] = prop;
        }

        ptr += size;
    }

    shared_ptr<empty_prop> object_prop::read_prop(Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, optional<uint32_t> key_hash, optional<prop_type> type) {
        if (!key_hash.has_value()) {
            key_hash = buffer.lpcast<uint32_t>(ptr);
        }

        if (!type.has_value()) {
            type = buffer.lpcast<prop_type>(ptr);
        }

        // if i ever change the signature of the constructor i'm doomed.
        if (type == prop_type::null) {
            return make_shared<empty_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::boolean) {
            return make_shared<bool_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::int8) {
            return make_shared<int8_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::uint8) {
            return make_shared<uint8_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::int16) {
            return make_shared<int16_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::uint16) {
            return make_shared<uint16_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::int32) {
            return make_shared<int32_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::uint32) {
            return make_shared<uint32_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::int64) {
            return make_shared<int64_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::uint64) {
            return make_shared<uint64_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::float32) {
            return make_shared<float32_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::point) {
            return make_shared<point_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::vector) {
            return make_shared<vector_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::quaternion) {
            return make_shared<quaternion_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::matrix) {
            return make_shared<matrix_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::color) {
            return make_shared<color_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::string) {
            return make_shared<string_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::fnv_hash) {
            return make_shared<fnv_hash_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::xx_hash) {
            return make_shared<xx_hash_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::set) {
            return make_shared<set_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::unordered_set) {
            return make_shared<unordered_set_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::structure) {
            return make_shared<structure_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::inline_structure) {
            return make_shared<inline_structure_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::reference) {
            return make_shared<reference_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::optional) {
            return make_shared<optional_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::map) {
            return make_shared<map_prop>(buffer, ptr, version, key_hash.value());
        } else if (type == prop_type::bit) {
            return make_shared<bit_prop>(buffer, ptr, version, key_hash.value());
        }

        throw not_implemented("property type is not implemented");
    }

    void object_prop::to_json(nlohmann::json &json, const yordle::cdtb::fnvhashlist &hash_list, const yordle::cdtb::xxhashlist &file_hash_list, std::optional<std::string> obj_key, bool store_type_info) const {
        if (!obj_key.has_value()) {
            obj_key = hash_list.get_string(path_hash);
        }

        nlohmann::json obj = nlohmann::json::object();
        obj["type"]        = hash_list.get_string(key);

        nlohmann::json data_obj = nlohmann::json::object();
        for (const auto &property : properties) {
            property.second->to_json(data_obj, hash_list, file_hash_list, {}, store_type_info);
        }
        obj["data"] = data_obj;

        json[obj_key.value()] = obj;
    }
} // namespace yordle::data::prop

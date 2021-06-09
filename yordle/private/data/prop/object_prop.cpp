//
// Created by Lilith on 2021-06-08.
//

#include <yordle/data/prop/object_prop.hpp>

#include <yordle/data/prop/primitive_array_prop.hpp>
#include <yordle/data/prop/primitive_prop.hpp>
#include <yordle/data/prop/string_prop.hpp>

using namespace std;
using namespace dragon;

namespace yordle::data::prop {
    object_prop::object_prop(Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : empty_prop(buffer, ptr, version, key_hash) {
        auto data_start = reinterpret_cast<uintptr_t>(&byte_size);
#ifndef NDEBUG
        auto data_end = reinterpret_cast<uintptr_t>(&property_count) + sizeof(uint16_t);
        assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

        buffer.copy(data_start, ptr, EXPECTED_DATA_SIZE);
        auto ptr_shadow = ptr + EXPECTED_DATA_SIZE;

        auto props = map<uint32_t, shared_ptr<empty_prop>>();
        for (auto i = 0; i < property_count; ++i) {
            auto prop        = read_prop(buffer, ptr_shadow, version, {}, {});
            props[prop->key] = prop;
        }
        value = props;

        ptr += 4 + byte_size;
    }

    shared_ptr<empty_prop> object_prop::read_prop(Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, optional<uint32_t> key_hash, optional<prop_type> type) {
        if (!key_hash.has_value()) {
            key_hash = buffer.lpcast<uint32_t>(&ptr);
        }

        if (!type.has_value()) {
            type = buffer.lpcast<prop_type>(&ptr);
        }

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
        }

        return nullptr;
    }
} // namespace yordle::data::prop

//
// Created by Lilith on 2021-06-08.
//

#pragma once

#include <standard_dragon/Array.hpp>

#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::prop {
    template<typename T, prop_type P, size_t S>
    class YORDLE_EXPORT primitive_array_prop : public empty_prop {
    public:
        explicit primitive_array_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : empty_prop(buffer, ptr, version, key_hash) {
            type     = P;
            auto arr = std::array<T, S>();
            buffer.copy(reinterpret_cast<uintptr_t>(arr.data()), ptr, sizeof(T) * S);
            value = arr;
            ptr += sizeof(T) * S;
        }

        void to_json(nlohmann::json &json, const yordle::cdtb::fnvhashlist &hash_list, const yordle::cdtb::xxhashlist &file_hash_list, std::optional<std::string> obj_key, bool store_type_info) const override {
            if (!obj_key.has_value()) {
                obj_key = hash_list.get_string(key);
            }

            if (store_type_info) {
                if (!value.has_value()) {
                    json[obj_key.value()] = {{"type", prop_type_name[type]}, {"value", nullptr}};
                } else {
                    json[obj_key.value()] = {{"type", prop_type_name[type]}, {"value", std::any_cast<std::array<T, S>>(value)}};
                }
            } else {
                if (!value.has_value()) {
                    json[obj_key.value()] = nullptr;
                } else {
                    json[obj_key.value()] = std::any_cast<std::array<T, S>>(value);
                }
            }
        }
    };

    DRAGON_ASSERT(sizeof(float) == 4, "float size is not 4");
    using point_prop      = primitive_array_prop<float, prop_type::point, 2>;
    using vector_prop     = primitive_array_prop<float, prop_type::vector, 3>;
    using quaternion_prop = primitive_array_prop<float, prop_type::quaternion, 4>;
    using matrix_prop     = primitive_array_prop<float, prop_type::matrix, 16>;
    using color_prop      = primitive_array_prop<uint8_t, prop_type::color, 4>;
} // namespace yordle::data::prop

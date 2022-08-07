#pragma once

#include <standard_dragon/Array.hpp>

#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::prop {
    template<typename T, prop_type P>
    class YORDLE_EXPORT primitive_prop : public empty_prop {
    public:
        static constexpr prop_type TYPE = P;

        explicit primitive_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : empty_prop(buffer, ptr, version, key_hash) {
            type  = P;
            value = buffer.lpcast<T>(ptr);
        }

        T value;

        void to_json(nlohmann::json &json, const yordle::cdtb::hashlist_collection &hashes, std::optional<std::string> obj_key, bool store_type_info) const override {
            if (!obj_key.has_value()) {
                obj_key = hashes.get_fnvhash(key, yordle::cdtb::hashlist_target::prop_field);
            }

            // this is super inefficient, move fnv, xx, and reference to their own classes.
            if (store_type_info) {
                if (type == prop_type::fnv_hash || type == prop_type::reference) {
                    json[obj_key.value()] = {{"type", prop_type_name[type]}, {"value", hashes.get_fnvhash(value)}};
                } else if (type == prop_type::xx_hash) {
                    json[obj_key.value()] = {{"type", prop_type_name[type]}, {"value", hashes.get_xxhash(value)}};
                } else {
                    json[obj_key.value()] = {{"type", prop_type_name[type]}, {"value", value}};
                }
            } else {
                if (type == prop_type::fnv_hash || type == prop_type::reference) {
                    json[obj_key.value()] = hashes.get_fnvhash(value);
                } else if (type == prop_type::xx_hash) {
                    json[obj_key.value()] = hashes.get_xxhash(value);
                } else {
                    json[obj_key.value()] = value;
                }
            }
        }
    };

    DRAGON_ASSERT(sizeof(bool) == 1, "bool size is not 1");
    DRAGON_ASSERT(sizeof(float) == 4, "float size is not 4");
    using bool_prop      = primitive_prop<bool, prop_type::boolean>;
    using int8_prop      = primitive_prop<int8_t, prop_type::int8>;
    using uint8_prop     = primitive_prop<uint8_t, prop_type::uint8>;
    using int16_prop     = primitive_prop<int16_t, prop_type::int16>;
    using uint16_prop    = primitive_prop<uint16_t, prop_type::uint16>;
    using int32_prop     = primitive_prop<int32_t, prop_type::int32>;
    using uint32_prop    = primitive_prop<uint32_t, prop_type::uint32>;
    using int64_prop     = primitive_prop<int64_t, prop_type::int64>;
    using uint64_prop    = primitive_prop<uint64_t, prop_type::uint64>;
    using float32_prop   = primitive_prop<float, prop_type::float32>;
    using fnv_hash_prop  = primitive_prop<uint32_t, prop_type::fnv_hash>;
    using xx_hash_prop   = primitive_prop<uint64_t, prop_type::xx_hash>;
    using reference_prop = primitive_prop<uint32_t, prop_type::reference>;
    using bit_prop       = primitive_prop<uint8_t, prop_type::bit>;
} // namespace yordle::data::prop

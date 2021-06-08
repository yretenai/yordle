//
// Created by Lilith on 2021-06-08.
//

#pragma once

#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::prop {
    template<typename T, prop_type P>
    class YORDLE_EXPORT primitive_prop : public empty_prop {
    public:
        explicit primitive_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t key_hash) : empty_prop(buffer, ptr, key_hash) {
            value = buffer.lpcast<T>(ptr);
        }

        prop_type type = P;

        void to_json(nlohmann::json json, const yordle::cdtb::fnvhashlist &hashlist) const override {
            json[hashlist.get_string(key)] = std::any_cast<T>(value);
        }
    };

    class YORDLE_EXPORT bool_prop : primitive_prop<bool, prop_type::boolean> { };
    class YORDLE_EXPORT int8_prop : primitive_prop<int8_t, prop_type::int8> { };
    class YORDLE_EXPORT uint8_prop : primitive_prop<uint8_t, prop_type::uint8> { };
    class YORDLE_EXPORT int16_prop : primitive_prop<int16_t, prop_type::int16> { };
    class YORDLE_EXPORT uint16_prop : primitive_prop<uint16_t, prop_type::uint16> { };
    class YORDLE_EXPORT int32_prop : primitive_prop<int32_t, prop_type::int32> { };
    class YORDLE_EXPORT uint32_prop : primitive_prop<uint32_t, prop_type::uint32> { };
    class YORDLE_EXPORT int64_prop : primitive_prop<int32_t, prop_type::int64> { };
    class YORDLE_EXPORT uint64_prop : primitive_prop<uint32_t, prop_type::uint64> { };
} // namespace yordle::data::prop

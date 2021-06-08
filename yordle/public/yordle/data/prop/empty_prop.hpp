//
// Created by Lilith on 2021-06-08.
//

#pragma once

#include <any>
#include <cstdint>

#include <nlohmann/json.hpp>

#include <standard_dragon/Array.hpp>

#include <yordle/yordle_export.h>

namespace yordle::data::prop {
#pragma pack(push, 1)
    static constexpr uint8_t COMPLEX_PROPERTY_TYPE = 1 << 7;

    typedef enum class PROPERTY_TYPE : uint8_t {
        null       = 0,
        boolean    = 1,
        int8       = 2,
        uint8      = 3,
        int16      = 4,
        uint16     = 5,
        int32      = 6,
        uint32     = 7,
        int64      = 8,
        uint64     = 9,
        float32    = 10,
        float32x2  = 11,
        float32x3  = 12,
        float32x4  = 13,
        float32x16 = 14,
        uint8x4    = 15,
        string     = 16,
        hash       = 17,
        file       = 18,

        vector           = COMPLEX_PROPERTY_TYPE | 0,
        unordered_vector = COMPLEX_PROPERTY_TYPE | 1,
        structure        = COMPLEX_PROPERTY_TYPE | 2,
        inline_structure = COMPLEX_PROPERTY_TYPE | 3,
        reference        = COMPLEX_PROPERTY_TYPE | 4,
        optional         = COMPLEX_PROPERTY_TYPE | 5,
        map              = COMPLEX_PROPERTY_TYPE | 6,
        bit              = COMPLEX_PROPERTY_TYPE | 7
    } prop_type;
#pragma pack(pop)

    class YORDLE_EXPORT empty_prop {
    public:
        explicit empty_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t key_hash) : key(key_hash) {
        }

        uint32_t key;
        prop_type type = prop_type::null;
        std::any value;

        virtual void to_json(nlohmann::json json, const yordle::cdtb::fnvhashlist &hashlist) const {
            json[hashlist.get_string(key)] = nullptr;
        }
    };
} // namespace yordle::data::prop

//
// Created by Lilith on 2021-06-08.
//

#pragma once

#include <any>
#include <cstdint>

#include <nlohmann/json.hpp>

#include <standard_dragon/Array.hpp>

#include <yordle/cdtb/fnvhashlist.hpp>
#include <yordle/cdtb/xxhashlist.hpp>
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
        point      = 11,
        vector     = 12,
        quaternion = 13,
        matrix     = 14,
        color      = 15,
        string     = 16,
        fnv_hash   = 17,
        xx_hash    = 18,

        set              = COMPLEX_PROPERTY_TYPE | 0,
        unordered_set    = COMPLEX_PROPERTY_TYPE | 1,
        structure        = COMPLEX_PROPERTY_TYPE | 2,
        inline_structure = COMPLEX_PROPERTY_TYPE | 3,
        reference        = COMPLEX_PROPERTY_TYPE | 4,
        optional         = COMPLEX_PROPERTY_TYPE | 5,
        map              = COMPLEX_PROPERTY_TYPE | 6,
        bit              = COMPLEX_PROPERTY_TYPE | 7
    } prop_type;
#pragma pack(pop)
    DRAGON_ASSERT(sizeof(prop_type) == 1);

    class YORDLE_EXPORT empty_prop {
    public:
        explicit empty_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : key(key_hash) {
        }

        uint32_t key;
        prop_type type = prop_type::null;
        std::any value;

        virtual void to_json(nlohmann::json json, const yordle::cdtb::fnvhashlist &hash_list, const yordle::cdtb::xxhashlist &file_hash_list) const {
            json[hash_list.get_string(key)] = nullptr;
        }
    };
} // namespace yordle::data::prop

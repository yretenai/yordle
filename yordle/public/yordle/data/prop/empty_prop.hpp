//
// Created by Lilith on 2021-06-08.
//

#pragma once

#include <cstdint>

#include <nlohmann/json.hpp>

#include <standard_dragon/Array.hpp>

#include <optional>
#include <yordle/cdtb/fnvhashlist.hpp>
#include <yordle/cdtb/hashlist.hpp>
#include <yordle/cdtb/xxhashlist.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::prop {
#pragma pack(push, 1)
    static constexpr uint8_t COMPLEX_PROPERTY_TYPE = 1 << 7;

    using prop_type = enum class PROPERTY_TYPE : uint8_t {
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
    };
#pragma pack(pop)
    DRAGON_ASSERT(sizeof(prop_type) == 1, "prop_type size is not 1");

    static std::map<prop_type, std::string> prop_type_name {
        {prop_type::null, "null"},
        {prop_type::boolean, "boolean"},
        {prop_type::int8, "int8"},
        {prop_type::uint8, "uint8"},
        {prop_type::int16, "int16"},
        {prop_type::uint16, "uint16"},
        {prop_type::int32, "int32"},
        {prop_type::uint32, "uint32"},
        {prop_type::int64, "int64"},
        {prop_type::uint64, "uint64"},
        {prop_type::float32, "float32"},
        {prop_type::point, "point"},
        {prop_type::vector, "vector"},
        {prop_type::quaternion, "quaternion"},
        {prop_type::matrix, "matrix"},
        {prop_type::color, "color"},
        {prop_type::string, "string"},
        {prop_type::fnv_hash, "fnv_hash"},
        {prop_type::xx_hash, "xx_hash"},
        {prop_type::set, "set"},
        {prop_type::unordered_set, "unordered_set"},
        {prop_type::structure, "structure"},
        {prop_type::inline_structure, "inline_structure"},
        {prop_type::reference, "reference"},
        {prop_type::optional, "optional"},
        {prop_type::map, "map"},
        {prop_type::bit, "bit"},
    };

    class YORDLE_EXPORT empty_prop {
    public:
        static constexpr prop_type TYPE = prop_type::null;

        explicit empty_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, [[maybe_unused]] uint32_t version, uint32_t key_hash) : key(key_hash) {
        }

        uint32_t key;
        prop_type type = prop_type::null;

        template<typename T>
        static typename std::enable_if<std::is_base_of<empty_prop, T>::value, std::shared_ptr<T>>::type cast_prop(std::shared_ptr<empty_prop> &prop) {
            if (prop->type != T::TYPE) {
                return nullptr;
            }

            return std::reinterpret_pointer_cast<T>(prop);
        }

        virtual void to_json(nlohmann::json &json, const yordle::cdtb::hashlist_collection &hashes, std::optional<std::string> obj_key, bool store_type_info) const {
            if (!obj_key.has_value()) {
                obj_key = hashes.get_fnvhash(key, yordle::cdtb::hashlist_target::prop_field);
            }

            if (store_type_info) {
                json[obj_key.value()] = {{"type", prop_type_name[type]}, {"value", nullptr}};
            } else {
                json[obj_key.value()] = nullptr;
            }
        }
    };
} // namespace yordle::data::prop

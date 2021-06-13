//
// Created by Lilith on 2021-06-08.
//

#pragma once

#include <memory>
#include <optional>
#include <set>

#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::prop {
    class YORDLE_EXPORT object_prop {
    public:
        explicit object_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash);

        uint32_t key       = 0;
        uint32_t path_hash = 0;
        std::set<std::shared_ptr<empty_prop>> value;

        static std::shared_ptr<empty_prop> read_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, std::optional<uint32_t> key_hash, std::optional<prop_type> type);

        template<typename T>
        static typename std::enable_if<std::is_base_of<empty_prop, T>::value, std::shared_ptr<T>>::value cast_prop(std::shared_ptr<empty_prop> &prop) {
            if (prop->type != T::TYPE) {
                return nullptr;
            }

            return std::reinterpret_pointer_cast<T>(prop);
        }

        void to_json(nlohmann::json &json, const yordle::cdtb::fnvhashlist &hash_list, const yordle::cdtb::xxhashlist &file_hash_list, std::optional<std::string> obj_key, bool store_type_info) const;
    };
} // namespace yordle::data::prop

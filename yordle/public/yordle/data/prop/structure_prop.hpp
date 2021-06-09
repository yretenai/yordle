//
// Created by Lilith on 2021-06-08.
//

#pragma once

#include <standard_dragon/Array.hpp>

#include <optional>
#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::prop {
    class YORDLE_EXPORT structure_prop : public empty_prop {
    public:
        explicit structure_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash);

        uint32_t class_hash = 0;

        void to_json(nlohmann::json &json, const yordle::cdtb::fnvhashlist &hash_list, const yordle::cdtb::xxhashlist &file_hash_list, std::optional<std::string> obj_key, bool store_type_info) const override;
    };
} // namespace yordle::data::prop

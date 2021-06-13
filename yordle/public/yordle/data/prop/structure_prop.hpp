//
// Created by Lilith on 2021-06-08.
//

#pragma once

#include <memory>
#include <optional>
#include <set>

#include <standard_dragon/Array.hpp>

#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::prop {
    class YORDLE_EXPORT structure_prop : public empty_prop {
    public:
        const static prop_type TYPE = prop_type::structure;

        explicit structure_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash);

        uint32_t class_hash = 0;
        std::set<std::shared_ptr<empty_prop>> value;

        void to_json(nlohmann::json &json, const yordle::cdtb::fnvhashlist &hash_list, const yordle::cdtb::xxhashlist &file_hash_list, std::optional<std::string> obj_key, bool store_type_info) const override;
    };
} // namespace yordle::data::prop

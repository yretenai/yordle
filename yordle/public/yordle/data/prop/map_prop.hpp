//
// Created by Lilith on 2021-06-08.
//

#pragma once

#include <map>
#include <memory>

#include <standard_dragon/Array.hpp>

#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::prop {
    class YORDLE_EXPORT map_prop : public empty_prop {
    public:
        static constexpr prop_type TYPE = prop_type::map;

        explicit map_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash);

        prop_type key_type   = prop_type::null;
        prop_type value_type = prop_type::null;
        std::map<std::shared_ptr<empty_prop>, std::shared_ptr<empty_prop>> value;

        void to_json(nlohmann::json &json, const yordle::cdtb::hashlist_collection &hashes, std::optional<std::string> obj_key, bool store_type_info) const override;
    };
} // namespace yordle::data::prop

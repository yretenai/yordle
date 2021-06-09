//
// Created by Lilith on 2021-06-06.
//

#pragma once

#include <cstdint>
#include <map>
#include <memory>

#include <nlohmann/json.hpp>

#include <yordle/cdtb/fnvhashlist.hpp>
#include <yordle/cdtb/xxhashlist.hpp>
#include <yordle/data/prop/object_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data {
    class YORDLE_EXPORT property_bin {
    private:
        static constexpr uint32_t FOURCC       = DRAGON_MAGIC32('P', 'R', 'O', 'P');
        static constexpr uint32_t FOURCC_PATCH = DRAGON_MAGIC32('P', 'T', 'C', 'H');

    public:
        explicit property_bin() = default;
        explicit property_bin(dragon::Array<uint8_t> &buffer);

        uint64_t parent_hash = 0;
        uint32_t version     = 0;
        std::vector<std::string> dependencies;
        std::map<uint32_t, std::shared_ptr<yordle::data::prop::object_prop>> objects;

        [[nodiscard]] nlohmann::json to_json(const yordle::cdtb::fnvhashlist &hash_list, const yordle::cdtb::xxhashlist &file_hash_list) const;
    };
} // namespace yordle::data

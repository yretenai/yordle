//
// Created by Lilith on 2021-06-06.
//

#pragma once

#include <cstdint>
#include <map>

#include <nlohmann/json.hpp>

#include <yordle/data/prop/empty_constructed_prop.hpp>
#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/data/prop/object_prop.hpp>
#include <yordle/data/prop/primitive_prop.hpp>
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
        std::map<uint32_t, yordle::data::prop::object_prop> objects;

        nlohmann::json dump(const yordle::cdtb::fnvhashlist &hashlist);
    };
} // namespace yordle::data

//
// Created by Lilith on 2021-06-06.
//

#pragma once

#include <any>
#include <array>
#include <map>

#include <standard_dragon/Array.hpp>

#include <nlohmann/json.hpp>

#include <yordle/cdtb/fnvhashlist.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data {
    class YORDLE_EXPORT inibin {
    public:
        typedef std::array<float, 4> float4_type;
        typedef std::array<float, 3> float3_type;
        typedef std::array<float, 2> float2_type;
        typedef std::array<uint8_t, 3> uint8x3_type;

        explicit inibin() = default;

        std::map<uint32_t, std::any> properties;

        static std::shared_ptr<yordle::data::inibin> load_inibin_file(dragon::Array<uint8_t> &buffer);

        virtual uint8_t get_inibin_version() = 0;
        nlohmann::json to_json(const yordle::cdtb::fnvhashlist &hashlist);
    };
} // namespace yordle::data

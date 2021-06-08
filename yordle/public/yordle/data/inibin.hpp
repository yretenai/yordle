//
// Created by Lilith on 2021-06-06.
//

#pragma once

#include <any>
#include <array>
#include <map>

#include <standard_dragon/Array.hpp>

#include <yordle/yordle_export.h>

namespace yordle::data {
    class YORDLE_EXPORT inibin {
    public:
        explicit inibin() = default;

        typedef std::array<float, 4> float4_type;
        typedef std::array<float, 3> float3_type;
        typedef std::array<float, 2> float2_type;
        typedef std::array<uint8_t, 3> uint8x3_type;

        std::map<uint32_t, std::any> properties;

        static std::shared_ptr<yordle::data::inibin> load_inibin_file(dragon::Array<uint8_t> &buffer);
        std::string dump_to_json();
        virtual uint8_t inibin_version() = 0;
    };
} // namespace yordle::data
//
// Created by Lilith on 2021-06-08.
//

#pragma once

#include <any>
#include <map>

#include <nlohmann/json.hpp>

#include <yordle/cdtb/fnvhashlist.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data {
    typedef std::array<float, 4> float4_type;
    typedef std::array<float, 3> float3_type;
    typedef std::array<float, 2> float2_type;
    typedef std::array<uint8_t, 3> uint8x3_type;

    nlohmann::json YORDLE_EXPORT dump(const std::map<uint32_t, std::any> &properties, const yordle::cdtb::fnvhashlist &hashlist);
} // namespace yordle::data

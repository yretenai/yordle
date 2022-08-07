#pragma once

#include <any>
#include <array>
#include <map>

#include <standard_dragon/Array.hpp>

#include <nlohmann/json.hpp>

#include <yordle/cdtb/hashlist_collection.hpp>

#include <yordle/yordle_export.h>

namespace yordle::data {
    class YORDLE_EXPORT inibin {
    public:
        using float4_type  = std::array<float, 4>;
        using float3_type  = std::array<float, 3>;
        using float2_type  = std::array<float, 2>;
        using uint8x3_type = std::array<uint8_t, 3>;

        explicit inibin() = default;

        std::map<uint32_t, std::any> properties;

        static std::shared_ptr<yordle::data::inibin> load_inibin_file(dragon::Array<uint8_t> &buffer);

        virtual inline uint8_t get_inibin_version() = 0;
        nlohmann::json to_json(const cdtb::hashlist_collection &hashes);
    };
} // namespace yordle::data

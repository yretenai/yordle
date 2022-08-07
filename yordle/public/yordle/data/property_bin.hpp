#pragma once

#include <cstdint>
#include <memory>
#include <set>

#include <nlohmann/json.hpp>

#include <yordle/cdtb/hashlist.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data {
    class YORDLE_EXPORT property_bin {
    public:
        static constexpr uint32_t FOURCC       = DRAGON_MAGIC32('P', 'R', 'O', 'P');
        static constexpr uint32_t FOURCC_PATCH = DRAGON_MAGIC32('P', 'T', 'C', 'H');
        explicit property_bin()                = default;
        explicit property_bin(dragon::Array<uint8_t> &buffer);

        uint64_t patch_weight = 0;
        uint32_t version      = 0;
        std::vector<std::string> dependencies;
        std::map<uint32_t, std::shared_ptr<yordle::data::prop::structure_prop>> objects;

        [[nodiscard]] nlohmann::json to_json(const yordle::cdtb::hashlist_collection &hashes, bool store_type_info) const;
    };
} // namespace yordle::data

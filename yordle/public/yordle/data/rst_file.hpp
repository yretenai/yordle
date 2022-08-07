//
// Created by Naomi on 2021-06-17.
//

#pragma once

#include <cstdint>
#include <map>

#include <standard_dragon/Array.hpp>
#include <standard_dragon/macros.hpp>

#include <nlohmann/json.hpp>

#include <yordle/cdtb/hashlist_collection.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data {
#pragma pack(push, 1)
    using rst_version = enum class RST_VERSION : uint32_t {
        v0 = DRAGON_MAGIC32('R', 'S', 'T', 0),
        v1 = DRAGON_MAGIC32('R', 'S', 'T', 1),
        v2 = DRAGON_MAGIC32('R', 'S', 'T', 2),
        v3 = DRAGON_MAGIC32('R', 'S', 'T', 3),
        v4 = DRAGON_MAGIC32('R', 'S', 'T', 4),
        v5 = DRAGON_MAGIC32('R', 'S', 'T', 5),
    };
#pragma pack(pop)

    class YORDLE_EXPORT rst_file {
    public:
        explicit rst_file() = default;

        std::map<uint64_t, std::string> strings;

        static std::shared_ptr<yordle::data::rst_file> load_rst_file(dragon::Array<uint8_t> &buffer);

        virtual rst_version get_rst_version() = 0;
        virtual nlohmann::json to_json(cdtb::hashlist_collection &hashes);
    };

} // namespace yordle::data

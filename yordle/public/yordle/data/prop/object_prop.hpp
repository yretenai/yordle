//
// Created by Lilith on 2021-06-08.
//

#pragma once

#include <optional>

#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::prop {
    class YORDLE_EXPORT object_prop : public empty_prop {
    private:
        static constexpr uintptr_t EXPECTED_DATA_SIZE = 0x0A;

    public:
        explicit object_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash);

#pragma pack(push, 1)
        struct {
            uint32_t byte_size      = 0;
            uint32_t path_hash      = 0;
            uint16_t property_count = 0;
        };
#pragma pack(pop)

        static std::shared_ptr<empty_prop> read_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, std::optional<uint32_t> key_hash, std::optional<prop_type> type);

        void to_json(nlohmann::json json, const yordle::cdtb::fnvhashlist &hashlist) const override;
    };
} // namespace yordle::data::prop

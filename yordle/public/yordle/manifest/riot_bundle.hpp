//
// Created by Lilith on 2020-08-25.
//

#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#include <cstdint>
#include <map>
#include <memory>
#include <ostream>

#include <yordle/yordle_export.h>

#include <standard_dragon/dragon.hpp>
#include <standard_dragon/Indent.hpp>

namespace yordle::manifest {
    class YORDLE_EXPORT riot_bundle {
    private:
        static constexpr uint32_t FOURCC             = DRAGON_MAGIC32('R', 'B', 'U', 'N');
        static constexpr uint32_t EXPECTED_DATA_SIZE = 0x10;

    public:
        explicit riot_bundle() = default;
        explicit riot_bundle(std::ifstream &stream);
        explicit riot_bundle(dragon::Array<uint8_t> &stream);
        ~riot_bundle() = default;

#pragma pack(push, 1)
        typedef struct RBUN_BLOCK {
            uint64_t block_id;
            uint32_t size;
            uint32_t csize;
        } riot_bundle_block;
        DRAGON_ASSERT(sizeof(riot_bundle_block) == 0x10);

        struct {
            uint64_t id          = 0;
            uint32_t block_count = 0;
            uint32_t version     = 1; // bundle format version
        };
#pragma pack(pop)

        std::shared_ptr<dragon::Array<uint8_t>> data;
        std::shared_ptr<dragon::Array<riot_bundle_block>> blocks;

        void read_block(uint64_t block_id, std::ostream &out) const;
        [[nodiscard]] std::shared_ptr<dragon::Array<uint8_t>> read_block(uint64_t block_id) const;
        void print(std::ostream &stream, dragon::Indent &indent) const;
    };
} // namespace yordle::manifest

#pragma clang diagnostic pop

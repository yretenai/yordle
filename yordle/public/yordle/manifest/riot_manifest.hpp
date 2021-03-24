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

#include <standard_dragon/Indent.hpp>
#include <standard_dragon/dragon.hpp>

namespace yordle::manifest {
    class YORDLE_EXPORT [[maybe_unused]] riot_manifest {
    private:
        static constexpr uint32_t FOURCC = DRAGON_MAGIC32('R', 'M', 'A', 'N');
        static constexpr uint32_t EXPECTED_DATA_SIZE = 0x18;

    protected:
        typedef struct RMAN_BUNDLE {
            uint64_t block_id = 0;
            uint32_t csize = 0;
            uint32_t size = 0;
        } riot_manifest_bundle;

        typedef struct RMAN_FILE {
            uint64_t file_id = 0;
            uint64_t directory_id = 0;
            uint32_t size = 0;
            std::string name;
            uint32_t language_flags = 0;
            std::shared_ptr<dragon::Array<uint64_t>> block_ids;
        } riot_manifest_file;

        typedef struct RMAN_DIR {
            uint64_t id = 0;
            uint64_t parent_id = 0;
            std::string name;
        } riot_manifest_dir;

    public:
        [[maybe_unused]] explicit riot_manifest(dragon::Array<uint8_t> &buffer);
        ~riot_manifest() = default;

        typedef union alignas(2) RMAN_FLAGS {
            struct {
                bool unknown1 : 1;
                bool unknown2 : 1;
                bool unknown3 : 1;
                bool unknown4 : 1;
                bool unknown5 : 1;
                bool unknown6 : 1;
                bool unknown7 : 1;
                bool unknown8 : 1;
                bool unknown9 : 1;
                bool compressed : 1; // assumption
            };

            uint16_t value;
        } riot_manifest_flags;

#pragma pack(push, 1)
        uint8_t version_major = 2; // manifest format version
        uint8_t version_minor = 0;
        riot_manifest_flags flags{};
        uint32_t offset = riot_manifest::EXPECTED_DATA_SIZE + 4;
        uint32_t csize = 0;
        uint64_t id = 0;
        uint32_t size = 0;
#pragma pack(pop)

        std::shared_ptr<dragon::Array<uint8_t>> data;
        std::shared_ptr<dragon::Array<uint8_t>> signature;

        std::map<uint64_t, std::shared_ptr<dragon::Array<riot_manifest_bundle>>> bundles;
        std::map<uint8_t, std::string> languages;
        std::map<uint64_t, riot_manifest_file> files;
        std::map<uint64_t, riot_manifest_dir> directories;

        [[noreturn]] [[maybe_unused]] void print(std::ostream& stream, dragon::Indent &indent) const;
    };
} // namespace yordle::manifest

#pragma clang diagnostic pop

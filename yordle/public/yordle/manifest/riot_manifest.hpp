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
    class YORDLE_EXPORT riot_manifest {
    private:
        static constexpr uint32_t FOURCC             = DRAGON_MAGIC32('R', 'M', 'A', 'N');
        static constexpr uint32_t EXPECTED_DATA_SIZE = 0x18;

    protected:
        using riot_manifest_bundle = struct RMAN_BUNDLE {
            uint64_t block_id = 0;
            uint32_t csize    = 0;
            uint32_t size     = 0;
        };

        using riot_manifest_file = struct RMAN_FILE {
            uint64_t file_id      = 0;
            uint64_t directory_id = 0;
            uint32_t size         = 0;
            std::string name;
            uint32_t language_flags = 0;
            std::string link;
            bool is_hierarchy;
            uint8_t index;
            uint8_t permissions;
            std::shared_ptr<dragon::Array<uint64_t>> block_ids;
        };

        using riot_manifest_dir = struct RMAN_DIR {
            uint64_t id        = 0;
            uint64_t parent_id = 0;
            std::string name;
        };

    public:
        explicit riot_manifest(dragon::Array<uint8_t> &buffer);
        ~riot_manifest() = default;

        using riot_manifest_flags = union alignas(2) RMAN_FLAGS {
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
        };
        DRAGON_ASSERT(sizeof(riot_manifest_flags) == 2, "riot_manifest_flags size is not 2");

#pragma pack(push, 1)
        struct {
            uint8_t version_major = 2; // manifest format version
            uint8_t version_minor = 0;
            riot_manifest_flags flags {};
            uint32_t offset = riot_manifest::EXPECTED_DATA_SIZE + 4;
            uint32_t csize  = 0;
            uint64_t id     = 0;
            uint32_t size   = 0;
        };
#pragma pack(pop)

        std::shared_ptr<dragon::Array<uint8_t>> data;
        std::shared_ptr<dragon::Array<uint8_t>> signature;

        std::vector<uint64_t> bundle_ids;
        std::map<uint64_t, std::shared_ptr<dragon::Array<riot_manifest_bundle>>> bundles;
        std::map<uint64_t, uint64_t> block_to_bundle_map;
        std::map<uint8_t, std::string> languages;
        std::map<uint64_t, riot_manifest_file> files;
        std::map<uint64_t, riot_manifest_dir> directories;

        [[nodiscard]] std::filesystem::path get_directory_path(uint64_t id) const;

        void print(std::ostream &stream, dragon::Indent &indent, int level) const;
    };
} // namespace yordle::manifest

#pragma clang diagnostic pop

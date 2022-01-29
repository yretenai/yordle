//
// Created by Naomi on 2020-09-09.
//

#pragma once

#include <cstdint>
#include <filesystem>
#include <type_traits>

#include <yordle/yordle_export.h>

#include <standard_dragon/Array.hpp>
#include <standard_dragon/macros.hpp>

namespace yordle::archive {
#pragma pack(push, 1)
    using wad_storage_type = enum class WAD_STORAGE_TYPE : uint8_t {
        Uncompressed = 0,
        GZip         = 1,
        Symlink      = 2,
        Zstd         = 3,
        ZstdStream   = 4
    };

    using wad_version = enum class WAD_VERSION : uint32_t {
        v0_0 = DRAGON_MAGIC32('R', 'W', 0, 0),
        v1_0 = DRAGON_MAGIC32('R', 'W', 1, 0),
        v1_1 = DRAGON_MAGIC32('R', 'W', 1, 1),
        v2_0 = DRAGON_MAGIC32('R', 'W', 2, 0),
        v2_1 = DRAGON_MAGIC32('R', 'W', 2, 1),
        v3_0 = DRAGON_MAGIC32('R', 'W', 3, 0),
        v3_1 = DRAGON_MAGIC32('R', 'W', 3, 1),
        v3_2 = DRAGON_MAGIC32('R', 'W', 3, 2), // likely added the type flag, or the block_start, version is not used afaik.
        v3_3 = DRAGON_MAGIC32('R', 'W', 3, 3)
    };
#pragma pack(pop)

#pragma pack(push, 4)
    using wad_entry_v1 = struct WAD_ENTRY_V1 {
        uint64_t hash             = 0;
        uint32_t offset           = 0;
        uint32_t csize            = 0;
        uint32_t size             = 0;
        wad_storage_type type : 4 = wad_storage_type::Zstd;
        uint8_t unknown : 4       = 0;
        bool duplicate            = false;
        uint16_t chunks_index     = 0;
    };
    DRAGON_ASSERT(sizeof(wad_entry_v1) == 0x18, "wad_entry_v1 size is not 24");

    using wad_entry_v2 = struct WAD_ENTRY_V2 : wad_entry_v1 {
        uint64_t checksum = 0;

        WAD_ENTRY_V2() = default;
        WAD_ENTRY_V2(wad_entry_v1 v1) : wad_entry_v1(v1) { // NOLINT(google-explicit-constructor)
            checksum = 0;
        }
    };
    DRAGON_ASSERT(sizeof(wad_entry_v2) == 0x20, "wad_entry_v2 size is not 32");

    using wad_entry = wad_entry_v2;
#pragma pack(pop)

    class YORDLE_EXPORT wad_file {
    protected:
        template<typename T>
        typename std::enable_if<std::is_base_of<wad_entry_v1, T>::value, void>::type read_entries(std::istream &stream, uint64_t count) {
            auto local_entries = dragon::Array<T>(count, nullptr);
            stream.read(reinterpret_cast<char *>(local_entries.data()), static_cast<std::streamsize>(local_entries.byte_size()));
            entries = std::make_shared<dragon::Array<wad_entry>>(count, nullptr);
            for (auto i = 0; i < count; ++i) {
                entries->set(i, wad_entry(local_entries[i]));
            }
        }

    public:
        std::shared_ptr<dragon::Array<wad_entry>> entries;

        static std::shared_ptr<dragon::Array<uint8_t>> read_file(std::istream &stream, const wad_entry &entry);
        [[nodiscard]] bool has_file(uint64_t hash) const;
        [[nodiscard]] bool has_file(const std::filesystem::path &path) const;
        static std::shared_ptr<yordle::archive::wad_file> load_wad_file(std::istream &stream);

        virtual wad_version get_wad_version() = 0;
    };
} // namespace yordle::archive

//
// Created by Lilith on 2020-09-09.
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
    typedef enum class WAD_STORAGE_TYPE : uint8_t {
        Uncompressed = 0,
        GZip = 1,
        Symlink = 2,
        Zstd = 3
    } wad_storage_type;

    typedef enum class WAD_VERSION : uint32_t {
        v0_0 = DRAGON_MAGIC32('R', 'W', 0, 0),
        v1_0 = DRAGON_MAGIC32('R', 'W', 1, 0),
        v1_1 = DRAGON_MAGIC32('R', 'W', 1, 1),
        v2_0 = DRAGON_MAGIC32('R', 'W', 2, 0),
        v2_1 = DRAGON_MAGIC32('R', 'W', 2, 1),
        v3_0 = DRAGON_MAGIC32('R', 'W', 3, 0),
        v3_1 = DRAGON_MAGIC32('R', 'W', 3, 1)
    } wad_version;
#pragma pack(pop)

#pragma pack(push, 4)
    typedef struct WAD_ENTRY_V1 {
        uint64_t hash = 0;
        uint32_t offset = 0;
        uint32_t csize = 0;
        uint32_t size = 0;
        wad_storage_type type = wad_storage_type::Zstd;
        bool duplicate = false;
    } wad_entry_v1;
    DRAGON_ASSERT(sizeof(WAD_ENTRY_V1) == 0x18);

    typedef struct WAD_ENTRY_V2 : wad_entry_v1 {
        uint64_t checksum = 0;

        WAD_ENTRY_V2() = default;
        WAD_ENTRY_V2(wad_entry_v1 v1) : wad_entry_v1(v1) { // NOLINT(google-explicit-constructor)
            checksum = 0;
        }
    } wad_entry_v2;
    DRAGON_ASSERT(sizeof(WAD_ENTRY_V2) == 0x20);

    typedef wad_entry_v2 wad_entry;
#pragma pack(pop)

    class YORDLE_EXPORT wad_file {
    protected:
        template<typename T>
        typename std::enable_if<std::is_base_of<T, wad_entry>::value, void>::type read_entries(std::istream &stream, uint64_t count) {
            auto local_entries = dragon::Array<wad_entry_v2>(count, nullptr);
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

        virtual wad_version wad_version() = 0;
    };
} // namespace yordle::archive
